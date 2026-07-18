/* Extracted from Proxifier.exe (Ghidra). Proxy chain logic subset. */

// ----- FUN_14001bc10 @ 14001bc10 -----

undefined8 * FUN_14001bc10(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_14001bd90();
  *param_1 = CProxy::vftable;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  lVar1 = FUN_14000cba0(*(longlong *)(param_2 + 0x48) + -0x18);
  param_1[9] = lVar1 + 0x18;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  *(undefined1 *)((longlong)param_1 + 0x54) = *(undefined1 *)(param_2 + 0x54);
  lVar1 = FUN_14000cba0(*(longlong *)(param_2 + 0x58) + -0x18);
  param_1[0xb] = lVar1 + 0x18;
  lVar1 = FUN_14000cba0(*(longlong *)(param_2 + 0x60) + -0x18);
  param_1[0xc] = lVar1 + 0x18;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  lVar1 = FUN_14000cba0(*(longlong *)(param_2 + 0x70) + -0x18);
  param_1[0xe] = lVar1 + 0x18;
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0x78);
  lVar1 = FUN_14000cba0(*(longlong *)(param_2 + 0x80) + -0x18);
  param_1[0x10] = lVar1 + 0x18;
  lVar1 = FUN_14000cba0(*(longlong *)(param_2 + 0x88) + -0x18);
  param_1[0x11] = lVar1 + 0x18;
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x90);
  return param_1;
}




// ----- FUN_14008b310 @ 14008b310 -----

/* WARNING: Removing unreachable block (ram,0x00014008b3e9) */

undefined8 *
FUN_14008b310(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  
  FUN_14003a500();
  *param_1 = CProxy::vftable;
  plVar4 = (longlong *)FUN_1400ba8e0();
  if (plVar4 == (longlong *)0x0) {
LAB_14008b4b2:
    FUN_14000cd00(0x80004005);
LAB_14008b4bd:
    FUN_14000cd00(0x80004005);
LAB_14008b4c8:
    FUN_14000cd00(0x80004005);
  }
  else {
    lVar5 = (**(code **)(*plVar4 + 0x18))(plVar4);
    param_1[9] = lVar5 + 0x18;
    plVar4 = (longlong *)FUN_1400ba8e0();
    if (plVar4 == (longlong *)0x0) goto LAB_14008b4bd;
    lVar5 = (**(code **)(*plVar4 + 0x18))(plVar4);
    param_1[0xb] = lVar5 + 0x18;
    plVar4 = (longlong *)FUN_1400ba8e0();
    if (plVar4 == (longlong *)0x0) goto LAB_14008b4c8;
    lVar5 = (**(code **)(*plVar4 + 0x18))(plVar4);
    param_1[0xc] = lVar5 + 0x18;
    plVar4 = (longlong *)FUN_1400ba8e0();
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x18))(plVar4);
      param_1[0xe] = lVar5 + 0x18;
      uVar6 = 0xffffffffffffffff;
      do {
        uVar6 = uVar6 + 1;
      } while (L"Mozilla/4.0 (compatible; MSIE 6.0; Windows NT 5.1)"[uVar6] != L'\0');
      FUN_14000c9e0(param_1 + 0xe,L"Mozilla/4.0 (compatible; MSIE 6.0; Windows NT 5.1)",
                    uVar6 & 0xffffffff);
      plVar4 = (longlong *)FUN_1400ba8e0();
      if (plVar4 == (longlong *)0x0) goto LAB_14008b4de;
      lVar5 = (**(code **)(*plVar4 + 0x18))(plVar4);
      param_1[0x10] = lVar5 + 0x18;
      plVar4 = (longlong *)FUN_1400ba8e0();
      if (plVar4 != (longlong *)0x0) {
        lVar5 = (**(code **)(*plVar4 + 0x18))(plVar4);
        param_1[0x11] = lVar5 + 0x18;
        *(undefined4 *)(param_1 + 10) = param_4;
        *(undefined1 *)((longlong)param_1 + 0x54) = 0;
        *(undefined4 *)(param_1 + 8) = param_5;
        *(undefined1 *)(param_1 + 0xf) = 0;
        *(undefined1 *)(param_1 + 0x12) = 0;
        *(undefined4 *)(param_1 + 0xd) = 0;
        lVar5 = *param_2;
        LOCK();
        piVar1 = (int *)(lVar5 + -8);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 < 2) {
          (**(code **)(**(longlong **)(lVar5 + -0x18) + 8))();
        }
        return param_1;
      }
      FUN_14000cd00(0x80004005);
      goto LAB_14008b4b2;
    }
  }
  FUN_14000cd00(0x80004005);
LAB_14008b4de:
  FUN_14000cd00(0x80004005);
  pcVar3 = (code *)swi(3);
  puVar7 = (undefined8 *)(*pcVar3)();
  return puVar7;
}




// ----- FUN_14008b4f0 @ 14008b4f0 -----

void FUN_14008b4f0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  *param_1 = CProxy::vftable;
  lVar3 = param_1[0x11];
  LOCK();
  piVar1 = (int *)(lVar3 + -8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 < 2) {
    (**(code **)(**(longlong **)(lVar3 + -0x18) + 8))();
  }
  lVar3 = param_1[0x10];
  LOCK();
  piVar1 = (int *)(lVar3 + -8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 < 2) {
    (**(code **)(**(longlong **)(lVar3 + -0x18) + 8))();
  }
  lVar3 = param_1[0xe];
  LOCK();
  piVar1 = (int *)(lVar3 + -8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 < 2) {
    (**(code **)(**(longlong **)(lVar3 + -0x18) + 8))();
  }
  lVar3 = param_1[0xc];
  LOCK();
  piVar1 = (int *)(lVar3 + -8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 < 2) {
    (**(code **)(**(longlong **)(lVar3 + -0x18) + 8))();
  }
  lVar3 = param_1[0xb];
  LOCK();
  piVar1 = (int *)(lVar3 + -8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 < 2) {
    (**(code **)(**(longlong **)(lVar3 + -0x18) + 8))();
  }
  lVar3 = param_1[9];
  LOCK();
  piVar1 = (int *)(lVar3 + -8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 < 2) {
    (**(code **)(**(longlong **)(lVar3 + -0x18) + 8))();
  }
  FUN_14001be40(param_1);
  return;
}




// ----- FUN_14008bf30 @ 14008bf30 -----

undefined ** FUN_14008bf30(void)

{
  return &PTR_s_CProxyAdvancedDlg_140372880;
}




// ----- FUN_14008bf40 @ 14008bf40 -----

/* WARNING: Removing unreachable block (ram,0x00014008bfae) */

CDialog * FUN_14008bf40(CDialog *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  CDialog *pCVar5;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  CDialog::CDialog(param_1,0x16b,(CWnd *)0x0);
  *(undefined ***)param_1 = CProxyAdvancedDlg::vftable;
  plVar2 = (longlong *)FUN_1400ba8e0();
  if (plVar2 == (longlong *)0x0) {
    FUN_14000cd00(0x80004005);
    pcVar1 = (code *)swi(3);
    pCVar5 = (CDialog *)(*pcVar1)();
    return pCVar5;
  }
  lVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
  *(longlong *)(param_1 + 0x130) = lVar3 + 0x18;
  uVar4 = 0xffffffffffffffff;
  do {
    uVar4 = uVar4 + 1;
  } while ((&DAT_14035b9fc)[uVar4] != 0);
  FUN_14000c9e0(param_1 + 0x130,&DAT_14035b9fc,uVar4 & 0xffffffff,param_4,uVar6);
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  return param_1;
}




// ----- FUN_14008c010 @ 14008c010 -----

CDialog * FUN_14008c010(CDialog *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  *(undefined ***)param_1 = CProxyAdvancedDlg::vftable;
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
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      thunk_FUN_140282f04();
      return param_1;
    }
    _guard_check_icall(param_1,0x148,param_3,param_4,uVar4);
  }
  return param_1;
}




// ----- FUN_14008c0a0 @ 14008c0a0 -----

void FUN_14008c0a0(CDialog *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  *(undefined ***)param_1 = CProxyAdvancedDlg::vftable;
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




// ----- FUN_1400909e0 @ 1400909e0 -----

undefined ** FUN_1400909e0(void)

{
  return &PTR_s_CProxyDlg_1403744d0;
}




// ----- FUN_1400909f0 @ 1400909f0 -----

/* WARNING: Removing unreachable block (ram,0x000140090c8b) */
/* WARNING: Removing unreachable block (ram,0x000140090b2f) */
/* WARNING: Removing unreachable block (ram,0x000140090ac5) */
/* WARNING: Removing unreachable block (ram,0x000140090c0f) */
/* WARNING: Removing unreachable block (ram,0x000140090dcf) */

CDialogEx * FUN_1400909f0(CDialogEx *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  CDialogEx *pCVar5;
  ulonglong uVar6;
  
  CDialogEx::CDialogEx(param_1,0x145,(CWnd *)0x0);
  *(undefined ***)param_1 = CDialogResize::vftable;
  param_1[0x170] = (CDialogEx)0x0;
  *(undefined8 *)(param_1 + 0x174) = 0;
  CopyRect((LPRECT)(param_1 + 0x17c),(RECT *)0x0);
  *(undefined8 *)(param_1 + 400) = 0x3ff8000000000000;
  *(undefined8 *)(param_1 + 0x198) = 0x3ff8000000000000;
  param_1[0x18c] = (CDialogEx)0x0;
  *(undefined ***)param_1 = CProxyDlg::vftable;
  FUN_14008bf40(param_1 + 0x1a8);
  plVar2 = (longlong *)FUN_1400ba8e0();
  if (plVar2 == (longlong *)0x0) {
LAB_140090e80:
    FUN_14000cd00(0x80004005);
LAB_140090e8b:
    FUN_14000cd00(0x80004005);
  }
  else {
    lVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
    *(longlong *)(param_1 + 0x2f8) = lVar3 + 0x18;
    uVar6 = 0xffffffffffffffff;
    uVar4 = uVar6;
    do {
      uVar4 = uVar4 + 1;
    } while ((&DAT_14035b9fc)[uVar4] != 0);
    FUN_14000c9e0(param_1 + 0x2f8,&DAT_14035b9fc,uVar4 & 0xffffffff);
    plVar2 = (longlong *)FUN_1400ba8e0();
    if (plVar2 == (longlong *)0x0) goto LAB_140090e8b;
    lVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
    *(longlong *)(param_1 + 0x300) = lVar3 + 0x18;
    uVar4 = uVar6;
    do {
      uVar4 = uVar4 + 1;
    } while ((&DAT_14035b9fc)[uVar4] != 0);
    FUN_14000c9e0(param_1 + 0x300,&DAT_14035b9fc,uVar4 & 0xffffffff);
    *(undefined4 *)(param_1 + 0x308) = 0;
    CWnd::CWnd((CWnd *)(param_1 + 0x310));
    *(undefined ***)(param_1 + 0x310) = CButton::vftable;
    *(undefined4 *)(param_1 + 0x3f8) = 0;
    CWnd::CWnd((CWnd *)(param_1 + 0x400));
    *(undefined ***)(param_1 + 0x400) = CButton::vftable;
    *(undefined4 *)(param_1 + 0x4e8) = 0;
    CWnd::CWnd((CWnd *)(param_1 + 0x4f0));
    *(undefined ***)(param_1 + 0x4f0) = CButton::vftable;
    CWnd::CWnd((CWnd *)(param_1 + 0x5d8));
    *(undefined ***)(param_1 + 0x5d8) = CButton::vftable;
    *(undefined4 *)(param_1 + 0x6c0) = 0;
    plVar2 = (longlong *)FUN_1400ba8e0();
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
      *(longlong *)(param_1 + 0x6c8) = lVar3 + 0x18;
      uVar4 = uVar6;
      do {
        uVar4 = uVar4 + 1;
      } while ((&DAT_14035b9fc)[uVar4] != 0);
      FUN_14000c9e0(param_1 + 0x6c8,&DAT_14035b9fc,uVar4 & 0xffffffff);
      CWnd::CWnd((CWnd *)(param_1 + 0x6d0));
      *(undefined ***)(param_1 + 0x6d0) = CStatic::vftable;
      plVar2 = (longlong *)FUN_1400ba8e0();
      if (plVar2 == (longlong *)0x0) goto LAB_140090ea1;
      lVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
      *(longlong *)(param_1 + 0x7b8) = lVar3 + 0x18;
      uVar4 = uVar6;
      do {
        uVar4 = uVar4 + 1;
      } while ((&DAT_14035b9fc)[uVar4] != 0);
      FUN_14000c9e0(param_1 + 0x7b8,&DAT_14035b9fc,uVar4 & 0xffffffff);
      CWnd::CWnd((CWnd *)(param_1 + 0x7c0));
      *(undefined ***)(param_1 + 0x7c0) = CEdit::vftable;
      CWnd::CWnd((CWnd *)(param_1 + 0x8a8));
      *(undefined ***)(param_1 + 0x8a8) = CStatic::vftable;
      *(undefined4 *)(param_1 + 0x990) = 0;
      CWnd::CWnd((CWnd *)(param_1 + 0x998));
      *(undefined ***)(param_1 + 0x998) = CButton::vftable;
      CWnd::CWnd((CWnd *)(param_1 + 0xa80));
      *(undefined ***)(param_1 + 0xa80) = CEdit::vftable;
      CWnd::CWnd((CWnd *)(param_1 + 0xb68));
      *(undefined ***)(param_1 + 0xb68) = CButton::vftable;
      *(undefined4 *)(param_1 + 0xc50) = 0;
      CWnd::CWnd((CWnd *)(param_1 + 0xc58));
      *(undefined ***)(param_1 + 0xc58) = CStatic::vftable;
      CWnd::CWnd((CWnd *)(param_1 + 0xd40));
      *(undefined ***)(param_1 + 0xd40) = CEdit::vftable;
      CWnd::CWnd((CWnd *)(param_1 + 0xe28));
      *(undefined ***)(param_1 + 0xe28) = CComboBox::vftable;
      pCVar5 = param_1 + 0xf10;
      plVar2 = (longlong *)FUN_1400ba8e0();
      if (plVar2 != (longlong *)0x0) {
        lVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
        *(longlong *)pCVar5 = lVar3 + 0x18;
        uVar4 = uVar6;
        do {
          uVar4 = uVar4 + 1;
        } while ((&DAT_14035b9fc)[uVar4] != 0);
        FUN_14000c9e0(pCVar5,&DAT_14035b9fc,uVar4 & 0xffffffff);
        *(undefined8 *)(param_1 + 400) = 0x3ff6666666666666;
        *(undefined8 *)(param_1 + 0x198) = 0x3ff199999999999a;
        *(undefined8 *)(param_1 + 0x1a0) = 0;
        *(undefined4 *)(param_1 + 0x2f0) = 0xffffffff;
        do {
          uVar6 = uVar6 + 1;
        } while (L"Mozilla/4.0 (compatible; MSIE 6.0; Windows NT 5.1)"[uVar6] != L'\0');
        FUN_14000c9e0(pCVar5,L"Mozilla/4.0 (compatible; MSIE 6.0; Windows NT 5.1)",
                      uVar6 & 0xffffffff);
        *(undefined4 *)(param_1 + 0x2e0) = 1;
        *(undefined8 *)(param_1 + 0x2e4) = 1;
        return param_1;
      }
      FUN_14000cd00(0x80004005);
      goto LAB_140090e80;
    }
  }
  FUN_14000cd00(0x80004005);
LAB_140090ea1:
  FUN_14000cd00(0x80004005);
  pcVar1 = (code *)swi(3);
  pCVar5 = (CDialogEx *)(*pcVar1)();
  return pCVar5;
}




// ----- FUN_140090f00 @ 140090f00 -----

CDialogEx * FUN_140090f00(CDialogEx *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  CDialogEx *pCVar8;
  longlong *plVar9;
  
  CDialogEx::CDialogEx(param_1,0x145,(CWnd *)0x0);
  *(undefined ***)param_1 = CDialogResize::vftable;
  param_1[0x170] = (CDialogEx)0x0;
  uVar6 = 0;
  *(undefined8 *)(param_1 + 0x174) = 0;
  CopyRect((LPRECT)(param_1 + 0x17c),(RECT *)0x0);
  *(undefined8 *)(param_1 + 400) = 0x3ff8000000000000;
  *(undefined8 *)(param_1 + 0x198) = 0x3ff8000000000000;
  param_1[0x18c] = (CDialogEx)0x0;
  *(undefined ***)param_1 = CProxyDlg::vftable;
  FUN_14008bf40(param_1 + 0x1a8);
  plVar4 = (longlong *)FUN_1400ba8e0();
  if (plVar4 == (longlong *)0x0) {
LAB_140091554:
    FUN_14000cd00(0x80004005);
LAB_14009155f:
    FUN_14000cd00(0x80004005);
  }
  else {
    lVar5 = (**(code **)(*plVar4 + 0x18))(plVar4);
    *(longlong *)(param_1 + 0x2f8) = lVar5 + 0x18;
    plVar4 = (longlong *)FUN_1400ba8e0();
    if (plVar4 == (longlong *)0x0) goto LAB_14009155f;
    lVar5 = (**(code **)(*plVar4 + 0x18))(plVar4);
    *(longlong *)(param_1 + 0x300) = lVar5 + 0x18;
    CWnd::CWnd((CWnd *)(param_1 + 0x310));
    *(undefined ***)(param_1 + 0x310) = CButton::vftable;
    CWnd::CWnd((CWnd *)(param_1 + 0x400));
    *(undefined ***)(param_1 + 0x400) = CButton::vftable;
    CWnd::CWnd((CWnd *)(param_1 + 0x4f0));
    *(undefined ***)(param_1 + 0x4f0) = CButton::vftable;
    CWnd::CWnd((CWnd *)(param_1 + 0x5d8));
    *(undefined ***)(param_1 + 0x5d8) = CButton::vftable;
    plVar4 = (longlong *)FUN_1400ba8e0();
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x18))(plVar4);
      *(longlong *)(param_1 + 0x6c8) = lVar5 + 0x18;
      CWnd::CWnd((CWnd *)(param_1 + 0x6d0));
      *(undefined ***)(param_1 + 0x6d0) = CStatic::vftable;
      plVar4 = (longlong *)FUN_1400ba8e0();
      if (plVar4 == (longlong *)0x0) goto LAB_140091575;
      lVar5 = (**(code **)(*plVar4 + 0x18))(plVar4);
      *(longlong *)(param_1 + 0x7b8) = lVar5 + 0x18;
      CWnd::CWnd((CWnd *)(param_1 + 0x7c0));
      *(undefined ***)(param_1 + 0x7c0) = CEdit::vftable;
      CWnd::CWnd((CWnd *)(param_1 + 0x8a8));
      *(undefined ***)(param_1 + 0x8a8) = CStatic::vftable;
      CWnd::CWnd((CWnd *)(param_1 + 0x998));
      *(undefined ***)(param_1 + 0x998) = CButton::vftable;
      CWnd::CWnd((CWnd *)(param_1 + 0xa80));
      *(undefined ***)(param_1 + 0xa80) = CEdit::vftable;
      CWnd::CWnd((CWnd *)(param_1 + 0xb68));
      *(undefined ***)(param_1 + 0xb68) = CButton::vftable;
      CWnd::CWnd((CWnd *)(param_1 + 0xc58));
      *(undefined ***)(param_1 + 0xc58) = CStatic::vftable;
      CWnd::CWnd((CWnd *)(param_1 + 0xd40));
      *(undefined ***)(param_1 + 0xd40) = CEdit::vftable;
      CWnd::CWnd((CWnd *)(param_1 + 0xe28));
      *(undefined ***)(param_1 + 0xe28) = CComboBox::vftable;
      plVar4 = (longlong *)FUN_1400ba8e0();
      if (plVar4 != (longlong *)0x0) {
        lVar5 = (**(code **)(*plVar4 + 0x18))(plVar4);
        *(longlong *)(param_1 + 0xf10) = lVar5 + 0x18;
        *(undefined8 *)(param_1 + 400) = 0x3ff6666666666666;
        *(undefined8 *)(param_1 + 0x198) = 0x3ff199999999999a;
        lVar5 = FUN_1400ba6f4(0x98);
        if (lVar5 != 0) {
          FUN_140276f60(lVar5,0,0x98);
          uVar6 = FUN_14001bc10(lVar5,param_2);
        }
        *(undefined8 *)(param_1 + 0x1a0) = uVar6;
        plVar4 = (longlong *)FUN_14000cba0(*(longlong *)(param_2 + 0x28) + -0x18);
        lVar5 = *(longlong *)(param_1 + 0x2f8);
        plVar9 = (longlong *)(lVar5 + -0x18);
        if (plVar4 != plVar9) {
          if ((*(int *)(lVar5 + -8) < 0) || (*plVar4 != *plVar9)) {
            FUN_14000c9e0(param_1 + 0x2f8,plVar4 + 3,(int)plVar4[1]);
          }
          else {
            lVar7 = FUN_14000cba0(plVar4);
            LOCK();
            piVar1 = (int *)(lVar5 + -8);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 < 2) {
              (**(code **)(*(longlong *)*plVar9 + 8))((longlong *)*plVar9,plVar9);
            }
            *(longlong *)(param_1 + 0x2f8) = lVar7 + 0x18;
          }
        }
        LOCK();
        plVar9 = plVar4 + 2;
        lVar5 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar5 < 2) {
          (**(code **)(*(longlong *)*plVar4 + 8))();
        }
        FUN_14000c600(param_1 + 0x300,&DAT_14035d4b8,*(undefined4 *)(param_2 + 8));
        *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_2 + 0x50);
        *(uint *)(param_1 + 0x308) = (uint)*(byte *)(param_2 + 0x54);
        lVar5 = *(longlong *)(param_2 + 0x58);
        lVar7 = *(longlong *)(param_1 + 0x6c8);
        plVar4 = (longlong *)(lVar7 + -0x18);
        if ((longlong *)(lVar5 + -0x18) != plVar4) {
          if ((*(int *)(lVar7 + -8) < 0) || (*(longlong *)(lVar5 + -0x18) != *plVar4)) {
            FUN_14000c9e0(param_1 + 0x6c8,lVar5,*(undefined4 *)(lVar5 + -0x10));
          }
          else {
            lVar5 = FUN_14000cba0();
            LOCK();
            piVar1 = (int *)(lVar7 + -8);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 < 2) {
              (**(code **)(*(longlong *)*plVar4 + 8))((longlong *)*plVar4,plVar4);
            }
            *(longlong *)(param_1 + 0x6c8) = lVar5 + 0x18;
          }
        }
        lVar5 = *(longlong *)(param_2 + 0x60);
        lVar7 = *(longlong *)(param_1 + 0x7b8);
        plVar4 = (longlong *)(lVar7 + -0x18);
        if ((longlong *)(lVar5 + -0x18) != plVar4) {
          if ((*(int *)(lVar7 + -8) < 0) || (*(longlong *)(lVar5 + -0x18) != *plVar4)) {
            FUN_14000c9e0(param_1 + 0x7b8,lVar5,*(undefined4 *)(lVar5 + -0x10));
          }
          else {
            lVar5 = FUN_14000cba0();
            LOCK();
            piVar1 = (int *)(lVar7 + -8);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 < 2) {
              (**(code **)(*(longlong *)*plVar4 + 8))((longlong *)*plVar4,plVar4);
            }
            *(longlong *)(param_1 + 0x7b8) = lVar5 + 0x18;
          }
        }
        lVar5 = *(longlong *)(param_2 + 0x70);
        lVar7 = *(longlong *)(param_1 + 0xf10);
        plVar4 = (longlong *)(lVar7 + -0x18);
        if ((longlong *)(lVar5 + -0x18) != plVar4) {
          if ((*(int *)(lVar7 + -8) < 0) || (*(longlong *)(lVar5 + -0x18) != *plVar4)) {
            FUN_14000c9e0(param_1 + 0xf10,lVar5,*(undefined4 *)(lVar5 + -0x10));
          }
          else {
            lVar5 = FUN_14000cba0();
            LOCK();
            piVar1 = (int *)(lVar7 + -8);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 < 2) {
              (**(code **)(*(longlong *)*plVar4 + 8))((longlong *)*plVar4,plVar4);
            }
            *(longlong *)(param_1 + 0xf10) = lVar5 + 0x18;
          }
        }
        *(uint *)(param_1 + 0x990) = *(uint *)(param_2 + 0x68) >> 2 & 1;
        *(uint *)(param_1 + 0x4e8) = *(uint *)(param_2 + 0x68) & 1;
        *(uint *)(param_1 + 0x6c0) = *(uint *)(param_2 + 0x68) >> 7 & 1;
        *(uint *)(param_1 + 0x3f8) = *(uint *)(param_2 + 0x68) >> 1 & 1;
        *(uint *)(param_1 + 0xc50) = *(uint *)(param_2 + 0x68) >> 3 & 1;
        lVar5 = *(longlong *)(param_2 + 0x48);
        lVar7 = *(longlong *)(param_1 + 0x2d8);
        plVar4 = (longlong *)(lVar7 + -0x18);
        if ((longlong *)(lVar5 + -0x18) != plVar4) {
          if ((*(int *)(lVar7 + -8) < 0) || (*(longlong *)(lVar5 + -0x18) != *plVar4)) {
            FUN_14000c9e0(param_1 + 0x2d8,lVar5,*(undefined4 *)(lVar5 + -0x10));
          }
          else {
            lVar5 = FUN_14000cba0();
            LOCK();
            piVar1 = (int *)(lVar7 + -8);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 < 2) {
              (**(code **)(*(longlong *)*plVar4 + 8))((longlong *)*plVar4,plVar4);
            }
            *(longlong *)(param_1 + 0x2d8) = lVar5 + 0x18;
          }
        }
        *(uint *)(param_1 + 0x2e0) = *(uint *)(param_2 + 0x68) >> 4 & 1;
        *(uint *)(param_1 + 0x2e4) = *(uint *)(param_2 + 0x68) >> 5 & 1;
        *(uint *)(param_1 + 0x2e8) = *(uint *)(param_2 + 0x68) >> 6 & 1;
        *(uint *)(param_1 + 0x2ec) = *(uint *)(param_2 + 0x68) >> 8 & 1;
        FUN_14008b4f0(param_2);
        return param_1;
      }
      FUN_14000cd00(0x80004005);
      goto LAB_140091554;
    }
  }
  FUN_14000cd00(0x80004005);
LAB_140091575:
  FUN_14000cd00(0x80004005);
  pcVar3 = (code *)swi(3);
  pCVar8 = (CDialogEx *)(*pcVar3)();
  return pCVar8;
}




// ----- FUN_140091580 @ 140091580 -----

void FUN_140091580(CDialog *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *(undefined ***)param_1 = CProxyDlg::vftable;
  plVar3 = *(longlong **)(param_1 + 0x1a0);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3,1,param_3,param_4,0xfffffffffffffffe);
  }
  lVar4 = *(longlong *)(param_1 + 0xf10);
  LOCK();
  piVar1 = (int *)(lVar4 + -8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 < 2) {
    (**(code **)(**(longlong **)(lVar4 + -0x18) + 8))();
  }
  FUN_1400bf9ac(param_1 + 0xe28);
  CEdit::~CEdit((CEdit *)(param_1 + 0xd40));
  CStatic::~CStatic((CStatic *)(param_1 + 0xc58));
  CButton::~CButton((CButton *)(param_1 + 0xb68));
  CEdit::~CEdit((CEdit *)(param_1 + 0xa80));
  CButton::~CButton((CButton *)(param_1 + 0x998));
  CStatic::~CStatic((CStatic *)(param_1 + 0x8a8));
  CEdit::~CEdit((CEdit *)(param_1 + 0x7c0));
  lVar4 = *(longlong *)(param_1 + 0x7b8);
  LOCK();
  piVar1 = (int *)(lVar4 + -8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 < 2) {
    (**(code **)(**(longlong **)(lVar4 + -0x18) + 8))();
  }
  CStatic::~CStatic((CStatic *)(param_1 + 0x6d0));
  lVar4 = *(longlong *)(param_1 + 0x6c8);
  LOCK();
  piVar1 = (int *)(lVar4 + -8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 < 2) {
    (**(code **)(**(longlong **)(lVar4 + -0x18) + 8))();
  }
  CButton::~CButton((CButton *)(param_1 + 0x5d8));
  CButton::~CButton((CButton *)(param_1 + 0x4f0));
  CButton::~CButton((CButton *)(param_1 + 0x400));
  CButton::~CButton((CButton *)(param_1 + 0x310));
  lVar4 = *(longlong *)(param_1 + 0x300);
  LOCK();
  piVar1 = (int *)(lVar4 + -8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 < 2) {
    (**(code **)(**(longlong **)(lVar4 + -0x18) + 8))();
  }
  lVar4 = *(longlong *)(param_1 + 0x2f8);
  LOCK();
  piVar1 = (int *)(lVar4 + -8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 < 2) {
    (**(code **)(**(longlong **)(lVar4 + -0x18) + 8))();
  }
  *(undefined ***)(param_1 + 0x1a8) = CProxyAdvancedDlg::vftable;
  lVar4 = *(longlong *)(param_1 + 0x2d8);
  LOCK();
  piVar1 = (int *)(lVar4 + -8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 < 2) {
    (**(code **)(**(longlong **)(lVar4 + -0x18) + 8))();
  }
  CDialog::~CDialog(param_1 + 0x1a8);
  FUN_1400feb14(param_1 + 0x158);
  *(undefined ***)(param_1 + 0x140) = CBrush::vftable;
  CGdiObject::~CGdiObject((CGdiObject *)(param_1 + 0x140));
  CDialog::~CDialog(param_1);
  return;
}




// ----- FUN_140094970 @ 140094970 -----

undefined ** FUN_140094970(void)

{
  return &PTR_s_CProxyListDlg_140375400;
}




// ----- FUN_140094980 @ 140094980 -----

void FUN_140094980(CDialogEx *param_1,undefined8 param_2)

{
  CMFCListCtrl *this;
  CWnd *pCVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  CMFCListCtrl *local_58;
  longlong local_50 [3];
  CDialogEx *local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_50[1] = 0xfffffffffffffffe;
  local_20 = DAT_1403fb930 ^ (ulonglong)auStack_78;
  local_38 = param_1;
  local_28 = param_2;
  CDialogEx::CDialogEx(param_1,0x144,(CWnd *)0x0);
  *(undefined ***)param_1 = CDialogResize::vftable;
  param_1[0x170] = (CDialogEx)0x0;
  *(undefined8 *)(param_1 + 0x174) = 0;
  CopyRect((LPRECT)(param_1 + 0x17c),(RECT *)0x0);
  *(undefined8 *)(param_1 + 400) = 0x3ff8000000000000;
  *(undefined8 *)(param_1 + 0x198) = 0x3ff8000000000000;
  param_1[0x18c] = (CDialogEx)0x1;
  *(undefined ***)param_1 = CProxyListDlg::vftable;
  FUN_14001e8c0(param_1 + 0x1a0,param_2);
  *(CDialogEx **)(param_1 + 0x240) = param_1 + 0x1a0;
  *(CDialogEx **)(param_1 + 0x248) = param_1 + 0x1b8;
  *(CDialogEx **)(param_1 + 0x250) = param_1 + 0x1d0;
  plVar3 = (longlong *)FUN_1400ba8e0();
  if (plVar3 != (longlong *)0x0) {
    local_50[0] = (**(code **)(*plVar3 + 0x18))(plVar3);
    local_50[0] = local_50[0] + 0x18;
    FUN_140043610(param_1 + 600,local_50,0);
    *(undefined8 *)(param_1 + 0x294) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x29c) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x2b4) = 0;
    *(undefined8 *)(param_1 + 700) = 0;
    *(undefined4 *)(param_1 + 0x2c4) = 0;
    *(undefined2 *)(param_1 + 0x2c8) = 1;
    this = (CMFCListCtrl *)(param_1 + 0x2d0);
    local_58 = this;
    CMFCListCtrl::CMFCListCtrl(this);
    *(undefined ***)this = CProxyListDlg::CSortMFCListCtrl::vftable;
    *(undefined8 *)(param_1 + 0x528) = 0;
    *(undefined ***)(param_1 + 0x520) = CFont::vftable;
    *(undefined8 *)(param_1 + 0x510) = 0;
    *(undefined8 *)(param_1 + 0x530) = 0xffffffffffffffff;
    param_1[0x518] = (CDialogEx)0x0;
    pCVar1 = (CWnd *)(param_1 + 0x538);
    local_58 = (CMFCListCtrl *)pCVar1;
    CWnd::CWnd(pCVar1);
    *(undefined ***)pCVar1 = CButton::vftable;
    pCVar1 = (CWnd *)(param_1 + 0x620);
    local_58 = (CMFCListCtrl *)pCVar1;
    CWnd::CWnd(pCVar1);
    *(undefined ***)pCVar1 = CButton::vftable;
    pCVar1 = (CWnd *)(param_1 + 0x708);
    local_58 = (CMFCListCtrl *)pCVar1;
    CWnd::CWnd(pCVar1);
    *(undefined ***)pCVar1 = CButton::vftable;
    pCVar1 = (CWnd *)(param_1 + 0x7f0);
    local_58 = (CMFCListCtrl *)pCVar1;
    CWnd::CWnd(pCVar1);
    *(undefined ***)pCVar1 = CTreeCtrl::vftable;
    pCVar1 = (CWnd *)(param_1 + 0x8d8);
    local_58 = (CMFCListCtrl *)pCVar1;
    CWnd::CWnd(pCVar1);
    *(undefined ***)pCVar1 = CButton::vftable;
    pCVar1 = (CWnd *)(param_1 + 0x9c0);
    local_58 = (CMFCListCtrl *)pCVar1;
    CWnd::CWnd(pCVar1);
    *(undefined ***)pCVar1 = CButton::vftable;
    *(undefined2 *)(param_1 + 0x290) = 0;
    param_1[0x292] = (CDialogEx)0x0;
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    param_1[0x2b0] = (CDialogEx)0x0;
    FUN_140068480(param_2);
    __security_check_cookie(local_20 ^ (ulonglong)auStack_78);
    return;
  }
  FUN_14000cd00(0x80004005);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}




// ----- FUN_140094c80 @ 140094c80 -----

void FUN_140094c80(CDialog *param_1)

{
  *(undefined ***)param_1 = CProxyListDlg::vftable;
  CButton::~CButton((CButton *)(param_1 + 0x9c0));
  CButton::~CButton((CButton *)(param_1 + 0x8d8));
  FID_conflict__CSpinButtonCtrl(param_1 + 0x7f0);
  CButton::~CButton((CButton *)(param_1 + 0x708));
  CButton::~CButton((CButton *)(param_1 + 0x620));
  CButton::~CButton((CButton *)(param_1 + 0x538));
  *(undefined ***)(param_1 + 0x520) = CFont::vftable;
  CGdiObject::~CGdiObject((CGdiObject *)(param_1 + 0x520));
  CMFCListCtrl::~CMFCListCtrl((CMFCListCtrl *)(param_1 + 0x2d0));
  FUN_140043730(param_1 + 600);
  FUN_140068480(param_1 + 0x1a0);
  FUN_1400feb14(param_1 + 0x158);
  *(undefined ***)(param_1 + 0x140) = CBrush::vftable;
  CGdiObject::~CGdiObject((CGdiObject *)(param_1 + 0x140));
  CDialog::~CDialog(param_1);
  return;
}



// ----- DoDataExchange @ 140094d50 -----

/* Library Function - Multiple Matches With Same Base Name
    protected: virtual void __cdecl CMFCKeyMapDialog::DoDataExchange(class CDataExchange * __ptr64)
   __ptr64
    protected: virtual void __cdecl CMFCToolBarsListPropertyPage::DoDataExchange(class CDataExchange
   * __ptr64) __ptr64
   
   Library: Visual Studio 2015 Release */

void DoDataExchange(longlong param_1,undefined8 param_2)

{
  FUN_1400ca51c(param_2,1000,param_1 + 0x2d0);
  FUN_1400ca51c(param_2,0x3ea,param_1 + 0x538);
  FUN_1400ca51c(param_2,0x3eb,param_1 + 0x620);
  FUN_1400ca51c(param_2,0x3f6,param_1 + 0x708);
  FUN_1400ca51c(param_2,0x3ec,param_1 + 0x7f0);
  FUN_1400ca51c(param_2,0x3e9,param_1 + 0x8d8);
  FUN_1400ca51c(param_2,0x3f1,param_1 + 0x9c0);
  return;
}




// ----- FUN_14009ab60 @ 14009ab60 -----

undefined ** FUN_14009ab60(void)

{
  return &PTR_s_CProxyLoginDlg_1403757d0;
}




// ----- FUN_14009ab70 @ 14009ab70 -----

/* WARNING: Removing unreachable block (ram,0x00014009acd2) */
/* WARNING: Removing unreachable block (ram,0x00014009abef) */
/* WARNING: Removing unreachable block (ram,0x00014009ac53) */
/* WARNING: Removing unreachable block (ram,0x00014009ad41) */

CDialog * FUN_14009ab70(CDialog *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  CDialog *pCVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  CDialog::CDialog(param_1,0x16e,(CWnd *)0x0);
  *(undefined ***)param_1 = CProxyLoginDlg::vftable;
  plVar2 = (longlong *)FUN_1400ba8e0();
  if (plVar2 == (longlong *)0x0) {
LAB_14009ad89:
    FUN_14000cd00(0x80004005);
  }
  else {
    lVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
    *(longlong *)(param_1 + 0x130) = lVar3 + 0x18;
    uVar6 = 0xffffffffffffffff;
    uVar4 = 0xffffffffffffffff;
    do {
      uVar4 = uVar4 + 1;
    } while ((&DAT_14035b9fc)[uVar4] != 0);
    FUN_14000c9e0(param_1 + 0x130,&DAT_14035b9fc,uVar4 & 0xffffffff,param_4,uVar7);
    plVar2 = (longlong *)FUN_1400ba8e0();
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
      *(longlong *)(param_1 + 0x138) = lVar3 + 0x18;
      uVar4 = 0xffffffffffffffff;
      do {
        uVar4 = uVar4 + 1;
      } while ((&DAT_14035b9fc)[uVar4] != 0);
      FUN_14000c9e0(param_1 + 0x138,&DAT_14035b9fc,uVar4 & 0xffffffff);
      CWnd::CWnd((CWnd *)(param_1 + 0x140));
      *(undefined ***)(param_1 + 0x140) = CEdit::vftable;
      plVar2 = (longlong *)FUN_1400ba8e0();
      if (plVar2 == (longlong *)0x0) goto LAB_14009ad9f;
      lVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
      *(longlong *)(param_1 + 0x228) = lVar3 + 0x18;
      uVar4 = 0xffffffffffffffff;
      do {
        uVar4 = uVar4 + 1;
      } while ((&DAT_14035b9fc)[uVar4] != 0);
      FUN_14000c9e0(param_1 + 0x228,&DAT_14035b9fc,uVar4 & 0xffffffff);
      CWnd::CWnd((CWnd *)(param_1 + 0x230));
      *(undefined ***)(param_1 + 0x230) = CEdit::vftable;
      plVar2 = (longlong *)FUN_1400ba8e0();
      if (plVar2 != (longlong *)0x0) {
        lVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
        *(longlong *)(param_1 + 0x318) = lVar3 + 0x18;
        do {
          uVar6 = uVar6 + 1;
        } while ((&DAT_14035b9fc)[uVar6] != 0);
        FUN_14000c9e0(param_1 + 0x318,&DAT_14035b9fc,uVar6 & 0xffffffff);
        return param_1;
      }
      FUN_14000cd00(0x80004005);
      goto LAB_14009ad89;
    }
  }
  FUN_14000cd00(0x80004005);
LAB_14009ad9f:
  FUN_14000cd00(0x80004005);
  pcVar1 = (code *)swi(3);
  pCVar5 = (CDialog *)(*pcVar1)();
  return pCVar5;
}




// ----- FUN_14009ae00 @ 14009ae00 -----

void FUN_14009ae00(CDialog *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  *(undefined ***)param_1 = CProxyLoginDlg::vftable;
  lVar3 = *(longlong *)(param_1 + 0x318);
  LOCK();
  piVar1 = (int *)(lVar3 + -8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 < 2) {
    (**(code **)(**(longlong **)(lVar3 + -0x18) + 8))();
  }
  CEdit::~CEdit((CEdit *)(param_1 + 0x230));
  lVar3 = *(longlong *)(param_1 + 0x228);
  LOCK();
  piVar1 = (int *)(lVar3 + -8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 < 2) {
    (**(code **)(**(longlong **)(lVar3 + -0x18) + 8))();
  }
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




// ----- FUN_14009aff0 @ 14009aff0 -----

undefined ** FUN_14009aff0(void)

{
  return &PTR_s_CProxyRemovalDlg_140375f50;
}




// ----- FUN_14009b000 @ 14009b000 -----

/* WARNING: Removing unreachable block (ram,0x00014009b132) */
/* WARNING: Removing unreachable block (ram,0x00014009b0cd) */
/* WARNING: Removing unreachable block (ram,0x00014009b194) */

void FUN_14009b000(CDialog *param_1,CDialog param_2,undefined4 param_3,undefined8 param_4)

{
  CDialog *pCVar1;
  CWnd *pCVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [32];
  CDialog *local_68;
  undefined8 local_60;
  CDialog *local_58;
  undefined8 local_48;
  ulonglong local_40;
  
  local_60 = 0xfffffffffffffffe;
  local_40 = DAT_1403fb930 ^ (ulonglong)auStack_88;
  local_58 = param_1;
  local_48 = param_4;
  CDialog::CDialog(param_1,0x14f,(CWnd *)0x0);
  *(undefined ***)param_1 = CProxyRemovalDlg::vftable;
  FUN_14001e8c0(param_1 + 0x130,param_4);
  plVar4 = (longlong *)FUN_1400ba8e0();
  if (plVar4 == (longlong *)0x0) {
LAB_14009b291:
    FUN_14000cd00(0x80004005);
  }
  else {
    lVar5 = (**(code **)(*plVar4 + 0x18))(plVar4);
    *(longlong *)(param_1 + 0x1d8) = lVar5 + 0x18;
    pCVar1 = param_1 + 0x1e0;
    local_68 = pCVar1;
    plVar4 = (longlong *)FUN_1400ba8e0();
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x18))(plVar4);
      *(longlong *)pCVar1 = lVar5 + 0x18;
      uVar7 = 0xffffffffffffffff;
      uVar6 = 0xffffffffffffffff;
      do {
        uVar6 = uVar6 + 1;
      } while ((&DAT_14035b9fc)[uVar6] != 0);
      FUN_14000c9e0(pCVar1,&DAT_14035b9fc,uVar6 & 0xffffffff);
      pCVar1 = param_1 + 0x1e8;
      local_68 = pCVar1;
      plVar4 = (longlong *)FUN_1400ba8e0();
      if (plVar4 == (longlong *)0x0) goto LAB_14009b2a7;
      lVar5 = (**(code **)(*plVar4 + 0x18))(plVar4);
      *(longlong *)pCVar1 = lVar5 + 0x18;
      uVar6 = 0xffffffffffffffff;
      do {
        uVar6 = uVar6 + 1;
      } while ((&DAT_14035b9fc)[uVar6] != 0);
      FUN_14000c9e0(pCVar1,&DAT_14035b9fc,uVar6 & 0xffffffff);
      pCVar1 = param_1 + 0x1f0;
      local_68 = pCVar1;
      plVar4 = (longlong *)FUN_1400ba8e0();
      if (plVar4 != (longlong *)0x0) {
        lVar5 = (**(code **)(*plVar4 + 0x18))(plVar4);
        *(longlong *)pCVar1 = lVar5 + 0x18;
        do {
          uVar7 = uVar7 + 1;
        } while ((&DAT_14035b9fc)[uVar7] != 0);
        FUN_14000c9e0(pCVar1,&DAT_14035b9fc,uVar7 & 0xffffffff);
        *(undefined4 *)(param_1 + 0x1f8) = 0;
        pCVar2 = (CWnd *)(param_1 + 0x200);
        local_68 = (CDialog *)pCVar2;
        CWnd::CWnd(pCVar2);
        *(undefined ***)pCVar2 = CComboBox::vftable;
        *(undefined4 *)(param_1 + 0x2e8) = 0;
        pCVar2 = (CWnd *)(param_1 + 0x2f0);
        local_68 = (CDialog *)pCVar2;
        CWnd::CWnd(pCVar2);
        *(undefined ***)pCVar2 = CButton::vftable;
        pCVar2 = (CWnd *)(param_1 + 0x3d8);
        local_68 = (CDialog *)pCVar2;
        CWnd::CWnd(pCVar2);
        *(undefined ***)pCVar2 = CEdit::vftable;
        pCVar2 = (CWnd *)(param_1 + 0x4c0);
        local_68 = (CDialog *)pCVar2;
        CWnd::CWnd(pCVar2);
        *(undefined ***)pCVar2 = CStatic::vftable;
        param_1[0x1d4] = param_2;
        *(undefined4 *)(param_1 + 0x1d0) = param_3;
        param_1[0x1d5] = (CDialog)0x0;
        FUN_140068480(param_4);
        __security_check_cookie(local_40 ^ (ulonglong)auStack_88);
        return;
      }
      FUN_14000cd00(0x80004005);
      goto LAB_14009b291;
    }
  }
  FUN_14000cd00(0x80004005);
LAB_14009b2a7:
  FUN_14000cd00(0x80004005);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}




// ----- FUN_14009b310 @ 14009b310 -----

void FUN_14009b310(CDialog *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  *(undefined ***)param_1 = CProxyRemovalDlg::vftable;
  CStatic::~CStatic((CStatic *)(param_1 + 0x4c0));
  CEdit::~CEdit((CEdit *)(param_1 + 0x3d8));
  CButton::~CButton((CButton *)(param_1 + 0x2f0));
  FUN_1400bf9ac(param_1 + 0x200);
  lVar3 = *(longlong *)(param_1 + 0x1f0);
  LOCK();
  piVar1 = (int *)(lVar3 + -8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 < 2) {
    (**(code **)(**(longlong **)(lVar3 + -0x18) + 8))();
  }
  lVar3 = *(longlong *)(param_1 + 0x1e8);
  LOCK();
  piVar1 = (int *)(lVar3 + -8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 < 2) {
    (**(code **)(**(longlong **)(lVar3 + -0x18) + 8))();
  }
  lVar3 = *(longlong *)(param_1 + 0x1e0);
  LOCK();
  piVar1 = (int *)(lVar3 + -8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 < 2) {
    (**(code **)(**(longlong **)(lVar3 + -0x18) + 8))();
  }
  lVar3 = *(longlong *)(param_1 + 0x1d8);
  LOCK();
  piVar1 = (int *)(lVar3 + -8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 < 2) {
    (**(code **)(**(longlong **)(lVar3 + -0x18) + 8))();
  }
  FUN_140068480(param_1 + 0x130);
  CDialog::~CDialog(param_1);
  return;
}



// ----- DoDataExchange @ 14009b410 -----

/* Library Function - Single Match
    protected: virtual void __cdecl CMFCToolBarButtonCustomizeDialog::DoDataExchange(class
   CDataExchange * __ptr64) __ptr64
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarButtonCustomizeDialog::DoDataExchange
          (CMFCToolBarButtonCustomizeDialog *this,CDataExchange *param_1)

{
  DDX_Text(param_1,0x404,
           (CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_> *)
           (this + 0x1e0));
  DDX_Text(param_1,0x405,
           (CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_> *)
           (this + 0x1e8));
  DDX_Text(param_1,0x406,
           (CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_> *)
           (this + 0x1f0));
  DDX_Radio(param_1,0x3ee,(int *)(this + 0x1f8));
  FUN_1400ca51c(param_1,0x400,this + 0x200);
  DDX_CBIndex(param_1,0x400,(int *)(this + 0x2e8));
  FUN_1400ca51c(param_1,0x3ee,this + 0x2f0);
  FUN_1400ca51c(param_1,0x405,this + 0x3d8);
  FUN_1400ca51c(param_1,0x408,this + 0x4c0);
  return;
}




