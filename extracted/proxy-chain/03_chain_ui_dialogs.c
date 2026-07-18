/* Extracted from Proxifier.exe (Ghidra). Proxy chain logic subset. */

// ----- FUN_140020560 @ 140020560 -----

undefined ** FUN_140020560(void)

{
  return &PTR_s_CChainRedundancyDlg_14035d890;
}




// ----- FUN_1400205c0 @ 1400205c0 -----

void FUN_1400205c0(CDialog *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  *(undefined ***)param_1 = CChainRedundancyDlg::vftable;
  CEdit::~CEdit((CEdit *)(param_1 + 0x140));
  lVar3 = *(longlong *)(param_1 + 0x138);
  LOCK();
  piVar1 = (int *)(lVar3 + -8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 < 2) {
    (**(code **)(**(longlong **)(lVar3 + -0x18) + 8))();
  }
  lVar3 = *(longlong *)(param_1 + 0x130);
  LOCK();
  piVar1 = (int *)(lVar3 + -8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 < 2) {
    (**(code **)(**(longlong **)(lVar3 + -0x18) + 8))();
  }
  CDialog::~CDialog(param_1);
  return;
}




// ----- FUN_1400209a0 @ 1400209a0 -----

undefined ** FUN_1400209a0(void)

{
  return &PTR_s_CChainTypeDlg_14035dca0;
}




// ----- FUN_1400209b0 @ 1400209b0 -----

/* WARNING: Removing unreachable block (ram,0x000140020a56) */
/* WARNING: Removing unreachable block (ram,0x000140020abf) */

CDialog * FUN_1400209b0(CDialog *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  CDialog *pCVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  CDialog::CDialog(param_1,0x16c,(CWnd *)0x0);
  *(undefined ***)param_1 = CChainTypeDlg::vftable;
  CDialog::CDialog(param_1 + 0x138,0x16d,(CWnd *)0x0);
  *(undefined ***)(param_1 + 0x138) = CChainRedundancyDlg::vftable;
  plVar2 = (longlong *)FUN_1400ba8e0();
  if (plVar2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
    *(longlong *)(param_1 + 0x268) = lVar3 + 0x18;
    uVar6 = 0xffffffffffffffff;
    uVar4 = 0xffffffffffffffff;
    do {
      uVar4 = uVar4 + 1;
    } while ((&DAT_14035b9fc)[uVar4] != 0);
    FUN_14000c9e0(param_1 + 0x268,&DAT_14035b9fc,uVar4 & 0xffffffff,param_4,uVar7);
    plVar2 = (longlong *)FUN_1400ba8e0();
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
      *(longlong *)(param_1 + 0x270) = lVar3 + 0x18;
      do {
        uVar6 = uVar6 + 1;
      } while ((&DAT_14035b9fc)[uVar6] != 0);
      FUN_14000c9e0(param_1 + 0x270,&DAT_14035b9fc,uVar6 & 0xffffffff);
      CWnd::CWnd((CWnd *)(param_1 + 0x278));
      *(undefined ***)(param_1 + 0x278) = CEdit::vftable;
      *(undefined4 *)(param_1 + 0x360) = 0;
      *(undefined4 *)(param_1 + 0x370) = 0;
      *(undefined4 *)(param_1 + 0x364) = 0x1e;
      *(undefined4 *)(param_1 + 0x368) = 0x3c;
      param_1[0x36c] = (CDialog)0x0;
      *(undefined8 *)(param_1 + 0x378) = 0;
      return param_1;
    }
    FUN_14000cd00(0x80004005);
  }
  FUN_14000cd00(0x80004005);
  pcVar1 = (code *)swi(3);
  pCVar5 = (CDialog *)(*pcVar1)();
  return pCVar5;
}




// ----- FUN_140020b70 @ 140020b70 -----

CDialog * FUN_140020b70(CDialog *param_1,ulonglong param_2)

{
  *(undefined ***)param_1 = CChainTypeDlg::vftable;
  FUN_1400205c0(param_1 + 0x138);
  CDialog::~CDialog(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      thunk_FUN_140282f04();
      return param_1;
    }
    _guard_check_icall(param_1,0x380);
  }
  return param_1;
}




// ----- FUN_140020be0 @ 140020be0 -----

void FUN_140020be0(CDialog *param_1)

{
  *(undefined ***)param_1 = CChainTypeDlg::vftable;
  FUN_1400205c0(param_1 + 0x138);
  CDialog::~CDialog(param_1);
  return;
}




// ----- FUN_140098270 @ 140098270 -----

void FUN_140098270(longlong param_1)

{
  LRESULT LVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined1 auStack_3c8 [32];
  undefined8 local_3a8;
  undefined **local_398 [38];
  int local_268;
  undefined1 local_260 [552];
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  char local_2c;
  uint local_28;
  uint local_20;
  ulonglong local_18;
  
  local_3a8 = 0xfffffffffffffffe;
  local_18 = DAT_1403fb930 ^ (ulonglong)auStack_3c8;
  LVar1 = SendMessageW(*(HWND *)(param_1 + 0x830),0x110a,9,0);
  if (LVar1 != 0) {
    lVar2 = FUN_1400dd7d0(param_1 + 0x7f0,LVar1);
    LVar1 = SendMessageW(*(HWND *)(param_1 + 0x830),0x110a,3,LVar1);
    if (LVar1 == 0) {
      FUN_140276f60(local_398,0,0x380);
      FUN_1400209b0(local_398);
      plVar5 = *(longlong **)(param_1 + 0x248);
      lVar2 = lVar2 * 0x38;
      local_268 = *(int *)(lVar2 + 0x30 + *plVar5);
      local_20 = (uint)*(byte *)(lVar2 + 0xc + *plVar5);
      local_34 = *(undefined4 *)(lVar2 + *plVar5);
      local_38 = (uint)*(byte *)(lVar2 + 4 + *plVar5);
      local_28 = (uint)*(byte *)(lVar2 + 5 + *plVar5);
      local_30 = *(undefined4 *)(lVar2 + 8 + *plVar5);
      lVar3 = FUN_1400bcd00(local_398);
      if (lVar3 == 1) {
        if ((local_268 != 1) || (local_2c == '\x01')) {
          uVar4 = 0;
          plVar5 = *(longlong **)(param_1 + 0x248);
          if (*(longlong *)(lVar2 + 0x20 + *plVar5) - *(longlong *)(lVar2 + 0x18 + *plVar5) >> 3 !=
              0) {
            do {
              *(undefined1 *)(*(longlong *)(*plVar5 + 0x18 + lVar2) + 5 + uVar4 * 8) = 0;
              uVar4 = uVar4 + 1;
              plVar5 = *(longlong **)(param_1 + 0x248);
            } while (uVar4 < (ulonglong)
                             (*(longlong *)(lVar2 + 0x20 + *plVar5) -
                              *(longlong *)(lVar2 + 0x18 + *plVar5) >> 3));
          }
        }
        *(int *)(**(longlong **)(param_1 + 0x248) + 0x30 + lVar2) = local_268;
        lVar3 = **(longlong **)(param_1 + 0x248);
        if (*(int *)(lVar3 + lVar2 + 0x30) == 2) {
          *(bool *)(lVar3 + lVar2 + 0xc) = local_20 != 0;
          lVar3 = **(longlong **)(param_1 + 0x248);
        }
        *(undefined4 *)(lVar2 + lVar3) = local_34;
        *(bool *)(lVar2 + 4 + **(longlong **)(param_1 + 0x248)) = local_38 != 0;
        *(bool *)(lVar2 + 5 + **(longlong **)(param_1 + 0x248)) = local_28 != 0;
        lVar3 = **(longlong **)(param_1 + 0x248);
        *(undefined4 *)(lVar3 + 8 + lVar2) = local_30;
        FUN_140097680(param_1,CONCAT71((int7)((ulonglong)lVar3 >> 8),1));
      }
      local_398[0] = CChainTypeDlg::vftable;
      FUN_1400205c0(local_260);
      CDialog::~CDialog((CDialog *)local_398);
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_3c8);
  return;
}




// ----- FUN_14009a040 @ 14009a040 -----

/* WARNING: Removing unreachable block (ram,0x00014009a258) */

void FUN_14009a040(HWND param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  LPCSTR pCVar4;
  int *piVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  bool bVar16;
  ulonglong local_f0;
  LPCSTR local_e8;
  longlong local_e0 [3];
  undefined1 local_c8 [80];
  int local_78;
  
  local_e0[1] = 0xfffffffffffffffe;
  plVar9 = (longlong *)0x0;
  local_f0 = 0;
  plVar15 = *(longlong **)(param_1 + 0x92);
  lVar14 = *plVar15;
  if ((plVar15[1] - lVar14) / 0x38 != 0) {
    uVar10 = 0xffffffffffffffff;
    plVar8 = plVar9;
    do {
      bVar3 = false;
      plVar12 = plVar9;
      if (*(longlong *)(lVar14 + 0x20 + (longlong)plVar8) -
          *(longlong *)(lVar14 + 0x18 + (longlong)plVar8) >> 3 != 0) {
        do {
          lVar13 = *(longlong *)(lVar14 + 0x18 + (longlong)plVar8);
          if (*(char *)(lVar13 + 4 + (longlong)plVar12 * 8) != '\0') {
            if ((bVar3) && (*(int *)(lVar14 + 0x30 + (longlong)plVar8) == 0)) {
              lVar13 = local_f0 * 0x38;
              plVar15 = (longlong *)FUN_1400ba8e0();
              if (plVar15 == (longlong *)0x0) goto LAB_14009a412;
              lVar6 = (**(code **)(*plVar15 + 0x18))(plVar15);
              local_f0 = lVar6 + 0x18;
              uVar7 = uVar10;
              do {
                uVar7 = uVar7 + 1;
              } while ((&DAT_14036ae50)[uVar7] != 0);
              FUN_14000c9e0(&local_f0,&DAT_14036ae50,uVar7 & 0xffffffff);
              uVar7 = local_f0;
              local_e0[0] = 0;
              plVar15 = (longlong *)(local_f0 - 0x18);
              plVar8 = plVar9;
              if ((longlong *)*plVar15 != (longlong *)0x0) {
                plVar8 = (longlong *)(**(code **)(*(longlong *)*plVar15 + 0x20))();
              }
              if (plVar8 == (longlong *)0x0) {
                plVar8 = (longlong *)FUN_1400ba8e0();
                plVar8 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8);
              }
              if (plVar8 != (longlong *)0x0) {
                local_e0[0] = (**(code **)(*plVar8 + 0x18))();
                local_e0[0] = local_e0[0] + 0x18;
                lVar14 = *(longlong *)(lVar13 + lVar14 + 0x10);
                FUN_14000bc60(local_e0,uVar7,*(undefined4 *)(uVar7 - 0x10),lVar14,
                              *(undefined4 *)(lVar14 + -0x10));
                lVar14 = local_e0[0];
                local_e8 = (LPCSTR)0x0;
                plVar8 = (longlong *)(local_e0[0] + -0x18);
                if ((longlong *)*plVar8 != (longlong *)0x0) {
                  plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar8 + 0x20))();
                }
                if (plVar9 == (longlong *)0x0) {
                  plVar9 = (longlong *)FUN_1400ba8e0();
                  plVar9 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9);
                }
                if (plVar9 != (longlong *)0x0) {
                  lVar13 = (**(code **)(*plVar9 + 0x18))(plVar9);
                  local_e8 = (LPCSTR)(lVar13 + 0x18);
                  do {
                    uVar10 = uVar10 + 1;
                  } while (L"\":\nHTTP proxy server must be the last one in the chain."[uVar10] !=
                           L'\0');
                  FUN_14000bc60(&local_e8,lVar14,*(undefined4 *)(lVar14 + -0x10),
                                L"\":\nHTTP proxy server must be the last one in the chain.",
                                (int)uVar10);
                  pCVar4 = local_e8;
                  FID_conflict_MessageBoxA(param_1,local_e8,(LPCSTR)L"Proxy Servers",0x30);
                  LOCK();
                  piVar5 = (int *)(pCVar4 + -8);
                  iVar1 = *piVar5;
                  *piVar5 = *piVar5 + -1;
                  UNLOCK();
                  if (iVar1 < 2) {
                    (**(code **)(**(longlong **)(pCVar4 + -0x18) + 8))();
                  }
                  LOCK();
                  piVar5 = (int *)(lVar14 + -8);
                  iVar1 = *piVar5;
                  *piVar5 = *piVar5 + -1;
                  UNLOCK();
                  if (iVar1 < 2) {
                    (**(code **)(*(longlong *)*plVar8 + 8))((longlong *)*plVar8,plVar8);
                  }
                  LOCK();
                  piVar5 = (int *)(uVar7 - 8);
                  iVar1 = *piVar5;
                  *piVar5 = *piVar5 + -1;
                  UNLOCK();
                  if (1 < iVar1) {
                    return;
                  }
                  (**(code **)(*(longlong *)*plVar15 + 8))((longlong *)*plVar15,plVar15);
                  return;
                }
                FUN_14000cd00(0x80004005);
LAB_14009a412:
                FUN_14000cd00(0x80004005);
              }
              FUN_14000cd00(0x80004005);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            lVar14 = **(longlong **)(param_1 + 0x90);
            lVar11 = (*(longlong **)(param_1 + 0x90))[1] - lVar14;
            lVar6 = lVar11 >> 0x3f;
            lVar11 = lVar11 / 0x98 + lVar6;
            if (lVar11 != lVar6) {
              piVar5 = (int *)(lVar14 + 0x40);
              plVar15 = plVar9;
              do {
                if (*piVar5 == *(int *)(lVar13 + (longlong)plVar12 * 8)) goto LAB_14009a149;
                plVar15 = (longlong *)((longlong)plVar15 + 1);
                piVar5 = piVar5 + 0x26;
              } while (plVar15 < (longlong *)(lVar11 - lVar6));
            }
            plVar15 = (longlong *)0xffffffff;
LAB_14009a149:
            FUN_14001bc10(local_c8,(longlong)(int)plVar15 * 0x98 + lVar14);
            bVar16 = local_78 == 3;
            FUN_14008b4f0(local_c8);
            if (bVar16) {
              bVar3 = true;
            }
          }
          plVar12 = (longlong *)((longlong)plVar12 + 1);
          plVar15 = *(longlong **)(param_1 + 0x92);
          lVar14 = *plVar15;
        } while (plVar12 < (longlong *)
                           (*(longlong *)(lVar14 + 0x20 + (longlong)plVar8) -
                            *(longlong *)(lVar14 + 0x18 + (longlong)plVar8) >> 3));
      }
      local_f0 = local_f0 + 1;
      plVar8 = plVar8 + 7;
    } while (local_f0 < (ulonglong)((plVar15[1] - lVar14) / 0x38));
  }
  FUN_1400bd318(param_1);
  return;
}




// ----- FUN_14009b800 @ 14009b800 -----

/* WARNING: Removing unreachable block (ram,0x00014009b8f5) */
/* WARNING: Removing unreachable block (ram,0x00014009bb34) */

void FUN_14009b800(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auStack_e8 [32];
  int local_c8;
  uint local_c4;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined1 local_90 [8];
  undefined1 *local_88;
  undefined8 local_80;
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_80 = 0xfffffffffffffffe;
  local_30 = DAT_1403fb930 ^ (ulonglong)auStack_e8;
  FUN_1400bd28c();
  uVar14 = 0;
  if (*(char *)(param_1 + 0x1d4) == '\0') {
    lVar4 = *(longlong *)(param_1 + 0x148);
    uVar10 = (*(longlong *)(param_1 + 0x150) - lVar4) / 0x38;
    if (uVar10 != 0) {
      piVar5 = (int *)(lVar4 + 0x34);
      uVar11 = uVar14;
      do {
        if (*piVar5 == *(int *)(param_1 + 0x1d0)) goto LAB_14009bafa;
        uVar11 = uVar11 + 1;
        piVar5 = piVar5 + 0xe;
      } while (uVar11 < uVar10);
    }
    uVar11 = 0xffffffff;
LAB_14009bafa:
    lVar13 = (longlong)(int)uVar11 * 0x38;
    plVar3 = (longlong *)FUN_1400ba8e0();
    if (plVar3 == (longlong *)0x0) {
      FUN_14000cd00(0x80004005);
      goto LAB_14009bfa6;
    }
    local_b8 = (**(code **)(*plVar3 + 0x18))(plVar3);
    local_b8 = local_b8 + 0x18;
    uVar10 = 0xffffffffffffffff;
    do {
      uVar10 = uVar10 + 1;
    } while (L"Chain "[uVar10] != L'\0');
    FUN_14000c9e0(&local_b8,L"Chain ",uVar10 & 0xffffffff);
    plVar3 = (longlong *)FUN_14000b9f0(&local_a0,&local_b8,lVar4 + 0x10 + lVar13);
    lVar4 = *plVar3;
    lVar8 = *(longlong *)(param_1 + 0x1d8);
    plVar3 = (longlong *)(lVar8 + -0x18);
    if ((longlong *)(lVar4 + -0x18) != plVar3) {
      if ((*(int *)(lVar8 + -8) < 0) || (*(longlong *)(lVar4 + -0x18) != *plVar3)) {
        FUN_14000c9e0(param_1 + 0x1d8,lVar4,*(undefined4 *)(lVar4 + -0x10));
      }
      else {
        lVar4 = FUN_14000cba0();
        LOCK();
        piVar5 = (int *)(lVar8 + -8);
        iVar12 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar12 < 2) {
          (**(code **)(*(longlong *)*plVar3 + 8))((longlong *)*plVar3,plVar3);
        }
        *(longlong *)(param_1 + 0x1d8) = lVar4 + 0x18;
      }
    }
    LOCK();
    piVar5 = (int *)(local_a0 + -8);
    iVar12 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar12 < 2) {
      (**(code **)(**(longlong **)(local_a0 + -0x18) + 8))();
    }
    LOCK();
    piVar5 = (int *)(local_b8 + -8);
    iVar12 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar12 < 2) {
      (**(code **)(**(longlong **)(local_b8 + -0x18) + 8))();
    }
    FUN_14009a920(param_1 + 0x148,local_90,*(longlong *)(param_1 + 0x148) + lVar13);
    uVar10 = 0xffffffffffffffff;
    do {
      uVar10 = uVar10 + 1;
    } while (L"To proceed with the chain removal you can:"[uVar10] != L'\0');
    FUN_14000c9e0(param_1 + 0x1f0,L"To proceed with the chain removal you can:",uVar10 & 0xffffffff)
    ;
    FUN_1400c9b30(param_1,L"Chain Removal");
    iVar12 = 3;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x130);
    lVar8 = *(longlong *)(param_1 + 0x138) - lVar4;
    lVar13 = lVar8 >> 0x3f;
    lVar8 = lVar8 / 0x98 + lVar13;
    if (lVar8 != lVar13) {
      piVar5 = (int *)(lVar4 + 0x40);
      uVar10 = uVar14;
      do {
        if (*piVar5 == *(int *)(param_1 + 0x1d0)) goto LAB_14009b8a8;
        uVar10 = uVar10 + 1;
        piVar5 = piVar5 + 0x26;
      } while (uVar10 < (ulonglong)(lVar8 - lVar13));
    }
    uVar10 = 0xffffffff;
LAB_14009b8a8:
    lVar13 = (longlong)(int)uVar10 * 0x98;
    plVar3 = (longlong *)(lVar13 + lVar4);
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,&local_a8,0);
    plVar3 = (longlong *)FUN_1400ba8e0();
    if (plVar3 == (longlong *)0x0) {
LAB_14009bfa6:
      FUN_14000cd00(0x80004005);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_c0 = (**(code **)(*plVar3 + 0x18))(plVar3);
    local_c0 = local_c0 + 0x18;
    uVar10 = 0xffffffffffffffff;
    do {
      uVar10 = uVar10 + 1;
    } while ((&DAT_140374690)[uVar10] != 0);
    FUN_14000c9e0(&local_c0,&DAT_140374690,uVar10 & 0xffffffff);
    plVar3 = (longlong *)FUN_14000b9f0(&local_b0,&local_c0,uVar2);
    lVar4 = *plVar3;
    lVar8 = *(longlong *)(param_1 + 0x1d8);
    plVar3 = (longlong *)(lVar8 + -0x18);
    if ((longlong *)(lVar4 + -0x18) != plVar3) {
      if ((*(int *)(lVar8 + -8) < 0) || (*(longlong *)(lVar4 + -0x18) != *plVar3)) {
        FUN_14000c9e0(param_1 + 0x1d8,lVar4,*(undefined4 *)(lVar4 + -0x10));
      }
      else {
        lVar4 = FUN_14000cba0();
        LOCK();
        piVar5 = (int *)(lVar8 + -8);
        iVar12 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar12 < 2) {
          (**(code **)(*(longlong *)*plVar3 + 8))((longlong *)*plVar3,plVar3);
        }
        *(longlong *)(param_1 + 0x1d8) = lVar4 + 0x18;
      }
    }
    LOCK();
    piVar5 = (int *)(local_b0 + -8);
    iVar12 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar12 < 2) {
      (**(code **)(**(longlong **)(local_b0 + -0x18) + 8))();
    }
    LOCK();
    piVar5 = (int *)(local_c0 + -8);
    iVar12 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar12 < 2) {
      (**(code **)(**(longlong **)(local_c0 + -0x18) + 8))();
    }
    LOCK();
    piVar5 = (int *)(local_a8 + -8);
    iVar12 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar12 < 2) {
      (**(code **)(**(longlong **)(local_a8 + -0x18) + 8))();
    }
    lVar13 = *(longlong *)(param_1 + 0x130) + lVar13;
    lVar8 = *(longlong *)(param_1 + 0x138);
    lVar4 = lVar13 + 0x98;
    if (lVar4 != lVar8) {
      lVar13 = lVar13 - lVar4;
      do {
        FUN_1400248b0(lVar13 + lVar4,lVar4);
        lVar4 = lVar4 + 0x98;
      } while (lVar4 != lVar8);
      lVar8 = *(longlong *)(param_1 + 0x138);
    }
    (**(code **)(*(longlong *)(lVar8 + -0x98) + 8))((longlong *)(lVar8 + -0x98),0);
    *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + -0x98;
    uVar10 = 0xffffffffffffffff;
    do {
      uVar10 = uVar10 + 1;
    } while (L"To proceed with the proxy removal you can:"[uVar10] != L'\0');
    FUN_14000c9e0(param_1 + 0x1f0,L"To proceed with the proxy removal you can:",uVar10 & 0xffffffff)
    ;
    FUN_1400c9b30(param_1,L"Proxy Removal");
    iVar12 = 2;
  }
  local_c4 = 0;
  lVar4 = *(longlong *)(param_1 + 0x168);
  lVar13 = *(longlong *)(param_1 + 0x160);
  lVar8 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar4 - lVar13),8) + (lVar4 - lVar13);
  uVar9 = (lVar8 >> 7) - (lVar8 >> 0x3f);
  uVar10 = uVar14;
  uVar11 = uVar14;
  local_c8 = iVar12;
  if (uVar9 == 0) {
LAB_14009be8f:
    if (*(char *)(param_1 + 0x1d5) != '\0') {
      uVar2 = CONCAT71((int7)(uVar9 >> 8),1);
      goto LAB_14009be9e;
    }
  }
  else {
    do {
      uVar15 = (uint)uVar11;
      if ((*(int *)(lVar13 + 0xbc + uVar10) == iVar12) &&
         (*(longlong *)(lVar13 + 0xc0 + uVar10) == (longlong)*(int *)(param_1 + 0x1d0))) {
        plVar3 = (longlong *)(param_1 + 0x1e8);
        plVar6 = (longlong *)FUN_14000b9f0(&local_98,plVar3,lVar13 + 8 + uVar10);
        lVar4 = *plVar6;
        lVar13 = *plVar3;
        plVar6 = (longlong *)(lVar13 + -0x18);
        if ((longlong *)(lVar4 + -0x18) != plVar6) {
          if ((*(int *)(lVar13 + -8) < 0) || (*(longlong *)(lVar4 + -0x18) != *plVar6)) {
            FUN_14000c9e0(plVar3,lVar4,*(undefined4 *)(lVar4 + -0x10));
          }
          else {
            lVar4 = FUN_14000cba0();
            LOCK();
            piVar5 = (int *)(lVar13 + -8);
            iVar12 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar12 < 2) {
              (**(code **)(*(longlong *)*plVar6 + 8))((longlong *)*plVar6,plVar6);
            }
            *plVar3 = lVar4 + 0x18;
            uVar15 = local_c4;
          }
        }
        LOCK();
        piVar5 = (int *)(local_98 + -8);
        iVar12 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar12 < 2) {
          (**(code **)(**(longlong **)(local_98 + -0x18) + 8))();
        }
        local_c4 = uVar15 + 1;
        uVar11 = (ulonglong)local_c4;
        lVar4 = *(longlong *)(param_1 + 0x168);
        lVar13 = lVar4 - *(longlong *)(param_1 + 0x160);
        lVar13 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar13),8) + lVar13;
        if (uVar14 == (-1 - (lVar13 >> 0x3f)) + (lVar13 >> 7)) {
          *(undefined1 *)(param_1 + 0x1d5) = 1;
          FUN_14000bd40(plVar3,L" (cannot be removed)",0x14);
          lVar4 = *(longlong *)(param_1 + 0x168);
        }
        lVar13 = lVar4 - *(longlong *)(param_1 + 0x160);
        lVar13 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar13),8) + lVar13;
        iVar12 = local_c8;
        if (uVar14 < (ulonglong)((-1 - (lVar13 >> 0x3f)) + (lVar13 >> 7))) {
          FUN_14000bd40(plVar3,&DAT_14035cc3c,2);
          lVar4 = *(longlong *)(param_1 + 0x168);
          iVar12 = local_c8;
        }
      }
      uVar14 = uVar14 + 1;
      lVar13 = *(longlong *)(param_1 + 0x160);
      lVar8 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar4 - lVar13),8) + (lVar4 - lVar13);
      uVar9 = (lVar8 >> 7) - (lVar8 >> 0x3f);
      uVar10 = uVar10 + 200;
    } while (uVar14 < uVar9);
    if ((int)uVar11 < 2) goto LAB_14009be8f;
  }
  uVar2 = 0;
LAB_14009be9e:
  uVar14 = 0;
  FUN_14009b4f0(param_1,uVar2);
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_88 = local_78;
  uVar2 = FUN_14001ef30(local_78,param_1 + 0x148);
  uVar7 = FUN_14001efc0(local_60,param_1 + 0x130);
  FUN_14009df00(&local_48,uVar7,uVar2,0);
  if (local_40 - local_48 >> 3 != 0) {
    do {
      SendMessageW(*(HWND *)(param_1 + 0x240),0x143,0,*(LPARAM *)(local_48 + uVar14 * 8));
      uVar14 = uVar14 + 1;
    } while (uVar14 < (ulonglong)(local_40 - local_48 >> 3));
  }
  *(undefined4 *)(param_1 + 0x2e8) = 0xffffffff;
  FUN_1400c67a8(param_1,0);
  MessageBeep(0x30);
  FUN_14001f040(&local_48);
  __security_check_cookie(local_30 ^ (ulonglong)auStack_e8);
  return;
}




