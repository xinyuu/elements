/**                                      -*- mode:C++ -*- */

#include "Ue_102335Fifth0.h"
#include "Uq_10109211EventWindow0.h"
#include "Ue_10115Five20.h"
#include "Ue_10114Five0.h"
#include "Ue_10104Four0.h"
#include "Ue_10106Second0.h"
#include "Ue_10105Third0.h"
#include "Uq_102323C2D0.h"
#include "Uq_1010919AtomUtils0.h"
#include "Ue_10105Empty0.h"

namespace MFM{

  template<class EC>
  Ue_10105First0<EC>::Ue_10105First0() : UlamElement<EC>(MFM_UUID_FOR("Ue10105First0", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("F");  // figure this out later
    Element<EC>::SetName("First");
  }

  template<class EC>
  Ue_10105First0<EC>::~Ue_10105First0(){}


  //! First.ulam:2:   Void behave(){
  template<class EC>
  void Ue_10105First0<EC>::Uf_6behave(UlamContext<EC>& uc, T& Uv_4self) const
  {

    //! First.ulam:3:     EventWindow ew;
    Ui_Uq_10109211EventWindow0<EC> Uv_2ew;

    //! First.ulam:4:     ew[1]=ew[0];
    const s32 Uh_tmpreg_loadable_3190 = 0;
    const T Uh_tmpreg_loadable_3192 = Uv_2ew.readArrayItem(uc, Uh_tmpreg_loadable_3190, 0u);
    const s32 Uh_tmpreg_loadable_3193 = 1;
    Uv_2ew.writeArrayItem(uc, Uh_tmpreg_loadable_3192, Uh_tmpreg_loadable_3193, 0u);

  } // Uf_6behave


  template<class EC>
  s32 Ue_10105First0<EC>::PositionOfDataMemberType(const char * namearg) const
  {

    return (-1);   //not found
  }  //has

  template<class EC>
  bool Ue_10105First0<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType());
  }   //is

} //MFM

