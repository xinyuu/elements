/**                                      -*- mode:C++ -*- */

#include "Ue_102213Box10.h"
#include "Uq_10109210DebugUtils10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_10106Random10.h"
#include "Ue_102689214WindowServices10.h"
#include "Ue_102294Pbox10.h"
#include "Ue_10105Empty10.h"
#include "Ue_10104Wall10.h"
#include "Ue_10106Marker10.h"
#include "Uq_102323C2D10.h"
#include "Uq_10105MDist10.h"
#include "Uq_10104Fail10.h"

namespace MFM{


  //! AtomUtils.ulam:17:   Int getEmptyType() {
  template<class EC, u32 POS>
  Ui_Ut_102321i Uq_1010919AtomUtils10<EC, POS>::Uf_9212getEmptyType(UlamContext<EC>& uc, T& Uv_4self)
  {

    //! AtomUtils.ulam:18:     Empty a;
    Ui_Ue_10105Empty10<EC> Uv_1a = Ue_10105Empty10<EC>::THE_INSTANCE.GetDefaultAtom();

    //! AtomUtils.ulam:19:     return getType((Atom) a);
    const T Uh_tmpval_unpacked_3280 = Uv_1a.read();
    const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_3281(Uh_tmpval_unpacked_3280);
    const Ui_Ut_102321i Uh_tmpval_loadable_3282 = Uf_7getType(uc, Uv_4self, Uh_tmpval_unpacked_3281);
    const s32 Uh_tmpreg_loadable_3283 = Uh_tmpval_loadable_3282.read();
    const s32 Uh_tmpreg_loadable_3284 = _SignExtend32(Uh_tmpreg_loadable_3283, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3285(Uh_tmpreg_loadable_3284);
    return (Uh_tmpval_loadable_3285);

  } // Uf_9212getEmptyType



  //! AtomUtils.ulam:26:   Bool isEmpty(Atom a) {
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_1010919AtomUtils10<EC, POS>::Uf_7isEmpty(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102961a<EC> Uv_1a)
  {

    //! AtomUtils.ulam:27:     return getType(a)==getEmptyType();
    const Ui_Ut_102321i Uh_tmpval_loadable_3286 = Uf_9212getEmptyType(uc, Uv_4self);
    const s32 Uh_tmpreg_loadable_3287 = Uh_tmpval_loadable_3286.read();
    const s32 Uh_tmpreg_loadable_3288 = _SignExtend32(Uh_tmpreg_loadable_3287, 32);
    const T Uh_tmpval_unpacked_3289 = Uv_1a.read();
    const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_3290(Uh_tmpval_unpacked_3289);
    const Ui_Ut_102321i Uh_tmpval_loadable_3291 = Uf_7getType(uc, Uv_4self, Uh_tmpval_unpacked_3290);
    const s32 Uh_tmpreg_loadable_3292 = Uh_tmpval_loadable_3291.read();
    const s32 Uh_tmpreg_loadable_3293 = _SignExtend32(Uh_tmpreg_loadable_3292, 32);
    const u32 Uh_tmpreg_loadable_3294 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3293, Uh_tmpreg_loadable_3288, 32);
    const Ui_Ut_10111b Uh_tmpval_loadable_3295(Uh_tmpreg_loadable_3294);
    return (Uh_tmpval_loadable_3295);

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

