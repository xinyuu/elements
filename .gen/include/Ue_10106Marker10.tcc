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
#include "Uq_102323C2D10.h"
#include "Uq_10105MDist10.h"
#include "Uq_10104Fail10.h"

namespace MFM{

  template<class EC>
  Ue_10106Marker10<EC>::Ue_10106Marker10() : UlamElement<EC>(MFM_UUID_FOR("Ue10106Marker10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("M");  // figure this out later
    Element<EC>::SetName("Marker");
  }

  template<class EC>
  Ue_10106Marker10<EC>::~Ue_10106Marker10(){}


  //! Marker.ulam:10:   Void behave(){
  template<class EC>
  void Ue_10106Marker10<EC>::Uf_6behave(UlamContext<EC>& uc, T& Uv_4self) const
  {

    //! Marker.ulam:11:     if(ew[1] is Empty){
    const s32 Uh_tmpreg_loadable_41110 = 1;
    const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_41113 = Ut_Um_2ew::Uf_4aref(uc, Uv_4self, Ui_Ut_102321i(Uh_tmpreg_loadable_41110));
    const T Uh_tmpval_unpacked_41114 = Uh_tmpval_unpacked_41113.read();
    const u32 Uh_tmpreg_loadable_41115 = Ue_10105Empty10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_tmpval_unpacked_41114);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_41115, 1))
    {

      //! Marker.ulam:11:     if(ew[1] is Empty){
      {

        //! Marker.ulam:12:       if(rd.oneIn(100)){
        const s32 Uh_tmpreg_loadable_41117 = 100;
        const Ui_Ut_102321i Uh_tmpval_loadable_41118(Uh_tmpreg_loadable_41117);
        const Ui_Ut_10111b Uh_tmpval_loadable_41119 = Ut_Um_2rd::Uf_5oneIn(uc, Uv_4self, Uh_tmpval_loadable_41118);
        const u32 Uh_tmpreg_loadable_41120 = Uh_tmpval_loadable_41119.read();
        if(_Bool32ToCbool(Uh_tmpreg_loadable_41120, 1))
        {

          //! Marker.ulam:12:       if(rd.oneIn(100)){
          {

            //! Marker.ulam:13: 	ew.swap(0,1);
            const s32 Uh_tmpreg_loadable_41122 = 0;
            const Ui_Ut_102321i Uh_tmpval_loadable_41123(Uh_tmpreg_loadable_41122);
            const s32 Uh_tmpreg_loadable_41124 = 1;
            const Ui_Ut_102321i Uh_tmpval_loadable_41125(Uh_tmpreg_loadable_41124);
            const Ui_Ut_10111b Uh_tmpval_loadable_41126 = Ut_Um_2ew::Uf_4swap(uc, Uv_4self, Uh_tmpval_loadable_41123, Uh_tmpval_loadable_41125);
            const u32 Uh_tmpreg_loadable_41127 = Uh_tmpval_loadable_41126.read();
          }
        } // end if
      }
    } // end if

  } // Uf_6behave


  template<class EC>
  s32 Ue_10106Marker10<EC>::PositionOfDataMemberType(const char * namearg) const
  {
    if(!strcmp(namearg,"Uq_10109211EventWindow10")) return (0);   //pos offset
    if(!strcmp(namearg,"Uq_10106Random10")) return (0);   //pos offset

    return (-1);   //not found
  }  //has

  template<class EC>
  const UlamClassDataMemberInfo & Ue_10106Marker10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; }
      case 1: { static UlamClassDataMemberInfo i("Uq_10106Random10", "rd", 0u); return i; }
    } //end switch
    FAIL(ILLEGAL_ARGUMENT);
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_10106Marker10<EC>::GetDataMemberCount() const
  {
    return 2;
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_10106Marker10<EC>::GetMangledClassName() const
  {
    return "Ue_10106Marker10";
  } //GetMangledClassName

  template<class EC>
  bool Ue_10106Marker10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType());
  }   //is

} //MFM

