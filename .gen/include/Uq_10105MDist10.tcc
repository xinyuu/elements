/**                                      -*- mode:C++ -*- */

#include "Ue_102213Box10.h"
#include "Uq_10109210DebugUtils10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_1010919AtomUtils10.h"
#include "Uq_10106Random10.h"
#include "Ue_102689214WindowServices10.h"
#include "Ue_102294Pbox10.h"
#include "Ue_10105Empty10.h"
#include "Ue_10104Wall10.h"
#include "Ue_10106Marker10.h"
#include "Uq_102323C2D10.h"
#include "Uq_10104Fail10.h"

namespace MFM{

  template<class EC, u32 POS>
  s32 Uq_10105MDist10<EC, POS>::PositionOfDataMemberType(const char * namearg) const
  {

    return (-1);   //not found
  }  //has

  template<class EC, u32 POS>
  const UlamClassDataMemberInfo & Uq_10105MDist10<EC, POS>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
    } //end switch
    FAIL(ILLEGAL_ARGUMENT);
  } //GetDataMemberInfo

  template<class EC, u32 POS>
  s32 Uq_10105MDist10<EC, POS>::GetDataMemberCount() const
  {
    return 0;
  } //GetDataMemberCount

  template<class EC, u32 POS>
  const char * Uq_10105MDist10<EC, POS>::GetMangledClassName() const
  {
    return "Uq_10105MDist10";
  } //GetMangledClassName

} //MFM

