/**                                      -*- mode:C++ -*- */

#include "Ue_10133Box10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_102323C2D10.h"
#include "Uq_1010919AtomUtils10.h"
#include "Ue_10105Empty10.h"

namespace MFM{


  //! DebugUtils.ulam:27:   Void print(Atom arg) { print(arg, cPRINT_MEMBERS); }
  template<class EC, u32 POS>
  void Uq_10109210DebugUtils10<EC, POS>::Uf_5print(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102961a<EC> Uv_3arg)
  {

    //! DebugUtils.ulam:27:   Void print(Atom arg) { print(arg, cPRINT_MEMBERS); }
    const T Uh_tmpval_unpacked_224 = Uv_3arg.read();
    const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_225(Uh_tmpval_unpacked_224);
    const u32 Uh_tmpreg_loadable_226 = 25u;
    const Ui_Ut_102321u Uh_tmpval_loadable_227(Uh_tmpreg_loadable_226);
    Uf_5print(uc, Uv_4self, Uh_tmpval_unpacked_225, Uh_tmpval_loadable_227);

  } // Uf_5print



  //! DebugUtils.ulam:30:   Void printContext() { printContext(cPRINT_MEMBERS); }
  template<class EC, u32 POS>
  void Uq_10109210DebugUtils10<EC, POS>::Uf_9212printContext(UlamContext<EC>& uc, T& Uv_4self)
  {

    //! DebugUtils.ulam:30:   Void printContext() { printContext(cPRINT_MEMBERS); }
    const u32 Uh_tmpreg_loadable_228 = 25u;
    const Ui_Ut_102321u Uh_tmpval_loadable_229(Uh_tmpreg_loadable_228);
    Uf_9212printContext(uc, Uv_4self, Uh_tmpval_loadable_229);

  } // Uf_9212printContext


  template<class EC, u32 POS>
  s32 Uq_10109210DebugUtils10<EC, POS>::PositionOfDataMemberType(const char * namearg) const
  {

    return (-1);   //not found
  }  //has

  template<class EC, u32 POS>
  const UlamClassDataMemberInfo & Uq_10109210DebugUtils10<EC, POS>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
    } //end switch
    FAIL(ILLEGAL_ARGUMENT);
  } //GetDataMemberInfo

  template<class EC, u32 POS>
  s32 Uq_10109210DebugUtils10<EC, POS>::GetDataMemberCount() const
  {
    return 0;
  } //GetDataMemberCount

  template<class EC, u32 POS>
  const char * Uq_10109210DebugUtils10<EC, POS>::GetMangledClassName() const
  {
    return "Uq_10109210DebugUtils10";
  } //GetMangledClassName

} //MFM

