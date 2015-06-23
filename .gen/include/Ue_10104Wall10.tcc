/**                                      -*- mode:C++ -*- */

#include "Ue_102213Box10.h"
#include "Uq_10109210DebugUtils10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_1010919AtomUtils10.h"
#include "Uq_10106Random10.h"
#include "Ue_102689214WindowServices10.h"
#include "Ue_102294Pbox10.h"
#include "Ue_10105Empty10.h"
#include "Ue_10106Marker10.h"
#include "Uq_102323C2D10.h"
#include "Uq_10105MDist10.h"
#include "Uq_10104Fail10.h"

namespace MFM{

  template<class EC>
  Ue_10104Wall10<EC>::Ue_10104Wall10() : UlamElement<EC>(MFM_UUID_FOR("Ue10104Wall10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("W");  // figure this out later
    Element<EC>::SetName("Wall");
  }

  template<class EC>
  Ue_10104Wall10<EC>::~Ue_10104Wall10(){}


  //! Wall.ulam:8: element Wall { Void behave() { } }
  template<class EC>
  void Ue_10104Wall10<EC>::Uf_6behave(UlamContext<EC>& uc, T& Uv_4self) const
  {
    { /* empty */ }

  } // Uf_6behave


  template<class EC>
  s32 Ue_10104Wall10<EC>::PositionOfDataMemberType(const char * namearg) const
  {

    return (-1);   //not found
  }  //has

  template<class EC>
  const UlamClassDataMemberInfo & Ue_10104Wall10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
    } //end switch
    FAIL(ILLEGAL_ARGUMENT);
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_10104Wall10<EC>::GetDataMemberCount() const
  {
    return 0;
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_10104Wall10<EC>::GetMangledClassName() const
  {
    return "Ue_10104Wall10";
  } //GetMangledClassName

  template<class EC>
  bool Ue_10104Wall10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType());
  }   //is

} //MFM

