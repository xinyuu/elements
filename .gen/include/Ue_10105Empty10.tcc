/**                                      -*- mode:C++ -*- */

#include "Ue_10133Box10.h"
#include "Uq_10109210DebugUtils10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_102323C2D10.h"
#include "Uq_1010919AtomUtils10.h"

namespace MFM{

  template<class EC>
  Ue_10105Empty10<EC>::Ue_10105Empty10() : UlamElement<EC>(MFM_UUID_FOR("Ue10105Empty10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("E");  // figure this out later
    Element<EC>::SetName("Empty");
  }

  template<class EC>
  Ue_10105Empty10<EC>::~Ue_10105Empty10(){}

  template<class EC>
  s32 Ue_10105Empty10<EC>::PositionOfDataMemberType(const char * namearg) const
  {

    return (-1);   //not found
  }  //has

  template<class EC>
  const UlamClassDataMemberInfo & Ue_10105Empty10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
    } //end switch
    FAIL(ILLEGAL_ARGUMENT);
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_10105Empty10<EC>::GetDataMemberCount() const
  {
    return 0;
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_10105Empty10<EC>::GetMangledClassName() const
  {
    return "Ue_10105Empty10";
  } //GetMangledClassName

  template<class EC>
  bool Ue_10105Empty10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType());
  }   //is

} //MFM

