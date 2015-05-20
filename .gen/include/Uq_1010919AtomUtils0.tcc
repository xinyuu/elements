/**                                      -*- mode:C++ -*- */

#include "Ue_102335Fifth0.h"
#include "Uq_10109211EventWindow0.h"
#include "Ue_10105First0.h"
#include "Ue_10115Five20.h"
#include "Ue_10114Five0.h"
#include "Ue_10104Four0.h"
#include "Ue_10106Second0.h"
#include "Ue_10105Third0.h"
#include "Uq_102323C2D0.h"
#include "Ue_10105Empty0.h"

namespace MFM{


  //! AtomUtils.ulam:17:   Int getEmptyType() {
  template<class EC, u32 POS>
  Ui_Ut_102321i Uq_1010919AtomUtils0<EC, POS>::Uf_9212getEmptyType(UlamContext<EC>& uc, T& Uv_4self)
  {

    //! AtomUtils.ulam:18:     Empty a;
    Ui_Ue_10105Empty0<EC> Uv_1a = Ue_10105Empty0<EC>::THE_INSTANCE.GetDefaultAtom();

    //! AtomUtils.ulam:19:     return getType((Atom) a);
    const T Uh_tmpval_unpacked_3588 = Uv_1a.read();
    const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_3589(Uh_tmpval_unpacked_3588);
    const Ui_Ut_102321i Uh_tmpval_loadable_3590 = Uf_7getType(uc, Uv_4self, Uh_tmpval_unpacked_3589);
    const s32 Uh_tmpreg_loadable_3591 = Uh_tmpval_loadable_3590.read();
    const s32 Uh_tmpreg_loadable_3592 = _SignExtend32(Uh_tmpreg_loadable_3591, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3593(Uh_tmpreg_loadable_3592);
    return (Uh_tmpval_loadable_3593);

  } // Uf_9212getEmptyType



  //! AtomUtils.ulam:26:   Bool isEmpty(Atom a) {
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_1010919AtomUtils0<EC, POS>::Uf_7isEmpty(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102961a<EC> Uv_1a)
  {

    //! AtomUtils.ulam:27:     return getType(a)==getEmptyType();
    const Ui_Ut_102321i Uh_tmpval_loadable_3594 = Uf_9212getEmptyType(uc, Uv_4self);
    const s32 Uh_tmpreg_loadable_3595 = Uh_tmpval_loadable_3594.read();
    const s32 Uh_tmpreg_loadable_3596 = _SignExtend32(Uh_tmpreg_loadable_3595, 32);
    const T Uh_tmpval_unpacked_3597 = Uv_1a.read();
    const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_3598(Uh_tmpval_unpacked_3597);
    const Ui_Ut_102321i Uh_tmpval_loadable_3599 = Uf_7getType(uc, Uv_4self, Uh_tmpval_unpacked_3598);
    const s32 Uh_tmpreg_loadable_3600 = Uh_tmpval_loadable_3599.read();
    const s32 Uh_tmpreg_loadable_3601 = _SignExtend32(Uh_tmpreg_loadable_3600, 32);
    const u32 Uh_tmpreg_loadable_3602 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3601, Uh_tmpreg_loadable_3596, 32);
    const Ui_Ut_10111b Uh_tmpval_loadable_3603(Uh_tmpreg_loadable_3602);
    return (Uh_tmpval_loadable_3603);

  } // Uf_7isEmpty


  template<class EC, u32 POS>
  s32 Uq_1010919AtomUtils0<EC, POS>::PositionOfDataMemberType(const char * namearg) const
  {

    return (-1);   //not found
  }  //has

} //MFM

