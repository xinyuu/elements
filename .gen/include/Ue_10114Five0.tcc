/**                                      -*- mode:C++ -*- */

#include "Ue_102335Fifth0.h"
#include "Uq_10109211EventWindow0.h"
#include "Ue_10105First0.h"
#include "Ue_10115Five20.h"
#include "Ue_10104Four0.h"
#include "Ue_10106Second0.h"
#include "Ue_10105Third0.h"
#include "Uq_102323C2D0.h"
#include "Uq_1010919AtomUtils0.h"
#include "Ue_10105Empty0.h"

namespace MFM{

  template<class EC>
  Ue_10114Five0<EC>::Ue_10114Five0() : UlamElement<EC>(MFM_UUID_FOR("Ue10114Five0", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("F");  // figure this out later
    Element<EC>::SetName("Five");
  }

  template<class EC>
  Ue_10114Five0<EC>::~Ue_10114Five0(){}


  //! Five.ulam:9:   Void behave(){
  template<class EC>
  void Ue_10114Five0<EC>::Uf_6behave(UlamContext<EC>& uc, T& Uv_4self) const
  {

    //! Five.ulam:10:     EventWindow ew;
    Ui_Uq_10109211EventWindow0<EC> Uv_2ew;

    //! Five.ulam:11:     if (xFlip==false){
    const u32 Uh_tmpreg_loadable_3226 = 0u;
    const s32 Uh_tmpreg_loadable_3227 = _Bool32ToInt32(Uh_tmpreg_loadable_3226, 1, 32);
    const u32 Uh_tmpreg_loadable_3228 = Up_Um_5xFlip::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_3229 = _Bool32ToInt32(Uh_tmpreg_loadable_3228, 1, 32);
    const u32 Uh_tmpreg_loadable_3230 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3229, Uh_tmpreg_loadable_3227, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3230, 1))
    {

      //! Five.ulam:11:     if (xFlip==false){
      {

        //! Five.ulam:12:         xFlip=true;
        const u32 Uh_tmpreg_loadable_3231 = 1u;
        Up_Um_5xFlip::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_3231);

        //! Five.ulam:13:         ew.swap(0,4);
        const s32 Uh_tmpreg_loadable_3234 = 0;
        const Ui_Ut_102321i Uh_tmpval_loadable_3235(Uh_tmpreg_loadable_3234);
        const s32 Uh_tmpreg_loadable_3236 = 4;
        const Ui_Ut_102321i Uh_tmpval_loadable_3237(Uh_tmpreg_loadable_3236);
        const Ui_Ut_10111b Uh_tmpval_loadable_3238 = Ui_Uq_10109211EventWindow0<EC>::Us::Uf_4swap(uc, Uv_2ew.getRef(), Uh_tmpval_loadable_3235, Uh_tmpval_loadable_3237);
        const u32 Uh_tmpreg_loadable_3239 = Uh_tmpval_loadable_3238.read();
      }
    } // end if
    else
    {

      //! Five.ulam:15:     else{
      {

        //! Five.ulam:16:         xFlip=false;
        const u32 Uh_tmpreg_loadable_3240 = 0u;
        Up_Um_5xFlip::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_3240);

        //! Five.ulam:17:         ew.swap(0,1);
        const s32 Uh_tmpreg_loadable_3243 = 0;
        const Ui_Ut_102321i Uh_tmpval_loadable_3244(Uh_tmpreg_loadable_3243);
        const s32 Uh_tmpreg_loadable_3245 = 1;
        const Ui_Ut_102321i Uh_tmpval_loadable_3246(Uh_tmpreg_loadable_3245);
        const Ui_Ut_10111b Uh_tmpval_loadable_3247 = Ui_Uq_10109211EventWindow0<EC>::Us::Uf_4swap(uc, Uv_2ew.getRef(), Uh_tmpval_loadable_3244, Uh_tmpval_loadable_3246);
        const u32 Uh_tmpreg_loadable_3248 = Uh_tmpval_loadable_3247.read();
      }
    } //end else

  } // Uf_6behave


  template<class EC>
  s32 Ue_10114Five0<EC>::PositionOfDataMemberType(const char * namearg) const
  {

    return (-1);   //not found
  }  //has

  template<class EC>
  bool Ue_10114Five0<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType());
  }   //is

} //MFM

