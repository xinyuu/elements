/**                                      -*- mode:C++ -*- */

#include "Uq_10109210DebugUtils10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_102323C2D10.h"
#include "Uq_1010919AtomUtils10.h"
#include "Ue_10105Empty10.h"

namespace MFM{

  template<class EC>
  Ue_10133Box10<EC>::Ue_10133Box10() : UlamElement<EC>(MFM_UUID_FOR("Ue10133Box10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("B");  // figure this out later
    Element<EC>::SetName("Box");
  }

  template<class EC>
  Ue_10133Box10<EC>::~Ue_10133Box10(){}


  //! Box.ulam:9:   Void behave(){
  template<class EC>
  void Ue_10133Box10<EC>::Uf_6behave(UlamContext<EC>& uc, T& Uv_4self) const
  {

    //! Box.ulam:10:     DebugUtils du;
    Ui_Uq_10109210DebugUtils10<EC> Uv_2du;

    //! Box.ulam:11:     EventWindow ew;
    Ui_Uq_10109211EventWindow10<EC> Uv_2ew;

    //! Box.ulam:12:     if(ns==4){
    const s32 Uh_tmpreg_loadable_11 = 4;
    const u32 Uh_tmpreg_loadable_12 = Up_Um_2ns::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_13 = _Unsigned32ToInt32(Uh_tmpreg_loadable_12, 3, 32);
    const u32 Uh_tmpreg_loadable_14 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_13, Uh_tmpreg_loadable_11, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_14, 1))
    {

      //! Box.ulam:12:     if(ns==4){
      {

        //! Box.ulam:13:       ns=0;
        const s32 Uh_tmpreg_loadable_15 = 0;
        const u32 Uh_tmpreg_loadable_16 = _Int32ToUnsigned32(Uh_tmpreg_loadable_15, 32, 3);
        Up_Um_2ns::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_16);
      }
    } // end if

    //! Box.ulam:15:     ns+=1;
    const s32 Uh_tmpreg_loadable_18 = 1;
    const u32 Uh_tmpreg_loadable_19 = _Int32ToUnsigned32(Uh_tmpreg_loadable_18, 32, 3);
    const u32 Uh_tmpreg_loadable_210 = Up_Um_2ns::Read(Uv_4self.GetBits());
    const u32 Uh_tmpreg_loadable_211 = _BinOpAddUnsigned32(Uh_tmpreg_loadable_210, Uh_tmpreg_loadable_19, 3);
    Up_Um_2ns::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_211);

    //! Box.ulam:16:     ew.changeSymmetry(ns);
    const u32 Uh_tmpreg_loadable_213 = Up_Um_2ns::Read(Uv_4self.GetBits());
    const Ui_Ut_10131u Uh_tmpval_loadable_214(Uh_tmpreg_loadable_213);
    const Ui_Ut_10131u Uh_tmpval_loadable_215 = Ui_Uq_10109211EventWindow10<EC>::Us::Uf_9214changeSymmetry(uc, Uv_2ew.getRef(), Uh_tmpval_loadable_214);
    const u32 Uh_tmpreg_loadable_216 = Uh_tmpval_loadable_215.read();

    //! Box.ulam:17:     ew.swap(0,1);
    const s32 Uh_tmpreg_loadable_218 = 0;
    const Ui_Ut_102321i Uh_tmpval_loadable_219(Uh_tmpreg_loadable_218);
    const s32 Uh_tmpreg_loadable_220 = 1;
    const Ui_Ut_102321i Uh_tmpval_loadable_221(Uh_tmpreg_loadable_220);
    const Ui_Ut_10111b Uh_tmpval_loadable_222 = Ui_Uq_10109211EventWindow10<EC>::Us::Uf_4swap(uc, Uv_2ew.getRef(), Uh_tmpval_loadable_219, Uh_tmpval_loadable_221);
    const u32 Uh_tmpreg_loadable_223 = Uh_tmpval_loadable_222.read();

  } // Uf_6behave


  template<class EC>
  s32 Ue_10133Box10<EC>::PositionOfDataMemberType(const char * namearg) const
  {

    return (-1);   //not found
  }  //has

  template<class EC>
  const UlamClassDataMemberInfo & Ue_10133Box10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Ut_10131u", "ns", 0u); return i; }
    } //end switch
    FAIL(ILLEGAL_ARGUMENT);
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_10133Box10<EC>::GetDataMemberCount() const
  {
    return 1;
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_10133Box10<EC>::GetMangledClassName() const
  {
    return "Ue_10133Box10";
  } //GetMangledClassName

  template<class EC>
  bool Ue_10133Box10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType());
  }   //is

} //MFM

