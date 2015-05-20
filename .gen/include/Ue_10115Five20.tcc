/**                                      -*- mode:C++ -*- */

#include "Ue_102335Fifth0.h"
#include "Uq_10109211EventWindow0.h"
#include "Ue_10105First0.h"
#include "Ue_10114Five0.h"
#include "Ue_10104Four0.h"
#include "Ue_10106Second0.h"
#include "Ue_10105Third0.h"
#include "Uq_102323C2D0.h"
#include "Uq_1010919AtomUtils0.h"
#include "Ue_10105Empty0.h"

namespace MFM{

  template<class EC>
  Ue_10115Five20<EC>::Ue_10115Five20() : UlamElement<EC>(MFM_UUID_FOR("Ue10115Five20", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("F");  // figure this out later
    Element<EC>::SetName("Five2");
  }

  template<class EC>
  Ue_10115Five20<EC>::~Ue_10115Five20(){}


  //! Five2.ulam:9:   Bool getFlip(){
  template<class EC>
  Ui_Ut_10111b Ue_10115Five20<EC>::Uf_7getFlip(UlamContext<EC>& uc, T& Uv_4self) const
  {

    //! Five2.ulam:10:     return xFlip;
    const u32 Uh_tmpreg_loadable_3195 = Up_Um_5xFlip::Read(Uv_4self.GetBits());
    const Ui_Ut_10111b Uh_tmpval_loadable_3196(Uh_tmpreg_loadable_3195);
    return (Uh_tmpval_loadable_3196);

  } // Uf_7getFlip



  //! Five2.ulam:12:   Void setFlip(Bool inFlip){
  template<class EC>
  void Ue_10115Five20<EC>::Uf_7setFlip(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10111b Uv_6inFlip) const
  {

    //! Five2.ulam:13:     xFlip=inFlip;
    const u32 Uh_tmpreg_loadable_3197 = Uv_6inFlip.read();
    Up_Um_5xFlip::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_3197);

  } // Uf_7setFlip



  //! Five2.ulam:16:   Void behave(){
  template<class EC>
  void Ue_10115Five20<EC>::Uf_6behave(UlamContext<EC>& uc, T& Uv_4self) const
  {

    //! Five2.ulam:17:     EventWindow ew;
    Ui_Uq_10109211EventWindow0<EC> Uv_2ew;

    //! Five2.ulam:18:     if (self.getFlip()==false){
    const u32 Uh_tmpreg_loadable_3199 = 0u;
    const s32 Uh_tmpreg_loadable_3200 = _Bool32ToInt32(Uh_tmpreg_loadable_3199, 1, 32);
    const Ui_Ut_10111b Uh_tmpval_loadable_3202 = Uf_7getFlip(uc, Uv_4self);
    const u32 Uh_tmpreg_loadable_3203 = Uh_tmpval_loadable_3202.read();
    const s32 Uh_tmpreg_loadable_3204 = _Bool32ToInt32(Uh_tmpreg_loadable_3203, 1, 32);
    const u32 Uh_tmpreg_loadable_3205 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3204, Uh_tmpreg_loadable_3200, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3205, 1))
    {

      //! Five2.ulam:18:     if (self.getFlip()==false){
      {

        //! Five2.ulam:19:         self.setFlip(true);
        const u32 Uh_tmpreg_loadable_3207 = 1u;
        const Ui_Ut_10111b Uh_tmpval_loadable_3208(Uh_tmpreg_loadable_3207);
        Uf_7setFlip(uc, Uv_4self, Uh_tmpval_loadable_3208);

        //! Five2.ulam:20:         ew.swap(0,4);
        const s32 Uh_tmpreg_loadable_3210 = 0;
        const Ui_Ut_102321i Uh_tmpval_loadable_3211(Uh_tmpreg_loadable_3210);
        const s32 Uh_tmpreg_loadable_3212 = 4;
        const Ui_Ut_102321i Uh_tmpval_loadable_3213(Uh_tmpreg_loadable_3212);
        const Ui_Ut_10111b Uh_tmpval_loadable_3214 = Ui_Uq_10109211EventWindow0<EC>::Us::Uf_4swap(uc, Uv_2ew.getRef(), Uh_tmpval_loadable_3211, Uh_tmpval_loadable_3213);
        const u32 Uh_tmpreg_loadable_3215 = Uh_tmpval_loadable_3214.read();
      }
    } // end if
    else
    {

      //! Five2.ulam:22:     else{
      {

        //! Five2.ulam:23:         self.setFlip(false);
        const u32 Uh_tmpreg_loadable_3217 = 0u;
        const Ui_Ut_10111b Uh_tmpval_loadable_3218(Uh_tmpreg_loadable_3217);
        Uf_7setFlip(uc, Uv_4self, Uh_tmpval_loadable_3218);

        //! Five2.ulam:24:         ew.swap(0,1);
        const s32 Uh_tmpreg_loadable_3220 = 0;
        const Ui_Ut_102321i Uh_tmpval_loadable_3221(Uh_tmpreg_loadable_3220);
        const s32 Uh_tmpreg_loadable_3222 = 1;
        const Ui_Ut_102321i Uh_tmpval_loadable_3223(Uh_tmpreg_loadable_3222);
        const Ui_Ut_10111b Uh_tmpval_loadable_3224 = Ui_Uq_10109211EventWindow0<EC>::Us::Uf_4swap(uc, Uv_2ew.getRef(), Uh_tmpval_loadable_3221, Uh_tmpval_loadable_3223);
        const u32 Uh_tmpreg_loadable_3225 = Uh_tmpval_loadable_3224.read();
      }
    } //end else

  } // Uf_6behave


  template<class EC>
  s32 Ue_10115Five20<EC>::PositionOfDataMemberType(const char * namearg) const
  {

    return (-1);   //not found
  }  //has

  template<class EC>
  bool Ue_10115Five20<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType());
  }   //is

} //MFM

