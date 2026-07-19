/* Proxifier v4.14 proxy-chain logic — Ghidra 11.3.1 decompile, annotated subset. */
/* See 00_OVERVIEW.md and MAPPING.md in this directory. */

// ===== CProfile::LoadProxyAndChainLists =====
// Ghidra: FUN_14006e2c0 @ 0x14006e2c0
// Parse Profile.ppx XML: ProxyList entries, then ChainList/Chain nodes.
// uproxe: ChainProfileStore.Load / profile import
// note: Reads Chain/Name, Type, proxy id refs, RedundancyTimeout, RedundancyTryDirect, RedundancyRecheck, RedundancyRecheckTime, LoadBalancingSameProxyForPid.
// ------------------------------------------------------------


/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14006e2c0(longlong *param_1,longlong param_2,char param_3,undefined1 *param_4)

{
  int *piVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  longlong lVar5;
  ushort *puVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  short *psVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  wchar_t *pwVar19;
  short *psVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined2 *puVar23;
  undefined8 *****pppppuVar24;
  longlong lVar25;
  undefined8 *puVar26;
  longlong lVar27;
  int iVar28;
  undefined8 *puVar29;
  uint uVar30;
  longlong lVar31;
  ushort *puVar32;
  undefined **ppuVar33;
  bool bVar34;
  bool bVar35;
  undefined1 auStack_13a8 [32];
  undefined4 local_1388;
  char local_1378;
  char local_1377;
  undefined1 local_1376;
  undefined1 local_1375;
  undefined1 local_1374;
  undefined1 local_1373 [3];
  uint local_1370;
  uint local_136c;
  int local_1368 [2];
  longlong local_1360;
  undefined1 local_1358 [8];
  uint local_1350;
  uint local_134c;
  int local_1348;
  undefined4 local_1344;
  int local_1340;
  undefined4 local_133c;
  undefined4 local_1338;
  int local_1334;
  int local_1330 [2];
  longlong local_1328;
  int local_1320;
  undefined1 uStack_131c;
  undefined1 auStack_131b [3];
  undefined8 uStack_1318;
  longlong local_1308;
  short *local_1300;
  undefined4 local_12f8;
  undefined1 local_12f4;
  undefined1 local_12f3;
  longlong local_12f0;
  undefined1 local_12e0 [8];
  undefined1 local_12d8 [8];
  undefined1 local_12d0 [8];
  undefined1 local_12c8 [8];
  undefined1 local_12c0 [8];
  longlong local_12b8;
  undefined1 local_12b0 [8];
  undefined1 local_12a8 [8];
  undefined1 local_12a0 [8];
  undefined1 local_1298 [8];
  undefined1 local_1290 [8];
  undefined1 local_1288 [8];
  undefined1 local_1280 [8];
  undefined1 local_1278 [8];
  undefined1 local_1270 [8];
  undefined1 local_1268 [8];
  undefined1 local_1260 [8];
  undefined1 local_1258 [8];
  undefined1 local_1250 [8];
  undefined1 local_1248 [8];
  undefined1 local_1240 [8];
  undefined1 local_1238 [8];
  undefined1 local_1230 [8];
  undefined1 local_1228 [8];
  undefined1 local_1220 [8];
  undefined1 local_1218 [32];
  undefined2 local_11f8 [8];
  undefined8 local_11e8;
  undefined8 local_11e0;
  undefined2 local_11d8 [8];
  undefined8 local_11c8;
  undefined8 local_11c0;
  undefined2 local_11b8 [8];
  undefined8 local_11a8;
  undefined8 local_11a0;
  undefined2 local_1198;
  undefined6 uStack_1196;
  undefined8 uStack_1190;
  undefined8 local_1188;
  ulonglong uStack_1180;
  undefined2 local_1178 [8];
  undefined8 local_1168;
  undefined8 local_1160;
  undefined2 local_1158 [8];
  undefined8 local_1148;
  undefined8 local_1140;
  undefined2 local_1138;
  undefined6 uStack_1136;
  undefined8 uStack_1130;
  undefined8 local_1128;
  ulonglong uStack_1120;
  undefined2 local_1118 [8];
  undefined8 local_1108;
  undefined8 local_1100;
  undefined1 local_10f8 [16];
  undefined8 local_10e8;
  undefined8 local_10e0;
  undefined2 local_10d8 [8];
  undefined8 local_10c8;
  undefined8 local_10c0;
  undefined2 local_10b8 [8];
  undefined8 local_10a8;
  ulonglong uStack_10a0;
  undefined1 local_1098 [16];
  undefined8 local_1088;
  undefined8 local_1080;
  undefined2 local_1078 [8];
  undefined8 local_1068;
  undefined8 local_1060;
  undefined2 local_1058 [8];
  undefined8 local_1048;
  undefined8 local_1040;
  undefined1 local_1038 [16];
  undefined8 local_1028;
  undefined8 local_1020;
  undefined1 *local_1018;
  undefined8 local_1010;
  undefined1 *local_1008;
  undefined8 local_1000;
  undefined1 local_ff8 [16];
  undefined8 local_fe8;
  undefined8 local_fe0;
  undefined2 local_fd8 [8];
  undefined8 local_fc8;
  undefined8 local_fc0;
  undefined2 local_fb8 [8];
  undefined8 local_fa8;
  undefined8 local_fa0;
  undefined1 local_f98 [16];
  undefined8 local_f88;
  undefined8 local_f80;
  undefined2 local_f78 [8];
  undefined8 local_f68;
  undefined8 local_f60;
  undefined1 local_f58 [16];
  undefined8 local_f48;
  undefined8 local_f40;
  undefined1 local_f38 [16];
  undefined8 local_f28;
  undefined8 local_f20;
  undefined2 local_f18 [8];
  undefined8 local_f08;
  undefined8 local_f00;
  undefined2 local_ef8 [8];
  undefined8 local_ee8;
  undefined8 local_ee0;
  undefined1 local_ed8 [16];
  undefined8 local_ec8;
  undefined8 local_ec0;
  undefined2 local_eb8 [8];
  undefined8 local_ea8;
  undefined8 local_ea0;
  undefined1 local_e98 [16];
  undefined8 local_e88;
  undefined8 local_e80;
  undefined2 local_e78 [8];
  undefined8 local_e68;
  undefined8 local_e60;
  undefined1 local_e58 [16];
  undefined8 local_e48;
  undefined8 local_e40;
  undefined1 local_e38 [16];
  undefined8 local_e28;
  undefined8 local_e20;
  undefined1 local_e18 [16];
  undefined8 local_e08;
  undefined8 local_e00;
  undefined2 local_df8 [8];
  undefined8 local_de8;
  undefined8 local_de0;
  undefined1 local_dd8 [16];
  undefined8 local_dc8;
  undefined8 local_dc0;
  undefined1 local_db8 [16];
  undefined8 local_da8;
  undefined8 local_da0;
  undefined2 local_d98 [8];
  undefined8 local_d88;
  undefined8 local_d80;
  undefined1 local_d78 [16];
  undefined8 local_d68;
  undefined8 local_d60;
  undefined1 local_d58 [16];
  undefined8 local_d48;
  undefined8 local_d40;
  undefined2 local_d38 [8];
  undefined8 local_d28;
  undefined8 local_d20;
  undefined2 local_d18 [8];
  undefined8 local_d08;
  undefined8 local_d00;
  undefined2 local_cf8 [8];
  undefined8 local_ce8;
  undefined8 local_ce0;
  undefined2 local_cd8 [8];
  undefined8 local_cc8;
  undefined8 local_cc0;
  undefined2 local_cb8 [8];
  undefined8 local_ca8;
  undefined8 local_ca0;
  undefined2 local_c98 [8];
  undefined8 local_c88;
  ulonglong uStack_c80;
  undefined1 local_c78 [16];
  undefined8 local_c68;
  undefined8 uStack_c60;
  undefined1 local_c58 [16];
  undefined8 local_c48;
  undefined8 uStack_c40;
  undefined1 local_c38 [16];
  undefined8 local_c28;
  undefined8 uStack_c20;
  undefined2 local_c18 [8];
  undefined8 local_c08;
  ulonglong uStack_c00;
  undefined2 local_bf8 [8];
  undefined8 local_be8;
  ulonglong uStack_be0;
  undefined2 local_bd8 [8];
  undefined8 local_bc8;
  ulonglong uStack_bc0;
  undefined1 local_bb8 [8];
  undefined1 local_bb0 [8];
  undefined1 local_ba8 [8];
  undefined1 local_ba0 [8];
  undefined1 local_b98 [24];
  undefined8 local_b80;
  undefined1 local_b78 [8];
  undefined1 local_b70 [8];
  undefined1 local_b68 [8];
  undefined1 local_b60 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_b40 [32];
  undefined1 local_b20 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_b00 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_ae0 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_ac0 [32];
  undefined1 local_aa0 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_a80 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_a60 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_a40 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_a20 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_a00 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_9e0 [32];
  undefined1 local_9c0 [32];
  undefined1 local_9a0 [32];
  undefined1 local_980 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_960 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_940 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_920 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_900 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_8e0 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_8c0 [32];
  undefined1 local_8a0 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_880 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_860 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_840 [32];
  undefined1 local_820 [32];
  undefined1 local_800 [32];
  undefined1 local_7e0 [40];
  undefined1 local_7b8 [112];
  undefined1 local_748 [8];
  undefined1 local_740 [8];
  longlong local_738;
  longlong local_730;
  ushort local_728;
  undefined6 uStack_726;
  longlong local_718;
  ulonglong local_710;
  wchar_t local_708;
  undefined6 uStack_706;
  undefined8 local_6f8;
  ulonglong uStack_6f0;
  longlong local_6e8;
  longlong local_6e0;
  undefined8 local_6d8;
  longlong local_6d0;
  longlong local_6c8;
  undefined8 local_6c0;
  undefined8 ****local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  ulonglong uStack_6a0;
  undefined1 local_698;
  undefined7 uStack_697;
  undefined8 local_688;
  ulonglong local_680;
  undefined1 local_678;
  undefined7 uStack_677;
  undefined8 local_668;
  ulonglong local_660;
  undefined8 ****local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  ulonglong uStack_640;
  undefined2 local_638;
  undefined6 uStack_636;
  undefined8 local_628;
  ulonglong local_620;
  undefined2 local_618;
  undefined6 uStack_616;
  undefined8 local_608;
  ulonglong local_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined2 local_5e0 [8];
  longlong local_5d0;
  undefined8 local_5c8;
  undefined2 local_5c0 [8];
  longlong local_5b0;
  undefined8 local_5a8;
  undefined1 local_5a0 [16];
  undefined8 local_590;
  undefined8 local_588;
  undefined2 local_580 [8];
  undefined8 local_570;
  undefined8 local_568;
  undefined2 local_560 [8];
  undefined8 local_550;
  undefined8 local_548;
  undefined2 local_540 [8];
  undefined8 local_530;
  undefined8 local_528;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_520 [16];
  longlong local_510;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_500 [16];
  longlong local_4f0;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_4e0 [16];
  longlong local_4d0;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_4c0 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_4a0 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_480 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_460 [32];
  undefined1 local_440 [8];
  undefined8 uStack_438;
  undefined1 local_428 [24];
  int local_410;
  undefined2 local_408 [8];
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined1 local_3e8 [96];
  undefined8 *local_388;
  undefined1 local_358 [72];
  undefined1 local_310 [12];
  undefined1 local_304;
  undefined1 local_300 [8];
  undefined1 local_2f8 [8];
  uint local_2f0;
  undefined1 local_2e8 [48];
  undefined1 local_2b8 [16];
  undefined1 local_2a8;
  undefined1 local_220 [32];
  undefined1 local_200;
  int local_1fc;
  longlong local_1f8;
  undefined1 local_1e8 [8];
  undefined1 local_1e0 [180];
  undefined4 local_12c;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined1 local_110 [180];
  undefined4 local_5c;
  undefined8 local_58;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14006e2d6;
  local_b80 = 0xfffffffffffffffe;
  local_48 = DAT_1403fb930 ^ (ulonglong)auStack_13a8;
  plVar12 = (longlong *)0x0;
  local_1370 = 0;
  *param_4 = 0;
  local_6f8 = _DAT_14037c890;
  uStack_6f0 = _UNK_14037c898;
  local_708 = L'\0';
  local_1378 = '\0';
  local_1360 = param_2;
  FUN_140276f60(local_3e8,0,0x88);
  FUN_14005fff0(local_3e8);
  local_c88 = _DAT_14037c890;
  uStack_c80 = _UNK_14037c898;
  local_c98[0] = 0;
  FUN_140003570(local_c98,*param_1);
  cVar7 = FUN_1400613f0(local_3e8,local_c98,&local_708,&local_1378);
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                    *)local_c98);
  if (cVar7 == '\0') {
    local_738 = 0;
    if (local_1378 == '\0') {
      pwVar19 = &local_708;
      if (7 < uStack_6f0) {
        pwVar19 = (wchar_t *)CONCAT62(uStack_706,local_708);
      }
    }
    else {
      pwVar19 = L"File not found.";
    }
    local_1308 = 0;
    plVar10 = plVar12;
    if (*(longlong **)(*param_1 + -0x18) != (longlong *)0x0) {
      plVar10 = (longlong *)(**(code **)(**(longlong **)(*param_1 + -0x18) + 0x20))();
    }
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)FUN_1400ba8e0();
      plVar10 = (longlong *)(**(code **)(*plVar10 + 0x20))(plVar10);
    }
    if (plVar10 == (longlong *)0x0) {
      FUN_14000cd00(0x80004005);
    }
    else {
      local_1308 = (**(code **)(*plVar10 + 0x18))();
      local_1308 = local_1308 + 0x18;
      local_1370 = 1;
      local_1388 = *(undefined4 *)(*param_1 + -0x10);
      uVar11 = 0xffffffffffffffff;
      do {
        uVar11 = uVar11 + 1;
      } while (L"Cannot load profile from "[uVar11] != L'\0');
      FUN_14000bc60(&local_1308,L"Cannot load profile from ",uVar11 & 0xffffffff);
      lVar14 = local_1308;
      local_1328 = 0;
      if (*(longlong **)(local_1308 + -0x18) != (longlong *)0x0) {
        plVar12 = (longlong *)(**(code **)(**(longlong **)(local_1308 + -0x18) + 0x20))();
      }
      if (plVar12 == (longlong *)0x0) {
        plVar12 = (longlong *)FUN_1400ba8e0();
        plVar12 = (longlong *)(**(code **)(*plVar12 + 0x20))(plVar12);
      }
      if (plVar12 != (longlong *)0x0) {
        local_1328 = (**(code **)(*plVar12 + 0x18))(plVar12);
        local_1328 = local_1328 + 0x18;
        local_1370 = 3;
        lVar13 = -1;
        do {
          lVar13 = lVar13 + 1;
        } while (L"\nError: "[lVar13] != L'\0');
        local_1388 = (undefined4)lVar13;
        FUN_14000bc60(&local_1328,lVar14,*(undefined4 *)(lVar14 + -0x10));
        FUN_14001d290(&local_738,&local_1328,pwVar19);
        local_1370 = 1;
        LOCK();
        piVar1 = (int *)(local_1328 + -8);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 < 2) {
          (**(code **)(**(longlong **)(local_1328 + -0x18) + 8))();
        }
        LOCK();
        piVar1 = (int *)(lVar14 + -8);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 < 2) {
          (**(code **)(**(longlong **)(lVar14 + -0x18) + 8))
                    (*(longlong **)(lVar14 + -0x18),lVar14 + -0x18);
        }
        if (DAT_140412c5b == '\0') {
          FUN_14002c040(local_738,0);
        }
        else {
          lVar14 = FUN_140044370(local_7b8);
          *(undefined1 *)(lVar14 + 0x30) = 1;
          FUN_140027320(lVar14,1,&local_738);
          FUN_1400444b0(local_7b8);
        }
        LOCK();
        piVar1 = (int *)(local_738 + -8);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 < 2) {
          (**(code **)(**(longlong **)(local_738 + -0x18) + 8))();
        }
        FUN_14005faa0(local_3e8);
        std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
        _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                          *)&local_708);
        goto LAB_140070f01;
      }
    }
    FUN_14000cd00(0x80004005);
    goto LAB_140070f3a;
  }
  local_6e8 = 0;
  local_6e0 = 0;
  local_6d8 = 0;
  local_10a8 = _DAT_14037c890;
  uStack_10a0 = _UNK_14037c898;
  local_10b8[0] = 0;
  FUN_140003570(local_10b8,L"ProxifierProfile");
  puVar21 = (undefined8 *)local_388[1];
  puVar29 = local_388;
  if (*(char *)((longlong)puVar21 + 0x19) == '\0') {
    do {
      cVar7 = FUN_14005c170(puVar21 + 4,local_10b8);
      if (cVar7 == '\0') {
        puVar22 = (undefined8 *)*puVar21;
        puVar29 = puVar21;
      }
      else {
        puVar22 = (undefined8 *)puVar21[2];
      }
      puVar21 = puVar22;
    } while (*(char *)((longlong)puVar22 + 0x19) == '\0');
    if ((puVar29 == local_388) || (cVar7 = FUN_14005c170(local_10b8,puVar29 + 4), cVar7 != '\0'))
    goto LAB_14006e691;
  }
  else {
LAB_14006e691:
    puVar29 = local_388;
  }
  puVar21 = &DAT_1404124e8;
  if (puVar29 != local_388) {
    puVar21 = puVar29 + 8;
  }
  FUN_140061e90(&local_6e8,puVar21);
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                    *)local_10b8);
  lVar14 = local_6e8;
  local_12f0 = local_6e8;
  if (local_6e8 == local_6e0) {
LAB_140070f3a:
    FUN_14000c3a0(local_12d8,L"Wrong file format. Correct file header not found.");
                    /* WARNING: Subroutine does not return */
    FUN_140277140(local_12d8,&DAT_1403f39b8);
  }
  if ((local_6e0 - local_6e8) / 0x88 == 0) {
    FUN_140073ff0();
LAB_140070f67:
    uVar15 = FUN_140024fa0(local_7e0,0x66);
    uVar15 = FUN_14000bd30(uVar15);
    uVar17 = FUN_140027510(local_800,(ulonglong)puVar29 & 0xffffffff);
    uVar17 = FUN_14000bd30(uVar17);
    uVar18 = FUN_14000c3a0(local_b78,L"Incorrect file format version - ");
    uVar17 = FUN_14001d290(local_b70,uVar18,uVar17);
    uVar17 = FUN_14001d290(local_b68,uVar17,L"(should be ");
    uVar15 = FUN_14001d290(local_bb8,uVar17,uVar15);
    FUN_14001d290(local_12d0,uVar15,
                  L").\nPlease make sure that you are using the latest version of Proxifier.");
                    /* WARNING: Subroutine does not return */
    FUN_140277140(local_12d0,&DAT_1403f39b8);
  }
  local_1350 = 0;
  local_c68 = _DAT_14037c8a0;
  uStack_c60 = _UNK_14037c8a8;
  local_c78[0] = 0;
  FUN_14000a2a0(local_c78,"version",7);
  FUN_140074010(lVar14,local_c78,&local_1350);
  FUN_14000a420(local_c78);
  puVar29 = (undefined8 *)(ulonglong)local_1350;
  if (2 < local_1350 - 100) goto LAB_140070f67;
  local_1368[0] = 0;
  local_134c = 300;
  if (100 < local_1350) {
    local_c48 = _DAT_14037c8a0;
    uStack_c40 = _UNK_14037c8a8;
    local_c58[0] = 0;
    FUN_14000a2a0(local_c58,"product_id",10);
    FUN_140074010(lVar14,local_c58,local_1368);
    FUN_14000a420(local_c58);
    local_c28 = _DAT_14037c8a0;
    uStack_c20 = _UNK_14037c8a8;
    local_c38[0] = 0;
    FUN_14000a2a0(local_c38,"product_minver",0xe);
    FUN_140074010(lVar14,local_c38,&local_134c);
    FUN_14000a420(local_c38);
  }
  uVar30 = local_134c;
  if (DAT_140412b9e == '\0') {
    if (local_1368[0] == 0) {
      if (400 < local_134c) {
        FUN_14002c040(L"Warning: You are loading profile made with a newer version of Proxifier.\nSome version specific settings will not be loaded."
                      ,0x40);
      }
    }
    else {
      FUN_14002c040(L"Warning: You are loading profile made with another edition of Proxifier.\nSome version specific settings will not be loaded."
                    ,0x40);
    }
    if (((param_3 == '\0') && (uVar30 < 400)) &&
       (iVar9 = MessageBoxW((HWND)0x0,L"The profile will be upgraded to a newer version.\nContinue?"
                            ,L"Proxifier Profile",0x44), iVar9 != 6)) {
      *param_4 = 1;
      FUN_140062530(&local_6e8);
      FUN_14005faa0(local_3e8);
      std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
      _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                        *)&local_708);
      goto LAB_140070f01;
    }
  }
  local_c08 = _DAT_14037c890;
  uStack_c00 = _UNK_14037c898;
  local_c18[0] = 0;
  FUN_140003570(local_c18,L"Options");
  plVar10 = (longlong *)FUN_14006db40(lVar14,local_c18);
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                    *)local_c18);
  local_12b8 = plVar10[1];
  for (lVar14 = *plVar10; lVar14 != local_12b8; lVar14 = lVar14 + 0x88) {
    local_1168 = 0;
    local_1160 = 7;
    local_1178[0] = 0;
    FUN_140003570(local_1178,L"Resolve");
    puVar21 = *(undefined8 **)(lVar14 + 0x60);
    cVar7 = *(char *)((longlong)puVar21[1] + 0x19);
    puVar29 = puVar21;
    puVar22 = (undefined8 *)puVar21[1];
    while (cVar7 == '\0') {
      cVar7 = FUN_14005c170(puVar22 + 4,local_1178);
      if (cVar7 == '\0') {
        puVar26 = (undefined8 *)*puVar22;
      }
      else {
        puVar26 = (undefined8 *)puVar22[2];
        puVar22 = puVar29;
      }
      puVar29 = puVar22;
      puVar22 = puVar26;
      cVar7 = *(char *)((longlong)puVar26 + 0x19);
    }
    if ((puVar29 == puVar21) || (cVar7 = FUN_14005c170(local_1178,puVar29 + 4), cVar7 != '\0')) {
      puVar29 = puVar21;
    }
    if (puVar29 == puVar21) {
      plVar10 = &DAT_1404124e8;
    }
    else {
      plVar10 = puVar29 + 8;
    }
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *)local_1178);
    lVar31 = plVar10[1];
    lVar27 = local_1360;
    for (lVar13 = *plVar10; lVar13 != lVar31; lVar13 = lVar13 + 0x88) {
      local_10e8 = 0;
      local_10e0 = 0xf;
      local_10f8[0] = 0;
      FUN_14000a2a0(local_10f8,"enabled",7);
      local_10c8 = 0;
      local_10c0 = 7;
      local_10d8[0] = 0;
      FUN_140003570(local_10d8,L"AutoModeDetection");
      FUN_140074200(lVar13,local_10d8,local_10f8,lVar27 + 0x48);
      std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
      _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                        *)local_10d8);
      FUN_14000a420(local_10f8);
      local_f28 = 0;
      local_f20 = 0xf;
      local_f38[0] = 0;
      FUN_14000a2a0(local_f38,"enabled",7);
      local_f08 = 0;
      local_f00 = 7;
      local_f18[0] = 0;
      FUN_140003570(local_f18,L"BlockNonATypes");
      FUN_140074200(lVar13,local_f18,local_f38,lVar27 + 0x50);
      std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
      _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                        *)local_f18);
      FUN_14000a420(local_f38);
      local_1148 = 0;
      local_1140 = 7;
      local_1158[0] = 0;
      FUN_140003570(local_1158,L"ViaProxy");
      puVar21 = *(undefined8 **)(lVar13 + 0x60);
      cVar7 = *(char *)((longlong)puVar21[1] + 0x19);
      puVar29 = puVar21;
      puVar22 = (undefined8 *)puVar21[1];
      while (cVar7 == '\0') {
        cVar7 = FUN_14005c170(puVar22 + 4,local_1158);
        if (cVar7 == '\0') {
          puVar26 = (undefined8 *)*puVar22;
        }
        else {
          puVar26 = (undefined8 *)puVar22[2];
          puVar22 = puVar29;
        }
        puVar29 = puVar22;
        puVar22 = puVar26;
        cVar7 = *(char *)((longlong)puVar26 + 0x19);
      }
      if ((puVar29 == puVar21) || (cVar7 = FUN_14005c170(local_1158,puVar29 + 4), cVar7 != '\0')) {
        puVar29 = puVar21;
      }
      if (puVar29 == puVar21) {
        plVar10 = &DAT_1404124e8;
      }
      else {
        plVar10 = puVar29 + 8;
      }
      std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
      _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                        *)local_1158);
      lVar27 = local_1360;
      lVar5 = plVar10[1];
      for (lVar25 = *plVar10; lVar25 != lVar5; lVar25 = lVar25 + 0x88) {
        local_f48 = 0;
        local_f40 = 0xf;
        local_f58[0] = 0;
        FUN_14000a2a0(local_f58,"enabled",7);
        FUN_140074320(lVar25,local_f58,lVar27 + 0x49);
        FUN_14000a420(local_f58);
      }
      local_f88 = 0;
      local_f80 = 0xf;
      local_f98[0] = 0;
      FUN_14000a2a0(local_f98,"OnlyFromListMode",0x10);
      local_f68 = 0;
      local_f60 = 7;
      local_f78[0] = 0;
      FUN_140003570(local_f78,L"ExclusionList");
      FUN_140074200(lVar13,local_f78,local_f98,lVar27 + 0x4b);
      std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
      _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                        *)local_f78);
      FUN_14000a420(local_f98);
      local_628 = 0;
      local_620 = 7;
      local_638 = 0;
      local_fa8 = 0;
      local_fa0 = 7;
      local_fb8[0] = 0;
      FUN_140003570(local_fb8,L"ExclusionList");
      FUN_14006e120(lVar13,local_fb8,&local_638);
      std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
      _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                        *)local_fb8);
      plVar10 = (longlong *)FUN_1400ba8e0();
      if (plVar10 == (longlong *)0x0) {
        FUN_14000cd00(0x80004005);
LAB_14007102c:
        uVar15 = FUN_14000c3a0(local_1358,L"Cannot load DNS exlcusion list. ");
        FUN_14000b9f0(local_12c0,uVar15,&local_730);
                    /* WARNING: Subroutine does not return */
        FUN_140277140(local_12c0,&DAT_1403f39b8);
      }
      local_730 = (**(code **)(*plVar10 + 0x18))(plVar10);
      local_730 = local_730 + 0x18;
      puVar23 = &local_638;
      if (7 < local_620) {
        puVar23 = (undefined2 *)CONCAT62(uStack_636,local_638);
      }
      uVar15 = FUN_14000c3a0(local_12c8,puVar23);
      cVar7 = FUN_140069d50(lVar27 + 0x48,uVar15,&local_730);
      if (cVar7 == '\0') goto LAB_14007102c;
      LOCK();
      piVar1 = (int *)(local_730 + -8);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 < 2) {
        (**(code **)(**(longlong **)(local_730 + -0x18) + 8))();
      }
      std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
      _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                        *)&local_638);
    }
    local_fe8 = 0;
    local_fe0 = 0xf;
    local_ff8[0] = 0;
    FUN_14000a2a0(local_ff8,"enabled",7);
    local_fc8 = 0;
    local_fc0 = 7;
    local_fd8[0] = 0;
    FUN_140003570(local_fd8,L"HttpProxiesSupport");
    FUN_140074200(lVar14,local_fd8,local_ff8,lVar27 + 0x78);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *)local_fd8);
    FUN_14000a420(local_ff8);
    local_1088 = 0;
    local_1080 = 0xf;
    local_1098[0] = 0;
    FUN_14000a2a0(local_1098,"enabled",7);
    local_1108 = 0;
    local_1100 = 7;
    local_1118[0] = 0;
    FUN_140003570(local_1118,L"HandleDirectConnections");
    FUN_140074200(lVar14,local_1118,local_1098,lVar27 + 0x79);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *)local_1118);
    FUN_14000a420(local_1098);
    local_1028 = 0;
    local_1020 = 0xf;
    local_1038[0] = 0;
    FUN_14000a2a0(local_1038,"enabled",7);
    local_1068 = 0;
    local_1060 = 7;
    local_1078[0] = 0;
    FUN_140003570(local_1078,L"ProcessServices");
    FUN_140074200(lVar14,local_1078,local_1038,lVar27 + 0x7a);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *)local_1078);
    FUN_14000a420(local_1038);
    local_ec8 = 0;
    local_ec0 = 0xf;
    local_ed8[0] = 0;
    FUN_14000a2a0(local_ed8,"enabled",7);
    local_ee8 = 0;
    local_ee0 = 7;
    local_ef8[0] = 0;
    FUN_140003570(local_ef8,L"ProcessOtherUsers");
    FUN_140074200(lVar14,local_ef8,local_ed8,lVar27 + 0x7b);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *)local_ef8);
    FUN_14000a420(local_ed8);
    local_e88 = 0;
    local_e80 = 0xf;
    local_e98[0] = 0;
    FUN_14000a2a0(local_e98,"enabled",7);
    local_ea8 = 0;
    local_ea0 = 7;
    local_eb8[0] = 0;
    FUN_140003570(local_eb8,L"ConnectionLoopDetection");
    FUN_140074200(lVar14,local_eb8,local_e98,lVar27 + 0x7c);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *)local_eb8);
    FUN_14000a420(local_e98);
    local_e48 = 0;
    local_e40 = 0xf;
    local_e58[0] = 0;
    FUN_14000a2a0(local_e58,"resolve",7);
    local_e68 = 0;
    local_e60 = 7;
    local_e78[0] = 0;
    FUN_140003570(local_e78,L"ConnectionLoopDetection");
    FUN_140074200(lVar14,local_e78,local_e58,lVar27 + 0x7d);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *)local_e78);
    FUN_14000a420(local_e58);
    local_e28 = 0;
    local_e20 = 0xf;
    local_e38[0] = 0;
    FUN_14000a2a0(local_e38,"enabled",7);
    local_1048 = 0;
    local_1040 = 7;
    local_1058[0] = 0;
    FUN_140003570(local_1058,L"LeakPreventionMode");
    FUN_140074200(lVar14,local_1058,local_e38,lVar27 + 0x7e);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *)local_1058);
    FUN_14000a420(local_e38);
    local_1377 = '\0';
    local_e08 = 0;
    local_e00 = 0xf;
    local_e18[0] = 0;
    FUN_14000a2a0(local_e18,"enabled",7);
    local_11c8 = 0;
    local_11c0 = 7;
    local_11d8[0] = 0;
    FUN_140003570(local_11d8,L"BlockUDP443");
    local_6d0 = 0;
    local_6c8 = 0;
    local_6c0 = 0;
    puVar21 = *(undefined8 **)(lVar14 + 0x60);
    cVar7 = *(char *)((longlong)puVar21[1] + 0x19);
    puVar29 = puVar21;
    puVar22 = (undefined8 *)puVar21[1];
    while (cVar7 == '\0') {
      cVar7 = FUN_14005c170(puVar22 + 4,local_11d8);
      if (cVar7 == '\0') {
        puVar26 = (undefined8 *)*puVar22;
      }
      else {
        puVar26 = (undefined8 *)puVar22[2];
        puVar22 = puVar29;
      }
      puVar29 = puVar22;
      puVar22 = puVar26;
      cVar7 = *(char *)((longlong)puVar26 + 0x19);
    }
    if ((puVar29 == puVar21) || (cVar7 = FUN_14005c170(local_11d8,puVar29 + 4), cVar7 != '\0')) {
      puVar29 = puVar21;
    }
    puVar22 = &DAT_1404124e8;
    if (puVar29 != puVar21) {
      puVar22 = puVar29 + 8;
    }
    FUN_140061e90(&local_6d0,puVar22);
    if (local_6d0 == local_6c8) {
      FUN_140062530(&local_6d0);
      cVar8 = '\0';
      cVar7 = '\0';
    }
    else {
      if ((local_6c8 - local_6d0) / 0x88 == 0) {
        FUN_140073ff0();
LAB_140071071:
        FUN_14000cd00(0x80004005);
LAB_14007107c:
        FUN_14000cd00(0x80004005);
        goto LAB_140071087;
      }
      cVar8 = FUN_140074320(local_6d0,local_e18,&local_1377);
      FUN_140062530(&local_6d0);
      cVar7 = local_1377;
    }
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *)local_11d8);
    FUN_14000a420(local_e18);
    lVar13 = local_1360;
    if ((cVar8 != '\0') && (cVar7 != '\0')) {
      *(undefined4 *)(local_1360 + 0x80) = 1;
    }
    local_718 = 0;
    local_710 = 7;
    local_728 = 0;
    local_dc8 = 0;
    local_dc0 = 0xf;
    local_dd8[0] = 0;
    FUN_14000a2a0(local_dd8,&DAT_14036d0a0,4);
    local_de8 = 0;
    local_de0 = 7;
    local_df8[0] = 0;
    FUN_140003570(local_df8,&DAT_14036d0a8);
    cVar7 = FUN_14006df50(lVar14,local_df8,local_dd8);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *)local_df8);
    FUN_14000a420(local_dd8);
    if (cVar7 != '\0') {
      puVar6 = (ushort *)CONCAT62(uStack_726,local_728);
      puVar32 = &local_728;
      if (7 < local_710) {
        puVar32 = puVar6;
      }
      if (local_718 == 0xb) {
        pwVar19 = L"mode_bypass";
        uVar2 = *puVar32;
        if (0x6c < uVar2) {
          bVar34 = uVar2 < 0x6d;
          bVar35 = uVar2 == 0x6d;
          lVar31 = 0xb;
          do {
            if (!bVar34 && !bVar35) break;
            if (lVar31 == 1) {
              *(undefined4 *)(lVar13 + 0x80) = 0;
              goto LAB_14006f636;
            }
            lVar31 = lVar31 + -1;
            pwVar19 = pwVar19 + 1;
            bVar34 = (ushort)*(wchar_t *)((longlong)pwVar19 + (longlong)(puVar32 + -0xa01b6858)) <
                     (ushort)*pwVar19;
            bVar35 = *(wchar_t *)((longlong)pwVar19 + (longlong)(puVar32 + -0xa01b6858)) == *pwVar19
            ;
          } while (!bVar34);
        }
      }
      puVar32 = &local_728;
      if (7 < local_710) {
        puVar32 = puVar6;
      }
      if (local_718 == 0xe) {
        pwVar19 = L"mode_block_443";
        uVar2 = *puVar32;
        if (0x6c < uVar2) {
          bVar34 = uVar2 < 0x6d;
          bVar35 = uVar2 == 0x6d;
          lVar31 = 0xe;
          do {
            if (!bVar34 && !bVar35) break;
            if (lVar31 == 1) {
              *(undefined4 *)(lVar13 + 0x80) = 1;
              goto LAB_14006f636;
            }
            lVar31 = lVar31 + -1;
            pwVar19 = pwVar19 + 1;
            bVar34 = (ushort)*(wchar_t *)((longlong)pwVar19 + (longlong)(puVar32 + -0xa01b6864)) <
                     (ushort)*pwVar19;
            bVar35 = *(wchar_t *)((longlong)pwVar19 + (longlong)(puVar32 + -0xa01b6864)) == *pwVar19
            ;
          } while (!bVar34);
        }
      }
      puVar32 = &local_728;
      if (7 < local_710) {
        puVar32 = puVar6;
      }
      if (local_718 == 0xe) {
        pwVar19 = L"mode_block_all";
        uVar2 = *puVar32;
        if (0x6c < uVar2) {
          bVar34 = uVar2 < 0x6d;
          bVar35 = uVar2 == 0x6d;
          lVar31 = 0xe;
          do {
            if (!bVar34 && !bVar35) break;
            if (lVar31 == 1) {
              *(undefined4 *)(lVar13 + 0x80) = 2;
              break;
            }
            lVar31 = lVar31 + -1;
            pwVar19 = pwVar19 + 1;
            bVar34 = (ushort)*(wchar_t *)((longlong)pwVar19 + (longlong)(puVar32 + -0xa01b6874)) <
                     (ushort)*pwVar19;
            bVar35 = *(wchar_t *)((longlong)pwVar19 + (longlong)(puVar32 + -0xa01b6874)) == *pwVar19
            ;
          } while (!bVar34);
        }
      }
    }
LAB_14006f636:
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *)&local_728);
    local_11a8 = 0;
    local_11a0 = 7;
    local_11b8[0] = 0;
    FUN_140003570(local_11b8,L"Encryption");
    puVar21 = *(undefined8 **)(lVar14 + 0x60);
    cVar7 = *(char *)((longlong)puVar21[1] + 0x19);
    puVar29 = puVar21;
    puVar22 = (undefined8 *)puVar21[1];
    while (cVar7 == '\0') {
      cVar7 = FUN_14005c170(puVar22 + 4,local_11b8);
      if (cVar7 == '\0') {
        puVar26 = (undefined8 *)*puVar22;
      }
      else {
        puVar26 = (undefined8 *)puVar22[2];
        puVar22 = puVar29;
      }
      puVar29 = puVar22;
      puVar22 = puVar26;
      cVar7 = *(char *)((longlong)puVar26 + 0x19);
    }
    if ((puVar29 == puVar21) || (cVar7 = FUN_14005c170(local_11b8,puVar29 + 4), cVar7 != '\0')) {
      puVar29 = puVar21;
    }
    if (puVar29 == puVar21) {
      plVar10 = &DAT_1404124e8;
    }
    else {
      plVar10 = puVar29 + 8;
    }
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *)local_11b8);
    lVar27 = plVar10[1];
    for (lVar31 = *plVar10; lVar31 != lVar27; lVar31 = lVar31 + 0x88) {
      local_6a8 = 0;
      uStack_6a0 = 7;
      local_6b8 = (undefined8 ****)((ulonglong)local_6b8 & 0xffffffffffff0000);
      local_da8 = 0;
      local_da0 = 0xf;
      local_db8[0] = 0;
      FUN_14000a2a0(local_db8,&DAT_14036d0a0,4);
      local_688 = 0;
      local_680 = 0xf;
      local_698 = 0;
      cVar7 = FUN_14006dd00(lVar31,local_db8,&local_698,0);
      if (cVar7 != '\0') {
        local_1018 = &local_698;
        if (0xf < local_680) {
          local_1018 = (undefined1 *)CONCAT71(uStack_697,local_698);
        }
        local_1010 = local_688;
        FUN_14005ed10(&local_1198,&local_1018,1);
        local_1370 = local_1370 | 8;
        std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
        _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                          *)&local_6b8);
        local_6b8 = (undefined8 ****)CONCAT62(uStack_1196,local_1198);
        uStack_6b0 = uStack_1190;
        local_6a8 = local_1188;
        uStack_6a0 = uStack_1180;
        local_1188 = 0;
        uStack_1180 = 7;
        local_1198 = 0;
        std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
        _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                          *)&local_1198);
      }
      FUN_14000a420(&local_698);
      FUN_14000a420(local_db8);
      pppppuVar24 = &local_6b8;
      if (7 < uStack_6a0) {
        pppppuVar24 = (undefined8 *****)local_6b8;
      }
      plVar10 = (longlong *)FUN_1400ba8e0();
      if (plVar10 == (longlong *)0x0) goto LAB_140071071;
      lVar25 = (**(code **)(*plVar10 + 0x18))(plVar10);
      local_1300 = (short *)(lVar25 + 0x18);
      plVar10 = plVar12;
      if (pppppuVar24 == (undefined8 *****)0x0) {
LAB_14006f8cf:
        FUN_14000c9e0(&local_1300,pppppuVar24,(ulonglong)plVar10 & 0xffffffff);
      }
      else {
        if ((undefined8 *****)0xffff < pppppuVar24) {
          plVar10 = (longlong *)0xffffffffffffffff;
          do {
            plVar10 = (longlong *)((longlong)plVar10 + 1);
          } while (*(short *)((longlong)pppppuVar24 + (longlong)plVar10 * 2) != 0);
          goto LAB_14006f8cf;
        }
        FUN_14000c230(&local_1300,(ulonglong)pppppuVar24 & 0xffff);
      }
      ppuVar33 = &PTR_u_disabled_14036d970;
      plVar10 = plVar12;
      do {
        if (*ppuVar33 == (undefined *)0x0) goto LAB_14007107c;
        psVar20 = local_1300;
        do {
          sVar3 = *psVar20;
          sVar4 = *(short *)((longlong)psVar20 + ((longlong)*ppuVar33 - (longlong)local_1300));
          if (sVar3 != sVar4) break;
          psVar20 = psVar20 + 1;
        } while (sVar4 != 0);
        if (sVar3 == sVar4) {
          *(int *)(lVar13 + 0x88) = (int)plVar10;
          break;
        }
        plVar10 = (longlong *)(ulonglong)((int)plVar10 + 1);
        ppuVar33 = ppuVar33 + 1;
      } while ((longlong)ppuVar33 < 0x14036d989);
      LOCK();
      piVar1 = (int *)(local_1300 + -4);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 < 2) {
        (**(code **)(**(longlong **)(local_1300 + -0xc) + 8))();
      }
      local_608 = 0;
      local_600 = 7;
      local_618 = 0;
      local_d88 = 0;
      local_d80 = 7;
      local_d98[0] = 0;
      FUN_140003570(local_d98,L"Hash");
      FUN_14006e120(lVar31,local_d98,&local_618);
      std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
      _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                        *)local_d98);
      puVar23 = &local_618;
      if (7 < local_600) {
        puVar23 = (undefined2 *)CONCAT62(uStack_616,local_618);
      }
      plVar10 = plVar12;
      if (puVar23 != (undefined2 *)0x0) {
        plVar10 = (longlong *)0xffffffffffffffff;
        do {
          plVar10 = (longlong *)((longlong)plVar10 + 1);
        } while (puVar23[(longlong)plVar10] != 0);
      }
      FUN_14000c9e0(lVar13 + 0x98,puVar23,(ulonglong)plVar10 & 0xffffffff);
      std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
      _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                        *)&local_618);
      std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
      _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                        *)&local_6b8);
    }
  }
  local_bc8 = _DAT_14037c890;
  uStack_bc0 = _UNK_14037c898;
  local_bd8[0] = 0;
  FUN_140003570(local_bd8,&DAT_14036c8e0);
  local_be8 = _DAT_14037c890;
  uStack_be0 = _UNK_14037c898;
  local_bf8[0] = 0;
  FUN_140003570(local_bf8,L"ProxyList");
  plVar12 = (longlong *)FUN_14006dbe0(local_12f0,local_bf8,local_bd8);
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                    *)local_bf8);
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                    *)local_bd8);
  lVar13 = plVar12[1];
  for (lVar14 = *plVar12; lVar14 != lVar13; lVar14 = lVar14 + 0x88) {
    iVar9 = 0;
    local_1344 = 0;
    local_d68 = 0;
    local_d60 = 0xf;
    local_d78[0] = 0;
    FUN_14000a2a0(local_d78,&DAT_14036d144,2);
    FUN_1400744a0(lVar14,local_d78,&local_1344);
    FUN_14000a420(local_d78);
    local_648 = 0;
    uStack_640 = 7;
    local_658 = (undefined8 ****)((ulonglong)local_658 & 0xffffffffffff0000);
    local_d48 = 0;
    local_d40 = 0xf;
    local_d58[0] = 0;
    FUN_14000a2a0(local_d58,&DAT_14036d148,4);
    local_668 = 0;
    local_660 = 0xf;
    local_678 = 0;
    cVar7 = FUN_14006dd00(lVar14,local_d58,&local_678,1);
    if (cVar7 != '\0') {
      local_1008 = &local_678;
      if (0xf < local_660) {
        local_1008 = (undefined1 *)CONCAT71(uStack_677,local_678);
      }
      local_1000 = local_668;
      FUN_14005ed10(&local_1138,&local_1008,1);
      local_1370 = local_1370 | 0x10;
      std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
      _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                        *)&local_658);
      local_658 = (undefined8 ****)CONCAT62(uStack_1136,local_1138);
      uStack_650 = uStack_1130;
      local_648 = local_1128;
      uStack_640 = uStack_1120;
      local_1128 = 0;
      uStack_1120 = 7;
      local_1138 = 0;
      std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
      _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                        *)&local_1138);
    }
    FUN_14000a420(&local_678);
    FUN_14000a420(local_d58);
    pppppuVar24 = &local_658;
    if (7 < uStack_640) {
      pppppuVar24 = (undefined8 *****)local_658;
    }
    plVar12 = (longlong *)FUN_14000c3a0(local_12b0,pppppuVar24);
    if (PTR_u_SOCKS5_1403fc678 == (undefined *)0x0) goto LAB_140071087;
    psVar20 = (short *)*plVar12;
    psVar16 = psVar20;
    do {
      sVar3 = *psVar16;
      sVar4 = *(short *)((longlong)psVar16 + ((longlong)PTR_u_SOCKS5_1403fc678 - (longlong)psVar20))
      ;
      if (sVar3 != sVar4) break;
      psVar16 = psVar16 + 1;
    } while (sVar4 != 0);
    if (sVar3 != sVar4) {
      if (PTR_u_SOCKS4_1403fc680 == (undefined *)0x0) goto LAB_140071092;
      psVar16 = psVar20;
      do {
        sVar3 = *psVar16;
        sVar4 = *(short *)((longlong)psVar16 +
                          ((longlong)PTR_u_SOCKS4_1403fc680 - (longlong)psVar20));
        if (sVar3 != sVar4) break;
        psVar16 = psVar16 + 1;
      } while (sVar4 != 0);
      if (sVar3 == sVar4) {
        iVar9 = 1;
      }
      else {
        if (PTR_u_HTTPS_1403fc688 == (undefined *)0x0) goto LAB_14007109d;
        psVar16 = psVar20;
        do {
          sVar3 = *psVar16;
          sVar4 = *(short *)((longlong)psVar16 +
                            ((longlong)PTR_u_HTTPS_1403fc688 - (longlong)psVar20));
          if (sVar3 != sVar4) break;
          psVar16 = psVar16 + 1;
        } while (sVar4 != 0);
        if (sVar3 == sVar4) {
          iVar9 = 2;
        }
        else {
          cVar7 = FUN_140031dc0(plVar12,PTR_u_HTTP_1403fc690);
          if (cVar7 == '\0') {
            lVar14 = *plVar12;
            LOCK();
            piVar1 = (int *)(lVar14 + -8);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 < 2) {
              (**(code **)(**(longlong **)(lVar14 + -0x18) + 8))();
            }
            FUN_14000c3a0(local_1290,L"Incorrect proxy server type.");
                    /* WARNING: Subroutine does not return */
            FUN_140277140(local_1290,&DAT_1403f39b8);
          }
          iVar9 = 3;
          psVar20 = (short *)*plVar12;
        }
      }
    }
    LOCK();
    piVar1 = (int *)(psVar20 + -4);
    iVar28 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar28 < 2) {
      (**(code **)(**(longlong **)(psVar20 + -0xc) + 8))();
    }
    local_5d0 = 0;
    local_5c8 = 7;
    local_5e0[0] = 0;
    local_570 = 0;
    local_568 = 7;
    local_580[0] = 0;
    local_550 = 0;
    local_548 = 7;
    local_560[0] = 0;
    local_3f8 = 0;
    local_3f0 = 7;
    local_408[0] = 0;
    local_530 = 0;
    local_528 = 7;
    local_540[0] = 0;
    local_5b0 = 0;
    local_5a8 = 7;
    local_5c0[0] = 0;
    local_1376 = 0;
    local_1348 = 0;
    local_136c = 0;
    local_d28 = 0;
    local_d20 = 7;
    local_d38[0] = 0;
    FUN_140003570(local_d38,L"Address");
    FUN_14006e120(lVar14,local_d38,local_5e0);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *)local_d38);
    local_d08 = 0;
    local_d00 = 7;
    local_d18[0] = 0;
    FUN_140003570(local_d18,L"Label");
    FUN_14006e120(lVar14,local_d18,local_540);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *)local_d18);
    local_ce8 = 0;
    local_ce0 = 7;
    local_cf8[0] = 0;
    FUN_140003570(local_cf8,L"Port");
    FUN_1400745f0(lVar14,local_cf8,&local_1348);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *)local_cf8);
    local_cc8 = 0;
    local_cc0 = 7;
    local_cd8[0] = 0;
    FUN_140003570(local_cd8,L"Options");
    FUN_1400745f0(lVar14,local_cd8,&local_136c);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *)local_cd8);
    local_ca8 = 0;
    local_ca0 = 7;
    local_cb8[0] = 0;
    FUN_140003570(local_cb8,L"UserAgent");
    FUN_14006e120(lVar14,local_cb8,local_5c0);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *)local_cb8);
    if ((local_1368[0] == 2) && ((local_136c & 0x10) != 0)) {
      local_136c = local_136c & 0xffffffef | 0x80;
    }
    if ((char)local_136c < '\0') {
      local_136c = local_136c & 0xfffffffe;
    }
    uVar30 = local_136c;
    local_11e8 = 0;
    local_11e0 = 7;
    local_11f8[0] = 0;
    FUN_140003570(local_11f8,L"Authentication");
    puVar21 = *(undefined8 **)(lVar14 + 0x60);
    cVar7 = *(char *)((longlong)puVar21[1] + 0x19);
    puVar29 = puVar21;
    puVar22 = (undefined8 *)puVar21[1];
    while (cVar7 == '\0') {
      cVar7 = FUN_14005c170(puVar22 + 4,local_11f8);
      if (cVar7 == '\0') {
        puVar26 = (undefined8 *)*puVar22;
      }
      else {
        puVar26 = (undefined8 *)puVar22[2];
        puVar22 = puVar29;
      }
      puVar29 = puVar22;
      puVar22 = puVar26;
      cVar7 = *(char *)((longlong)puVar26 + 0x19);
    }
    if ((puVar29 == puVar21) || (cVar7 = FUN_14005c170(local_11f8,puVar29 + 4), cVar7 != '\0')) {
      puVar29 = puVar21;
    }
    if (puVar29 == puVar21) {
      plVar12 = &DAT_1404124e8;
    }
    else {
      plVar12 = puVar29 + 8;
    }
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *)local_11f8);
    lVar27 = plVar12[1];
    for (lVar31 = *plVar12; iVar28 = local_1348, lVar31 != lVar27; lVar31 = lVar31 + 0x88) {
      FUN_140009b70(local_b20,"enabled");
      FUN_140074320(lVar31,local_b20,&local_1376);
      FUN_14000a420(local_b20);
      FUN_14002efa0(local_b00,L"Username");
      FUN_14006e120(lVar31,local_b00,local_580);
      std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
      _Tidy_deallocate(local_b00);
      FUN_14002efa0(local_ae0,L"Password");
      FUN_14006e120(lVar31,local_ae0,local_560);
      std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
      _Tidy_deallocate(local_ae0);
    }
    if (local_5d0 == 0) goto LAB_1400710a8;
    if (0xfffe < local_1348 - 1U) {
      FUN_14000c3a0(local_1298,L"Incorrect port number.");
                    /* WARNING: Subroutine does not return */
      FUN_140277140(local_1298,&DAT_1403f39b8);
    }
    if (((byte)uVar30 & 0x60) == 0x60) {
      uVar30 = uVar30 & 0xffffffdf;
      local_136c = uVar30;
    }
    if (DAT_140412ba8 != '\0') {
      uVar30 = uVar30 & 0xffffffdf;
      local_136c = uVar30;
    }
    FUN_14001b4d0(local_358);
    uVar15 = FUN_14000bd30(local_5e0);
    uVar15 = FUN_14000c3a0(local_12a0,uVar15);
    local_1388 = local_1344;
    FUN_14008b310(local_358,uVar15,iVar28);
    local_304 = local_1376;
    local_2f0 = uVar30;
    uVar15 = FUN_14000bd30(local_580);
    FUN_14000c320(local_300,uVar15);
    uVar15 = FUN_14000bd30(local_560);
    FUN_14000c320(local_2f8,uVar15);
    uVar15 = FUN_14000bd30(local_540);
    FUN_14000c320(local_310,uVar15);
    if (((local_5b0 != 0) && (iVar9 == 2)) && ((uVar30 & 2) != 0)) {
      uVar15 = FUN_14000bd30(local_5c0);
      FUN_14000c320(local_2e8,uVar15);
    }
    FUN_14001b530(local_1360,local_358);
    FUN_14008b4f0(local_358);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *)local_5c0);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *)local_540);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *)local_408);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *)local_560);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *)local_580);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *)local_5e0);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *)&local_658);
  }
  FUN_14002efa0(local_b40,L"Chain");
  FUN_14002efa0(local_860,L"ChainList");
  plVar12 = (longlong *)FUN_14006dbe0(local_12f0,local_860,local_b40);
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  _Tidy_deallocate(local_860);
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  _Tidy_deallocate(local_b40);
  lVar31 = local_1360;
  lVar13 = plVar12[1];
  for (lVar14 = *plVar12; lVar14 != lVar13; lVar14 = lVar14 + 0x88) {
    local_1338 = 0;
    FUN_140009b70(local_b60,&DAT_14036d144);
    FUN_1400744a0(lVar14,local_b60,&local_1338);
    FUN_14000a420(local_b60);
    local_1340 = 0;
    FUN_140003c50(local_500);
    FUN_140009b70(local_820,&DAT_14036d148);
    FUN_14006de60(lVar14,local_820,local_500);
    FUN_14000a420(local_820);
    iVar9 = 0;
    if (local_4f0 != 0) {
      uVar15 = FUN_14000bd30(local_500);
      uVar15 = FUN_14000c3a0(local_1288,uVar15);
      cVar7 = FUN_14008bac0(uVar15,&local_1340);
      iVar9 = local_1340;
      if (cVar7 == '\0') {
        FUN_14000c3a0(local_1280,L"Incorrect proxy chain type.");
                    /* WARNING: Subroutine does not return */
        FUN_140277140(local_1280,&DAT_1403f39b8);
      }
    }
    FUN_140003c50(local_4e0);
    FUN_140071320(&local_5f8);
    local_5f8 = 0;
    uStack_5f0 = 0;
    local_5e8 = 0;
    FUN_140071330(&local_1320);
    FUN_14002efa0(local_840,L"Name");
    FUN_14006e120(lVar14,local_840,local_4e0);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate(local_840);
    FUN_14002efa0(local_880,&DAT_14036c8e0);
    plVar12 = (longlong *)FUN_14006db40(lVar14,local_880);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate(local_880);
    lVar25 = plVar12[1];
    for (lVar27 = *plVar12; lVar27 != lVar25; lVar27 = lVar27 + 0x88) {
      local_1375 = 1;
      FUN_140009b70(local_8a0,"enabled");
      FUN_140074320(lVar27,local_8a0,&local_1375);
      FUN_14000a420(local_8a0);
      local_133c = 0;
      FUN_140074720(lVar27,&local_133c);
      local_12f8 = local_133c;
      local_12f4 = local_1375;
      local_12f3 = 0;
      FUN_140073fd0(&local_5f8,&local_12f8);
    }
    FUN_14002efa0(local_8c0,L"RedundancyTimeout");
    FUN_1400745f0(lVar14,local_8c0,&local_1320);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate(local_8c0);
    FUN_14002efa0(local_a60,L"RedundancyTryDirect");
    FUN_140074740(lVar14,local_a60,&uStack_131c);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate(local_a60);
    FUN_14002efa0(local_8e0,L"RedundancyRecheck");
    FUN_140074740(lVar14,local_8e0,auStack_131b);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate(local_8e0);
    FUN_14002efa0(local_900,L"RedundancyRecheckTime");
    FUN_1400745f0(lVar14,local_900,&uStack_1318);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate(local_900);
    FUN_14002efa0(local_920,L"LoadBalancingSameProxyForPid");
    FUN_140074740(lVar14,local_920,(longlong)&uStack_1318 + 4);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate(local_920);
    if (local_4d0 == 0) {
      FUN_14000c3a0(local_1278,L"Chain name missing.");
                    /* WARNING: Subroutine does not return */
      FUN_140277140(local_1278,&DAT_1403f39b8);
    }
    if ((iVar9 == 1) && (0x270e < local_1320 - 1U)) {
      FUN_14000c3a0(local_1270,L"Incorrect Redundancy Timeout number.");
                    /* WARNING: Subroutine does not return */
      FUN_140277140(local_1270,&DAT_1403f39b8);
    }
    FUN_140071350(local_440);
    uVar15 = FUN_14000bd30(local_4e0);
    uVar15 = FUN_14000c3a0(local_1268,uVar15);
    FUN_14008b9a0(local_440,uVar15,local_1338);
    uStack_438 = uStack_1318;
    local_410 = iVar9;
    FUN_140024d30(local_428,&local_5f8);
    FUN_140073f30(lVar31 + 0x18,local_440);
    FUN_14001fb00(local_440);
    FUN_14001c020(&local_5f8);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate(local_4e0);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate(local_500);
  }
  FUN_14002efa0(local_960,L"Rule");
  FUN_14002efa0(local_940,L"RuleList");
  plVar12 = (longlong *)FUN_14006dbe0(local_12f0,local_940,local_960);
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  _Tidy_deallocate(local_940);
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  _Tidy_deallocate(local_960);
  lVar13 = plVar12[1];
  for (lVar14 = *plVar12; lVar14 != lVar13; lVar14 = lVar14 + 0x88) {
    local_1374 = 1;
    FUN_140009b70(local_980,"enabled");
    FUN_140074320(lVar14,local_980,&local_1374);
    FUN_14000a420(local_980);
    local_590 = 0;
    local_588 = 0xf;
    local_5a0[0] = 0;
    local_1373[0] = 0;
    FUN_140009b70(local_9a0,"interfaceId");
    FUN_14006dd00(lVar14,local_9a0,local_5a0,0);
    FUN_14000a420(local_9a0);
    FUN_140009b70(local_9c0,"skipIfInterfaceDown");
    FUN_140074320(lVar14,local_9c0,local_1373);
    FUN_14000a420(local_9c0);
    FUN_140003c50(local_520);
    FUN_140003c50(local_460);
    FUN_140003c50(local_4c0);
    FUN_140003c50(local_4a0);
    local_1330[0] = 0;
    FUN_14002efa0(local_9e0,L"Name");
    FUN_14006e120(lVar14,local_9e0,local_520);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate(local_9e0);
    FUN_14002efa0(local_a00,L"Applications");
    FUN_14006e120(lVar14,local_a00,local_460);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate(local_a00);
    FUN_14002efa0(local_a20,L"Targets");
    FUN_14006e120(lVar14,local_a20,local_4c0);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate(local_a20);
    FUN_14002efa0(local_a40,L"Ports");
    FUN_14006e120(lVar14,local_a40,local_4a0);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate(local_a40);
    FUN_140003c50(local_480);
    FUN_140009b70(local_aa0,&DAT_14036d148);
    FUN_14002efa0(local_a80,L"Action");
    FUN_14006df50(lVar14,local_a80,local_aa0);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate(local_a80);
    FUN_14000a420(local_aa0);
    local_1334 = 1;
    uVar15 = FUN_14000bd30(local_480);
    FUN_14000c3a0(local_12e0,uVar15);
    cVar7 = FUN_14009dde0(local_12e0,&local_1334);
    FUN_14000ccc0(local_12e0);
    iVar9 = local_1334;
    if (cVar7 == '\0') {
      FUN_14000c3a0(local_1260,L"Incorrect rule action type.");
                    /* WARNING: Subroutine does not return */
      FUN_140277140(local_1260,&DAT_1403f39b8);
    }
    iVar28 = 0;
    if (local_1334 - 2U < 2) {
      FUN_14002efa0(local_ac0,L"Action");
      FUN_1400745f0(lVar14,local_ac0,local_1330);
      std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
      _Tidy_deallocate(local_ac0);
      iVar28 = local_1330[0];
    }
    if (local_510 == 0) {
      FUN_14000c3a0(local_1258,L"Rule name missing.");
                    /* WARNING: Subroutine does not return */
      FUN_140277140(local_1258,&DAT_1403f39b8);
    }
    FUN_14001b4e0(local_2b8);
    uVar15 = FUN_14000bd30(local_520);
    uVar15 = FUN_14000c3a0(local_1250,uVar15);
    FUN_14009d990(local_2b8,uVar15);
    FUN_14000c4a0(local_748);
    FUN_14000cd20(local_748);
    uVar15 = FUN_14000bd30(local_460);
    uVar15 = FUN_14000c3a0(local_1248,uVar15);
    cVar7 = FUN_1400a1270(local_2b8,uVar15,local_748);
    if (cVar7 == '\0') {
      uVar15 = FUN_14000c3a0(local_bb0,L"Error in application list:\n");
      FUN_14000b9f0(local_1240,uVar15,local_748);
                    /* WARNING: Subroutine does not return */
      FUN_140277140(local_1240,&DAT_1403f39b8);
    }
    uVar15 = FUN_14000bd30(local_4c0);
    uVar15 = FUN_14000c3a0(local_1238,uVar15);
    cVar7 = FUN_1400a26e0(local_2b8,uVar15,local_748);
    if (cVar7 == '\0') {
      uVar15 = FUN_14000c3a0(local_ba8,L"Error in target list:\n");
      FUN_14000b9f0(local_1230,uVar15,local_748);
                    /* WARNING: Subroutine does not return */
      FUN_140277140(local_1230,&DAT_1403f39b8);
    }
    uVar15 = FUN_14000bd30(local_4a0);
    uVar15 = FUN_14000c3a0(local_1228,uVar15);
    cVar7 = FUN_14009fda0(local_2b8,uVar15,local_748);
    if (cVar7 == '\0') {
      uVar15 = FUN_14000c3a0(local_ba0,L"Error in port list:\n");
      FUN_14000b9f0(local_1220,uVar15,local_748);
                    /* WARNING: Subroutine does not return */
      FUN_140277140(local_1220,&DAT_1403f39b8);
    }
    local_1fc = iVar9;
    local_1f8 = (longlong)iVar28;
    local_2a8 = local_1374;
    FUN_14001fad0(local_220,local_5a0);
    local_200 = local_1373[0];
    FUN_14001b4f0(lVar31 + 0x30,local_2b8);
    FUN_14000ccc0(local_748);
    FUN_14009db90(local_2b8);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate(local_480);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate(local_4a0);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate(local_4c0);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate(local_460);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate(local_520);
    FUN_14000a420(local_5a0);
  }
  FUN_14000c4a0(local_740);
  FUN_14000cd20(local_740);
  cVar7 = FUN_140068a50(lVar31,local_740);
  if (cVar7 == '\0') {
    uVar15 = FUN_14000c3a0(local_b98,L"Error found:\n");
    FUN_14000b9f0(local_1218,uVar15,local_740);
                    /* WARNING: Subroutine does not return */
    FUN_140277140(local_1218,&DAT_1403f39b8);
  }
  FUN_14001b4e0(local_1e8);
  FUN_14009dd20(local_1e8);
  lVar14 = *(longlong *)(lVar31 + 0x38);
  if (*(longlong *)(lVar31 + 0x30) == lVar14) {
    FUN_14001b4f0(lVar31 + 0x30,local_1e8);
  }
  else {
    FUN_14001b4e0(local_118);
    FUN_14001baf0(local_118,lVar14 + -200);
    cVar7 = FUN_14002bcd0(local_110,local_1e0);
    if (cVar7 == '\0') {
      local_12c = local_5c;
      local_128 = local_58;
      FUN_14001f840(*(longlong *)(lVar31 + 0x38) + -200,local_1e8);
    }
    else {
      FUN_14001b4f0(lVar31 + 0x30);
    }
    FUN_14009db90(local_118);
  }
  FUN_14009db90(local_1e8);
  FUN_14000ccc0(local_740);
  FUN_140062530(&local_6e8);
  FUN_14005faa0(local_3e8);
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                    *)&local_708);
LAB_140070f01:
  __security_check_cookie(local_48 ^ (ulonglong)auStack_13a8);
  return;
LAB_140071087:
  FUN_14000cd00(0x80004005);
LAB_140071092:
  FUN_14000cd00(0x80004005);
LAB_14007109d:
  FUN_14000cd00(0x80004005);
LAB_1400710a8:
  FUN_14002bfc0(local_12a8,"nIncorrect proxy server address.");
                    /* WARNING: Subroutine does not return */
  FUN_140277140(local_12a8,&DAT_1403f39b8);
}




// ===== CProfile::SaveProxyAndChainLists =====
// Ghidra: FUN_140071370 @ 0x140071370
// Serialize ProxyList + ChainList back to XML.
// uproxe: ChainProfileStore.Save
// note: Mirror of load path; emits same chain attributes.
// ------------------------------------------------------------


/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x0001400725ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140071370(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *this;
  undefined8 ****ppppuVar14;
  undefined2 *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined8 extraout_XMM0_Qa_11;
  undefined8 extraout_XMM0_Qa_12;
  undefined8 extraout_XMM0_Qa_13;
  undefined8 extraout_XMM0_Qa_14;
  undefined8 extraout_XMM0_Qa_15;
  undefined8 extraout_XMM0_Qa_16;
  undefined8 extraout_XMM0_Qa_17;
  undefined8 extraout_XMM0_Qa_18;
  undefined8 extraout_XMM0_Qa_19;
  undefined8 extraout_XMM0_Qa_20;
  undefined8 extraout_XMM0_Qa_21;
  undefined8 extraout_XMM0_Qa_22;
  undefined1 auStack_2728 [32];
  undefined8 local_2708;
  undefined1 local_26f8 [8];
  longlong local_26f0;
  undefined4 local_26e8;
  undefined4 local_26e4;
  undefined4 local_26e0;
  undefined4 local_26dc;
  longlong local_26d8;
  longlong local_26d0;
  undefined2 local_26c8;
  undefined6 uStack_26c6;
  undefined8 local_26b8;
  ulonglong uStack_26b0;
  undefined2 local_26a8;
  undefined6 uStack_26a6;
  undefined8 local_2698;
  ulonglong uStack_2690;
  undefined1 local_2688 [8];
  undefined2 local_2680;
  undefined6 uStack_267e;
  undefined8 local_2670;
  ulonglong uStack_2668;
  undefined2 local_2660;
  undefined6 uStack_265e;
  undefined8 local_2650;
  ulonglong uStack_2648;
  undefined2 local_2640;
  undefined6 uStack_263e;
  undefined8 local_2630;
  ulonglong uStack_2628;
  undefined1 local_2620 [8];
  undefined1 local_2618 [8];
  undefined1 local_2610 [8];
  undefined1 local_2608 [8];
  undefined1 local_2600 [8];
  undefined1 local_25f8 [8];
  undefined8 *local_25f0;
  undefined1 local_25e8 [8];
  undefined1 local_25e0 [8];
  undefined2 local_25d8;
  undefined6 uStack_25d6;
  undefined8 local_25c8;
  ulonglong uStack_25c0;
  undefined2 local_25b8;
  undefined6 uStack_25b6;
  undefined8 local_25a8;
  ulonglong uStack_25a0;
  undefined2 local_2598;
  undefined6 uStack_2596;
  undefined8 local_2588;
  ulonglong uStack_2580;
  undefined2 local_2578;
  undefined6 uStack_2576;
  undefined8 local_2568;
  ulonglong uStack_2560;
  undefined2 local_2558;
  undefined6 uStack_2556;
  undefined8 local_2548;
  ulonglong uStack_2540;
  undefined2 local_2538;
  undefined6 uStack_2536;
  undefined8 local_2528;
  ulonglong uStack_2520;
  undefined2 local_2518;
  undefined6 uStack_2516;
  undefined8 local_2508;
  ulonglong uStack_2500;
  undefined2 local_24f8;
  undefined6 uStack_24f6;
  undefined8 local_24e8;
  ulonglong uStack_24e0;
  undefined2 *local_24d8;
  undefined8 local_24d0;
  undefined1 local_24c8 [16];
  undefined8 local_24b8;
  undefined8 uStack_24b0;
  undefined1 local_24a8 [16];
  undefined8 local_2498;
  undefined8 uStack_2490;
  undefined1 local_2488 [16];
  undefined8 local_2478;
  undefined8 uStack_2470;
  undefined1 local_2468 [16];
  undefined8 local_2458;
  undefined8 uStack_2450;
  undefined8 ***local_2448 [2];
  undefined8 local_2438;
  ulonglong local_2430;
  undefined8 ***local_2428 [2];
  undefined8 local_2418;
  ulonglong local_2410;
  undefined2 local_2408 [8];
  undefined8 local_23f8;
  ulonglong uStack_23f0;
  undefined8 local_23e8;
  undefined8 local_23e0;
  undefined8 local_23d8;
  undefined8 local_23d0;
  undefined1 local_23c8 [16];
  undefined8 local_23b8;
  undefined8 uStack_23b0;
  undefined8 local_23a8;
  undefined8 local_23a0;
  undefined8 local_2398;
  undefined8 local_2390;
  undefined2 *local_2388;
  undefined2 local_2378 [8];
  undefined8 local_2368;
  ulonglong uStack_2360;
  undefined8 local_2358;
  undefined8 local_2350;
  undefined8 local_2348;
  undefined8 local_2340;
  undefined1 local_2338;
  undefined8 local_2328;
  undefined8 uStack_2320;
  undefined8 local_2318;
  undefined8 local_2310;
  undefined8 local_2308;
  undefined8 local_2300;
  undefined2 *local_22f8;
  undefined2 local_22e8 [8];
  undefined8 local_22d8;
  ulonglong uStack_22d0;
  undefined8 local_22c8;
  undefined8 local_22c0;
  undefined8 local_22b8;
  undefined8 local_22b0;
  undefined1 local_22a8;
  undefined8 local_2298;
  undefined8 uStack_2290;
  undefined8 local_2288;
  undefined8 local_2280;
  undefined8 local_2278;
  undefined8 local_2270;
  undefined2 *local_2268;
  undefined2 local_2258 [8];
  undefined8 local_2248;
  ulonglong uStack_2240;
  undefined8 local_2238;
  undefined8 local_2230;
  undefined8 local_2228;
  undefined8 local_2220;
  undefined1 local_2218;
  undefined8 local_2208;
  undefined8 uStack_2200;
  undefined8 local_21f8;
  undefined8 local_21f0;
  undefined8 local_21e8;
  undefined8 local_21e0;
  undefined2 *local_21d8;
  undefined1 local_21c8 [16];
  undefined8 local_21b8;
  undefined8 uStack_21b0;
  undefined1 local_21a8 [16];
  undefined8 local_2198;
  undefined8 uStack_2190;
  undefined1 local_2188 [16];
  undefined8 local_2178;
  undefined8 uStack_2170;
  undefined1 local_2168 [16];
  undefined8 local_2158;
  undefined8 uStack_2150;
  undefined1 local_2148 [16];
  undefined8 local_2138;
  undefined8 uStack_2130;
  undefined1 local_2128 [16];
  undefined8 local_2118;
  undefined8 uStack_2110;
  undefined1 local_2108 [16];
  undefined8 local_20f8;
  undefined8 uStack_20f0;
  undefined1 local_20e8 [16];
  undefined8 local_20d8;
  undefined8 uStack_20d0;
  undefined8 local_20c8;
  undefined1 local_20c0 [8];
  char local_20b8;
  undefined1 local_20b0 [8];
  char local_20a8;
  undefined1 local_20a0 [8];
  char local_2098;
  undefined1 local_2090 [8];
  char local_2088;
  undefined1 local_2080 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_2060 [32];
  undefined1 local_2040 [32];
  undefined1 local_2020 [32];
  undefined1 local_2000 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_1fe0 [32];
  undefined1 local_1fc0 [32];
  undefined1 local_1fa0 [32];
  undefined1 local_1f80 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_1f60 [32];
  undefined1 local_1f40 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_1f20 [32];
  undefined1 local_1f00 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_1ee0 [32];
  undefined1 local_1ec0 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_1ea0 [32];
  undefined1 local_1e80 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_1e60 [32];
  undefined1 local_1e40 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_1e20 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_1e00 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_1de0 [32];
  undefined1 local_1dc0 [32];
  undefined1 local_1da0 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_1d80 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_1d60 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_1d40 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_1d20 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_1d00 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_1ce0 [32];
  undefined1 local_1cc0 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_1ca0 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_1c80 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_1c60 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_1c40 [32];
  undefined1 local_1c20 [32];
  undefined1 local_1c00 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_1be0 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_1bc0 [32];
  undefined1 local_1ba0 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_1b80 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_1b60 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_1b40 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_1b20 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_1b00 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_1ae0 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_1ac0 [32];
  undefined1 local_1aa0 [32];
  undefined1 local_1a80 [32];
  undefined1 local_1a60 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_1a40 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_1a20 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_1a00 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_19e0 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_19c0 [40];
  undefined1 local_1998 [32];
  undefined1 local_1978 [32];
  undefined1 local_1958 [32];
  undefined1 local_1938 [32];
  undefined1 local_1918 [32];
  undefined1 local_18f8 [32];
  undefined1 local_18d8 [32];
  undefined1 local_18b8 [32];
  undefined1 local_1898 [144];
  undefined1 local_1808 [144];
  undefined1 local_1778 [144];
  undefined1 local_16e8 [144];
  undefined1 local_1658 [144];
  undefined1 local_15c8 [144];
  undefined1 local_1538 [144];
  undefined1 local_14a8 [144];
  undefined1 local_1418 [144];
  undefined1 local_1388 [144];
  undefined1 local_12f8 [144];
  undefined1 local_1268 [144];
  undefined1 local_11d8 [144];
  undefined1 local_1148 [144];
  undefined1 local_10b8 [144];
  undefined1 local_1028 [144];
  undefined1 local_f98 [144];
  undefined1 local_f08 [144];
  undefined1 local_e78 [144];
  undefined1 local_de8 [144];
  undefined1 local_d58 [144];
  undefined1 local_cc8 [144];
  undefined1 local_c38 [144];
  undefined1 local_ba8 [8];
  undefined1 local_ba0 [8];
  longlong local_b98;
  longlong local_b90;
  longlong local_b88 [2];
  undefined2 local_b78 [8];
  undefined8 local_b68;
  ulonglong uStack_b60;
  undefined8 local_b58;
  undefined8 local_b50;
  undefined8 local_b48;
  undefined8 local_b40;
  undefined1 local_b38;
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 local_b18;
  undefined8 local_b10;
  undefined8 local_b08;
  undefined8 local_b00;
  undefined8 local_af8;
  undefined2 local_ae8 [8];
  undefined8 local_ad8;
  ulonglong uStack_ad0;
  undefined8 local_ac8;
  undefined8 local_ac0;
  undefined8 local_ab8;
  undefined8 local_ab0;
  undefined1 local_aa8;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 local_a80;
  undefined8 local_a78;
  undefined8 local_a70;
  undefined2 *local_a68;
  undefined2 local_a58 [8];
  undefined8 local_a48;
  ulonglong uStack_a40;
  undefined8 local_a38;
  undefined8 local_a30;
  undefined8 local_a28;
  undefined8 local_a20;
  undefined1 local_a18;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined8 local_9f0;
  undefined8 local_9e8;
  undefined8 local_9e0;
  undefined2 *local_9d8;
  undefined2 local_9c8 [8];
  undefined8 local_9b8;
  ulonglong uStack_9b0;
  undefined8 local_9a8;
  undefined8 local_9a0;
  undefined8 local_998;
  undefined8 local_990;
  undefined1 local_988;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  undefined8 local_960;
  undefined8 local_958;
  undefined8 local_950;
  undefined2 *local_948;
  undefined2 local_938 [8];
  undefined8 local_928;
  ulonglong uStack_920;
  undefined8 local_918;
  undefined8 local_910;
  undefined8 local_908;
  undefined8 local_900;
  undefined1 local_8f8 [16];
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  undefined8 local_8d0;
  undefined8 local_8c8;
  undefined8 local_8c0;
  undefined2 *local_8b8;
  undefined2 local_8a8 [8];
  undefined8 local_898;
  ulonglong uStack_890;
  undefined8 local_888;
  undefined8 local_880;
  undefined8 local_878;
  undefined8 local_870;
  undefined1 local_868;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined8 local_840;
  undefined8 local_838;
  undefined8 local_830;
  undefined2 *local_828;
  undefined2 local_818 [8];
  undefined8 local_808;
  ulonglong uStack_800;
  undefined8 local_7f8;
  undefined8 local_7f0;
  undefined8 local_7e8;
  undefined8 local_7e0;
  undefined1 local_7d8;
  undefined8 local_7c8;
  undefined8 uStack_7c0;
  undefined8 local_7b8;
  undefined8 local_7b0;
  undefined8 local_7a8;
  undefined8 local_7a0;
  undefined2 *local_798;
  undefined2 local_788 [8];
  undefined8 local_778;
  ulonglong uStack_770;
  undefined8 local_768;
  undefined8 local_760;
  undefined8 local_758;
  undefined8 local_750;
  undefined1 local_748;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 local_720;
  undefined8 local_718;
  undefined8 local_710;
  undefined2 *local_708;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_6f8 [32];
  undefined1 local_6d8 [144];
  undefined1 local_648 [144];
  undefined1 local_5b8 [144];
  undefined1 local_528 [144];
  undefined1 local_498 [48];
  undefined1 local_468 [48];
  undefined1 local_438 [144];
  undefined1 local_3a8 [144];
  undefined1 local_318 [144];
  undefined1 local_288 [144];
  undefined1 local_1f8 [144];
  undefined1 local_168 [144];
  undefined1 local_d8 [144];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14007138e;
  local_20c8 = 0xfffffffffffffffe;
  local_48 = DAT_1403fb930 ^ (ulonglong)auStack_2728;
  plVar11 = (longlong *)0x0;
  local_26e8 = 0;
  DAT_140412281 = 1;
  local_25f0 = param_1;
  FUN_140276f60(local_b78,0,0x88);
  local_2528 = _DAT_14037c890;
  uStack_2520 = _UNK_14037c898;
  local_2538 = 0;
  FUN_140003570(&local_2538,L"ProxifierProfile");
  local_b68 = _DAT_14037c890;
  uStack_b60 = _UNK_14037c898;
  local_b78[0] = 0;
  local_b58 = 0;
  local_b50 = 0;
  local_b58 = FUN_140062780();
  local_b48 = 0;
  local_b40 = 0;
  local_b48 = FUN_1400626a0(extraout_XMM0_Qa,0,0);
  local_b28 = _DAT_14037c8a0;
  uStack_b20 = _UNK_14037c8a8;
  local_b38 = 0;
  local_b18 = 0;
  local_b10 = 0;
  local_b18 = FUN_1400626e0();
  local_b08 = 0;
  local_b00 = 0;
  local_b08 = FUN_1400626a0(extraout_XMM0_Qa_00,0,0);
  local_af8 = 0;
  puVar15 = &local_2538;
  if (7 < uStack_2520) {
    puVar15 = (undefined2 *)CONCAT62(uStack_2536,local_2538);
  }
  FUN_140003a10(local_b78,puVar15,local_2528);
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                    *)&local_2538);
  local_24b8 = _DAT_14037c8a0;
  uStack_24b0 = _UNK_14037c8a8;
  local_24c8[0] = 0;
  FUN_14000a2a0(local_24c8,"version",7);
  FUN_14003c9c0(local_2040,0x66);
  FUN_14000a1d0(local_1958,local_24c8);
  FUN_14000a1d0(local_1938,local_2040);
  local_2708 = FUN_140063320(&local_b58,local_1958);
  FUN_140063390(&local_b58,local_20c0);
  FUN_14000a420(local_1938);
  FUN_14000a420(local_1958);
  FUN_14000a420(local_2040);
  if (local_20b8 != '\0') {
    FUN_1400630f0(&local_b48,local_b48,local_24c8);
  }
  FUN_14000a420(local_24c8);
  local_2498 = _DAT_14037c8a0;
  uStack_2490 = _UNK_14037c8a8;
  local_24a8[0] = 0;
  FUN_14000a2a0(local_24a8,"platform",8);
  local_2198 = _DAT_14037c8a0;
  uStack_2190 = _UNK_14037c8a8;
  local_21a8[0] = 0;
  FUN_14000a2a0(local_21a8,"Windows",7);
  FUN_14000a1d0(local_1918,local_24a8);
  FUN_14000a1d0(local_18f8,local_21a8);
  local_2708 = FUN_140063320(&local_b58,local_1918);
  FUN_140063390(&local_b58,local_20b0);
  FUN_14000a420(local_18f8);
  FUN_14000a420(local_1918);
  FUN_14000a420(local_21a8);
  if (local_20a8 != '\0') {
    FUN_1400630f0(&local_b48,local_b48,local_24a8);
  }
  FUN_14000a420(local_24a8);
  local_2478 = _DAT_14037c8a0;
  uStack_2470 = _UNK_14037c8a8;
  local_2488[0] = 0;
  FUN_14000a2a0(local_2488,"product_id",10);
  FUN_14003c9c0(local_2020,0);
  FUN_14000a1d0(local_1998,local_2488);
  FUN_14000a1d0(local_1978,local_2020);
  local_2708 = FUN_140063320(&local_b58,local_1998);
  FUN_140063390(&local_b58,local_2090);
  FUN_14000a420(local_1978);
  FUN_14000a420(local_1998);
  FUN_14000a420(local_2020);
  if (local_2088 != '\0') {
    FUN_1400630f0(&local_b48,local_b48,local_2488);
  }
  FUN_14000a420(local_2488);
  local_2458 = _DAT_14037c8a0;
  uStack_2450 = _UNK_14037c8a8;
  local_2468[0] = 0;
  FUN_14000a2a0(local_2468,"product_minver",0xe);
  FUN_14003c9c0(local_2000,400);
  FUN_14000a1d0(local_18d8,local_2468);
  FUN_14000a1d0(local_18b8,local_2000);
  local_2708 = FUN_140063320(&local_b58,local_18d8);
  FUN_140063390(&local_b58,local_20a0);
  FUN_14000a420(local_18b8);
  FUN_14000a420(local_18d8);
  FUN_14000a420(local_2000);
  if (local_2098 != '\0') {
    FUN_1400630f0(&local_b48,local_b48,local_2468);
  }
  FUN_14000a420(local_2468);
  FUN_140276f60(local_ae8,0,0x88);
  local_2508 = _DAT_14037c890;
  uStack_2500 = _UNK_14037c898;
  local_2518 = 0;
  FUN_140003570(&local_2518,L"Options");
  local_ad8 = _DAT_14037c890;
  uStack_ad0 = _UNK_14037c898;
  local_ae8[0] = 0;
  local_ac8 = 0;
  local_ac0 = 0;
  local_ac8 = FUN_140062780();
  local_ab8 = 0;
  local_ab0 = 0;
  local_ab8 = FUN_1400626a0(extraout_XMM0_Qa_01,0,0);
  local_a98 = _DAT_14037c8a0;
  uStack_a90 = _UNK_14037c8a8;
  local_aa8 = 0;
  local_a88 = 0;
  local_a80 = 0;
  local_a88 = FUN_1400626e0();
  local_a78 = 0;
  local_a70 = 0;
  local_a78 = FUN_1400626a0(extraout_XMM0_Qa_02,0,0);
  local_a68 = (undefined2 *)0x0;
  puVar15 = &local_2518;
  if (7 < uStack_2500) {
    puVar15 = (undefined2 *)CONCAT62(uStack_2516,local_2518);
  }
  FUN_140003a10(local_ae8,puVar15,local_2508);
  local_a68 = local_b78;
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                    *)&local_2518);
  FUN_140276f60(local_a58,0,0x88);
  local_24e8 = _DAT_14037c890;
  uStack_24e0 = _UNK_14037c898;
  local_24f8 = 0;
  FUN_140003570(&local_24f8,L"Resolve");
  local_a48 = _DAT_14037c890;
  uStack_a40 = _UNK_14037c898;
  local_a58[0] = 0;
  local_a38 = 0;
  local_a30 = 0;
  local_a38 = FUN_140062780();
  local_a28 = 0;
  local_a20 = 0;
  local_a28 = FUN_1400626a0(extraout_XMM0_Qa_03,0,0);
  local_a08 = _DAT_14037c8a0;
  uStack_a00 = _UNK_14037c8a8;
  local_a18 = 0;
  local_9f8 = 0;
  local_9f0 = 0;
  local_9f8 = FUN_1400626e0();
  local_9e8 = 0;
  local_9e0 = 0;
  local_9e8 = FUN_1400626a0(extraout_XMM0_Qa_04,0,0);
  local_9d8 = (undefined2 *)0x0;
  puVar15 = &local_24f8;
  if (7 < uStack_24e0) {
    puVar15 = (undefined2 *)CONCAT62(uStack_24f6,local_24f8);
  }
  FUN_140003a10(local_a58,puVar15,local_24e8);
  local_9d8 = local_ae8;
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                    *)&local_24f8);
  FUN_140276f60(local_8a8,0,0x88);
  local_26b8 = _DAT_14037c890;
  uStack_26b0 = _UNK_14037c898;
  local_26c8 = 0;
  FUN_140003570(&local_26c8,L"AutoModeDetection");
  local_898 = _DAT_14037c890;
  uStack_890 = _UNK_14037c898;
  local_8a8[0] = 0;
  local_888 = 0;
  local_880 = 0;
  local_888 = FUN_140062780();
  local_878 = 0;
  local_870 = 0;
  local_878 = FUN_1400626a0(extraout_XMM0_Qa_05,0,0);
  local_858 = _DAT_14037c8a0;
  uStack_850 = _UNK_14037c8a8;
  local_868 = 0;
  local_848 = 0;
  local_840 = 0;
  local_848 = FUN_1400626e0();
  local_838 = 0;
  local_830 = 0;
  local_838 = FUN_1400626a0(extraout_XMM0_Qa_06,0,0);
  local_828 = (undefined2 *)0x0;
  puVar15 = &local_26c8;
  if (7 < uStack_26b0) {
    puVar15 = (undefined2 *)CONCAT62(uStack_26c6,local_26c8);
  }
  FUN_140003a10(local_8a8,puVar15,local_26b8);
  local_828 = local_a58;
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                    *)&local_26c8);
  local_2178 = _DAT_14037c8a0;
  uStack_2170 = _UNK_14037c8a8;
  local_2188[0] = 0;
  FUN_14000a2a0(local_2188,"enabled",7);
  FUN_140074940(local_8a8,local_2188,param_2 + 9);
  FUN_14000a420(local_2188);
  FUN_140276f60(local_818,0,0x88);
  local_2548 = _DAT_14037c890;
  uStack_2540 = _UNK_14037c898;
  local_2558 = 0;
  FUN_140003570(&local_2558,L"ViaProxy");
  local_808 = _DAT_14037c890;
  uStack_800 = _UNK_14037c898;
  local_818[0] = 0;
  local_7f8 = 0;
  local_7f0 = 0;
  local_7f8 = FUN_140062780();
  local_7e8 = 0;
  local_7e0 = 0;
  local_7e8 = FUN_1400626a0(extraout_XMM0_Qa_07,0,0);
  local_7c8 = _DAT_14037c8a0;
  uStack_7c0 = _UNK_14037c8a8;
  local_7d8 = 0;
  local_7b8 = 0;
  local_7b0 = 0;
  local_7b8 = FUN_1400626e0();
  local_7a8 = 0;
  local_7a0 = 0;
  local_7a8 = FUN_1400626a0(extraout_XMM0_Qa_08,0,0);
  local_798 = (undefined2 *)0x0;
  puVar15 = &local_2558;
  if (7 < uStack_2540) {
    puVar15 = (undefined2 *)CONCAT62(uStack_2556,local_2558);
  }
  FUN_140003a10(local_818,puVar15,local_2548);
  local_798 = local_a58;
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                    *)&local_2558);
  local_2158 = _DAT_14037c8a0;
  uStack_2150 = _UNK_14037c8a8;
  local_2168[0] = 0;
  FUN_14000a2a0(local_2168,"enabled",7);
  FUN_140074940(local_818,local_2168,(longlong)param_2 + 0x49);
  FUN_14000a420(local_2168);
  FUN_140276f60(local_788,0,0x88);
  local_2698 = _DAT_14037c890;
  uStack_2690 = _UNK_14037c898;
  local_26a8 = 0;
  FUN_140003570(&local_26a8,L"BlockNonATypes");
  local_778 = _DAT_14037c890;
  uStack_770 = _UNK_14037c898;
  local_788[0] = 0;
  local_768 = 0;
  local_760 = 0;
  local_768 = FUN_140062780();
  local_758 = 0;
  local_750 = 0;
  local_758 = FUN_1400626a0(extraout_XMM0_Qa_09,0,0);
  local_738 = _DAT_14037c8a0;
  uStack_730 = _UNK_14037c8a8;
  local_748 = 0;
  local_728 = 0;
  local_720 = 0;
  local_728 = FUN_1400626e0();
  local_718 = 0;
  local_710 = 0;
  local_718 = FUN_1400626a0(extraout_XMM0_Qa_10,0,0);
  local_708 = (undefined2 *)0x0;
  puVar15 = &local_26a8;
  if (7 < uStack_2690) {
    puVar15 = (undefined2 *)CONCAT62(uStack_26a6,local_26a8);
  }
  FUN_140003a10(local_788,puVar15,local_2698);
  local_708 = local_a58;
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                    *)&local_26a8);
  local_2138 = _DAT_14037c8a0;
  uStack_2130 = _UNK_14037c8a8;
  local_2148[0] = 0;
  FUN_14000a2a0(local_2148,"enabled",7);
  FUN_140074940(local_788,local_2148,param_2 + 10);
  FUN_14000a420(local_2148);
  FUN_140276f60(local_938,0,0x88);
  local_2670 = _DAT_14037c890;
  uStack_2668 = _UNK_14037c898;
  local_2680 = 0;
  FUN_140003570(&local_2680,L"ExclusionList");
  local_928 = _DAT_14037c890;
  uStack_920 = _UNK_14037c898;
  local_938[0] = 0;
  local_918 = 0;
  local_910 = 0;
  local_918 = FUN_140062780();
  local_908 = 0;
  local_900 = 0;
  local_908 = FUN_1400626a0(extraout_XMM0_Qa_11,0,0);
  local_8e8 = _DAT_14037c8a0;
  uStack_8e0 = _UNK_14037c8a8;
  local_8f8[0] = 0;
  local_8d8 = 0;
  local_8d0 = 0;
  local_8d8 = FUN_1400626e0();
  local_8c8 = 0;
  local_8c0 = 0;
  local_8c8 = FUN_1400626a0(extraout_XMM0_Qa_12,0,0);
  local_8b8 = (undefined2 *)0x0;
  puVar15 = &local_2680;
  if (7 < uStack_2668) {
    puVar15 = (undefined2 *)CONCAT62(uStack_267e,local_2680);
  }
  FUN_140003a10(local_938,puVar15,local_2670);
  local_8b8 = local_a58;
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                    *)&local_2680);
  local_2118 = _DAT_14037c8a0;
  uStack_2110 = _UNK_14037c8a8;
  local_2128[0] = 0;
  FUN_14000a2a0(local_2128,"OnlyFromListMode",0x10);
  FUN_140074940(local_938,local_2128,(longlong)param_2 + 0x4b);
  FUN_14000a420(local_2128);
  local_2650 = _DAT_14037c890;
  uStack_2648 = _UNK_14037c898;
  local_2660 = 0;
  FUN_140003570(&local_2660,param_2[0xb]);
  local_24d8 = &local_2660;
  if (7 < uStack_2648) {
    local_24d8 = (undefined2 *)CONCAT62(uStack_265e,local_2660);
  }
  local_24d0 = local_2650;
  FUN_14005efd0(local_2448,&local_24d8,1,0);
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                    *)&local_2660);
  ppppuVar14 = local_2448;
  if (0xf < local_2430) {
    ppppuVar14 = (undefined8 ****)local_2448[0];
  }
  FUN_14000a2a0(local_8f8,ppppuVar14,local_2438);
  FUN_14000a420(local_2448);
  local_2630 = _DAT_14037c890;
  uStack_2628 = _UNK_14037c898;
  local_2640 = 0;
  FUN_140003570(&local_2640,L"DnsUdpMode");
  local_23f8 = _DAT_14037c890;
  uStack_23f0 = _UNK_14037c898;
  local_2408[0] = 0;
  local_23e8 = 0;
  local_23e0 = 0;
  local_23e8 = FUN_140062780();
  local_23d8 = 0;
  local_23d0 = 0;
  local_23d8 = FUN_1400626a0(extraout_XMM0_Qa_13,0,0);
  local_23b8 = _DAT_14037c8a0;
  uStack_23b0 = _UNK_14037c8a8;
  local_23c8[0] = 0;
  local_23a8 = 0;
  local_23a0 = 0;
  local_23a8 = FUN_1400626e0();
  local_2398 = 0;
  local_2390 = 0;
  local_2398 = FUN_1400626a0(extraout_XMM0_Qa_14,0,0);
  local_2388 = (undefined2 *)0x0;
  puVar15 = &local_2640;
  if (7 < uStack_2628) {
    puVar15 = (undefined2 *)CONCAT62(uStack_263e,local_2640);
  }
  FUN_140003a10(local_2408,puVar15,local_2630);
  local_2388 = local_a58;
  FUN_14003c9c0(local_2428,*(undefined4 *)((longlong)param_2 + 0x4c));
  local_26e8 = 0x7ff;
  ppppuVar14 = local_2428;
  if (0xf < local_2410) {
    ppppuVar14 = (undefined8 ****)local_2428[0];
  }
  FUN_14000a2a0(local_23c8,ppppuVar14,local_2418);
  FUN_14000a420(local_2428);
  FUN_14005faa0(local_2408);
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                    *)&local_2640);
  FUN_14005faa0(local_938);
  FUN_14005faa0(local_788);
  FUN_14005faa0(local_818);
  FUN_14005faa0(local_8a8);
  FUN_140276f60(local_9c8,0,0x88);
  local_25c8 = _DAT_14037c890;
  uStack_25c0 = _UNK_14037c898;
  local_25d8 = 0;
  FUN_140003570(&local_25d8,L"Encryption");
  local_9b8 = _DAT_14037c890;
  uStack_9b0 = _UNK_14037c898;
  local_9c8[0] = 0;
  local_9a8 = 0;
  local_9a0 = 0;
  local_9a8 = FUN_140062780();
  local_998 = 0;
  local_990 = 0;
  local_998 = FUN_1400626a0(extraout_XMM0_Qa_15,0,0);
  local_978 = _DAT_14037c8a0;
  uStack_970 = _UNK_14037c8a8;
  local_988 = 0;
  local_968 = 0;
  local_960 = 0;
  local_968 = FUN_1400626e0();
  local_958 = 0;
  local_950 = 0;
  local_958 = FUN_1400626a0(extraout_XMM0_Qa_16,0,0);
  local_948 = (undefined2 *)0x0;
  puVar15 = &local_25d8;
  if (7 < uStack_25c0) {
    puVar15 = (undefined2 *)CONCAT62(uStack_25d6,local_25d8);
  }
  FUN_140003a10(local_9c8,puVar15,local_25c8);
  local_948 = local_ae8;
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                    *)&local_25d8);
  lVar18 = param_2[0x11];
  local_20f8 = _DAT_14037c8a0;
  uStack_20f0 = _UNK_14037c8a8;
  local_2108[0] = 0;
  FUN_14000a2a0(local_2108,&DAT_14036d0a0,4);
  FUN_140074ae0(local_9c8,local_2108,&PTR_u_disabled_14036d970 + (int)lVar18);
  FUN_14000a420(local_2108);
  if (1 < (int)param_2[0x11] - 2U) {
LAB_14007289a:
    local_2588 = _DAT_14037c890;
    uStack_2580 = _UNK_14037c898;
    local_2598 = 0;
    FUN_140003570(&local_2598,L"HttpProxiesSupport");
    local_2368 = _DAT_14037c890;
    uStack_2360 = _UNK_14037c898;
    local_2378[0] = 0;
    local_2358 = 0;
    local_2350 = 0;
    local_2358 = FUN_140062780();
    local_2348 = 0;
    local_2340 = 0;
    local_2348 = FUN_1400626a0(extraout_XMM0_Qa_19,0,0);
    local_2328 = _DAT_14037c8a0;
    uStack_2320 = _UNK_14037c8a8;
    local_2338 = 0;
    local_2318 = 0;
    local_2310 = 0;
    local_2318 = FUN_1400626e0();
    local_2308 = 0;
    local_2300 = 0;
    local_2308 = FUN_1400626a0(extraout_XMM0_Qa_20,0,0);
    local_22f8 = (undefined2 *)0x0;
    puVar15 = &local_2598;
    if (7 < uStack_2580) {
      puVar15 = (undefined2 *)CONCAT62(uStack_2596,local_2598);
    }
    FUN_140003a10(local_2378,puVar15,local_2588);
    local_22f8 = local_ae8;
    local_20d8 = _DAT_14037c8a0;
    uStack_20d0 = _UNK_14037c8a8;
    local_20e8[0] = 0;
    FUN_14000a2a0(local_20e8,"enabled",7);
    FUN_140074940(local_2378,local_20e8,param_2 + 0xf);
    FUN_14000a420(local_20e8);
    FUN_14005faa0(local_2378);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *)&local_2598);
    local_2568 = _DAT_14037c890;
    uStack_2560 = _UNK_14037c898;
    local_2578 = 0;
    FUN_140003570(&local_2578,L"HandleDirectConnections");
    local_2248 = _DAT_14037c890;
    uStack_2240 = _UNK_14037c898;
    local_2258[0] = 0;
    local_2238 = 0;
    local_2230 = 0;
    local_2238 = FUN_140062780();
    local_2228 = 0;
    local_2220 = 0;
    local_2228 = FUN_1400626a0(extraout_XMM0_Qa_21,0,0);
    local_2208 = _DAT_14037c8a0;
    uStack_2200 = _UNK_14037c8a8;
    local_2218 = 0;
    local_21f8 = 0;
    local_21f0 = 0;
    local_21f8 = FUN_1400626e0();
    local_21e8 = 0;
    local_21e0 = 0;
    local_21e8 = FUN_1400626a0(extraout_XMM0_Qa_22,0,0);
    local_21d8 = (undefined2 *)0x0;
    puVar15 = &local_2578;
    if (7 < uStack_2560) {
      puVar15 = (undefined2 *)CONCAT62(uStack_2576,local_2578);
    }
    FUN_140003a10(local_2258,puVar15,local_2568);
    local_21d8 = local_ae8;
    local_21b8 = _DAT_14037c8a0;
    uStack_21b0 = _UNK_14037c8a8;
    local_21c8[0] = 0;
    FUN_14000a400(local_21c8,"enabled");
    FUN_140074940(local_2258,local_21c8,(longlong)param_2 + 0x79);
    FUN_14000a420(local_21c8);
    FUN_14005faa0(local_2258);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *)&local_2578);
    FUN_14005ffc0(local_288);
    FUN_14002efa0(local_1fe0,L"ConnectionLoopDetection");
    FUN_14006da40(local_288,local_1fe0,local_ae8);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate(local_1fe0);
    FUN_140009b70(local_1fc0,"enabled");
    FUN_140074940(local_288,local_1fc0,(longlong)param_2 + 0x7c);
    FUN_14000a420(local_1fc0);
    FUN_140009b70(local_1fa0,"resolve");
    FUN_140074940(local_288,local_1fa0,(longlong)param_2 + 0x7d);
    FUN_14000a420(local_1fa0);
    FUN_14002efa0(local_1f60,L"ProcessServices");
    uVar12 = FUN_14006da40(local_c38,local_1f60,local_ae8);
    FUN_140009b70(local_1f80,"enabled");
    FUN_140074940(uVar12,local_1f80,(longlong)param_2 + 0x7a);
    FUN_14000a420(local_1f80);
    FUN_14005faa0(local_c38);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate(local_1f60);
    FUN_14002efa0(local_1f20,L"ProcessOtherUsers");
    uVar12 = FUN_14006da40(local_cc8,local_1f20,local_ae8);
    FUN_140009b70(local_1f40,"enabled");
    FUN_140074940(uVar12,local_1f40,(longlong)param_2 + 0x7b);
    FUN_14000a420(local_1f40);
    FUN_14005faa0(local_cc8);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate(local_1f20);
    FUN_14002efa0(local_1ee0,L"LeakPreventionMode");
    uVar12 = FUN_14006da40(local_1388,local_1ee0,local_ae8);
    FUN_140009b70(local_1f00,"enabled");
    FUN_140074940(uVar12,local_1f00,(longlong)param_2 + 0x7e);
    FUN_14000a420(local_1f00);
    FUN_14005faa0(local_1388);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate(local_1ee0);
    iVar8 = (int)param_2[0x10];
    if (iVar8 == 0) {
      FUN_14002efa0(local_1ea0,&DAT_14036d0a8);
      uVar12 = FUN_14006da40(local_d58,local_1ea0,local_ae8);
      FUN_140009b70(local_1ec0,&DAT_14036d0a0);
      FUN_140074cd0(uVar12,local_1ec0);
      FUN_14000a420(local_1ec0);
      FUN_14005faa0(local_d58);
      this = local_1ea0;
LAB_140072f51:
      std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
      _Tidy_deallocate(this);
    }
    else {
      if (iVar8 == 1) {
        FUN_14002efa0(local_1e60,&DAT_14036d0a8);
        uVar12 = FUN_14006da40(local_de8,local_1e60,local_ae8);
        FUN_140009b70(local_1e80,&DAT_14036d0a0);
        FUN_140074e00(uVar12,local_1e80,L"mode_block_443");
        FUN_14000a420(local_1e80);
        FUN_14005faa0(local_de8);
        this = local_1e60;
        goto LAB_140072f51;
      }
      if (iVar8 == 2) {
        FUN_14002efa0(local_1e20,&DAT_14036d0a8);
        uVar12 = FUN_14006da40(local_e78,local_1e20,local_ae8);
        FUN_140009b70(local_1e40,&DAT_14036d0a0);
        FUN_140074e00(uVar12,local_1e40,L"mode_block_all");
        FUN_14000a420(local_1e40);
        FUN_14005faa0(local_e78);
        this = local_1e20;
        goto LAB_140072f51;
      }
    }
    FUN_14005faa0(local_288);
    FUN_14005faa0(local_9c8);
    FUN_14005faa0(local_a58);
    FUN_14005ffc0(local_d8);
    FUN_14002efa0(local_1e00,L"ProxyList");
    FUN_14006da40(local_d8,local_1e00,local_b78);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate(local_1e00);
    lVar18 = *param_2;
    lVar4 = param_2[1];
    if (lVar18 != lVar4) {
      lVar16 = lVar18 + 0x48;
      do {
        FUN_14005ffc0(local_5b8);
        FUN_14002efa0(local_1de0,&DAT_14036c8e0);
        FUN_14006da40(local_5b8,local_1de0,local_d8);
        std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
        _Tidy_deallocate(local_1de0);
        local_26e4 = *(undefined4 *)(lVar16 + -8);
        FUN_140009b70(local_1dc0,&DAT_14036d144);
        FUN_140074870(local_5b8,local_1dc0,&local_26e4);
        FUN_14000a420(local_1dc0);
        iVar8 = *(int *)(lVar16 + 8);
        FUN_140009b70(local_1da0,&DAT_14036d148);
        FUN_140074ae0(local_5b8,local_1da0,&PTR_u_SOCKS5_1403fc678 + iVar8);
        FUN_14000a420(local_1da0);
        cVar7 = FUN_14001d140(lVar16);
        if (cVar7 == '\0') {
          FUN_14002efa0(local_1d80,L"Label");
          uVar12 = FUN_14006da40(local_f98,local_1d80,local_5b8);
          FUN_140074c10(uVar12,lVar16);
          FUN_14005faa0(local_f98);
          std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
          ::_Tidy_deallocate(local_1d80);
        }
        FUN_14002efa0(local_1d60,L"Address");
        uVar12 = FUN_14006da40(local_1028,local_1d60,local_5b8);
        uVar13 = FUN_14003ad50(lVar18,local_2688);
        FUN_140074c10(uVar12,uVar13);
        FUN_14000ccc0(local_2688);
        FUN_14005faa0(local_1028);
        std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
        _Tidy_deallocate(local_1d60);
        FUN_14002efa0(local_1d40,L"Port");
        uVar12 = FUN_14006da40(local_10b8,local_1d40,local_5b8);
        FUN_140074a80(uVar12,lVar16 + -0x40);
        FUN_14005faa0(local_10b8);
        std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
        _Tidy_deallocate(local_1d40);
        FUN_14002efa0(local_1d20,L"Options");
        uVar12 = FUN_14006da40(local_1148,local_1d20,local_5b8);
        pbVar3 = (byte *)(lVar16 + 0x20);
        FUN_140074f30(uVar12,pbVar3);
        FUN_14005faa0(local_1148);
        std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
        _Tidy_deallocate(local_1d20);
        cVar7 = FUN_14001d140(lVar16 + 0x28);
        if (((cVar7 == '\0') && (*(int *)(lVar16 + 8) == 2)) && ((*pbVar3 & 2) != 0)) {
          FUN_14002efa0(local_1d00,L"UserAgent");
          uVar12 = FUN_14006da40(local_11d8,local_1d00,local_5b8);
          FUN_140074c10(uVar12,lVar16 + 0x28);
          FUN_14005faa0(local_11d8);
          std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
          ::_Tidy_deallocate(local_1d00);
        }
        if ((*(char *)(lVar16 + 0xc) != '\0') || (*(int *)(lVar16 + 8) == 1)) {
          FUN_14005ffc0(local_528);
          FUN_14002efa0(local_1ce0,L"Authentication");
          FUN_14006da40(local_528,local_1ce0,local_5b8);
          std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
          ::_Tidy_deallocate(local_1ce0);
          FUN_140009b70(local_1cc0,"enabled");
          FUN_140074940(local_528,local_1cc0,lVar16 + 0xc);
          FUN_14000a420(local_1cc0);
          if ((*pbVar3 & 8) == 0) {
            FUN_14002efa0(local_1ca0,L"Username");
            uVar12 = FUN_14006da40(local_1268,local_1ca0,local_528);
            FUN_140074c10(uVar12,lVar16 + 0x10);
            FUN_14005faa0(local_1268);
            std::
            basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
            _Tidy_deallocate(local_1ca0);
            if (*(int *)(lVar16 + 8) != 1) {
              FUN_14000c4a0(local_ba8);
              FUN_14000cd20(local_ba8);
              iVar8 = (int)param_2[0x11];
              if (iVar8 == 0) {
                FUN_14000cc20(local_ba8,lVar16 + 0x18);
              }
              else {
                if (iVar8 == 2) {
                  plVar9 = (longlong *)0x1;
                }
                else {
                  plVar9 = plVar11;
                  if (iVar8 == 3) {
                    plVar9 = (longlong *)0x2;
                  }
                }
                FUN_140031e10(local_498,plVar9,param_2[0x12]);
                FUN_14000c4a0(local_ba0);
                FUN_14000cd20(local_ba0);
                uVar12 = FUN_14000bc30(local_2620,lVar16 + 0x18);
                cVar7 = FUN_140031f40(local_498,uVar12,local_ba8,local_ba0);
                if (cVar7 == '\0') {
                  uVar12 = FUN_14003ad50(lVar18,local_25f8);
                  uVar13 = FUN_14000c3a0(local_2600,L"Cannot encrypt password for proxy ");
                  uVar12 = FUN_14000b9f0(local_2608,uVar13,uVar12);
                  uVar12 = FUN_14001d290(local_2610,uVar12,L"\nError: ");
                  puVar17 = (undefined8 *)FUN_14000b9f0(local_2618,uVar12,local_ba0);
                  FUN_14002c040(*puVar17,0);
                  FUN_14000ccc0(local_2618);
                  FUN_14000ccc0(local_2610);
                  FUN_14000ccc0(local_2608);
                  FUN_14000ccc0(local_2600);
                  FUN_14000ccc0(local_25f8);
                }
                FUN_14000ccc0(local_ba0);
              }
              FUN_14002efa0(local_1c80,L"Password");
              uVar12 = FUN_14006da40(local_12f8,local_1c80,local_528);
              FUN_140074c10(uVar12,local_ba8);
              FUN_14005faa0(local_12f8);
              std::
              basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              ::_Tidy_deallocate(local_1c80);
              FUN_14000ccc0(local_ba8);
            }
          }
          FUN_14005faa0(local_528);
        }
        FUN_14005faa0(local_5b8);
        lVar18 = lVar18 + 0x98;
        lVar16 = lVar16 + 0x98;
      } while (lVar18 != lVar4);
    }
    FUN_14005ffc0(local_168);
    FUN_14002efa0(local_1c60,L"ChainList");
    FUN_14006da40(local_168,local_1c60,local_b78);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate(local_1c60);
    lVar4 = param_2[4];
    for (lVar18 = param_2[3]; lVar18 != lVar4; lVar18 = lVar18 + 0x38) {
      FUN_14005ffc0(local_6d8);
      FUN_14002efa0(local_1c40,L"Chain");
      FUN_14006da40(local_6d8,local_1c40,local_168);
      std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
      _Tidy_deallocate(local_1c40);
      local_26e0 = *(undefined4 *)(lVar18 + 0x34);
      FUN_140009b70(local_1c20,&DAT_14036d144);
      FUN_140074870(local_6d8,local_1c20,&local_26e0);
      FUN_14000a420(local_1c20);
      iVar8 = *(int *)(lVar18 + 0x30);
      FUN_140009b70(local_1c00,&DAT_14036d148);
      FUN_140074ae0(local_6d8,local_1c00,&PTR_u_simple_1403fc660 + iVar8);
      FUN_14000a420(local_1c00);
      FUN_14002efa0(local_1be0,L"Name");
      uVar12 = FUN_14006da40(local_1418,local_1be0,local_6d8);
      FUN_140074c10(uVar12,lVar18 + 0x10);
      FUN_14005faa0(local_1418);
      std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
      _Tidy_deallocate(local_1be0);
      lVar5 = *(longlong *)(lVar18 + 0x20);
      for (lVar16 = *(longlong *)(lVar18 + 0x18); lVar16 != lVar5; lVar16 = lVar16 + 8) {
        FUN_14005ffc0(local_3a8);
        FUN_14002efa0(local_1bc0,&DAT_14036c8e0);
        FUN_14006da40(local_3a8,local_1bc0,local_6d8);
        std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
        _Tidy_deallocate(local_1bc0);
        FUN_140009b70(local_1ba0,"enabled");
        FUN_140074940(local_3a8,local_1ba0,lVar16 + 4);
        FUN_14000a420(local_1ba0);
        FUN_140074a80(local_3a8,lVar16);
        FUN_14005faa0(local_3a8);
      }
      iVar8 = *(int *)(lVar18 + 0x30);
      if (iVar8 == 1) {
        FUN_14002efa0(local_1b80,L"RedundancyTimeout");
        uVar12 = FUN_14006da40(local_14a8,local_1b80,local_6d8);
        FUN_140074a80(uVar12,lVar18);
        FUN_14005faa0(local_14a8);
        std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
        _Tidy_deallocate(local_1b80);
        FUN_14002efa0(local_1b60,L"RedundancyTryDirect");
        uVar12 = FUN_14006da40(local_1538,local_1b60,local_6d8);
        FUN_140075010(uVar12,lVar18 + 4);
        FUN_14005faa0(local_1538);
        std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
        _Tidy_deallocate(local_1b60);
        FUN_14002efa0(local_1b40,L"RedundancyRecheck");
        uVar12 = FUN_14006da40(local_16e8,local_1b40,local_6d8);
        FUN_140075010(uVar12,lVar18 + 5);
        FUN_14005faa0(local_16e8);
        std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
        _Tidy_deallocate(local_1b40);
        FUN_14002efa0(local_1b20,L"RedundancyRecheckTime");
        uVar12 = FUN_14006da40(local_15c8,local_1b20,local_6d8);
        FUN_140074a80(uVar12,lVar18 + 8);
        FUN_14005faa0(local_15c8);
        std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
        _Tidy_deallocate(local_1b20);
        iVar8 = *(int *)(lVar18 + 0x30);
      }
      if (iVar8 == 2) {
        FUN_14002efa0(local_1b00,L"LoadBalancingSameProxyForPid");
        uVar12 = FUN_14006da40(local_1658,local_1b00,local_6d8);
        FUN_140075010(uVar12,lVar18 + 0xc);
        FUN_14005faa0(local_1658);
        std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
        _Tidy_deallocate(local_1b00);
      }
      FUN_14005faa0(local_6d8);
    }
    FUN_14005ffc0(local_1f8);
    FUN_14002efa0(local_1ae0,L"RuleList");
    FUN_14006da40(local_1f8,local_1ae0,local_b78);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate(local_1ae0);
    lVar4 = param_2[7];
    for (lVar18 = param_2[6]; lVar18 != lVar4; lVar18 = lVar18 + 200) {
      FUN_14005ffc0(local_648);
      FUN_14002efa0(local_1ac0,L"Rule");
      FUN_14006da40(local_648,local_1ac0,local_1f8);
      std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
      _Tidy_deallocate(local_1ac0);
      FUN_140009b70(local_1aa0,"enabled");
      FUN_140074940(local_648,local_1aa0,lVar18 + 0x10);
      FUN_14000a420(local_1aa0);
      if (*(longlong *)(lVar18 + 0xa8) != 0) {
        FUN_140009b70(local_1a80,"interfaceId");
        FUN_140062820(local_648,local_1a80,lVar18 + 0x98);
        FUN_14000a420(local_1a80);
        FUN_140009b70(local_1a60,"skipIfInterfaceDown");
        FUN_140074940(local_648,local_1a60,lVar18 + 0xb8);
        FUN_14000a420(local_1a60);
      }
      FUN_14002efa0(local_1a40,L"Name");
      uVar12 = FUN_14006da40(local_1778,local_1a40,local_648);
      FUN_140074c10(uVar12,lVar18 + 8);
      FUN_14005faa0(local_1778);
      std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
      _Tidy_deallocate(local_1a40);
      cVar7 = FUN_14001d140(lVar18 + 0x60);
      if (cVar7 == '\0') {
        FUN_14002efa0(local_1a20,L"Applications");
        uVar12 = FUN_14006da40(local_1808,local_1a20,local_648);
        FUN_140074c10(uVar12,lVar18 + 0x60);
        FUN_14005faa0(local_1808);
        std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
        _Tidy_deallocate(local_1a20);
      }
      cVar7 = FUN_14001d140(lVar18 + 0x70);
      if (cVar7 == '\0') {
        FUN_14002efa0(local_1a00,L"Targets");
        uVar12 = FUN_14006da40(local_1898,local_1a00,local_648);
        FUN_140074c10(uVar12,lVar18 + 0x70);
        FUN_14005faa0(local_1898);
        std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
        _Tidy_deallocate(local_1a00);
      }
      cVar7 = FUN_14001d140(lVar18 + 0x68);
      if (cVar7 == '\0') {
        FUN_14002efa0(local_19e0,L"Ports");
        uVar12 = FUN_14006da40(local_f08,local_19e0,local_648);
        FUN_140074c10(uVar12,lVar18 + 0x68);
        FUN_14005faa0(local_f08);
        std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
        _Tidy_deallocate(local_19e0);
      }
      FUN_14005ffc0(local_438);
      FUN_14002efa0(local_19c0,L"Action");
      FUN_14006da40(local_438,local_19c0,local_648);
      std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
      _Tidy_deallocate(local_19c0);
      iVar8 = *(int *)(lVar18 + 0xbc);
      FUN_140009b70(local_2080,&DAT_14036d148);
      FUN_140074ae0(local_438,local_2080,&PTR_u_Block_14036d990 + iVar8);
      FUN_14000a420(local_2080);
      if (*(int *)(lVar18 + 0xbc) - 2U < 2) {
        FUN_1400750d0(local_438,lVar18 + 0xc0);
      }
      FUN_14005faa0(local_438);
      FUN_14005faa0(local_648);
    }
    FUN_14005faa0(local_1f8);
    FUN_14005faa0(local_168);
    FUN_14005faa0(local_d8);
    FUN_14005faa0(local_ae8);
    FUN_14005ffc0(local_318);
    FUN_14005fff0(local_318);
    FUN_14005fc30(local_318,local_b78,0);
    FUN_140003c50(local_6f8);
    puVar17 = local_25f0;
    FUN_14002efa0(local_2060,*local_25f0);
    cVar7 = FUN_140061a80(local_318,local_2060,local_6f8);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate(local_2060);
    if (cVar7 == '\0') {
      if (DAT_140412c5a == '\0') {
        uVar12 = FUN_14000bd30(local_6f8);
        uVar13 = FUN_140027440(local_26f8,L"Cannot open ",puVar17);
        uVar13 = FUN_14001d290(local_25e0,uVar13,L" to save profile.\nError: ");
        puVar17 = (undefined8 *)FUN_14001d290(local_25e8,uVar13,uVar12);
        FUN_14002c040(*puVar17,0);
        FUN_14000ccc0(local_25e8);
        FUN_14000ccc0(local_25e0);
        FUN_14000ccc0(local_26f8);
      }
      else {
        uVar12 = FUN_140048490(&PTR_vftable_1403fc718,L"Write profile error ignored.");
        local_26dc = 0;
        FUN_140048810(uVar12,&local_26dc);
      }
    }
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    _Tidy_deallocate(local_6f8);
    FUN_14005faa0(local_318);
LAB_140073eba:
    FUN_14005faa0(local_b78);
    __security_check_cookie(local_48 ^ (ulonglong)auStack_2728);
    return;
  }
  FUN_140031e10(local_468,((int)param_2[0x11] == 3) + '\x01',param_2[0x12]);
  plVar9 = (longlong *)FUN_1400ba8e0();
  if (plVar9 == (longlong *)0x0) {
LAB_140073efe:
    FUN_14000cd00(0x80004005);
LAB_140073f09:
    FUN_14000cd00(0x80004005);
  }
  else {
    local_b88[0] = (**(code **)(*plVar9 + 0x18))(plVar9);
    local_b88[0] = local_b88[0] + 0x18;
    plVar9 = (longlong *)FUN_1400ba8e0();
    if (plVar9 == (longlong *)0x0) goto LAB_140073f09;
    local_b98 = (**(code **)(*plVar9 + 0x18))(plVar9);
    local_b98 = local_b98 + 0x18;
    plVar9 = (longlong *)FUN_1400ba8e0();
    if (plVar9 != (longlong *)0x0) {
      local_b90 = (**(code **)(*plVar9 + 0x18))(plVar9);
      local_b90 = local_b90 + 0x18;
      uVar10 = 0xffffffffffffffff;
      do {
        uVar10 = uVar10 + 1;
      } while ((&DAT_14036d6b0)[uVar10] != 0);
      FUN_14000c9e0(local_b88,&DAT_14036d6b0,uVar10 & 0xffffffff);
      lVar18 = local_b88[0];
      puVar17 = (undefined8 *)(local_b88[0] + -0x18);
      local_26f0 = FUN_14000cba0(puVar17);
      local_26f0 = local_26f0 + 0x18;
      cVar7 = FUN_140031f40(local_468,&local_26f0,&local_b98,&local_b90);
      if (cVar7 != '\0') {
        local_25a8 = _DAT_14037c890;
        uStack_25a0 = _UNK_14037c898;
        local_25b8 = 0;
        FUN_140003570(&local_25b8,L"Hash");
        local_22d8 = _DAT_14037c890;
        uStack_22d0 = _UNK_14037c898;
        local_22e8[0] = 0;
        local_22c8 = 0;
        local_22c0 = 0;
        local_22c8 = FUN_140062780();
        local_22b8 = 0;
        local_22b0 = 0;
        local_22b8 = FUN_1400626a0(extraout_XMM0_Qa_17,0,0);
        local_2298 = _DAT_14037c8a0;
        uStack_2290 = _UNK_14037c8a8;
        local_22a8 = 0;
        local_2288 = 0;
        local_2280 = 0;
        local_2288 = FUN_1400626e0();
        local_2278 = 0;
        local_2270 = 0;
        local_2278 = FUN_1400626a0(extraout_XMM0_Qa_18,0,0);
        local_2268 = (undefined2 *)0x0;
        puVar15 = &local_25b8;
        if (7 < uStack_25a0) {
          puVar15 = (undefined2 *)CONCAT62(uStack_25b6,local_25b8);
        }
        FUN_140003a10(local_22e8,puVar15,local_25a8);
        local_2268 = local_9c8;
        FUN_140074c10(local_22e8,&local_b98);
        FUN_14005faa0(local_22e8);
        std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
        _Tidy_deallocate((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                          *)&local_25b8);
        LOCK();
        piVar2 = (int *)(local_b90 + -8);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 < 2) {
          (**(code **)(**(longlong **)(local_b90 + -0x18) + 8))();
        }
        LOCK();
        piVar2 = (int *)(local_b98 + -8);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 < 2) {
          (**(code **)(**(longlong **)(local_b98 + -0x18) + 8))();
        }
        LOCK();
        piVar2 = (int *)(lVar18 + -8);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 < 2) {
          (**(code **)(*(longlong *)*puVar17 + 8))((longlong *)*puVar17,puVar17);
        }
        goto LAB_14007289a;
      }
      plVar9 = (longlong *)FUN_1400ba8e0();
      if (plVar9 == (longlong *)0x0) goto LAB_140073f1f;
      local_26d0 = (**(code **)(*plVar9 + 0x18))(plVar9);
      local_26d0 = local_26d0 + 0x18;
      uVar10 = 0xffffffffffffffff;
      do {
        uVar10 = uVar10 + 1;
      } while (L"Cannot encrypt master password.\nError: "[uVar10] != L'\0');
      FUN_14000c9e0(&local_26d0,L"Cannot encrypt master password.\nError: ",uVar10 & 0xffffffff);
      lVar4 = local_26d0;
      local_26d8 = 0;
      plVar9 = (longlong *)(local_26d0 + -0x18);
      if ((longlong *)*plVar9 != (longlong *)0x0) {
        plVar11 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x20))();
      }
      if (plVar11 == (longlong *)0x0) {
        plVar11 = (longlong *)FUN_1400ba8e0();
        plVar11 = (longlong *)(**(code **)(*plVar11 + 0x20))(plVar11);
      }
      if (plVar11 != (longlong *)0x0) {
        local_26d8 = (**(code **)(*plVar11 + 0x18))(plVar11);
        lVar5 = local_b90;
        local_26d8 = local_26d8 + 0x18;
        local_26e8 = 0xfff;
        puVar1 = (undefined8 *)(local_b90 + -0x18);
        local_2708 = CONCAT44(local_2708._4_4_,*(undefined4 *)(local_b90 + -0x10));
        FUN_14000bc60(&local_26d8,lVar4,*(undefined4 *)(lVar4 + -0x10));
        lVar16 = local_26d8;
        FUN_14002c040(local_26d8,0);
        LOCK();
        piVar2 = (int *)(lVar16 + -8);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 < 2) {
          (**(code **)(**(longlong **)(lVar16 + -0x18) + 8))();
        }
        LOCK();
        piVar2 = (int *)(lVar4 + -8);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 < 2) {
          (**(code **)(*(longlong *)*plVar9 + 8))((longlong *)*plVar9,plVar9);
        }
        LOCK();
        piVar2 = (int *)(lVar5 + -8);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 < 2) {
          plVar11 = (longlong *)*puVar1;
          (**(code **)(*plVar11 + 8))(plVar11,puVar1);
        }
        LOCK();
        piVar2 = (int *)(local_b98 + -8);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 < 2) {
          (**(code **)(**(longlong **)(local_b98 + -0x18) + 8))();
        }
        LOCK();
        piVar2 = (int *)(lVar18 + -8);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 < 2) {
          (**(code **)(*(longlong *)*puVar17 + 8))((longlong *)*puVar17,puVar17);
        }
        FUN_14005faa0(local_9c8);
        FUN_14005faa0(local_a58);
        FUN_14005faa0(local_ae8);
        goto LAB_140073eba;
      }
      FUN_14000cd00(0x80004005);
      goto LAB_140073efe;
    }
  }
  FUN_14000cd00(0x80004005);
LAB_140073f1f:
  FUN_14000cd00(0x80004005);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}




// ===== CProfile::ValidateHttpProxyLastInChain =====
// Ghidra: FUN_140068a50 @ 0x140068a50
// Reject chains where an HTTP proxy is not the final hop.
// uproxe: ChainDialer.ConnectAsync (runtime) — gap filled in uproxe mapping PR
// note: Error: `"<name>": HTTP proxy server must be the last one in the chain.`
// ------------------------------------------------------------


/* WARNING: Removing unreachable block (ram,0x000140068edb) */

void FUN_140068a50(longlong *param_1,longlong *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50 [3];
  
  local_50[1] = 0xfffffffffffffffe;
  local_50[2] = DAT_1403fb930 ^ (ulonglong)auStack_98;
  plVar6 = (longlong *)0x0;
  local_68 = 0;
  lVar17 = param_1[6];
  lVar11 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(param_1[7] - lVar17),8) +
           (param_1[7] - lVar17);
  plVar14 = plVar6;
  plVar16 = plVar6;
  if (lVar11 >> 7 != lVar11 >> 0x3f) {
    do {
      iVar1 = *(int *)((longlong)plVar16 + lVar17 + 0xbc);
      if (iVar1 == 2) {
        if (*(longlong *)((longlong)plVar16 + lVar17 + 0xc0) == 0) {
          FUN_14000c600(param_2,L"Action of Rule \"%s\" doesn\'t have a correct proxy ID",
                        *(undefined8 *)((longlong)plVar14 * 200 + 8 + lVar17));
          goto LAB_140068e53;
        }
        lVar8 = param_1[1] - *param_1;
        lVar11 = lVar8 >> 0x3f;
        lVar8 = lVar8 / 0x98 + lVar11;
        if (lVar8 == lVar11) {
LAB_140068b4d:
          FUN_14000c600(param_2,L"Rule \"%s\" refers to nonexistent proxy (id = %d)",
                        *(undefined8 *)((longlong)plVar14 * 200 + 8 + lVar17),
                        *(undefined8 *)((longlong)plVar14 * 200 + 0xc0 + lVar17));
          goto LAB_140068e53;
        }
        lVar17 = param_1[6];
        piVar10 = (int *)(*param_1 + 0x40);
        plVar15 = plVar6;
        while ((longlong)*piVar10 != *(longlong *)((longlong)plVar16 + lVar17 + 0xc0)) {
          plVar15 = (longlong *)((longlong)plVar15 + 1);
          piVar10 = piVar10 + 0x26;
          if ((longlong *)(lVar8 - lVar11) <= plVar15) goto LAB_140068b4d;
        }
      }
      else if (iVar1 == 3) {
        if (*(longlong *)((longlong)plVar16 + lVar17 + 0xc0) == 0) {
          FUN_14000c600(param_2,L"Action of Rule \"%s\" doesn\'t have a correct proxy chain ID",
                        *(undefined8 *)((longlong)plVar14 * 200 + 8 + lVar17));
          goto LAB_140068e53;
        }
        bVar3 = false;
        lVar8 = param_1[4] - param_1[3];
        lVar11 = lVar8 >> 0x3f;
        lVar8 = lVar8 / 0x38 + lVar11;
        if (lVar8 != lVar11) {
          lVar17 = param_1[6];
          piVar10 = (int *)(param_1[3] + 0x34);
          plVar15 = plVar6;
          do {
            if ((longlong)*piVar10 == *(longlong *)((longlong)plVar16 + lVar17 + 0xc0)) {
              bVar3 = true;
              break;
            }
            plVar15 = (longlong *)((longlong)plVar15 + 1);
            piVar10 = piVar10 + 0xe;
          } while (plVar15 < (longlong *)(lVar8 - lVar11));
        }
        if (!bVar3) {
          FUN_14000c600(param_2,L"Rule \"%s\" refers to nonexistent proxy chain (id = %d)",
                        *(undefined8 *)((longlong)plVar14 * 200 + 8 + lVar17),
                        *(undefined8 *)((longlong)plVar14 * 200 + 0xc0 + lVar17));
          goto LAB_140068e53;
        }
      }
      plVar14 = (longlong *)((longlong)plVar14 + 1);
      plVar16 = plVar16 + 0x19;
      lVar11 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(param_1[7] - lVar17),8) +
               (param_1[7] - lVar17);
    } while (plVar14 < (longlong *)((lVar11 >> 7) - (lVar11 >> 0x3f)));
  }
  lVar17 = *param_1;
  lVar11 = (param_1[1] - lVar17) / 0x26 + (param_1[1] - lVar17 >> 0x3f);
  lVar8 = lVar11 >> 2;
  lVar11 = lVar11 >> 0x3f;
  plVar14 = (longlong *)(lVar8 - lVar11);
  if (lVar8 != lVar11) {
    piVar10 = (int *)(lVar17 + 0x40);
    plVar16 = plVar6;
    do {
      piVar9 = (int *)(lVar17 + 0x40);
      plVar15 = plVar6;
      do {
        if ((plVar15 != plVar16) && (*piVar10 == *piVar9)) {
          FUN_14000c600(param_2,L"Duplicated IDs found. Two or more proxy servers have id = %d",
                        *piVar10);
          goto LAB_140068e53;
        }
        plVar15 = (longlong *)((longlong)plVar15 + 1);
        piVar9 = piVar9 + 0x26;
      } while (plVar15 < plVar14);
      plVar16 = (longlong *)((longlong)plVar16 + 1);
      piVar10 = piVar10 + 0x26;
    } while (plVar16 < plVar14);
  }
  lVar18 = param_1[3];
  lVar13 = param_1[4] - lVar18 >> 0x3f;
  lVar12 = (param_1[4] - lVar18) / 0x38 + lVar13;
  if (lVar12 != lVar13) {
    piVar10 = (int *)(lVar18 + 0x34);
    plVar16 = plVar6;
    do {
      piVar9 = (int *)(lVar18 + 0x34);
      plVar15 = plVar6;
      do {
        if ((plVar15 != plVar16) && (*piVar10 == *piVar9)) {
          FUN_14000c600(param_2,L"Duplicated IDs found. Two or more proxy chains have id = %d",
                        *piVar10);
          goto LAB_140068e53;
        }
        plVar15 = (longlong *)((longlong)plVar15 + 1);
        piVar9 = piVar9 + 0xe;
      } while (plVar15 < (longlong *)(lVar12 - lVar13));
      plVar16 = (longlong *)((longlong)plVar16 + 1);
      piVar10 = piVar10 + 0xe;
    } while (plVar16 < (longlong *)(lVar12 - lVar13));
  }
  if (lVar12 != lVar13) {
    lVar13 = 0x18;
    uVar7 = 0xffffffffffffffff;
    plVar16 = plVar6;
    do {
      bVar3 = false;
      lVar12 = *(longlong *)(lVar13 + lVar18);
      plVar15 = plVar6;
      if (*(longlong *)(lVar13 + 8 + lVar18) - lVar12 >> 3 != 0) {
        do {
          if (lVar8 != lVar11) {
            piVar10 = (int *)(lVar17 + 0x40);
            plVar4 = plVar6;
            do {
              if (*piVar10 == *(int *)(lVar12 + (longlong)plVar15 * 8)) goto LAB_140068dc6;
              plVar4 = (longlong *)((longlong)plVar4 + 1);
              piVar10 = piVar10 + 0x26;
            } while (plVar4 < plVar14);
          }
          plVar4 = (longlong *)0xffffffff;
LAB_140068dc6:
          if ((longlong)(int)plVar4 == -1) {
            FUN_14000c600(param_2,L"Chain \"%s\" refers to nonexistent proxy (id = %d)",
                          *(undefined8 *)((longlong)plVar16 * 0x38 + 0x10 + param_1[3]),
                          *(undefined4 *)(lVar12 + (longlong)plVar15 * 8));
            goto LAB_140068e53;
          }
          if (*(char *)(lVar12 + 4 + (longlong)plVar15 * 8) != '\0') {
            if ((bVar3) && (lVar18 = param_1[3], *(int *)(lVar13 + 0x18 + lVar18) == 0)) {
              plVar14 = (longlong *)FUN_1400ba8e0();
              if (plVar14 != (longlong *)0x0) {
                local_58 = (**(code **)(*plVar14 + 0x18))(plVar14);
                local_58 = local_58 + 0x18;
                uVar5 = uVar7;
                do {
                  uVar5 = uVar5 + 1;
                } while ((&DAT_14036ae50)[uVar5] != 0);
                FUN_14000c9e0(&local_58,&DAT_14036ae50,uVar5 & 0xffffffff);
                lVar17 = local_58;
                local_50[0] = 0;
                plVar14 = (longlong *)(local_58 + -0x18);
                plVar15 = plVar6;
                if ((longlong *)*plVar14 != (longlong *)0x0) {
                  plVar15 = (longlong *)(**(code **)(*(longlong *)*plVar14 + 0x20))();
                }
                if (plVar15 == (longlong *)0x0) {
                  plVar15 = (longlong *)FUN_1400ba8e0();
                  plVar15 = (longlong *)(**(code **)(*plVar15 + 0x20))(plVar15);
                }
                if (plVar15 == (longlong *)0x0) {
LAB_14006910b:
                  FUN_14000cd00(0x80004005);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                local_50[0] = (**(code **)(*plVar15 + 0x18))();
                local_50[0] = local_50[0] + 0x18;
                local_68 = 1;
                local_78 = *(undefined4 *)
                            (*(longlong *)((longlong)plVar16 * 0x38 + lVar18 + 0x10) + -0x10);
                FUN_14000bc60(local_50,lVar17,*(undefined4 *)(lVar17 + -0x10));
                lVar11 = local_50[0];
                local_60 = 0;
                plVar16 = (longlong *)(local_50[0] + -0x18);
                if ((longlong *)*plVar16 != (longlong *)0x0) {
                  plVar6 = (longlong *)(**(code **)(*(longlong *)*plVar16 + 0x20))();
                }
                if (plVar6 == (longlong *)0x0) {
                  plVar6 = (longlong *)FUN_1400ba8e0();
                  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6);
                }
                if (plVar6 != (longlong *)0x0) {
                  local_60 = (**(code **)(*plVar6 + 0x18))(plVar6);
                  local_60 = local_60 + 0x18;
                  local_68 = 3;
                  do {
                    uVar7 = uVar7 + 1;
                  } while (L"\": HTTP proxy server must be the last one in the chain."[uVar7] !=
                           L'\0');
                  local_78 = (undefined4)uVar7;
                  FUN_14000bc60(&local_60,lVar11,*(undefined4 *)(lVar11 + -0x10));
                  lVar18 = local_60;
                  plVar6 = (longlong *)(local_60 + -0x18);
                  lVar8 = *param_2;
                  plVar15 = (longlong *)(lVar8 + -0x18);
                  if (plVar6 != plVar15) {
                    if ((*(int *)(lVar8 + -8) < 0) || (*plVar6 != *plVar15)) {
                      FUN_14000c9e0(param_2,local_60,*(undefined4 *)(local_60 + -0x10));
                    }
                    else {
                      lVar13 = FUN_14000cba0(plVar6);
                      LOCK();
                      piVar10 = (int *)(lVar8 + -8);
                      iVar1 = *piVar10;
                      *piVar10 = *piVar10 + -1;
                      UNLOCK();
                      if (iVar1 < 2) {
                        (**(code **)(*(longlong *)*plVar15 + 8))((longlong *)*plVar15,plVar15);
                      }
                      *param_2 = lVar13 + 0x18;
                    }
                  }
                  local_68 = 1;
                  LOCK();
                  piVar10 = (int *)(lVar18 + -8);
                  iVar1 = *piVar10;
                  *piVar10 = *piVar10 + -1;
                  UNLOCK();
                  if (iVar1 < 2) {
                    (**(code **)(*(longlong *)*plVar6 + 8))((longlong *)*plVar6,plVar6);
                  }
                  LOCK();
                  piVar10 = (int *)(lVar11 + -8);
                  iVar1 = *piVar10;
                  *piVar10 = *piVar10 + -1;
                  UNLOCK();
                  if (iVar1 < 2) {
                    (**(code **)(*(longlong *)*plVar16 + 8))((longlong *)*plVar16,plVar16);
                  }
                  LOCK();
                  piVar10 = (int *)(lVar17 + -8);
                  iVar1 = *piVar10;
                  *piVar10 = *piVar10 + -1;
                  UNLOCK();
                  if (iVar1 < 2) {
                    (**(code **)(*(longlong *)*plVar14 + 8))((longlong *)*plVar14,plVar14);
                  }
                  goto LAB_140068e53;
                }
                FUN_14000cd00(0x80004005);
              }
              FUN_14000cd00(0x80004005);
              goto LAB_14006910b;
            }
            if (*(int *)((longlong)(int)plVar4 * 0x98 + 0x50 + lVar17) == 3) {
              bVar3 = true;
            }
          }
          plVar15 = (longlong *)((longlong)plVar15 + 1);
          lVar18 = param_1[3];
        } while (plVar15 < (longlong *)
                           (*(longlong *)(lVar13 + 8 + lVar18) - *(longlong *)(lVar13 + lVar18) >> 3
                           ));
      }
      plVar16 = (longlong *)((longlong)plVar16 + 1);
      lVar13 = lVar13 + 0x38;
    } while (plVar16 < (longlong *)((param_1[4] - lVar18) / 0x38));
  }
LAB_140068e53:
  __security_check_cookie(local_50[2] ^ (ulonglong)auStack_98);
  return;
}




// ===== CRuleAction::ParseType =====
// Ghidra: FUN_14009dde0 @ 0x14009dde0
// Map rule action string → enum: Block=0, Direct=1, Proxy=2, Chain=3.
// uproxe: N/A (uproxe has no WFP rule engine)
// ------------------------------------------------------------


undefined8 FUN_14009dde0(undefined8 *param_1,undefined4 *param_2)

{
  short sVar1;
  short sVar2;
  code *pcVar3;
  char cVar4;
  short *psVar5;
  undefined8 uVar6;
  short *psVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (PTR_u_Block_14036d990 != (undefined *)0x0) {
    psVar7 = (short *)*param_1;
    psVar5 = psVar7;
    do {
      sVar1 = *psVar5;
      sVar2 = *(short *)((longlong)psVar5 + ((longlong)PTR_u_Block_14036d990 - (longlong)psVar7));
      if (sVar1 != sVar2) break;
      psVar5 = psVar5 + 1;
    } while (sVar2 != 0);
    if (sVar1 == sVar2) {
      *param_2 = 0;
      return 1;
    }
    if (PTR_u_Direct_14036d998 == (undefined *)0x0) goto LAB_14009def5;
    lVar9 = (longlong)PTR_u_Direct_14036d998 - (longlong)psVar7;
    psVar5 = psVar7;
    do {
      sVar1 = *psVar5;
      sVar2 = *(short *)((longlong)psVar5 + lVar9);
      if (sVar1 != sVar2) break;
      psVar5 = psVar5 + 1;
    } while (sVar2 != 0);
    if (sVar1 == sVar2) {
      *param_2 = 1;
      return 1;
    }
    if (PTR_DAT_14036d9a0 != (undefined *)0x0) {
      lVar8 = (longlong)PTR_DAT_14036d9a0 - (longlong)psVar7;
      do {
        sVar1 = *psVar7;
        sVar2 = *(short *)((longlong)psVar7 + lVar8);
        if (sVar1 != sVar2) break;
        psVar7 = psVar7 + 1;
      } while (sVar2 != 0);
      if (sVar1 == sVar2) {
        *param_2 = 2;
        return 1;
      }
      cVar4 = FUN_140031dc0(param_1,PTR_u_Chain_14036d9a8,lVar8,lVar9,0xfffffffffffffffe);
      if (cVar4 != '\0') {
        *param_2 = 3;
        return 1;
      }
      return 0;
    }
    FUN_14000cd00(0x80004005);
  }
  FUN_14000cd00(0x80004005);
LAB_14009def5:
  FUN_14000cd00(0x80004005);
  pcVar3 = (code *)swi(3);
  uVar6 = (*pcVar3)();
  return uVar6;
}




// ===== CRuleAction::FormatType =====
// Ghidra: FUN_14009df00 @ 0x14009df00
// Format rule action enum back to display/XML string.
// uproxe: N/A
// ------------------------------------------------------------


/* WARNING: Removing unreachable block (ram,0x00014009dfa9) */

void FUN_14009df00(undefined8 *param_1,longlong *param_2,longlong *param_3,char param_4)

{
  int iVar1;
  short sVar2;
  short sVar3;
  undefined *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  short *psVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  int *piVar16;
  uint uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  uint local_118;
  undefined2 local_114 [2];
  uint local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  undefined8 *local_f0;
  longlong *local_e8;
  undefined8 *local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  ulonglong local_90;
  longlong local_88;
  longlong local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_70 = 0xfffffffffffffffe;
  local_40 = DAT_1403fb930 ^ (ulonglong)auStack_148;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_118 = 1;
  local_f0 = param_1;
  local_e8 = param_3;
  local_a8 = param_2;
  local_68 = param_1;
  local_60 = param_2;
  local_58 = param_3;
  plVar8 = (longlong *)FUN_1400ba8e0();
  if (plVar8 != (longlong *)0x0) {
    local_48 = (**(code **)(*plVar8 + 0x18))(plVar8);
    local_48 = local_48 + 0x18;
    uVar9 = 0xffffffffffffffff;
    do {
      uVar9 = uVar9 + 1;
    } while ((&DAT_1403619d0)[uVar9] != 0);
    FUN_14000c9e0(&local_48,&DAT_1403619d0,uVar9 & 0xffffffff);
    if (param_4 != '\0') {
      uVar9 = 0xffffffffffffffff;
      do {
        uVar9 = uVar9 + 1;
      } while ((&DAT_14035cc3c)[uVar9] != 0);
      FUN_14000c9e0(&local_48,&DAT_14035cc3c,uVar9 & 0xffffffff);
    }
    uVar9 = 0;
    uVar17 = 1;
    if ((local_e8[1] - *local_e8) / 0x38 != 0) {
      lVar20 = 0;
      do {
        puVar4 = PTR_u_Chain_14036d9a8;
        lVar15 = *local_e8;
        local_110 = uVar17;
        plVar8 = (longlong *)FUN_1400ba8e0();
        if (plVar8 == (longlong *)0x0) goto LAB_14009eace;
        local_d8 = (**(code **)(*plVar8 + 0x18))(plVar8);
        local_d8 = local_d8 + 0x18;
        if (puVar4 == (undefined *)0x0) {
          uVar19 = 0;
LAB_14009e093:
          FUN_14000c9e0(&local_d8,puVar4,uVar19 & 0xffffffff);
        }
        else {
          if ((undefined *)0xffff < puVar4) {
            uVar19 = 0xffffffffffffffff;
            do {
              uVar19 = uVar19 + 1;
            } while (*(short *)(puVar4 + uVar19 * 2) != 0);
            goto LAB_14009e093;
          }
          FUN_14000c230(&local_d8,(ulonglong)puVar4 & 0xffff);
        }
        lVar11 = local_d8;
        local_d0 = 0;
        plVar8 = (longlong *)(local_d8 + -0x18);
        if ((longlong *)*plVar8 == (longlong *)0x0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = (longlong *)(**(code **)(*(longlong *)*plVar8 + 0x20))();
        }
        if (plVar10 == (longlong *)0x0) {
          plVar10 = (longlong *)FUN_1400ba8e0();
          plVar10 = (longlong *)(**(code **)(*plVar10 + 0x20))(plVar10);
        }
        if (plVar10 == (longlong *)0x0) goto LAB_14009eac3;
        local_d0 = (**(code **)(*plVar10 + 0x18))(plVar10);
        local_d0 = local_d0 + 0x18;
        local_118 = uVar17 | 8;
        local_128 = *(undefined4 *)(local_48 + -0x10);
        FUN_14000bc60(&local_d0,lVar11,*(undefined4 *)(lVar11 + -0x10));
        lVar14 = local_d0;
        local_50 = 0;
        if (*(longlong **)(local_d0 + -0x18) == (longlong *)0x0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = (longlong *)(**(code **)(**(longlong **)(local_d0 + -0x18) + 0x20))();
        }
        if (plVar10 == (longlong *)0x0) {
          plVar10 = (longlong *)FUN_1400ba8e0();
          plVar10 = (longlong *)(**(code **)(*plVar10 + 0x20))(plVar10);
        }
        if (plVar10 == (longlong *)0x0) goto LAB_14009eab8;
        local_50 = (**(code **)(*plVar10 + 0x18))(plVar10);
        local_50 = local_50 + 0x18;
        local_128 = *(undefined4 *)(*(longlong *)(lVar15 + 0x10 + lVar20) + -0x10);
        local_118 = uVar17 | 0x18;
        FUN_14000bc60(&local_50,lVar14,*(undefined4 *)(lVar14 + -0x10));
        local_118 = (uVar17 | 0x18) & 0xfffffff7;
        LOCK();
        piVar16 = (int *)(lVar14 + -8);
        iVar1 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar1 < 2) {
          (**(code **)(**(longlong **)(lVar14 + -0x18) + 8))
                    (*(longlong **)(lVar14 + -0x18),lVar14 + -0x18);
        }
        LOCK();
        piVar16 = (int *)(lVar11 + -8);
        iVar1 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar1 < 2) {
          (**(code **)(*(longlong *)*plVar8 + 8))((longlong *)*plVar8,plVar8);
        }
        if (*(longlong *)(*local_e8 + 0x18 + lVar20) == *(longlong *)(*local_e8 + 0x20 + lVar20)) {
          FUN_14000bd40(&local_50,&DAT_140374990,8);
        }
        lVar15 = local_50;
        puVar18 = local_f0;
        plVar8 = (longlong *)local_f0[1];
        if ((longlong *)local_f0[2] == plVar8) {
          FUN_140053080(local_f0,plVar8,&local_50);
          lVar15 = local_50;
        }
        else {
          lVar11 = FUN_14000cba0(local_50 + -0x18);
          *plVar8 = lVar11 + 0x18;
          puVar18[1] = puVar18[1] + 8;
        }
        local_118 = local_110;
        LOCK();
        piVar16 = (int *)(lVar15 + -8);
        iVar1 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar1 < 2) {
          (**(code **)(**(longlong **)(lVar15 + -0x18) + 8))();
        }
        uVar9 = uVar9 + 1;
        lVar20 = lVar20 + 0x38;
        uVar17 = local_118;
      } while (uVar9 < (ulonglong)((local_e8[1] - *local_e8) / 0x38));
    }
    bVar6 = false;
    uVar9 = 0;
    lVar20 = local_a8[1];
    lVar15 = *local_a8;
    lVar11 = lVar20 - lVar15 >> 0x3f;
    if ((lVar20 - lVar15) / 0x98 + lVar11 != lVar11) {
      piVar16 = (int *)(lVar15 + 0x50);
      do {
        if (bVar6) break;
        uVar19 = 0;
        lVar11 = lVar20 - lVar15 >> 0x3f;
        if ((lVar20 - lVar15) / 0x98 + lVar11 != lVar11) {
          puVar18 = (undefined8 *)(lVar15 + 0x30);
          do {
            if (bVar6) break;
            if ((uVar9 != uVar19) && (*(int *)(puVar18[3] + -0x10) == 0)) {
              if (*(longlong *)(piVar16 + -8) == 0) goto LAB_14009ead9;
              psVar12 = (short *)*puVar18;
              lVar20 = *(longlong *)(piVar16 + -8) - (longlong)psVar12;
              do {
                sVar2 = *psVar12;
                sVar3 = *(short *)((longlong)psVar12 + lVar20);
                if (sVar2 != sVar3) break;
                psVar12 = psVar12 + 1;
              } while (sVar3 != 0);
              if ((sVar2 == sVar3) && (*(int *)(puVar18 + 4) == *piVar16)) {
                bVar6 = true;
              }
            }
            uVar19 = uVar19 + 1;
            puVar18 = puVar18 + 0x13;
            lVar20 = local_a8[1];
          } while (uVar19 < (ulonglong)((lVar20 - lVar15) / 0x98));
        }
        uVar9 = uVar9 + 1;
        piVar16 = piVar16 + 0x26;
      } while (uVar9 < (ulonglong)((lVar20 - lVar15) / 0x98));
    }
    local_90 = 0;
    if ((lVar20 - lVar15) / 0x98 != 0) {
      local_88 = 0;
      do {
        lVar20 = local_88;
        if ((bVar6) || (*(int *)(*(longlong *)(*local_a8 + 0x48 + local_88) + -0x10) != 0)) {
          local_a0 = (longlong *)
                     (**(code **)(*(longlong *)(*local_a8 + local_88) + 0x10))
                               ((longlong *)(*local_a8 + local_88),&local_80,0);
          uVar17 = uVar17 | 4;
        }
        else {
          local_98 = FUN_14000cba0(*(longlong *)(*local_a8 + 0x28 + local_88) + -0x18);
          local_98 = local_98 + 0x18;
          local_a0 = &local_98;
          uVar17 = uVar17 | 0x22;
        }
        puVar7 = PTR_DAT_14036d9a0;
        plVar10 = (longlong *)0x0;
        puVar4 = (&PTR_u_SOCKS5_1403fc678)[*(int *)(*local_a8 + 0x50 + lVar20)];
        local_118 = uVar17;
        local_110 = uVar17;
        plVar8 = (longlong *)FUN_1400ba8e0();
        if (plVar8 == (longlong *)0x0) goto LAB_14009eb1b;
        local_c8 = (**(code **)(*plVar8 + 0x18))(plVar8);
        local_c8 = local_c8 + 0x18;
        if (puVar7 == (undefined *)0x0) {
          uVar9 = 0;
LAB_14009e4ef:
          FUN_14000c9e0(&local_c8,puVar7,uVar9 & 0xffffffff);
        }
        else {
          if ((undefined *)0xffff < puVar7) {
            uVar9 = 0xffffffffffffffff;
            do {
              uVar9 = uVar9 + 1;
            } while (*(short *)(puVar7 + uVar9 * 2) != 0);
            goto LAB_14009e4ef;
          }
          FUN_14000c230(&local_c8,(ulonglong)puVar7 & 0xffff);
        }
        lVar20 = local_c8;
        local_c0 = 0;
        local_e0 = (undefined8 *)(local_c8 + -0x18);
        plVar8 = plVar10;
        if (*(longlong **)(local_c8 + -0x18) != (longlong *)0x0) {
          plVar8 = (longlong *)(**(code **)(**(longlong **)(local_c8 + -0x18) + 0x20))();
        }
        if (plVar8 == (longlong *)0x0) {
          plVar8 = (longlong *)FUN_1400ba8e0();
          plVar8 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8);
        }
        if (plVar8 == (longlong *)0x0) goto LAB_14009eb10;
        local_c0 = (**(code **)(*plVar8 + 0x18))(plVar8);
        local_c0 = local_c0 + 0x18;
        local_118 = uVar17 | 0x40;
        local_114[0] = 0x20;
        local_128 = 1;
        FUN_14000bc60(&local_c0,lVar20,*(undefined4 *)(lVar20 + -0x10),local_114);
        lVar20 = local_c0;
        local_b8 = 0;
        local_78 = (undefined8 *)(local_c0 + -0x18);
        plVar8 = plVar10;
        if (*(longlong **)(local_c0 + -0x18) != (longlong *)0x0) {
          plVar8 = (longlong *)(**(code **)(**(longlong **)(local_c0 + -0x18) + 0x20))();
        }
        if (plVar8 == (longlong *)0x0) {
          plVar8 = (longlong *)FUN_1400ba8e0();
          plVar8 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8);
        }
        if (plVar8 == (longlong *)0x0) goto LAB_14009eb05;
        local_b8 = (**(code **)(*plVar8 + 0x18))(plVar8);
        local_b8 = local_b8 + 0x18;
        local_118 = uVar17 | 0xc0;
        if (puVar4 == (undefined *)0x0) {
          lVar15 = 0;
        }
        else {
          lVar15 = -1;
          do {
            lVar15 = lVar15 + 1;
          } while (*(short *)(puVar4 + lVar15 * 2) != 0);
        }
        local_128 = (undefined4)lVar15;
        FUN_14000bc60(&local_b8,lVar20,*(undefined4 *)(lVar20 + -0x10),puVar4);
        lVar20 = local_b8;
        local_b0 = 0;
        plVar8 = (longlong *)(local_b8 + -0x18);
        if ((longlong *)*plVar8 != (longlong *)0x0) {
          plVar10 = (longlong *)(**(code **)(*(longlong *)*plVar8 + 0x20))();
        }
        if (plVar10 == (longlong *)0x0) {
          plVar10 = (longlong *)FUN_1400ba8e0();
          plVar10 = (longlong *)(**(code **)(*plVar10 + 0x20))(plVar10);
        }
        if (plVar10 == (longlong *)0x0) goto LAB_14009eafa;
        local_b0 = (**(code **)(*plVar10 + 0x18))(plVar10);
        local_b0 = local_b0 + 0x18;
        local_118 = uVar17 | 0x1c0;
        local_128 = *(undefined4 *)(local_48 + -0x10);
        FUN_14000bc60(&local_b0,lVar20,*(undefined4 *)(lVar20 + -0x10));
        lVar15 = local_b0;
        local_108 = 0;
        plVar10 = (longlong *)(local_b0 + -0x18);
        if ((longlong *)*plVar10 == (longlong *)0x0) {
          plVar13 = (longlong *)0x0;
        }
        else {
          plVar13 = (longlong *)(**(code **)(*(longlong *)*plVar10 + 0x20))();
        }
        if (plVar13 == (longlong *)0x0) {
          plVar13 = (longlong *)FUN_1400ba8e0();
          plVar13 = (longlong *)(**(code **)(*plVar13 + 0x20))(plVar13);
        }
        if (plVar13 == (longlong *)0x0) goto LAB_14009eaef;
        local_108 = (**(code **)(*plVar13 + 0x18))(plVar13);
        local_108 = local_108 + 0x18;
        uVar17 = uVar17 | 0x3c0;
        local_128 = *(undefined4 *)(*local_a0 + -0x10);
        local_118 = uVar17;
        FUN_14000bc60(&local_108,lVar15,*(undefined4 *)(lVar15 + -0x10));
        lVar11 = local_108;
        plVar13 = (longlong *)local_f0[1];
        if ((longlong *)local_f0[2] == plVar13) {
          FUN_140053080(local_f0,plVar13,&local_108);
          lVar11 = local_108;
        }
        else {
          lVar14 = FUN_14000cba0(local_108 + -0x18);
          *plVar13 = lVar14 + 0x18;
          local_f0[1] = local_f0[1] + 8;
        }
        local_118 = uVar17 & 0xfffffdff;
        LOCK();
        piVar16 = (int *)(lVar11 + -8);
        iVar1 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar1 < 2) {
          (**(code **)(**(longlong **)(lVar11 + -0x18) + 8))();
        }
        local_118 = uVar17 & 0xfffffcff;
        LOCK();
        piVar16 = (int *)(lVar15 + -8);
        iVar1 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar1 < 2) {
          (**(code **)(*(longlong *)*plVar10 + 8))((longlong *)*plVar10,plVar10);
        }
        local_118 = uVar17 & 0xfffffc7f;
        LOCK();
        piVar16 = (int *)(lVar20 + -8);
        iVar1 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar1 < 2) {
          (**(code **)(*(longlong *)*plVar8 + 8))((longlong *)*plVar8,plVar8);
        }
        local_118 = local_110 & 0xfffffc3f;
        LOCK();
        piVar16 = (int *)(local_78 + 2);
        iVar1 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar1 < 2) {
          (**(code **)(*(longlong *)*local_78 + 8))();
        }
        LOCK();
        piVar16 = (int *)(local_e0 + 2);
        iVar1 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar1 < 2) {
          (**(code **)(*(longlong *)*local_e0 + 8))();
        }
        if ((local_118 & 4) != 0) {
          local_118 = local_118 & 0xfffffffb;
          LOCK();
          piVar16 = (int *)(local_80 + -8);
          iVar1 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar1 < 2) {
            (**(code **)(**(longlong **)(local_80 + -0x18) + 8))();
          }
        }
        if ((local_118 & 2) != 0) {
          local_118 = local_118 & 0xfffffffd;
          LOCK();
          piVar16 = (int *)(local_98 + -8);
          iVar1 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar1 < 2) {
            (**(code **)(**(longlong **)(local_98 + -0x18) + 8))();
          }
        }
        local_90 = local_90 + 1;
        local_88 = local_88 + 0x98;
        uVar17 = local_118;
      } while (local_90 < (ulonglong)((local_a8[1] - *local_a8) / 0x98));
    }
    plVar8 = local_a8;
    puVar4 = PTR_u_Direct_14036d998;
    plVar10 = (longlong *)FUN_1400ba8e0();
    if (plVar10 == (longlong *)0x0) goto LAB_14009eae4;
    local_100 = (**(code **)(*plVar10 + 0x18))(plVar10);
    local_100 = local_100 + 0x18;
    if (puVar4 == (undefined *)0x0) {
      uVar9 = 0;
LAB_14009e91e:
      FUN_14000c9e0(&local_100,puVar4,uVar9 & 0xffffffff);
    }
    else {
      if ((undefined *)0xffff < puVar4) {
        uVar9 = 0xffffffffffffffff;
        do {
          uVar9 = uVar9 + 1;
        } while (*(short *)(puVar4 + uVar9 * 2) != 0);
        goto LAB_14009e91e;
      }
      FUN_14000c230(&local_100,(ulonglong)puVar4 & 0xffff);
    }
    puVar18 = local_f0;
    lVar20 = local_100;
    plVar10 = (longlong *)local_f0[1];
    if ((longlong *)local_f0[2] == plVar10) {
      FUN_140053080(local_f0,plVar10,&local_100);
      lVar20 = local_100;
    }
    else {
      lVar15 = FUN_14000cba0(local_100 + -0x18);
      *plVar10 = lVar15 + 0x18;
      puVar18[1] = puVar18[1] + 8;
    }
    LOCK();
    piVar16 = (int *)(lVar20 + -8);
    iVar1 = *piVar16;
    *piVar16 = *piVar16 + -1;
    UNLOCK();
    if (iVar1 < 2) {
      (**(code **)(**(longlong **)(lVar20 + -0x18) + 8))();
    }
    puVar4 = PTR_u_Block_14036d990;
    plVar10 = (longlong *)FUN_1400ba8e0();
    if (plVar10 != (longlong *)0x0) {
      local_f8 = (**(code **)(*plVar10 + 0x18))(plVar10);
      local_f8 = local_f8 + 0x18;
      if (puVar4 == (undefined *)0x0) {
        uVar9 = 0;
      }
      else {
        if (puVar4 < (undefined *)0x10000) {
          FUN_14000c230(&local_f8,(ulonglong)puVar4 & 0xffff);
          goto LAB_14009e9f0;
        }
        uVar9 = 0xffffffffffffffff;
        do {
          uVar9 = uVar9 + 1;
        } while (*(short *)(puVar4 + uVar9 * 2) != 0);
      }
      FUN_14000c9e0(&local_f8,puVar4,uVar9 & 0xffffffff);
LAB_14009e9f0:
      lVar20 = local_f8;
      plVar10 = (longlong *)puVar18[1];
      if ((longlong *)puVar18[2] == plVar10) {
        FUN_140053080(puVar18,plVar10,&local_f8);
        lVar20 = local_f8;
      }
      else {
        lVar15 = FUN_14000cba0(local_f8 + -0x18);
        *plVar10 = lVar15 + 0x18;
        puVar18[1] = puVar18[1] + 8;
      }
      LOCK();
      piVar16 = (int *)(lVar20 + -8);
      iVar1 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar1 < 2) {
        (**(code **)(**(longlong **)(lVar20 + -0x18) + 8))();
      }
      LOCK();
      piVar16 = (int *)(local_48 + -8);
      iVar1 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar1 < 2) {
        (**(code **)(**(longlong **)(local_48 + -0x18) + 8))();
      }
      FUN_14001f3e0(plVar8);
      FUN_14001f280(local_e8);
      __security_check_cookie(local_40 ^ (ulonglong)auStack_148);
      return;
    }
    FUN_14000cd00(0x80004005);
  }
  FUN_14000cd00(0x80004005);
LAB_14009eab8:
  FUN_14000cd00(0x80004005);
LAB_14009eac3:
  FUN_14000cd00(0x80004005);
LAB_14009eace:
  FUN_14000cd00(0x80004005);
LAB_14009ead9:
  FUN_14000cd00(0x80004005);
LAB_14009eae4:
  FUN_14000cd00(0x80004005);
LAB_14009eaef:
  FUN_14000cd00(0x80004005);
LAB_14009eafa:
  FUN_14000cd00(0x80004005);
LAB_14009eb05:
  FUN_14000cd00(0x80004005);
LAB_14009eb10:
  FUN_14000cd00(0x80004005);
LAB_14009eb1b:
  FUN_14000cd00(0x80004005);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}




