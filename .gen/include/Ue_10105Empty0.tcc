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
#include "Uq_1010919AtomUtils0.h"

namespace MFM{

  template<class EC>
  Ue_10105Empty0<EC>::Ue_10105Empty0() : UlamElement<EC>(MFM_UUID_FOR("Ue10105Empty0", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("E");  // figure this out later
    Element<EC>::SetName("Empty");
  }

  template<class EC>
  Ue_10105Empty0<EC>::~Ue_10105Empty0(){}

  template<class EC>
  s32 Ue_10105Empty0<EC>::PositionOfDataMemberType(const char * namearg) const
  {

    return (-1);   //not found
  }  //has

  template<class EC>
  bool Ue_10105Empty0<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType());
  }   //is

} //MFM

