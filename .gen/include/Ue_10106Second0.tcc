/**                                      -*- mode:C++ -*- */

#include "Ue_102335Fifth0.h"
#include "Uq_10109211EventWindow0.h"
#include "Ue_10105First0.h"
#include "Ue_10115Five20.h"
#include "Ue_10114Five0.h"
#include "Ue_10104Four0.h"
#include "Ue_10105Third0.h"
#include "Uq_102323C2D0.h"
#include "Uq_1010919AtomUtils0.h"
#include "Ue_10105Empty0.h"

namespace MFM{

  template<class EC>
  Ue_10106Second0<EC>::Ue_10106Second0() : UlamElement<EC>(MFM_UUID_FOR("Ue10106Second0", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("S");  // figure this out later
    Element<EC>::SetName("Second");
  }

  template<class EC>
  Ue_10106Second0<EC>::~Ue_10106Second0(){}


  //! Second.ulam:9:   Void behave(){
  template<class EC>
  void Ue_10106Second0<EC>::Uf_6behave(UlamContext<EC>& uc, T& Uv_4self) const
  {

    //! Second.ulam:10:     EventWindow ep;
    Ui_Uq_10109211EventWindow0<EC> Uv_2ep;

    //! Second.ulam:11:     ep[1]=ep[0];
    const s32 Uh_tmpreg_loadable_3256 = 0;
    const T Uh_tmpreg_loadable_3258 = Uv_2ep.readArrayItem(uc, Uh_tmpreg_loadable_3256, 0u);
    const s32 Uh_tmpreg_loadable_3259 = 1;
    Uv_2ep.writeArrayItem(uc, Uh_tmpreg_loadable_3258, Uh_tmpreg_loadable_3259, 0u);

  } // Uf_6behave


  template<class EC>
  s32 Ue_10106Second0<EC>::PositionOfDataMemberType(const char * namearg) const
  {

    return (-1);   //not found
  }  //has

  template<class EC>
  bool Ue_10106Second0<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType());
  }   //is

} //MFM

