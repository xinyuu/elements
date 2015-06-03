/**                                      -*- mode:C++ -*- */

#include "Ue_10133Box10.h"
#include "Uq_10109210DebugUtils10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_102323C2D10.h"
#include "Ue_10105Empty10.h"

namespace MFM{


  //! AtomUtils.ulam:17:   Int getEmptyType() {
  template<class EC, u32 POS>
  Ui_Ut_102321i Uq_1010919AtomUtils10<EC, POS>::Uf_9212getEmptyType(UlamContext<EC>& uc, T& Uv_4self)
  {

    //! AtomUtils.ulam:18:     Empty a;
    Ui_Ue_10105Empty10<EC> Uv_1a = Ue_10105Empty10<EC>::THE_INSTANCE.GetDefaultAtom();

    //! AtomUtils.ulam:19:     return getType((Atom) a);
    const T Uh_tmpval_unpacked_3510 = Uv_1a.read();
    const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_3511(Uh_tmpval_unpacked_3510);
    const Ui_Ut_102321i Uh_tmpval_loadable_3512 = Uf_7getType(uc, Uv_4self, Uh_tmpval_unpacked_3511);
    const s32 Uh_tmpreg_loadable_3513 = Uh_tmpval_loadable_3512.read();
    const s32 Uh_tmpreg_loadable_3514 = _SignExtend32(Uh_tmpreg_loadable_3513, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3515(Uh_tmpreg_loadable_3514);
    return (Uh_tmpval_loadable_3515);

  } // Uf_9212getEmptyType



  //! AtomUtils.ulam:26:   Bool isEmpty(Atom a) {
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_1010919AtomUtils10<EC, POS>::Uf_7isEmpty(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102961a<EC> Uv_1a)
  {

    //! AtomUtils.ulam:27:     return getType(a)==getEmptyType();
    const Ui_Ut_102321i Uh_tmpval_loadable_3516 = Uf_9212getEmptyType(uc, Uv_4self);
    const s32 Uh_tmpreg_loadable_3517 = Uh_tmpval_loadable_3516.read();
    const s32 Uh_tmpreg_loadable_3518 = _SignExtend32(Uh_tmpreg_loadable_3517, 32);
    const T Uh_tmpval_unpacked_3519 = Uv_1a.read();
    const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_3520(Uh_tmpval_unpacked_3519);
    const Ui_Ut_102321i Uh_tmpval_loadable_3521 = Uf_7getType(uc, Uv_4self, Uh_tmpval_unpacked_3520);
    const s32 Uh_tmpreg_loadable_3522 = Uh_tmpval_loadable_3521.read();
    const s32 Uh_tmpreg_loadable_3523 = _SignExtend32(Uh_tmpreg_loadable_3522, 32);
    const u32 Uh_tmpreg_loadable_3524 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3523, Uh_tmpreg_loadable_3518, 32);
    const Ui_Ut_10111b Uh_tmpval_loadable_3525(Uh_tmpreg_loadable_3524);
    return (Uh_tmpval_loadable_3525);

  } // Uf_7isEmpty


  template<class EC, u32 POS>
  s32 Uq_1010919AtomUtils10<EC, POS>::PositionOfDataMemberType(const char * namearg) const
  {

    return (-1);   //not found
  }  //has

  template<class EC, u32 POS>
  const UlamClassDataMemberInfo & Uq_1010919AtomUtils10<EC, POS>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
    } //end switch
    FAIL(ILLEGAL_ARGUMENT);
  } //GetDataMemberInfo

  template<class EC, u32 POS>
  s32 Uq_1010919AtomUtils10<EC, POS>::GetDataMemberCount() const
  {
    return 0;
  } //GetDataMemberCount

  template<class EC, u32 POS>
  const char * Uq_1010919AtomUtils10<EC, POS>::GetMangledClassName() const
  {
    return "Uq_1010919AtomUtils10";
  } //GetMangledClassName

} //MFM

