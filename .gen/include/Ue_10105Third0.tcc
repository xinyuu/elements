/**                                      -*- mode:C++ -*- */

#include "Ue_102335Fifth0.h"
#include "Uq_10109211EventWindow0.h"
#include "Ue_10105First0.h"
#include "Ue_10115Five20.h"
#include "Ue_10114Five0.h"
#include "Ue_10104Four0.h"
#include "Ue_10106Second0.h"
#include "Uq_102323C2D0.h"
#include "Uq_1010919AtomUtils0.h"
#include "Ue_10105Empty0.h"

namespace MFM{

  template<class EC>
  Ue_10105Third0<EC>::Ue_10105Third0() : UlamElement<EC>(MFM_UUID_FOR("Ue10105Third0", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("T");  // figure this out later
    Element<EC>::SetName("Third");
  }

  template<class EC>
  Ue_10105Third0<EC>::~Ue_10105Third0(){}


  //! Third.ulam:9:   Void behave(){
  template<class EC>
  void Ue_10105Third0<EC>::Uf_6behave(UlamContext<EC>& uc, T& Uv_4self) const
  {

    //! Third.ulam:10:     EventWindow ep;
    Ui_Uq_10109211EventWindow0<EC> Uv_2ep;

    //! Third.ulam:11:     ep.swap(0,1);
    const s32 Uh_tmpreg_loadable_3262 = 0;
    const Ui_Ut_102321i Uh_tmpval_loadable_3263(Uh_tmpreg_loadable_3262);
    const s32 Uh_tmpreg_loadable_3264 = 1;
    const Ui_Ut_102321i Uh_tmpval_loadable_3265(Uh_tmpreg_loadable_3264);
    const Ui_Ut_10111b Uh_tmpval_loadable_3266 = Ui_Uq_10109211EventWindow0<EC>::Us::Uf_4swap(uc, Uv_2ep.getRef(), Uh_tmpval_loadable_3263, Uh_tmpval_loadable_3265);
    const u32 Uh_tmpreg_loadable_3267 = Uh_tmpval_loadable_3266.read();

  } // Uf_6behave


  template<class EC>
  s32 Ue_10105Third0<EC>::PositionOfDataMemberType(const char * namearg) const
  {

    return (-1);   //not found
  }  //has

  template<class EC>
  bool Ue_10105Third0<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType());
  }   //is

} //MFM

