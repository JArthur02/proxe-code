// Ghidra headless script: export decompiled C for all functions.
// Usage: analyzeHeadless ... -postScript DecompileAllToC.java <output.c>
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;

import java.io.FileWriter;

public class DecompileAllToC extends GhidraScript {
    @Override
    public void run() throws Exception {
        if (getScriptArgs().length < 1) {
            throw new IllegalArgumentException("Output path required");
        }
        String outPath = getScriptArgs()[0];

        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);

        try (FileWriter fw = new FileWriter(outPath)) {
            fw.write("/* Decompiled with Ghidra from " + currentProgram.getName() + " */\n\n");
            FunctionIterator iter = currentProgram.getFunctionManager().getFunctions(true);
            int count = 0;
            while (iter.hasNext()) {
                if (monitor.isCancelled()) {
                    break;
                }
                Function f = iter.next();
                DecompileResults res = decomp.decompileFunction(f, 60, monitor);
                if (!res.decompileCompleted()) {
                    continue;
                }
                fw.write("// ----- " + f.getName() + " @ " + f.getEntryPoint() + " -----\n");
                fw.write(res.getDecompiledFunction().getC());
                fw.write("\n\n");
                count++;
                if (count % 100 == 0) {
                    println("Decompiled " + count + " functions...");
                }
            }
            println("Wrote " + count + " functions to " + outPath);
        } finally {
            decomp.dispose();
        }
    }
}
