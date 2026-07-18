/* Extracted from Proxifier.exe (Ghidra). Proxy chain logic subset. */

// ----- FUN_1400b36c0 @ 1400b36c0 -----

void FUN_1400b36c0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  DWORD DVar7;
  DWORD DVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  char *pcVar18;
  undefined8 uVar19;
  longlong **pplVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  longlong lVar23;
  wchar_t *pwVar24;
  ulonglong uVar25;
  uint *puVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined1 auStack_2d8 [32];
  longlong local_2b8;
  uint local_2a8;
  uint *local_2a0;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined1 *local_280;
  undefined8 *local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  undefined8 *local_238;
  undefined8 *local_230;
  longlong *local_228;
  longlong local_220;
  undefined8 *local_218;
  undefined8 local_210;
  undefined1 *local_208;
  longlong local_1f8 [2];
  longlong local_1e8;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  int iStack_1d0;
  undefined4 uStack_1cc;
  longlong local_1c8 [2];
  longlong local_1b8;
  longlong local_1b0 [2];
  longlong local_1a0;
  uint local_198;
  uint uStack_194;
  uint uStack_190;
  uint uStack_18c;
  longlong local_188;
  undefined1 local_180 [24];
  uint local_168;
  uint local_164;
  undefined1 local_160 [24];
  undefined1 local_148 [24];
  undefined1 local_130 [56];
  undefined1 local_f8 [56];
  longlong *local_c0;
  longlong *local_b8;
  longlong *plStack_b0;
  longlong *local_a8;
  undefined4 local_a0 [2];
  longlong local_98;
  undefined4 local_90 [2];
  longlong local_88 [2];
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_210 = 0xfffffffffffffffe;
  local_48 = DAT_1403fb930 ^ (ulonglong)auStack_2d8;
  lVar17 = param_1[1];
  iVar9 = *(int *)(lVar17 + 0xbc);
  local_298 = param_3;
  local_278 = param_2;
  if (iVar9 == 0) goto LAB_1400b47aa;
  local_b8 = (longlong *)0x0;
  plStack_b0 = (longlong *)0x0;
  uVar21 = 0;
  local_a8 = (longlong *)0x0;
  local_2a0 = (uint *)0x0;
  local_2a8 = 0;
  uVar25 = 0xffffffffffffffff;
  uVar28 = uVar21;
  if (iVar9 == 2) {
    lVar2 = *(longlong *)*param_1;
    lVar23 = ((longlong *)*param_1)[1] - lVar2;
    lVar4 = lVar23 >> 0x3f;
    lVar23 = lVar23 / 0x98 + lVar4;
    uVar12 = uVar25;
    if (lVar23 != lVar4) {
      piVar11 = (int *)(lVar2 + 0x40);
      uVar27 = uVar21;
      do {
        if (*piVar11 == *(int *)(lVar17 + 0xc0)) {
          if ((int)uVar27 != -1) {
            local_260 = (longlong)(int)uVar27 * 0x98 + lVar2;
            FUN_14008bd80(&local_b8,0,&local_260);
            goto LAB_1400b3a44;
          }
          break;
        }
        uVar27 = uVar27 + 1;
        piVar11 = piVar11 + 0x26;
      } while (uVar27 < (ulonglong)(lVar23 - lVar4));
    }
    do {
      uVar12 = uVar12 + 1;
    } while (L"Proxy with ID "[uVar12] != L'\0');
    FUN_14000bd40(param_1 + 4,L"Proxy with ID ",uVar12 & 0xffffffff);
    uVar13 = FUN_1400b0630(param_1 + 4,*(undefined4 *)(param_1[1] + 0xc0));
    do {
      uVar25 = uVar25 + 1;
    } while (L" not found."[uVar25] != L'\0');
    FUN_14000bd40(uVar13,L" not found.",uVar25 & 0xffffffff);
    plVar16 = local_b8;
    goto LAB_1400b4767;
  }
  if (iVar9 == 3) {
    lVar2 = *param_1;
    iVar9 = FUN_14008bbf0(lVar2 + 0x18,*(undefined4 *)(lVar17 + 0xc0));
    puVar26 = (uint *)((longlong)iVar9 * 0x38 + *(longlong *)(lVar2 + 0x18));
    FUN_14008bc40(puVar26,local_1c8,lVar2);
    FUN_1400b70a0(&local_b8);
    if (local_1c8[0] != 0) {
      if ((0xfff < (ulonglong)((local_1b8 - local_1c8[0] >> 3) * 8)) &&
         (0x1f < (local_1c8[0] - *(longlong *)(local_1c8[0] + -8)) - 8U)) goto LAB_1400b4962;
      FUN_14000c6f0();
    }
    plVar16 = local_b8;
    uVar1 = puVar26[0xc];
    param_3 = local_298;
    if (uVar1 != 0) {
      if (uVar1 == 1) {
        if ((local_b8 == plStack_b0) && ((char)puVar26[1] == '\0')) {
          if (*(longlong *)(puVar26 + 8) - *(longlong *)(puVar26 + 6) >> 3 != 0) {
            do {
              *(undefined1 *)(*(longlong *)(puVar26 + 6) + 5 + uVar28 * 8) = 0;
              uVar28 = uVar28 + 1;
            } while (uVar28 < (ulonglong)
                              (*(longlong *)(puVar26 + 8) - *(longlong *)(puVar26 + 6) >> 3));
          }
          local_280 = local_160;
          uVar13 = FUN_14001efc0(local_160,*param_1);
          uVar19 = FUN_1400203d0(local_f8,puVar26);
          FUN_1400b5e00(uVar19,0xffffffff,uVar13,1);
          uVar13 = FUN_14008bc40(puVar26,local_1b0,*param_1);
          FUN_1400b70a0(&local_b8,uVar13);
          if (local_1b0[0] != 0) {
            uVar28 = (local_1a0 - local_1b0[0] >> 3) * 8;
            if (0xfff < uVar28) {
              if (0x1f < (local_1b0[0] - *(longlong *)(local_1b0[0] + -8)) - 8U) {
                FUN_14027fb0c(*(longlong *)(local_1b0[0] + -8),uVar28 + 0x27);
LAB_1400b496e:
                FUN_14027fb0c();
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            FUN_14000c6f0();
          }
        }
        local_2a8 = *puVar26;
        uVar28 = (ulonglong)local_2a8;
        local_2a0 = puVar26;
        if (local_b8 == plStack_b0) goto LAB_1400b47db;
        plVar16 = (longlong *)
                  (**(code **)(*(longlong *)*local_b8 + 0x10))((longlong *)*local_b8,&local_250,0);
        lVar17 = *plVar16;
        lVar2 = param_1[6];
        plVar16 = (longlong *)(lVar2 + -0x18);
        if ((longlong *)(lVar17 + -0x18) != plVar16) {
          if ((*(int *)(lVar2 + -8) < 0) || (*(longlong *)(lVar17 + -0x18) != *plVar16)) {
            FUN_14000c9e0(param_1 + 6,lVar17,*(undefined4 *)(lVar17 + -0x10));
          }
          else {
            lVar17 = FUN_14000cba0();
            LOCK();
            piVar11 = (int *)(lVar2 + -8);
            iVar9 = *piVar11;
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (iVar9 < 2) {
              (**(code **)(*(longlong *)*plVar16 + 8))((longlong *)*plVar16,plVar16);
            }
            param_1[6] = lVar17 + 0x18;
          }
        }
        LOCK();
        piVar11 = (int *)(local_250 + -8);
        iVar9 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        param_3 = local_298;
        if (iVar9 < 2) {
          (**(code **)(**(longlong **)(local_250 + -0x18) + 8))();
          param_3 = local_298;
        }
      }
      else {
        if (uVar1 != 2) {
          do {
            uVar25 = uVar25 + 1;
          } while (L"Unknown chain type"[uVar25] != L'\0');
          FUN_14000bd40(param_1 + 4,L"Unknown chain type",uVar25 & 0xffffffff);
          plVar16 = local_b8;
          goto LAB_1400b4767;
        }
        uVar28 = (longlong)plStack_b0 - (longlong)local_b8 >> 3;
        if (1 < uVar28) {
          if ((char)puVar26[3] == '\0') {
            DVar7 = GetCurrentThreadId();
            DVar8 = GetTickCount();
            iVar9 = DVar8 + DVar7;
          }
          else {
            iVar9 = *(int *)((longlong)param_1 + 0x2c);
          }
          FUN_1402882a4(iVar9);
          iVar9 = FUN_140288278();
          local_c0 = (longlong *)plVar16[(ulonglong)(longlong)iVar9 % uVar28];
          plStack_b0 = plVar16;
          if (local_a8 == plVar16) {
            FUN_14008bd80(&local_b8,plVar16,&local_c0);
          }
          else {
            *plVar16 = (longlong)local_c0;
            plStack_b0 = plVar16 + 1;
          }
          plVar16 = (longlong *)(**(code **)(*local_c0 + 0x10))(local_c0,&local_258,0);
          lVar17 = *plVar16;
          lVar2 = param_1[6];
          plVar16 = (longlong *)(lVar2 + -0x18);
          if ((longlong *)(lVar17 + -0x18) != plVar16) {
            if ((*(int *)(lVar2 + -8) < 0) || (*(longlong *)(lVar17 + -0x18) != *plVar16)) {
              FUN_14000c9e0(param_1 + 6,lVar17,*(undefined4 *)(lVar17 + -0x10));
            }
            else {
              lVar17 = FUN_14000cba0();
              LOCK();
              piVar11 = (int *)(lVar2 + -8);
              iVar9 = *piVar11;
              *piVar11 = *piVar11 + -1;
              UNLOCK();
              if (iVar9 < 2) {
                (**(code **)(*(longlong *)*plVar16 + 8))((longlong *)*plVar16,plVar16);
              }
              param_1[6] = lVar17 + 0x18;
            }
          }
          LOCK();
          piVar11 = (int *)(local_258 + -8);
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 < 2) {
            (**(code **)(**(longlong **)(local_258 + -0x18) + 8))();
          }
        }
        param_3 = local_298;
        uVar28 = (ulonglong)local_2a8;
      }
    }
LAB_1400b3a44:
    if (local_b8 == plStack_b0) goto LAB_1400b47db;
    while (plVar16 = local_b8, cVar6 = FUN_1400b5260(param_1,*local_b8,param_3,uVar28),
          cVar6 == '\0') {
      plVar14 = (longlong *)FUN_1400ba8e0();
      if (plVar14 == (longlong *)0x0) {
LAB_1400b497a:
        FUN_14000cd00(0x80004005);
        goto LAB_1400b4985;
      }
      local_98 = (**(code **)(*plVar14 + 0x18))(plVar14);
      local_98 = local_98 + 0x18;
      if (*(int *)(*plVar16 + 0x14) == 0x17) {
        FUN_14000c9e0(&local_98,&DAT_14035e440,7);
      }
      lVar17 = local_98;
      plVar14 = param_1 + 4;
      local_228 = plVar14;
      puVar15 = (undefined8 *)FUN_14000cba0(*plVar14 + -0x18);
      local_68 = puVar15 + 3;
      FUN_14000c7d0(plVar14);
      FUN_14000bd40(plVar14,L"Could not connect to proxy ",0x1b);
      plVar16 = (longlong *)
                (**(code **)(*(longlong *)*plVar16 + 0x10))((longlong *)*plVar16,&local_248,1);
      FUN_14000bd40(plVar14,*plVar16,*(undefined4 *)(*plVar16 + -0x10));
      local_230 = (undefined8 *)(lVar17 + -0x18);
      FUN_14000bd40(plVar14,lVar17,*(undefined4 *)(lVar17 + -0x10));
      FUN_14000bd40(plVar14,&DAT_14035e450,3);
      local_238 = puVar15;
      FUN_14000bd40(plVar14,puVar15 + 3,*(undefined4 *)(puVar15 + 1));
      LOCK();
      piVar11 = (int *)(local_248 + -8);
      iVar9 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar9 < 2) {
        (**(code **)(**(longlong **)(local_248 + -0x18) + 8))();
      }
      puVar26 = local_2a0;
      if (local_2a0 == (uint *)0x0) goto LAB_1400b4379;
      if ((DAT_1403fc710 <= DAT_140412c34) || (DAT_1403fc710 <= DAT_140412c30)) {
                    /* WARNING: Load size is inaccurate */
        uVar28 = uVar25;
        do {
          uVar28 = uVar28 + 1;
        } while (((wchar_t *)(*ThreadLocalStoragePointer + 0x20))[uVar28] != L'\0');
        wcsncat_s((wchar_t *)(*ThreadLocalStoragePointer + 0x20),0x3e9,L"(Redundancy Chain) ",
                  ~uVar28 + 1000);
      }
      lVar17 = FUN_140048490(&PTR_vftable_1403fc700,*(undefined8 *)(puVar26 + 4));
      if ((*(int *)(lVar17 + 0x10) <= DAT_140412c34) || (*(int *)(lVar17 + 0x10) <= DAT_140412c30))
      {
                    /* WARNING: Load size is inaccurate */
        uVar28 = uVar25;
        do {
          uVar28 = uVar28 + 1;
        } while (((wchar_t *)(*ThreadLocalStoragePointer + 0x20))[uVar28] != L'\0');
        wcsncat_s((wchar_t *)(*ThreadLocalStoragePointer + 0x20),0x3e9,L" - ",~uVar28 + 1000);
      }
      puVar15 = (undefined8 *)FUN_14000cba0(param_1[4] + -0x18);
      local_218 = puVar15 + 3;
      FUN_14000c7d0(param_1 + 4);
      uVar13 = FUN_140048490(lVar17,puVar15 + 3);
      local_290 = 0;
      FUN_140048810(uVar13,&local_290);
      LOCK();
      piVar11 = (int *)(puVar15 + 2);
      iVar9 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar9 < 2) {
        (**(code **)(*(longlong *)*puVar15 + 8))();
      }
      plVar16 = local_b8;
      lVar17 = *(longlong *)(puVar26 + 6);
      uVar28 = *(longlong *)(puVar26 + 8) - lVar17 >> 3;
      if (uVar28 != 0) {
        pcVar18 = (char *)(lVar17 + 5);
        uVar12 = uVar21;
        do {
          if ((pcVar18[-1] != '\0') && (*pcVar18 != '\x01')) {
            *(undefined1 *)(lVar17 + 5 + uVar12 * 8) = 1;
            local_208 = local_148;
            uVar13 = FUN_14001efc0(local_148,*param_1);
            uVar19 = FUN_1400203d0(local_130,local_2a0);
            cVar6 = FUN_1400b5e00(uVar19,0xffffffff,uVar13,0);
            if ((cVar6 != '\0') && (*(char *)((longlong)local_2a0 + 5) != '\0')) {
              lVar17 = *param_1;
              local_28c = *(undefined4 *)(*plVar16 + 0x40);
              local_198 = *local_2a0;
              uStack_194 = local_2a0[1];
              uStack_190 = local_2a0[2];
              uStack_18c = local_2a0[3];
              local_188 = FUN_14000cba0(*(longlong *)(local_2a0 + 4) + -0x18);
              local_188 = local_188 + 0x18;
              FUN_14001c080(local_180,puVar26 + 6);
              local_168 = local_2a0[0xc];
              local_164 = local_2a0[0xd];
              local_2b8 = lVar17;
              FUN_1400b7140(&local_78);
              FUN_14001fb00(&local_198);
              if (iStack_70 == 0) {
                FUN_140273938(1);
              }
              local_1d8 = (undefined4)local_78;
              uStack_1d4 = local_78._4_4_;
              iStack_1d0 = iStack_70;
              uStack_1cc = uStack_6c;
              iVar9 = FUN_140273a00(&local_1d8);
              if (iVar9 != 0) {
                std::_Throw_C_error(iVar9);
              }
              local_78 = 0;
              iStack_70 = 0;
            }
            break;
          }
          uVar12 = uVar12 + 1;
          pcVar18 = pcVar18 + 8;
        } while (uVar12 < uVar28);
      }
      pplVar20 = (longlong **)FUN_14008bc40(local_2a0,local_1f8,*param_1);
      if (&local_b8 != pplVar20) {
        uVar28 = ((longlong)local_a8 - (longlong)plVar16 >> 3) * 8;
        plVar14 = plVar16;
        if (0xfff < uVar28) {
          uVar28 = uVar28 + 0x27;
          plVar14 = (longlong *)plVar16[-1];
          if (0x1f < (ulonglong)((longlong)plVar16 + (-8 - (longlong)plVar14))) goto LAB_1400b496e;
        }
        FUN_14000c6f0(plVar14,uVar28);
        plVar16 = *pplVar20;
        plStack_b0 = pplVar20[1];
        local_a8 = pplVar20[2];
        *pplVar20 = (longlong *)0x0;
        pplVar20[1] = (longlong *)0x0;
        pplVar20[2] = (longlong *)0x0;
        local_b8 = plVar16;
      }
      plVar14 = plStack_b0;
      if (local_1f8[0] != 0) {
        uVar28 = (local_1e8 - local_1f8[0] >> 3) * 8;
        if (0xfff < uVar28) {
          if (0x1f < (local_1f8[0] - *(longlong *)(local_1f8[0] + -8)) - 8U) {
            FUN_14027fb0c(*(longlong *)(local_1f8[0] + -8),uVar28 + 0x27);
            goto LAB_1400b497a;
          }
        }
        FUN_14000c6f0();
      }
      plVar5 = local_228;
      puVar26 = local_2a0;
      if (plVar16 == plVar14) {
        uVar28 = uVar25;
        if ((char)local_2a0[1] == '\0') goto LAB_1400b4330;
        if ((DAT_1403fc710 <= DAT_140412c34) || (DAT_1403fc710 <= DAT_140412c30)) {
                    /* WARNING: Load size is inaccurate */
          do {
            uVar28 = uVar28 + 1;
          } while (((wchar_t *)(*ThreadLocalStoragePointer + 0x20))[uVar28] != L'\0');
          wcsncat_s((wchar_t *)(*ThreadLocalStoragePointer + 0x20),0x3e9,L"(Redundancy Chain) ",
                    ~uVar28 + 1000);
        }
        lVar17 = FUN_140048490(&PTR_vftable_1403fc700,*(undefined8 *)(puVar26 + 4));
        if ((*(int *)(lVar17 + 0x10) <= DAT_140412c34) || (*(int *)(lVar17 + 0x10) <= DAT_140412c30)
           ) {
                    /* WARNING: Load size is inaccurate */
          uVar28 = uVar25;
          do {
            uVar28 = uVar28 + 1;
          } while (((wchar_t *)(*ThreadLocalStoragePointer + 0x20))[uVar28] != L'\0');
          wcsncat_s((wchar_t *)(*ThreadLocalStoragePointer + 0x20),0x3e9,
                    L" - All proxy servers failed. Trying direct connection.",~uVar28 + 1000);
        }
        local_288 = 0;
        FUN_140048810(lVar17,&local_288);
        FUN_14000c9e0(param_1 + 6,L"Direct",6);
      }
      else {
        if ((DAT_1403fc6e0 <= DAT_140412c34) || (DAT_1403fc6e0 <= DAT_140412c30)) {
                    /* WARNING: Load size is inaccurate */
          uVar28 = uVar25;
          do {
            uVar28 = uVar28 + 1;
          } while (((wchar_t *)(*ThreadLocalStoragePointer + 0x20))[uVar28] != L'\0');
          wcsncat_s((wchar_t *)(*ThreadLocalStoragePointer + 0x20),0x3e9,L"(Redundancy Chain) ",
                    ~uVar28 + 1000);
        }
        lVar17 = FUN_140048490(&PTR_vftable_1403fc6d0,*(undefined8 *)(local_2a0 + 4));
        if ((*(int *)(lVar17 + 0x10) <= DAT_140412c34) || (*(int *)(lVar17 + 0x10) <= DAT_140412c30)
           ) {
                    /* WARNING: Load size is inaccurate */
          uVar28 = uVar25;
          do {
            uVar28 = uVar28 + 1;
          } while (((wchar_t *)(*ThreadLocalStoragePointer + 0x20))[uVar28] != L'\0');
          wcsncat_s((wchar_t *)(*ThreadLocalStoragePointer + 0x20),0x3e9,L" - Trying next proxy.",
                    ~uVar28 + 1000);
        }
        local_284 = 0;
        FUN_140048810(lVar17,&local_284);
        plVar16 = (longlong *)
                  (**(code **)(*(longlong *)*plVar16 + 0x10))((longlong *)*plVar16,&local_240,0);
        lVar17 = *plVar16;
        lVar2 = param_1[6];
        plVar16 = (longlong *)(lVar2 + -0x18);
        if ((longlong *)(lVar17 + -0x18) != plVar16) {
          if ((*(int *)(lVar2 + -8) < 0) || (*(longlong *)(lVar17 + -0x18) != *plVar16)) {
            FUN_14000c9e0(param_1 + 6,lVar17,*(undefined4 *)(lVar17 + -0x10));
          }
          else {
            lVar17 = FUN_14000cba0();
            LOCK();
            piVar11 = (int *)(lVar2 + -8);
            iVar9 = *piVar11;
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (iVar9 < 2) {
              (**(code **)(*(longlong *)*plVar16 + 8))((longlong *)*plVar16,plVar16);
            }
            param_1[6] = lVar17 + 0x18;
          }
        }
        LOCK();
        piVar11 = (int *)(local_240 + -8);
        iVar9 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar9 < 2) {
          (**(code **)(**(longlong **)(local_240 + -0x18) + 8))();
        }
      }
      LOCK();
      piVar11 = (int *)(local_238 + 2);
      iVar9 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar9 < 2) {
        (**(code **)(*(longlong *)*local_238 + 8))();
      }
      LOCK();
      piVar11 = (int *)(local_230 + 2);
      iVar9 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar9 < 2) {
        (**(code **)(*(longlong *)*local_230 + 8))();
      }
      if (local_b8 == plStack_b0) goto LAB_1400b47db;
      uVar28 = (ulonglong)local_2a8;
      param_3 = local_298;
    }
    local_a0[0] = 30000;
    local_2b8 = CONCAT44(local_2b8._4_4_,4);
    iVar9 = Ordinal_21(*(undefined8 *)param_1[2],0xffff,0x1006,local_a0);
    if (iVar9 != 0) {
      pwVar24 = L"setsockopt(SO_RCVTIMEO) failed with error ";
      do {
        uVar25 = uVar25 + 1;
      } while (L"setsockopt(SO_RCVTIMEO) failed with error "[uVar25] != L'\0');
LAB_1400b46ea:
      FUN_14000bd40(param_1 + 4,pwVar24,uVar25 & 0xffffffff);
      uVar10 = Ordinal_111();
      FUN_1400b0630(param_1 + 4,uVar10);
      goto LAB_1400b4767;
    }
    uVar28 = (longlong)plStack_b0 - (longlong)plVar16 >> 3;
    if ((1 < uVar28) && (uVar12 = uVar21, uVar28 != 1)) {
LAB_1400b4431:
      cVar6 = FUN_1400b5950(param_1,plVar16[uVar12],plVar16[uVar12 + 1]);
      if (cVar6 != '\0') goto code_r0x0001400b444a;
      puVar15 = (undefined8 *)FUN_14000cba0(param_1[4] + -0x18);
      local_58 = puVar15 + 3;
      FUN_14000c7d0(param_1 + 4);
      uVar28 = uVar25;
      do {
        uVar28 = uVar28 + 1;
      } while (L"Could not connect through proxy "[uVar28] != L'\0');
      FUN_14000bd40(param_1 + 4,L"Could not connect through proxy ",uVar28 & 0xffffffff);
      plVar14 = (longlong *)
                (**(code **)(*(longlong *)plVar16[uVar12] + 0x10))
                          ((longlong *)plVar16[uVar12],&local_220,1);
      FUN_14000bd40(param_1 + 4,*plVar14,*(undefined4 *)(*plVar14 + -0x10));
      uVar28 = uVar25;
      do {
        uVar28 = uVar28 + 1;
      } while (L" to the next proxy in the chain "[uVar28] != L'\0');
      FUN_14000bd40(param_1 + 4,L" to the next proxy in the chain ",uVar28 & 0xffffffff);
      plVar16 = (longlong *)
                (**(code **)(*(longlong *)plVar16[uVar12 + 1] + 0x10))
                          ((longlong *)plVar16[uVar12 + 1],&local_268,1);
      FUN_14000bd40(param_1 + 4,*plVar16,*(undefined4 *)(*plVar16 + -0x10));
      do {
        uVar25 = uVar25 + 1;
      } while ((&DAT_14035e450)[uVar25] != 0);
      FUN_14000bd40(param_1 + 4,&DAT_14035e450,uVar25 & 0xffffffff);
      FUN_14000bd40(param_1 + 4,puVar15 + 3,*(undefined4 *)(puVar15 + 1));
      LOCK();
      piVar11 = (int *)(local_268 + -8);
      iVar9 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar9 < 2) {
        (**(code **)(**(longlong **)(local_268 + -0x18) + 8))();
      }
      LOCK();
      piVar11 = (int *)(local_220 + -8);
      iVar9 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar9 < 2) {
        (**(code **)(**(longlong **)(local_220 + -0x18) + 8))();
      }
      LOCK();
      piVar11 = (int *)(puVar15 + 2);
      iVar9 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      plVar16 = local_b8;
      if (iVar9 < 2) {
        (**(code **)(*(longlong *)*puVar15 + 8))((longlong *)*puVar15,puVar15);
        plVar16 = local_b8;
      }
      goto LAB_1400b4767;
    }
LAB_1400b4452:
    plVar14 = plStack_b0;
    cVar6 = FUN_1400b5950(param_1,plStack_b0[-1],local_278);
    if (cVar6 == '\0') {
      param_1 = param_1 + 4;
      puVar15 = (undefined8 *)FUN_14000cba0(*param_1 + -0x18);
      local_60 = puVar15 + 3;
      FUN_14000c7d0(param_1);
      uVar28 = uVar25;
      do {
        uVar28 = uVar28 + 1;
      } while (L"Could not connect through proxy "[uVar28] != L'\0');
      FUN_14000bd40(param_1,L"Could not connect through proxy ",uVar28 & 0xffffffff);
      plVar16 = (longlong *)
                (**(code **)(*(longlong *)plVar14[-1] + 0x10))((longlong *)plVar14[-1],&local_270,1)
      ;
      FUN_14000bd40(param_1,*plVar16,*(undefined4 *)(*plVar16 + -0x10));
      do {
        uVar25 = uVar25 + 1;
      } while ((&DAT_14035e450)[uVar25] != 0);
      FUN_14000bd40(param_1,&DAT_14035e450,uVar25 & 0xffffffff);
      FUN_14000bd40(param_1,puVar15 + 3,*(undefined4 *)(puVar15 + 1));
      LOCK();
      piVar11 = (int *)(local_270 + -8);
      iVar9 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar9 < 2) {
        (**(code **)(**(longlong **)(local_270 + -0x18) + 8))();
      }
      LOCK();
      piVar11 = (int *)(puVar15 + 2);
      iVar9 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      plVar16 = local_b8;
      if (iVar9 < 2) {
        (**(code **)(*(longlong *)*puVar15 + 8))((longlong *)*puVar15,puVar15);
        plVar16 = local_b8;
      }
      goto LAB_1400b4767;
    }
    local_90[0] = 0;
    local_2b8 = CONCAT44(local_2b8._4_4_,4);
    iVar9 = Ordinal_21(*(undefined8 *)param_1[2],0xffff,0x1006,local_90);
    if (iVar9 != 0) {
      pwVar24 = L"setsockopt(SO_RCVTIMEO, 0) failed with error ";
      do {
        uVar25 = uVar25 + 1;
      } while (L"setsockopt(SO_RCVTIMEO, 0) failed with error "[uVar25] != L'\0');
      goto LAB_1400b46ea;
    }
    if (*(int *)(plVar14[-1] + 0x50) == 3) {
      *(undefined1 *)(param_1 + 5) = 1;
      puVar15 = (undefined8 *)FUN_1400ba6f4(0x98);
      local_60 = puVar15;
      if (puVar15 != (undefined8 *)0x0) {
        FUN_140276f60(puVar15,0,0x98);
        uVar21 = FUN_14001bc10(puVar15,plVar14[-1]);
      }
      param_1[3] = uVar21;
    }
  }
  else {
LAB_1400b47db:
    plVar16 = local_b8;
    puVar15 = local_278;
    cVar6 = FUN_1400b5260(param_1,local_278,local_298,0);
    if (cVar6 == '\0') {
      plVar16 = (longlong *)FUN_1400ba8e0();
      if (plVar16 == (longlong *)0x0) {
        FUN_14000cd00(0x80004005);
LAB_1400b4962:
        FUN_14027fb0c();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_88[0] = (**(code **)(*plVar16 + 0x18))(plVar16);
      local_88[0] = local_88[0] + 0x18;
      uVar28 = uVar25;
      if (*(int *)((longlong)puVar15 + 0x14) == 0x17) {
        do {
          uVar28 = uVar28 + 1;
        } while ((&DAT_14035e440)[uVar28] != 0);
        FUN_14000c9e0(local_88,&DAT_14035e440,uVar28 & 0xffffffff);
      }
      lVar17 = local_88[0];
      param_1 = param_1 + 4;
      puVar22 = (undefined8 *)FUN_14000cba0(*param_1 + -0x18);
      local_50 = puVar22 + 3;
      FUN_14000c7d0(param_1);
      uVar28 = uVar25;
      do {
        uVar28 = uVar28 + 1;
      } while (L"Could not connect to "[uVar28] != L'\0');
      FUN_14000bd40(param_1,L"Could not connect to ",uVar28 & 0xffffffff);
      plVar16 = (longlong *)(**(code **)*puVar15)(puVar15,&local_280,1);
      FUN_14000bd40(param_1,*plVar16,*(undefined4 *)(*plVar16 + -0x10));
      FUN_14000bd40(param_1,lVar17,*(undefined4 *)(lVar17 + -0x10));
      do {
        uVar25 = uVar25 + 1;
      } while ((&DAT_14035e450)[uVar25] != 0);
      FUN_14000bd40(param_1,&DAT_14035e450,uVar25 & 0xffffffff);
      FUN_14000bd40(param_1,puVar22 + 3,*(undefined4 *)(puVar22 + 1));
      LOCK();
      piVar11 = (int *)(local_280 + -8);
      iVar9 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar9 < 2) {
        (**(code **)(**(longlong **)(local_280 + -0x18) + 8))();
      }
      LOCK();
      piVar11 = (int *)(puVar22 + 2);
      iVar9 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar9 < 2) {
        (**(code **)(*(longlong *)*puVar22 + 8))((longlong *)*puVar22,puVar22);
      }
      LOCK();
      piVar11 = (int *)(lVar17 + -8);
      iVar9 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      plVar16 = local_b8;
      if (iVar9 < 2) {
        (**(code **)(**(longlong **)(lVar17 + -0x18) + 8))
                  (*(longlong **)(lVar17 + -0x18),lVar17 + -0x18);
        plVar16 = local_b8;
      }
      goto LAB_1400b4767;
    }
  }
  param_1[2] = 0;
  goto LAB_1400b4767;
code_r0x0001400b444a:
  uVar12 = uVar12 + 1;
  if (uVar28 - 1 <= uVar12) goto LAB_1400b4452;
  goto LAB_1400b4431;
LAB_1400b4330:
  do {
    uVar28 = uVar28 + 1;
  } while (L"All proxy servers in redundancy chain "[uVar28] != L'\0');
  FUN_14000bd40(local_228,L"All proxy servers in redundancy chain ",uVar28 & 0xffffffff);
  lVar17 = *(longlong *)(puVar26 + 4);
  FUN_14000bd40(plVar5,lVar17,*(undefined4 *)(lVar17 + -0x10));
  do {
    uVar25 = uVar25 + 1;
  } while (L" failed."[uVar25] != L'\0');
  FUN_14000bd40(plVar5,L" failed.",uVar25 & 0xffffffff);
LAB_1400b4379:
  LOCK();
  piVar11 = (int *)(local_68 + -1);
  iVar9 = *piVar11;
  *piVar11 = *piVar11 + -1;
  UNLOCK();
  if (iVar9 < 2) {
    (**(code **)(*(longlong *)local_68[-3] + 8))();
  }
  LOCK();
  piVar11 = (int *)(local_98 + -8);
  iVar9 = *piVar11;
  *piVar11 = *piVar11 + -1;
  UNLOCK();
  plVar16 = local_b8;
  if (iVar9 < 2) {
    (**(code **)(**(longlong **)(local_98 + -0x18) + 8))();
    plVar16 = local_b8;
  }
LAB_1400b4767:
  if (plVar16 != (longlong *)0x0) {
    uVar25 = (longlong)local_a8 - (longlong)plVar16 & 0xfffffffffffffff8;
    plVar14 = plVar16;
    if (0xfff < uVar25) {
      uVar25 = uVar25 + 0x27;
      plVar14 = (longlong *)plVar16[-1];
      if (0x1f < (ulonglong)((longlong)plVar16 + (-8 - (longlong)plVar14))) {
LAB_1400b4985:
        FUN_14027fb0c();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FUN_14000c6f0(plVar14,uVar25);
  }
LAB_1400b47aa:
  __security_check_cookie(local_48 ^ (ulonglong)auStack_2d8);
  return;
}




// ----- FUN_1400276f0 @ 1400276f0 -----

/* WARNING: Removing unreachable block (ram,0x0001400281e5) */
/* WARNING: Removing unreachable block (ram,0x000140027ee5) */
/* WARNING: Removing unreachable block (ram,0x00014002794b) */
/* WARNING: Removing unreachable block (ram,0x000140027d1e) */
/* WARNING: Removing unreachable block (ram,0x0001400280cc) */
/* WARNING: Removing unreachable block (ram,0x000140028368) */

void FUN_1400276f0(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 uVar16;
  wchar_t *pwVar17;
  undefined8 *puVar18;
  undefined **ppuVar19;
  ulonglong uVar20;
  longlong *plVar21;
  undefined1 auStack_828 [32];
  undefined4 local_808;
  int local_7f8;
  undefined4 local_7f4;
  longlong local_7f0;
  longlong local_7e8;
  longlong local_7e0;
  longlong local_7d8;
  longlong local_7d0;
  longlong local_7c8;
  undefined4 local_7c0;
  undefined4 local_7bc;
  undefined4 local_7b8;
  undefined4 local_7b4;
  undefined4 local_7b0 [2];
  longlong local_7a8;
  undefined4 local_7a0 [2];
  longlong local_798;
  longlong local_790;
  longlong *local_788;
  longlong *local_780;
  longlong local_778;
  longlong local_770;
  longlong local_768;
  longlong local_760;
  longlong local_758;
  longlong local_750;
  longlong local_748;
  longlong local_740;
  longlong local_738;
  longlong local_730;
  longlong local_728;
  longlong local_720;
  longlong local_718;
  longlong local_710;
  longlong local_708;
  longlong local_700 [2];
  undefined *local_6f0;
  undefined1 local_6e8 [112];
  undefined1 local_678 [112];
  undefined1 local_608 [112];
  undefined1 local_598 [112];
  longlong local_528;
  longlong *local_520;
  longlong local_518 [2];
  undefined1 local_508 [188];
  undefined4 local_44c;
  undefined1 local_438 [1024];
  ulonglong local_38;
  
  local_700[1] = 0xfffffffffffffffe;
  local_38 = DAT_1403fb930 ^ (ulonglong)auStack_828;
  plVar14 = (longlong *)0x0;
  local_7f4 = 0;
  local_708 = param_1;
  cVar3 = FUN_140028fa0();
  if (cVar3 == '\0') goto LAB_140028852;
  plVar21 = (longlong *)(param_1 + 0xc0);
  lVar10 = *plVar21;
  local_788 = plVar21;
  if ((*(char *)(lVar10 + 0x100) != '\0') && (*(char *)(lVar10 + 0x101) == '\0')) {
    if (*(longlong *)(*(longlong *)(param_1 + 0xb8) + 0xb8) == 0) {
      if (*(int *)(lVar10 + 0x104) == 0) {
        uVar6 = FUN_140044370(local_678);
        uVar7 = FUN_140025970(*plVar21,&local_760,1);
        FUN_140027320(uVar6,4,uVar7);
        FUN_140023e50(uVar6,4,L" : connect() call");
        LOCK();
        piVar1 = (int *)(local_760 + -8);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 < 2) {
          (**(code **)(**(longlong **)(local_760 + -0x18) + 8))();
        }
        FUN_1400444b0(local_678);
      }
      else {
        uVar6 = FUN_140044370(local_6e8);
        uVar7 = FUN_140025970(*plVar21,&local_768,1);
        FUN_140027320(uVar6,3,uVar7);
        FUN_140023e50(uVar6,3,L" : direct connection");
        LOCK();
        piVar1 = (int *)(local_768 + -8);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 < 2) {
          (**(code **)(**(longlong **)(local_768 + -0x18) + 8))();
        }
        FUN_1400444b0(local_6e8);
      }
      goto LAB_140028852;
    }
    if (*(int *)(lVar10 + 0x104) == 0) {
      *(undefined1 *)(lVar10 + 0x9b) = 1;
    }
  }
  plVar8 = (longlong *)FUN_1400ba8e0();
  if (plVar8 == (longlong *)0x0) {
LAB_140028b44:
    FUN_14000cd00(0x80004005);
LAB_140028b4f:
    FUN_14000cd00(0x80004005);
LAB_140028b5a:
    FUN_14000cd00(0x80004005);
LAB_140028b65:
    FUN_14000cd00(0x80004005);
LAB_140028b70:
    FUN_14000cd00(0x80004005);
LAB_140028b7b:
    FUN_14000cd00(0x80004005);
  }
  else {
    local_528 = (**(code **)(*plVar8 + 0x18))(plVar8);
    local_528 = local_528 + 0x18;
    local_7f8 = 1;
    cVar3 = FUN_1400a5ee0(*plVar21);
    if (cVar3 == '\x01') {
      puVar9 = *(undefined8 **)(param_1 + 0x48);
      puVar18 = *(undefined8 **)(param_1 + 0x40);
      if (puVar18 != puVar9) {
        do {
          (**(code **)*puVar18)(puVar18,0);
          puVar18 = puVar18 + 0x19;
        } while (puVar18 != puVar9);
        puVar18 = *(undefined8 **)(param_1 + 0x40);
      }
      *(undefined8 **)(param_1 + 0x48) = puVar18;
      FUN_140276f60(local_508,0,200);
      local_780 = &local_7f0;
      plVar8 = (longlong *)FUN_1400ba8e0();
      if (plVar8 != (longlong *)0x0) {
        local_7f0 = (**(code **)(*plVar8 + 0x18))(plVar8);
        local_7f0 = local_7f0 + 0x18;
        uVar20 = 0xffffffffffffffff;
        do {
          uVar20 = uVar20 + 1;
        } while (L"special module"[uVar20] != L'\0');
        FUN_14000c9e0(&local_7f0,L"special module",uVar20 & 0xffffffff);
        FUN_14009d990(local_508,&local_7f0);
        local_44c = 1;
        lVar10 = *(longlong *)(param_1 + 0x48);
        if (*(longlong *)(param_1 + 0x50) == lVar10) {
          FUN_14001b700(param_1 + 0x40,lVar10,local_508);
        }
        else {
          FUN_14001baf0(lVar10,local_508);
          *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 200;
        }
        *(undefined1 *)(param_1 + 0x89) = 0;
        FUN_14009db90(local_508);
        goto LAB_1400279de;
      }
      goto LAB_140028b4f;
    }
LAB_1400279de:
    if (((DAT_140412ba8 == '\0') && (lVar10 = *plVar21, *(char *)(lVar10 + 0x9a) == '\0')) &&
       (((*(char *)(param_1 + 0x8b) == '\0' && (*(char *)(lVar10 + 0x103) != '\0')) ||
        ((*(char *)(param_1 + 0x8a) == '\0' && (*(char *)(lVar10 + 0x102) != '\0')))))) {
      puVar9 = (undefined8 *)FUN_140025970(lVar10,&local_758,1);
      uVar6 = FUN_140048490(&PTR_vftable_1403fc718,*puVar9);
      pwVar17 = L" other user connection";
      if (*(char *)(*plVar21 + 0x102) != '\0') {
        pwVar17 = L" system connection";
      }
      lVar10 = FUN_140048490(uVar6,pwVar17);
      if ((*(int *)(lVar10 + 0x10) <= DAT_140412c34) || (*(int *)(lVar10 + 0x10) <= DAT_140412c30))
      {
                    /* WARNING: Load size is inaccurate */
        uVar20 = 0xffffffffffffffff;
        do {
          uVar20 = uVar20 + 1;
        } while (((wchar_t *)(*ThreadLocalStoragePointer + 0x20))[uVar20] != L'\0');
        wcsncat_s((wchar_t *)(*ThreadLocalStoragePointer + 0x20),0x3e9,L" bypassed",~uVar20 + 1000);
      }
      local_7c0 = 0;
      FUN_140048810(lVar10,&local_7c0);
      LOCK();
      piVar1 = (int *)(local_758 + -8);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      iVar4 = local_7f8;
      if (iVar5 < 2) {
        (**(code **)(**(longlong **)(local_758 + -0x18) + 8))();
        iVar4 = local_7f8;
      }
LAB_1400286a5:
      cVar3 = FUN_140029d10(param_1,local_438,iVar4);
      if (cVar3 != '\0') {
        if (*(longlong *)(param_1 + 8) == -1) {
          cVar3 = FUN_140065460(*(undefined8 *)(param_1 + 0xb8));
        }
        else {
          cVar3 = FUN_1400235b0(param_1,local_438);
        }
        if ((cVar3 != '\0') && (iVar4 == 2)) {
          if (*(char *)(*plVar21 + 0x101) == '\0') {
            local_6f0 = &DAT_140412330;
            iVar5 = FUN_1402737cc(&DAT_140412330);
            if (iVar5 != 0) {
              std::_Throw_C_error(iVar5);
            }
            FUN_14002bc60(&DAT_140412380,plVar21);
            if (DAT_140412954 != '\0') {
              FUN_14002ac20();
            }
            iVar5 = _Mtx_unlock(&DAT_140412330);
            if (iVar5 != 0) {
              std::_Throw_C_error(iVar5);
            }
            DAT_140416b40 = DAT_140416b40 + 1;
            cVar3 = FUN_14002b0f0(param_1);
            if (cVar3 == '\0') {
              DAT_140416b44 = DAT_140416b44 + 1;
            }
            else {
              lVar10 = *plVar21;
              if (*(int *)(*(longlong *)(lVar10 + 0x118) + -0x10) != 0) {
                uVar6 = FUN_140027440(&local_778,&DAT_14035e998);
                plVar8 = (longlong *)FUN_14001d290(local_700,uVar6,&DAT_14035f02c);
                FUN_14000bd40(&local_528,*plVar8,*(undefined4 *)(*plVar8 + -0x10));
                LOCK();
                piVar1 = (int *)(local_700[0] + -8);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 < 2) {
                  (**(code **)(**(longlong **)(local_700[0] + -0x18) + 8))();
                }
                LOCK();
                piVar1 = (int *)(local_778 + -8);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 < 2) {
                  (**(code **)(**(longlong **)(local_778 + -0x18) + 8))();
                }
                lVar10 = *(longlong *)(param_1 + 0xc0);
              }
              lVar12 = local_528;
              if ((*(int *)(lVar10 + 0x120) - 2U < 2) && (*(int *)(lVar10 + 0xcc) == 0x17)) {
                local_7a8 = 0;
                plVar8 = (longlong *)(local_528 + -0x18);
                if ((longlong *)*plVar8 != (longlong *)0x0) {
                  plVar14 = (longlong *)(**(code **)(*(longlong *)*plVar8 + 0x20))();
                }
                if (plVar14 == (longlong *)0x0) {
                  plVar14 = (longlong *)FUN_1400ba8e0();
                  plVar14 = (longlong *)(**(code **)(*plVar14 + 0x20))(plVar14);
                }
                if (plVar14 == (longlong *)0x0) {
                  FUN_14000cd00(0x80004005);
                  goto LAB_140028b44;
                }
                local_7a8 = (**(code **)(*plVar14 + 0x18))(plVar14);
                local_7a8 = local_7a8 + 0x18;
                local_7f4 = 4;
                local_808 = *(undefined4 *)(lVar12 + -0x10);
                uVar20 = 0xffffffffffffffff;
                do {
                  uVar20 = uVar20 + 1;
                } while ((&DAT_14035e440)[uVar20] != 0);
                FUN_14000bc60(&local_7a8,&DAT_14035e440,uVar20 & 0xffffffff,lVar12);
                lVar10 = local_7a8;
                plVar14 = (longlong *)(local_7a8 + -0x18);
                if (plVar14 != plVar8) {
                  if ((*(int *)(lVar12 + -8) < 0) || (*plVar14 != *plVar8)) {
                    FUN_14000c9e0(&local_528,local_7a8,*(undefined4 *)(local_7a8 + -0x10));
                  }
                  else {
                    lVar15 = FUN_14000cba0(plVar14);
                    LOCK();
                    piVar1 = (int *)(lVar12 + -8);
                    iVar5 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar5 < 2) {
                      (**(code **)(*(longlong *)*plVar8 + 8))((longlong *)*plVar8,plVar8);
                    }
                    local_528 = lVar15 + 0x18;
                  }
                }
                LOCK();
                piVar1 = (int *)(lVar10 + -8);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 < 2) {
                  (**(code **)(*(longlong *)*plVar14 + 8))((longlong *)*plVar14,plVar14);
                }
              }
              cVar3 = FUN_14002b490(param_1);
              if (cVar3 != '\0') {
                uVar6 = FUN_140044370(local_598);
                uVar7 = FUN_140025970(*plVar21,&local_780,1);
                uVar16 = FUN_140025970(*plVar21,&local_770,0);
                local_7b0[0] = 3;
                FUN_1400272a0(uVar6,2,local_7b0);
                FUN_140027320(uVar6,2,uVar16);
                FUN_140027320(uVar6,2,uVar7);
                FUN_140023e50(uVar6,2,L" open");
                FUN_140027320(uVar6,2,&local_528);
                LOCK();
                piVar1 = (int *)(local_770 + -8);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 < 2) {
                  (**(code **)(**(longlong **)(local_770 + -0x18) + 8))();
                }
                plVar21 = local_780 + -3;
                LOCK();
                plVar14 = local_780 + -1;
                lVar10 = *plVar14;
                *(int *)plVar14 = (int)*plVar14 + -1;
                UNLOCK();
                if ((int)lVar10 < 2) {
                  (**(code **)(*(longlong *)*plVar21 + 8))();
                }
                FUN_1400444b0(local_598);
                FUN_14002b750(param_1);
              }
            }
          }
          else {
            FUN_14002a1e0(param_1);
          }
        }
      }
      LOCK();
      piVar1 = (int *)(local_528 + -8);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 < 2) {
        (**(code **)(**(longlong **)(local_528 + -0x18) + 8))();
      }
LAB_140028852:
      __security_check_cookie(local_38 ^ (ulonglong)auStack_828);
      return;
    }
    iVar4 = FUN_140029860(param_1);
    local_7f8 = iVar4;
    if (*(char *)(*plVar21 + 0x101) != '\0') {
      ppuVar19 = &PTR_vftable_1403fc718;
      if (iVar4 == 2) {
        ppuVar19 = &PTR_vftable_1403fc6b8;
      }
      puVar9 = (undefined8 *)FUN_140025970(*plVar21,&local_750,1);
      lVar10 = FUN_140048490(ppuVar19,*puVar9);
      if ((*(int *)(lVar10 + 0x10) <= DAT_140412c34) || (*(int *)(lVar10 + 0x10) <= DAT_140412c30))
      {
                    /* WARNING: Load size is inaccurate */
        uVar20 = 0xffffffffffffffff;
        do {
          uVar20 = uVar20 + 1;
        } while (((wchar_t *)(*ThreadLocalStoragePointer + 0x20))[uVar20] != L'\0');
        wcsncat_s((wchar_t *)(*ThreadLocalStoragePointer + 0x20),0x3e9,L" DNS-UDP ",~uVar20 + 1000);
      }
      if (iVar4 == 2) {
        pwVar17 = L"processed";
      }
      else {
        pwVar17 = L"blocked";
        if (iVar4 == 1) {
          pwVar17 = L"bypassed";
        }
      }
      uVar6 = FUN_140048490(lVar10,pwVar17);
      local_7bc = 0;
      FUN_140048810(uVar6,&local_7bc);
      LOCK();
      piVar1 = (int *)(local_750 + -8);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 < 2) {
        (**(code **)(**(longlong **)(local_750 + -0x18) + 8))();
      }
      goto LAB_1400286a5;
    }
    plVar8 = (longlong *)FUN_1400ba8e0();
    if (plVar8 == (longlong *)0x0) goto LAB_140028b5a;
    plVar8 = (longlong *)(**(code **)(*plVar8 + 0x18))(plVar8);
    local_520 = plVar8 + 3;
    lVar10 = *plVar21;
    iVar5 = *(int *)(lVar10 + 0x120);
    if (iVar5 == 1) {
      uVar20 = 0xffffffffffffffff;
      do {
        uVar20 = uVar20 + 1;
      } while (L"direct connection"[uVar20] != L'\0');
      FUN_14000c9e0(&local_520,L"direct connection",uVar20 & 0xffffffff);
      uVar20 = 0xffffffffffffffff;
      do {
        uVar20 = uVar20 + 1;
      } while (L" directly"[uVar20] != L'\0');
      FUN_14000c9e0(&local_528,L" directly",uVar20 & 0xffffffff);
      if ((*(char *)(param_1 + 0x89) == '\0') &&
         (*(undefined1 *)(*plVar21 + 0x124) = 1, *(char *)(*plVar21 + 0x9a) != '\0')) {
        uVar20 = 0xffffffffffffffff;
        do {
          uVar20 = uVar20 + 1;
        } while (L" (forced)"[uVar20] != L'\0');
        FUN_14000bd40(&local_528,L" (forced)",uVar20 & 0xffffffff);
      }
LAB_140028309:
      lVar10 = *plVar21;
      if (*(longlong *)(lVar10 + 0x168) != *(longlong *)(lVar10 + 0x170)) {
        local_518[0] = 0;
        plVar8 = (longlong *)(lVar10 + 0x148);
        if (7 < *(ulonglong *)(lVar10 + 0x160)) {
          plVar8 = (longlong *)*plVar8;
        }
        plVar13 = (longlong *)FUN_1400ba8e0();
        if (plVar13 == (longlong *)0x0) {
          FUN_14000cd00(0x80004005);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_7c8 = (**(code **)(*plVar13 + 0x18))(plVar13);
        local_7c8 = local_7c8 + 0x18;
        uVar20 = 0xffffffffffffffff;
        do {
          uVar20 = uVar20 + 1;
        } while ((&DAT_14035e828)[uVar20] != 0);
        FUN_14000c9e0(&local_7c8,&DAT_14035e828,uVar20 & 0xffffffff);
        FUN_14001d290(local_518,&local_7c8,plVar8);
        LOCK();
        piVar1 = (int *)(local_7c8 + -8);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 < 2) {
          (**(code **)(**(longlong **)(local_7c8 + -0x18) + 8))();
        }
        FUN_14000bd40(&local_520,local_518[0],*(undefined4 *)(local_518[0] + -0x10));
        FUN_14000bd40(&local_528,local_518[0],*(undefined4 *)(local_518[0] + -0x10));
        LOCK();
        piVar1 = (int *)(local_518[0] + -8);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 < 2) {
          (**(code **)(**(longlong **)(local_518[0] + -0x18) + 8))();
        }
        lVar10 = *(longlong *)(param_1 + 0xc0);
      }
      if (((*(char *)(lVar10 + 0x9a) == '\x01') && (*(char *)(lVar10 + 0x98) == '\0')) &&
         (*(char *)(lVar10 + 0x100) == '\0')) {
        puVar9 = (undefined8 *)FUN_140025970(lVar10,&local_728,1);
        lVar10 = FUN_140048490(&PTR_vftable_1403fc700,*puVar9);
        if ((*(int *)(lVar10 + 0x10) <= DAT_140412c34) || (*(int *)(lVar10 + 0x10) <= DAT_140412c30)
           ) {
                    /* WARNING: Load size is inaccurate */
          uVar20 = 0xffffffffffffffff;
          do {
            uVar20 = uVar20 + 1;
          } while (((wchar_t *)(*ThreadLocalStoragePointer + 0x20))[uVar20] != L'\0');
          wcsncat_s((wchar_t *)(*ThreadLocalStoragePointer + 0x20),0x3e9,
                    L" error: Cannot connect to placeholder (fake) IP address. It\'s recommended to restart the client application."
                    ,~uVar20 + 1000);
        }
        local_7b8 = 0;
        FUN_140048810(lVar10,&local_7b8);
        LOCK();
        piVar1 = (int *)(local_728 + -8);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 < 2) {
          (**(code **)(**(longlong **)(local_728 + -0x18) + 8))();
        }
        *(undefined4 *)(*plVar21 + 0x120) = 0;
        iVar4 = 0;
      }
      else if (DAT_140412b9a == '\0') {
        if (((*(char *)(lVar10 + 0x100) != '\0') && (*(int *)(lVar10 + 0x90) == 0x43)) &&
           (iVar4 == 0)) {
          plVar8 = plVar14;
LAB_140028550:
          lVar12 = (longlong)plVar8 * 2;
          plVar8 = (longlong *)((longlong)plVar8 + 1);
          if (*(short *)(*(longlong *)(lVar10 + 0x108) + lVar12) ==
              *(short *)(&UNK_14035e91e + (longlong)plVar8 * 2)) goto code_r0x000140028563;
          iVar4 = 1;
          puVar9 = (undefined8 *)FUN_140025970(lVar10,&local_720,1);
          lVar10 = FUN_140048490(&PTR_vftable_1403fc718,*puVar9);
          if ((*(int *)(lVar10 + 0x10) <= DAT_140412c34) ||
             (*(int *)(lVar10 + 0x10) <= DAT_140412c30)) {
                    /* WARNING: Load size is inaccurate */
            uVar20 = 0xffffffffffffffff;
            do {
              uVar20 = uVar20 + 1;
            } while (((wchar_t *)(*ThreadLocalStoragePointer + 0x20))[uVar20] != L'\0');
            wcsncat_s((wchar_t *)(*ThreadLocalStoragePointer + 0x20),0x3e9,
                      L" : DHCP direct connection",~uVar20 + 1000);
          }
          local_7a0[0] = 0;
          FUN_140048810(lVar10,local_7a0);
          LOCK();
          piVar1 = (int *)(local_720 + -8);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 < 2) {
            (**(code **)(**(longlong **)(local_720 + -0x18) + 8))();
          }
          goto LAB_140028683;
        }
LAB_140028569:
        cVar3 = (iVar4 != 0) + '\x02';
        uVar6 = FUN_140044370(local_608);
        plVar21 = local_788;
        lVar10 = *local_788;
        uVar7 = FUN_140025970(lVar10,&local_710,1);
        uVar16 = FUN_140025970(*plVar21,&local_718,0);
        local_7b4 = 3;
        FUN_1400272a0(uVar6,cVar3,&local_7b4);
        FUN_140027320(uVar6,cVar3,uVar16);
        FUN_140027320(uVar6,cVar3,uVar7);
        FUN_140023e50(uVar6,cVar3,L" matching ");
        FUN_140027320(uVar6,cVar3,lVar10 + 0x108);
        FUN_140023e50(uVar6,cVar3,L" rule : ");
        FUN_140027320(uVar6,cVar3,&local_520);
        LOCK();
        piVar1 = (int *)(local_718 + -8);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 < 2) {
          (**(code **)(**(longlong **)(local_718 + -0x18) + 8))();
        }
        LOCK();
        piVar1 = (int *)(local_710 + -8);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 < 2) {
          (**(code **)(**(longlong **)(local_710 + -0x18) + 8))();
        }
        FUN_1400444b0(local_608);
        param_1 = local_708;
        plVar21 = local_788;
        iVar4 = local_7f8;
      }
      else {
        *(undefined4 *)(lVar10 + 0x120) = 0;
        iVar4 = 0;
      }
LAB_140028683:
      LOCK();
      plVar8 = local_520 + -1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 < 2) {
        (**(code **)(*(longlong *)local_520[-3] + 8))();
      }
      goto LAB_1400286a5;
    }
    if (iVar5 != 3) {
      if (iVar5 == 2) {
        plVar13 = (longlong *)FUN_1400ba8e0();
        if (plVar13 == (longlong *)0x0) goto LAB_140028b91;
        local_7d8 = (**(code **)(*plVar13 + 0x18))(plVar13);
        local_7d8 = local_7d8 + 0x18;
        uVar20 = 0xffffffffffffffff;
        do {
          uVar20 = uVar20 + 1;
        } while (L" using proxy "[uVar20] != L'\0');
        FUN_14000c9e0(&local_7d8,L" using proxy ",uVar20 & 0xffffffff);
        plVar13 = (longlong *)FUN_14000b9f0(&local_738,&local_7d8,lVar10 + 0x110);
        lVar10 = *plVar13;
        if ((longlong *)(lVar10 + -0x18) != plVar8) {
          if (((int)plVar8[2] < 0) || (*(longlong *)(lVar10 + -0x18) != *plVar8)) {
            FUN_14000c9e0(&local_520,lVar10,*(undefined4 *)(lVar10 + -0x10));
          }
          else {
            lVar12 = FUN_14000cba0();
            LOCK();
            plVar13 = plVar8 + 2;
            lVar10 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar10 < 2) {
              (**(code **)(*(longlong *)*plVar8 + 8))((longlong *)*plVar8,plVar8);
            }
            local_520 = (longlong *)(lVar12 + 0x18);
          }
        }
        LOCK();
        piVar1 = (int *)(local_738 + -8);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 < 2) {
          (**(code **)(**(longlong **)(local_738 + -0x18) + 8))();
        }
        LOCK();
        piVar1 = (int *)(local_7d8 + -8);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 < 2) {
          (**(code **)(**(longlong **)(local_7d8 + -0x18) + 8))();
        }
        lVar10 = *plVar21;
        plVar8 = (longlong *)FUN_1400ba8e0();
        if (plVar8 == (longlong *)0x0) {
          FUN_14000cd00(0x80004005);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_7d0 = (**(code **)(*plVar8 + 0x18))(plVar8);
        local_7d0 = local_7d0 + 0x18;
        uVar20 = 0xffffffffffffffff;
        do {
          uVar20 = uVar20 + 1;
        } while (L" through proxy "[uVar20] != L'\0');
        FUN_14000c9e0(&local_7d0,L" through proxy ",uVar20 & 0xffffffff);
        plVar8 = (longlong *)FUN_14000b9f0(&local_730,&local_7d0,lVar10 + 0x110);
        lVar12 = local_528;
        lVar10 = *plVar8;
        plVar8 = (longlong *)(local_528 + -0x18);
        if ((longlong *)(lVar10 + -0x18) != plVar8) {
          if ((*(int *)(local_528 + -8) < 0) || (*(longlong *)(lVar10 + -0x18) != *plVar8)) {
            FUN_14000c9e0(&local_528,lVar10,*(undefined4 *)(lVar10 + -0x10));
          }
          else {
            lVar10 = FUN_14000cba0();
            LOCK();
            piVar1 = (int *)(lVar12 + -8);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 < 2) {
              (**(code **)(*(longlong *)*plVar8 + 8))((longlong *)*plVar8,plVar8);
            }
            local_528 = lVar10 + 0x18;
          }
        }
        LOCK();
        piVar1 = (int *)(local_730 + -8);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 < 2) {
          (**(code **)(**(longlong **)(local_730 + -0x18) + 8))();
        }
        LOCK();
        piVar1 = (int *)(local_7d0 + -8);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        iVar4 = local_7f8;
        if (iVar5 < 2) {
          (**(code **)(**(longlong **)(local_7d0 + -0x18) + 8))();
          iVar4 = local_7f8;
        }
      }
      else {
        uVar20 = 0xffffffffffffffff;
        do {
          uVar20 = uVar20 + 1;
        } while (L"connection blocked"[uVar20] != L'\0');
        FUN_14000c9e0(&local_520,L"connection blocked",uVar20 & 0xffffffff);
      }
      goto LAB_140028309;
    }
    plVar13 = (longlong *)FUN_1400ba8e0();
    if (plVar13 == (longlong *)0x0) goto LAB_140028b65;
    local_7e8 = (**(code **)(*plVar13 + 0x18))(plVar13);
    local_7e8 = local_7e8 + 0x18;
    uVar20 = 0xffffffffffffffff;
    do {
      uVar20 = uVar20 + 1;
    } while (L" using "[uVar20] != L'\0');
    FUN_14000c9e0(&local_7e8,L" using ",uVar20 & 0xffffffff);
    plVar11 = (longlong *)FUN_14000b9f0(&local_748,&local_7e8,lVar10 + 0x110);
    local_798 = 0;
    plVar13 = plVar14;
    if (*(longlong **)(*plVar11 + -0x18) != (longlong *)0x0) {
      plVar13 = (longlong *)(**(code **)(**(longlong **)(*plVar11 + -0x18) + 0x20))();
    }
    if (plVar13 == (longlong *)0x0) {
      plVar13 = (longlong *)FUN_1400ba8e0();
      plVar13 = (longlong *)(**(code **)(*plVar13 + 0x20))(plVar13);
    }
    if (plVar13 == (longlong *)0x0) goto LAB_140028b70;
    local_798 = (**(code **)(*plVar13 + 0x18))();
    local_798 = local_798 + 0x18;
    local_7f4 = 1;
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (L" proxy chain"[lVar10] != L'\0');
    local_808 = (undefined4)lVar10;
    FUN_14000bc60(&local_798,*plVar11,*(undefined4 *)(*plVar11 + -0x10),L" proxy chain");
    lVar10 = local_798;
    plVar13 = (longlong *)(local_798 + -0x18);
    if (plVar13 != plVar8) {
      if (((int)plVar8[2] < 0) || (*plVar13 != *plVar8)) {
        FUN_14000c9e0(&local_520,local_798,*(undefined4 *)(local_798 + -0x10));
      }
      else {
        lVar15 = FUN_14000cba0(plVar13);
        LOCK();
        plVar11 = plVar8 + 2;
        lVar12 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar12 < 2) {
          (**(code **)(*(longlong *)*plVar8 + 8))((longlong *)*plVar8,plVar8);
        }
        local_520 = (longlong *)(lVar15 + 0x18);
      }
    }
    local_7f4 = 0;
    LOCK();
    piVar1 = (int *)(lVar10 + -8);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 < 2) {
      (**(code **)(*(longlong *)*plVar13 + 8))((longlong *)*plVar13,plVar13);
    }
    LOCK();
    piVar1 = (int *)(local_748 + -8);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 < 2) {
      (**(code **)(**(longlong **)(local_748 + -0x18) + 8))();
    }
    LOCK();
    piVar1 = (int *)(local_7e8 + -8);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 < 2) {
      (**(code **)(**(longlong **)(local_7e8 + -0x18) + 8))();
    }
    lVar10 = *plVar21;
    plVar8 = (longlong *)FUN_1400ba8e0();
    if (plVar8 == (longlong *)0x0) goto LAB_140028b7b;
    local_7e0 = (**(code **)(*plVar8 + 0x18))(plVar8);
    local_7e0 = local_7e0 + 0x18;
    uVar20 = 0xffffffffffffffff;
    do {
      uVar20 = uVar20 + 1;
    } while (L" through "[uVar20] != L'\0');
    FUN_14000c9e0(&local_7e0,L" through ",uVar20 & 0xffffffff);
    plVar13 = (longlong *)FUN_14000b9f0(&local_740,&local_7e0,lVar10 + 0x110);
    local_790 = 0;
    plVar8 = plVar14;
    if (*(longlong **)(*plVar13 + -0x18) != (longlong *)0x0) {
      plVar8 = (longlong *)(**(code **)(**(longlong **)(*plVar13 + -0x18) + 0x20))();
    }
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)FUN_1400ba8e0();
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8);
    }
    if (plVar8 != (longlong *)0x0) {
      local_790 = (**(code **)(*plVar8 + 0x18))();
      local_790 = local_790 + 0x18;
      local_7f4 = 2;
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (L" proxy chain"[lVar10] != L'\0');
      local_808 = (undefined4)lVar10;
      FUN_14000bc60(&local_790,*plVar13,*(undefined4 *)(*plVar13 + -0x10),L" proxy chain");
      lVar12 = local_528;
      lVar10 = local_790;
      plVar8 = (longlong *)(local_790 + -0x18);
      plVar13 = (longlong *)(local_528 + -0x18);
      if (plVar8 != plVar13) {
        if ((*(int *)(local_528 + -8) < 0) || (*plVar8 != *plVar13)) {
          FUN_14000c9e0(&local_528,local_790,*(undefined4 *)(local_790 + -0x10));
        }
        else {
          lVar15 = FUN_14000cba0(plVar8);
          LOCK();
          piVar1 = (int *)(lVar12 + -8);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 < 2) {
            (**(code **)(*(longlong *)*plVar13 + 8))((longlong *)*plVar13,plVar13);
          }
          local_528 = lVar15 + 0x18;
        }
      }
      LOCK();
      piVar1 = (int *)(lVar10 + -8);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 < 2) {
        (**(code **)(*(longlong *)*plVar8 + 8))((longlong *)*plVar8,plVar8);
      }
      LOCK();
      piVar1 = (int *)(local_740 + -8);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 < 2) {
        (**(code **)(**(longlong **)(local_740 + -0x18) + 8))();
      }
      LOCK();
      piVar1 = (int *)(local_7e0 + -8);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 < 2) {
        (**(code **)(**(longlong **)(local_7e0 + -0x18) + 8))();
      }
      local_7f4 = 0;
      iVar4 = local_7f8;
      goto LAB_140028309;
    }
  }
  FUN_14000cd00(0x80004005);
LAB_140028b91:
  FUN_14000cd00(0x80004005);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
code_r0x000140028563:
  if (plVar8 == (longlong *)0x5) goto LAB_140028569;
  goto LAB_140028550;
}




// ----- FUN_14002cd70 @ 14002cd70 -----

/* WARNING: Removing unreachable block (ram,0x00014002d241) */

longlong * FUN_14002cd70(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  wchar_t *pwVar11;
  undefined8 *puVar12;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58 [2];
  longlong *local_48;
  longlong *local_40;
  
  local_58[1] = 0xfffffffffffffffe;
  plVar10 = (longlong *)0x0;
  *param_1 = 0;
  local_48 = param_1;
  local_40 = param_2;
  plVar4 = (longlong *)FUN_1400ba8e0();
  if (plVar4 == (longlong *)0x0) {
LAB_14002d39a:
    FUN_14000cd00(0x80004005);
LAB_14002d3a5:
    FUN_14000cd00(0x80004005);
LAB_14002d3b0:
    FUN_14000cd00(0x80004005);
LAB_14002d3bb:
    FUN_14000cd00(0x80004005);
  }
  else {
    lVar5 = (**(code **)(*plVar4 + 0x18))(plVar4);
    *param_1 = lVar5 + 0x18;
    lVar5 = *param_2;
    local_80 = 0;
    plVar4 = *(longlong **)(*(longlong *)(lVar5 + 0x108) + -0x18);
    plVar6 = plVar10;
    if (plVar4 != (longlong *)0x0) {
      plVar6 = (longlong *)(**(code **)(*plVar4 + 0x20))();
    }
    if (plVar6 == (longlong *)0x0) {
      plVar4 = (longlong *)FUN_1400ba8e0();
      plVar6 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4);
    }
    if (plVar6 == (longlong *)0x0) goto LAB_14002d3a5;
    local_80 = (**(code **)(*plVar6 + 0x18))();
    local_80 = local_80 + 0x18;
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while ((&DAT_14035f0c8)[lVar7] != 0);
    lVar5 = *(longlong *)(lVar5 + 0x108);
    FUN_14000bc60(&local_80,lVar5,*(undefined4 *)(lVar5 + -0x10),&DAT_14035f0c8,(int)lVar7);
    lVar7 = local_80;
    plVar4 = (longlong *)(local_80 + -0x18);
    lVar5 = *param_1;
    plVar6 = (longlong *)(lVar5 + -0x18);
    if (plVar4 != plVar6) {
      if ((*(int *)(lVar5 + -8) < 0) || (*plVar4 != *plVar6)) {
        FUN_14000c9e0(param_1,local_80,*(undefined4 *)(local_80 + -0x10));
      }
      else {
        lVar8 = FUN_14000cba0(plVar4);
        LOCK();
        piVar1 = (int *)(lVar5 + -8);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 < 2) {
          (**(code **)(*(longlong *)*plVar6 + 8))((longlong *)*plVar6,plVar6);
        }
        *param_1 = lVar8 + 0x18;
      }
    }
    LOCK();
    piVar1 = (int *)(lVar7 + -8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      (**(code **)(*(longlong *)*plVar4 + 8))((longlong *)*plVar4,plVar4);
    }
    lVar5 = *param_2;
    if (*(int *)(lVar5 + 0x120) == 1) {
      uVar9 = 0xffffffffffffffff;
      do {
        uVar9 = uVar9 + 1;
      } while (L"direct"[uVar9] != L'\0');
      FUN_14000bd40(param_1,L"direct",uVar9 & 0xffffffff);
      if ((*(char *)(*param_2 + 0x124) != '\x01') || (*(char *)(*param_2 + 0x9a) == '\0'))
      goto LAB_14002d1a8;
      pwVar11 = L" (forced)";
      uVar9 = 0xffffffffffffffff;
      do {
        uVar9 = uVar9 + 1;
      } while (L" (forced)"[uVar9] != L'\0');
      uVar9 = uVar9 & 0xffffffff;
LAB_14002d1a0:
      FUN_14000bd40(param_1,pwVar11,uVar9);
LAB_14002d1a8:
      if ((*(int *)(*param_2 + 0x120) - 2U < 2) && (*(int *)(*param_2 + 0xcc) == 0x17)) {
        uVar9 = 0xffffffffffffffff;
        do {
          uVar9 = uVar9 + 1;
        } while ((&DAT_14035e440)[uVar9] != 0);
        FUN_14000bd40(param_1,&DAT_14035e440,uVar9 & 0xffffffff);
      }
      lVar5 = *param_2;
      if (*(longlong *)(lVar5 + 0x168) == *(longlong *)(lVar5 + 0x170)) {
LAB_14002d33f:
        plVar4 = (longlong *)param_2[1];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar4 + 1;
          lVar5 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4);
            }
          }
        }
        return param_1;
      }
      puVar12 = (undefined8 *)(lVar5 + 0x148);
      if (7 < *(ulonglong *)(lVar5 + 0x160)) {
        puVar12 = (undefined8 *)*puVar12;
      }
      plVar4 = (longlong *)FUN_1400ba8e0();
      if (plVar4 == (longlong *)0x0) goto LAB_14002d3d1;
      local_60 = (**(code **)(*plVar4 + 0x18))(plVar4);
      local_60 = local_60 + 0x18;
      uVar9 = 0xffffffffffffffff;
      do {
        uVar9 = uVar9 + 1;
      } while ((&DAT_14035e828)[uVar9] != 0);
      FUN_14000c9e0(&local_60,&DAT_14035e828,uVar9 & 0xffffffff);
      lVar5 = local_60;
      local_58[0] = 0;
      plVar4 = (longlong *)(local_60 + -0x18);
      plVar6 = plVar10;
      if ((longlong *)*plVar4 != (longlong *)0x0) {
        plVar6 = (longlong *)(**(code **)(*(longlong *)*plVar4 + 0x20))();
      }
      if (plVar6 == (longlong *)0x0) {
        plVar6 = (longlong *)FUN_1400ba8e0();
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6);
      }
      if (plVar6 != (longlong *)0x0) {
        local_58[0] = (**(code **)(*plVar6 + 0x18))();
        local_58[0] = local_58[0] + 0x18;
        if (puVar12 != (undefined8 *)0x0) {
          plVar10 = (longlong *)0xffffffffffffffff;
          do {
            plVar10 = (longlong *)((longlong)plVar10 + 1);
          } while (*(short *)((longlong)puVar12 + (longlong)plVar10 * 2) != 0);
        }
        FUN_14000bc60(local_58,lVar5,*(undefined4 *)(lVar5 + -0x10),puVar12,(int)plVar10);
        lVar7 = local_58[0];
        FUN_14000bd40(param_1,local_58[0],*(undefined4 *)(local_58[0] + -0x10));
        LOCK();
        piVar1 = (int *)(lVar7 + -8);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 < 2) {
          (**(code **)(**(longlong **)(lVar7 + -0x18) + 8))();
        }
        LOCK();
        piVar1 = (int *)(lVar5 + -8);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 < 2) {
          (**(code **)(*(longlong *)*plVar4 + 8))((longlong *)*plVar4,plVar4);
        }
        goto LAB_14002d33f;
      }
      FUN_14000cd00(0x80004005);
      goto LAB_14002d39a;
    }
    if (*(int *)(lVar5 + 0x120) != 3) {
      pwVar11 = *(wchar_t **)(lVar5 + 0x110);
      uVar9 = (ulonglong)*(uint *)(pwVar11 + -8);
      goto LAB_14002d1a0;
    }
    local_78 = 0;
    plVar4 = *(longlong **)(*(longlong *)(lVar5 + 0x110) + -0x18);
    plVar6 = plVar10;
    if (plVar4 != (longlong *)0x0) {
      plVar6 = (longlong *)(**(code **)(*plVar4 + 0x20))();
    }
    if (plVar6 == (longlong *)0x0) {
      plVar4 = (longlong *)FUN_1400ba8e0();
      plVar6 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4);
    }
    if (plVar6 == (longlong *)0x0) goto LAB_14002d3b0;
    local_78 = (**(code **)(*plVar6 + 0x18))();
    local_78 = local_78 + 0x18;
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (L" proxy chain"[lVar7] != L'\0');
    FUN_14000bc60(&local_78,*(longlong *)(lVar5 + 0x110),
                  *(undefined4 *)(*(longlong *)(lVar5 + 0x110) + -0x10),L" proxy chain",(int)lVar7);
    lVar5 = local_78;
    FUN_14000bd40(param_1,local_78,*(undefined4 *)(local_78 + -0x10));
    LOCK();
    piVar1 = (int *)(lVar5 + -8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      (**(code **)(**(longlong **)(lVar5 + -0x18) + 8))();
    }
    lVar5 = *param_2;
    lVar7 = *(longlong *)(lVar5 + 0x118);
    if (*(int *)(lVar7 + -0x10) == 0) goto LAB_14002d1a8;
    local_70 = 0;
    plVar4 = *(longlong **)(lVar7 + -0x18);
    plVar6 = plVar10;
    if (plVar4 != (longlong *)0x0) {
      plVar6 = (longlong *)(**(code **)(*plVar4 + 0x20))();
    }
    if (plVar6 == (longlong *)0x0) {
      plVar4 = (longlong *)FUN_1400ba8e0();
      plVar6 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4);
    }
    if (plVar6 == (longlong *)0x0) goto LAB_14002d3bb;
    local_70 = (**(code **)(*plVar6 + 0x18))();
    local_70 = local_70 + 0x18;
    lVar5 = *(longlong *)(lVar5 + 0x118);
    uVar9 = 0xffffffffffffffff;
    do {
      uVar9 = uVar9 + 1;
    } while ((&DAT_14035e998)[uVar9] != 0);
    FUN_14000bc60(&local_70,&DAT_14035e998,uVar9 & 0xffffffff,lVar5,*(undefined4 *)(lVar5 + -0x10));
    lVar5 = local_70;
    local_68 = 0;
    plVar4 = (longlong *)(local_70 + -0x18);
    plVar6 = plVar10;
    if ((longlong *)*plVar4 != (longlong *)0x0) {
      plVar6 = (longlong *)(**(code **)(*(longlong *)*plVar4 + 0x20))();
    }
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)FUN_1400ba8e0();
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6);
    }
    if (plVar6 != (longlong *)0x0) {
      local_68 = (**(code **)(*plVar6 + 0x18))();
      local_68 = local_68 + 0x18;
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while ((&DAT_14035f02c)[lVar7] != 0);
      FUN_14000bc60(&local_68,lVar5,*(undefined4 *)(lVar5 + -0x10),&DAT_14035f02c,(int)lVar7);
      lVar7 = local_68;
      FUN_14000bd40(param_1,local_68,*(undefined4 *)(local_68 + -0x10));
      LOCK();
      piVar1 = (int *)(lVar7 + -8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 < 2) {
        (**(code **)(**(longlong **)(lVar7 + -0x18) + 8))();
      }
      LOCK();
      piVar1 = (int *)(lVar5 + -8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 < 2) {
        (**(code **)(*(longlong *)*plVar4 + 8))((longlong *)*plVar4,plVar4);
      }
      goto LAB_14002d1a8;
    }
  }
  FUN_14000cd00(0x80004005);
LAB_14002d3d1:
  FUN_14000cd00(0x80004005);
  pcVar3 = (code *)swi(3);
  plVar4 = (longlong *)(*pcVar3)();
  return plVar4;
}




// ----- FUN_140095d90 @ 140095d90 -----

/* WARNING: Removing unreachable block (ram,0x000140095f47) */

void FUN_140095d90(HWND param_1)

{
  HWND pHVar1;
  code *pcVar2;
  bool bVar3;
  LPCSTR pCVar4;
  __uint64 _Var5;
  int iVar6;
  LRESULT LVar7;
  int *piVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  __uint64 _Var13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  CListCtrl *this;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  undefined1 auStack_778 [32];
  undefined8 local_758;
  undefined4 local_750;
  undefined4 local_748;
  undefined4 local_740;
  longlong local_738;
  uint local_728;
  LPCSTR local_720;
  int local_718;
  longlong local_710;
  longlong local_708;
  longlong local_700;
  longlong local_6f8;
  longlong local_6f0;
  HWND local_6e8;
  ulonglong local_6e0;
  __uint64 local_6d8;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  longlong local_6b8;
  longlong local_6b0;
  longlong local_6a8;
  WPARAM local_6a0;
  undefined8 local_698;
  undefined1 local_690 [168];
  undefined1 local_5e8 [352];
  undefined1 local_488 [1104];
  ulonglong local_38;
  
  local_698 = 0xfffffffffffffffe;
  local_38 = DAT_1403fb930 ^ (ulonglong)auStack_778;
  uVar23 = 0;
  local_728 = 0;
  local_6e8 = param_1;
  LVar7 = SendMessageW(*(HWND *)(param_1 + 0xc4),0x100c,0xffffffffffffffff,2);
  iVar6 = (int)LVar7 + 1;
  if (iVar6 != 0) {
    this = (CListCtrl *)(param_1 + 0xb4);
    do {
      local_6a8 = (longlong)iVar6 + -1;
      iVar6 = (int)local_6a8;
      local_6a0 = (WPARAM)iVar6;
      SendMessageW(*(HWND *)(this + 0x40),0x100c,local_6a0,2);
      local_6d8 = CListCtrl::GetItemData(this,iVar6);
      lVar22 = (longlong)(int)local_6d8 * 0x98;
      iVar6 = *(int *)(lVar22 + 0x40 + **(longlong **)(param_1 + 0x90));
      bVar3 = false;
      local_6e0 = 0;
      plVar15 = *(longlong **)(param_1 + 0x92);
      lVar20 = plVar15[1] - *plVar15 >> 0x3f;
      local_718 = iVar6;
      local_6b0 = lVar22;
      if ((plVar15[1] - *plVar15) / 0x38 + lVar20 == lVar20) {
LAB_1400962ab:
        _Var5 = local_6d8;
        bVar3 = false;
        uVar21 = 0;
        lVar20 = **(longlong **)(param_1 + 0x94);
        lVar16 = (*(longlong **)(param_1 + 0x94))[1] - lVar20;
        lVar16 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar16),8) + lVar16;
        lVar18 = lVar16 >> 7;
        lVar16 = lVar16 >> 0x3f;
        if (lVar18 != lVar16) {
          piVar8 = (int *)(lVar20 + 0xbc);
          do {
            if ((*(longlong *)(piVar8 + 1) == (longlong)iVar6) && (*piVar8 == 2)) {
              FUN_140276f60(local_5e8,0,0x5a8);
              uVar14 = FUN_14001e8c0(local_690,param_1 + 0x68);
              FUN_14009b000(local_5e8,1,iVar6,uVar14);
              lVar20 = FUN_1400bcd00(local_5e8);
              if (lVar20 == 1) {
                FUN_14001eea0(&local_6d0,local_488);
                uVar23 = uVar23 | 0x10;
                pHVar1 = param_1 + 0x74;
                local_728 = uVar23;
                if (pHVar1 != (HWND)&local_6d0) {
                  FUN_14001f100(pHVar1);
                  *(undefined8 *)pHVar1 = local_6d0;
                  *(undefined8 *)(param_1 + 0x76) = uStack_6c8;
                  *(undefined8 *)(param_1 + 0x78) = local_6c0;
                  local_6d0 = 0;
                  uStack_6c8 = 0;
                  local_6c0 = 0;
                }
                FUN_14001f100(&local_6d0);
              }
              else {
                bVar3 = true;
              }
              FUN_14009b310(local_5e8);
              if (bVar3) goto LAB_140096562;
              break;
            }
            uVar21 = uVar21 + 1;
            piVar8 = piVar8 + 0x32;
          } while (uVar21 < (ulonglong)(lVar18 - lVar16));
        }
        iVar6 = 0;
        LVar7 = SendMessageW(*(HWND *)(param_1 + 0xc4),0x1004,0,0);
        if (0 < (int)LVar7) {
          do {
            _Var13 = CListCtrl::GetItemData(this,iVar6);
            if ((int)_Var5 < (int)_Var13) {
              local_738 = _Var13 - 1;
              local_740 = 0;
              local_748 = 0;
              local_750 = 0;
              local_758 = 0;
              SetItem(this,iVar6,0,4);
            }
            iVar6 = iVar6 + 1;
            LVar7 = SendMessageW(*(HWND *)(param_1 + 0xc4),0x1004,0,0);
          } while (iVar6 < (int)LVar7);
        }
        plVar15 = *(longlong **)(param_1 + 0x90);
        lVar16 = plVar15[1];
        lVar20 = *plVar15 + lVar22 + 0x98;
        if (lVar20 != lVar16) {
          lVar22 = (*plVar15 + lVar22) - lVar20;
          do {
            FUN_1400248b0(lVar20 + lVar22,lVar20);
            lVar20 = lVar20 + 0x98;
          } while (lVar20 != lVar16);
          lVar16 = plVar15[1];
        }
        (**(code **)(*(longlong *)(lVar16 + -0x98) + 8))((longlong *)(lVar16 + -0x98),0);
        plVar15[1] = plVar15[1] + -0x98;
        SendMessageW(*(HWND *)(param_1 + 0xc4),0x1008,local_6a0,0);
        this = (CListCtrl *)(param_1 + 0xb4);
      }
      else {
        local_6f0 = 0;
        do {
          plVar10 = (longlong *)0x0;
          if (bVar3) {
            this = (CListCtrl *)(param_1 + 0xb4);
            goto LAB_140096562;
          }
          local_720 = (LPCSTR)(*plVar15 + local_6f0);
          piVar8 = *(int **)(local_720 + 0x18);
          plVar17 = (longlong *)(*(longlong *)(local_720 + 0x20) - (longlong)piVar8 >> 3);
          plVar15 = plVar10;
          if (plVar17 != (longlong *)0x0) {
            do {
              if (*piVar8 == iVar6) {
                plVar15 = (longlong *)
                          (**(code **)(*(longlong *)(**(longlong **)(param_1 + 0x90) + lVar22) +
                                      0x10))((longlong *)(**(longlong **)(param_1 + 0x90) + lVar22),
                                             &local_6b8,0);
                plVar17 = (longlong *)FUN_1400ba8e0();
                if (plVar17 == (longlong *)0x0) {
LAB_140096586:
                  FUN_14000cd00(0x80004005);
LAB_140096591:
                  FUN_14000cd00(0x80004005);
                }
                else {
                  local_710 = (**(code **)(*plVar17 + 0x18))(plVar17);
                  local_710 = local_710 + 0x18;
                  FUN_14000c9e0(&local_710,L"Proxy server ",0xd);
                  lVar20 = local_710;
                  local_708 = 0;
                  plVar17 = (longlong *)(local_710 + -0x18);
                  plVar9 = plVar10;
                  if ((longlong *)*plVar17 != (longlong *)0x0) {
                    plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar17 + 0x20))();
                  }
                  if (plVar9 == (longlong *)0x0) {
                    plVar9 = (longlong *)FUN_1400ba8e0();
                    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9);
                  }
                  if (plVar9 == (longlong *)0x0) {
                    FUN_14000cd00(0x80004005);
                    goto LAB_140096586;
                  }
                  local_708 = (**(code **)(*plVar9 + 0x18))(plVar9);
                  local_708 = local_708 + 0x18;
                  local_728 = uVar23 | 1;
                  local_758 = CONCAT44(local_758._4_4_,*(undefined4 *)(*plVar15 + -0x10));
                  FUN_14000bc60(&local_708,lVar20,*(undefined4 *)(lVar20 + -0x10));
                  lVar22 = local_708;
                  local_700 = 0;
                  plVar15 = (longlong *)(local_708 + -0x18);
                  if ((longlong *)*plVar15 != (longlong *)0x0) {
                    plVar10 = (longlong *)(**(code **)(*(longlong *)*plVar15 + 0x20))();
                  }
                  if (plVar10 == (longlong *)0x0) {
                    plVar10 = (longlong *)FUN_1400ba8e0();
                    plVar10 = (longlong *)(**(code **)(*plVar10 + 0x20))(plVar10);
                  }
                  if (plVar10 == (longlong *)0x0) goto LAB_1400965a7;
                  local_700 = (**(code **)(*plVar10 + 0x18))(plVar10);
                  local_700 = local_700 + 0x18;
                  local_728 = uVar23 | 3;
                  local_758 = CONCAT44(local_758._4_4_,0x2e);
                  FUN_14000bc60(&local_700,lVar22,*(undefined4 *)(lVar22 + -0x10),
                                L" cannot be removed because it is a member of \"");
                  lVar16 = local_700;
                  local_6f8 = 0;
                  plVar10 = (longlong *)(local_700 + -0x18);
                  if ((longlong *)*plVar10 == (longlong *)0x0) {
                    plVar9 = (longlong *)0x0;
                  }
                  else {
                    plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar10 + 0x20))();
                  }
                  if (plVar9 == (longlong *)0x0) {
                    plVar9 = (longlong *)FUN_1400ba8e0();
                    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9);
                  }
                  if (plVar9 != (longlong *)0x0) {
                    local_6f8 = (**(code **)(*plVar9 + 0x18))(plVar9);
                    local_6f8 = local_6f8 + 0x18;
                    local_728 = uVar23 | 7;
                    local_758 = CONCAT44(local_758._4_4_,
                                         *(undefined4 *)(*(longlong *)(local_720 + 0x10) + -0x10));
                    FUN_14000bc60(&local_6f8,lVar16,*(undefined4 *)(lVar16 + -0x10));
                    lVar18 = local_6f8;
                    local_720 = (LPCSTR)0x0;
                    plVar9 = (longlong *)(local_6f8 + -0x18);
                    if ((longlong *)*plVar9 == (longlong *)0x0) {
                      plVar11 = (longlong *)0x0;
                    }
                    else {
                      plVar11 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x20))();
                    }
                    if (plVar11 == (longlong *)0x0) {
                      plVar11 = (longlong *)FUN_1400ba8e0();
                      plVar11 = (longlong *)(**(code **)(*plVar11 + 0x20))(plVar11);
                    }
                    if (plVar11 == (longlong *)0x0) goto LAB_140096591;
                    lVar12 = (**(code **)(*plVar11 + 0x18))(plVar11);
                    local_720 = (LPCSTR)(lVar12 + 0x18);
                    uVar19 = uVar23 | 0xf;
                    local_758 = CONCAT44(local_758._4_4_,0x43);
                    local_728 = uVar19;
                    FUN_14000bc60(&local_720,lVar18,*(undefined4 *)(lVar18 + -0x10),
                                  L"\" proxy chain.\nTo remove the proxy, remove it from the chain first."
                                 );
                    pCVar4 = local_720;
                    FID_conflict_MessageBoxA(local_6e8,local_720,(LPCSTR)L"Proxy Servers",0x30);
                    local_728 = uVar19 & 0xfffffff7;
                    LOCK();
                    piVar8 = (int *)(pCVar4 + -8);
                    iVar6 = *piVar8;
                    *piVar8 = *piVar8 + -1;
                    UNLOCK();
                    if (iVar6 < 2) {
                      (**(code **)(**(longlong **)(pCVar4 + -0x18) + 8))();
                    }
                    local_728 = uVar19 & 0xfffffff3;
                    LOCK();
                    piVar8 = (int *)(lVar18 + -8);
                    iVar6 = *piVar8;
                    *piVar8 = *piVar8 + -1;
                    UNLOCK();
                    if (iVar6 < 2) {
                      (**(code **)(*(longlong *)*plVar9 + 8))((longlong *)*plVar9,plVar9);
                    }
                    local_728 = uVar19 & 0xfffffff1;
                    LOCK();
                    piVar8 = (int *)(lVar16 + -8);
                    iVar6 = *piVar8;
                    *piVar8 = *piVar8 + -1;
                    UNLOCK();
                    if (iVar6 < 2) {
                      (**(code **)(*(longlong *)*plVar10 + 8))((longlong *)*plVar10,plVar10);
                    }
                    local_728 = uVar23 & 0xfffffff0;
                    LOCK();
                    piVar8 = (int *)(lVar22 + -8);
                    iVar6 = *piVar8;
                    *piVar8 = *piVar8 + -1;
                    UNLOCK();
                    if (iVar6 < 2) {
                      (**(code **)(*(longlong *)*plVar15 + 8))((longlong *)*plVar15,plVar15);
                    }
                    LOCK();
                    piVar8 = (int *)(lVar20 + -8);
                    iVar6 = *piVar8;
                    *piVar8 = *piVar8 + -1;
                    UNLOCK();
                    if (iVar6 < 2) {
                      (**(code **)(*(longlong *)*plVar17 + 8))((longlong *)*plVar17,plVar17);
                    }
                    LOCK();
                    piVar8 = (int *)(local_6b8 + -8);
                    iVar6 = *piVar8;
                    *piVar8 = *piVar8 + -1;
                    UNLOCK();
                    if (iVar6 < 2) {
                      (**(code **)(**(longlong **)(local_6b8 + -0x18) + 8))();
                    }
                    bVar3 = true;
                    lVar22 = local_6b0;
                    param_1 = local_6e8;
                    iVar6 = local_718;
                    uVar23 = local_728;
                    break;
                  }
                }
                FUN_14000cd00(0x80004005);
LAB_1400965a7:
                FUN_14000cd00(0x80004005);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              plVar15 = (longlong *)((longlong)plVar15 + 1);
              piVar8 = piVar8 + 2;
            } while (plVar15 < plVar17);
          }
          local_6e0 = local_6e0 + 1;
          local_6f0 = local_6f0 + 0x38;
          plVar15 = *(longlong **)(param_1 + 0x92);
        } while (local_6e0 < (ulonglong)((plVar15[1] - *plVar15) / 0x38));
        this = (CListCtrl *)(param_1 + 0xb4);
        if (!bVar3) goto LAB_1400962ab;
LAB_140096562:
        CListCtrl::SetItemState(this,(int)local_6a8,0,2);
      }
      LVar7 = SendMessageW(*(HWND *)(param_1 + 0xc4),0x100c,0xffffffffffffffff,2);
      iVar6 = (int)LVar7 + 1;
    } while (iVar6 != 0);
  }
  FUN_1400975d0(param_1);
  FUN_140097680(param_1,1);
  lVar20 = FUN_1400c8f10(param_1,1);
  SendMessageW(*(HWND *)(param_1 + 0x10),0x28,*(WPARAM *)(lVar20 + 0x40),1);
  __security_check_cookie(local_38 ^ (ulonglong)auStack_778);
  return;
}




// ----- FUN_1400b7140 @ 1400b7140 -----

void FUN_1400b7140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_50;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_50 = 0xfffffffffffffffe;
  local_20 = DAT_1403fb930 ^ (ulonglong)auStack_78;
  lVar5 = FUN_1400ba6f4(0x60);
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    local_58 = lVar5;
    FUN_14001efc0(lVar5,param_5);
    *(undefined4 *)(lVar5 + 0x18) = *param_4;
    FUN_140075970(lVar5 + 0x20,param_3);
    *(undefined **)(lVar5 + 0x58) = &DAT_1400b6a60;
  }
  local_48 = (undefined **)0x0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_58 = lVar5;
  FUN_14003a320(&local_48);
  local_48 = std::
             _LaunchPad<class_std::unique_ptr<class_std::tuple<void_(__cdecl*)(class_CChain,int,class_std::vector<class_CProxy,class_std::allocator<class_CProxy>_>),class_CChain,int,class_std::vector<class_CProxy,class_std::allocator<class_CProxy>_>_>,struct_std::default_delete<class_std::tuple<void_(__cdecl*)(class_CChain,int,class_std::vector<class_CProxy,class_std::allocator<class_CProxy>_>),class_CChain,int,class_std::vector<class_CProxy,class_std::allocator<class_CProxy>_>_>_>_>_>
             ::vftable;
  local_58 = 0;
  local_28 = lVar5;
  iVar3 = _Thrd_start(param_1,&LAB_14003a3f0,&local_48);
  iVar4 = 1;
  if (iVar3 != 4) {
    iVar4 = iVar3;
  }
  if (iVar4 != 0) {
    std::_Throw_C_error(iVar4);
  }
  lVar5 = local_28;
  while (local_28 = lVar5, (char)local_30 == '\0') {
    iVar4 = FUN_140273dc0(local_40,local_38);
    if (iVar4 != 0) {
      std::_Throw_C_error(iVar4);
    }
    lVar5 = local_28;
  }
  if (lVar5 != 0) {
    FUN_14001fb00(lVar5 + 0x20);
    FUN_14001f3e0(lVar5);
    FUN_14000c6f0(lVar5,0x60);
  }
  uVar2 = local_38;
  uVar1 = local_40;
  iVar4 = _Mtx_unlock(local_38);
  if (iVar4 != 0) {
    std::_Throw_C_error(iVar4);
  }
  _Mtx_destroy(uVar2);
  FUN_140273d1c(uVar1);
  __security_check_cookie(local_20 ^ (ulonglong)auStack_78);
  return;
}




