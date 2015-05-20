/**                                      -*- mode:C++ -*- */

#include "Uq_10109211EventWindow0.h"
#include "Ue_10105First0.h"
#include "Ue_10115Five20.h"
#include "Ue_10114Five0.h"
#include "Ue_10104Four0.h"
#include "Ue_10106Second0.h"
#include "Ue_10105Third0.h"
#include "Uq_102323C2D0.h"
#include "Uq_1010919AtomUtils0.h"
#include "Ue_10105Empty0.h"

namespace MFM{

  template<class EC>
  Ue_102335Fifth0<EC>::Ue_102335Fifth0() : UlamElement<EC>(MFM_UUID_FOR("Ue102335Fifth0", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("F");  // figure this out later
    Element<EC>::SetName("Fifth");
  }

  template<class EC>
  Ue_102335Fifth0<EC>::~Ue_102335Fifth0(){}


  //! Fifth.ulam:10:   Bool getFlip(){
  template<class EC>
  Ui_Ut_10111b Ue_102335Fifth0<EC>::Uf_7getFlip(UlamContext<EC>& uc, T& Uv_4self) const
  {

    //! Fifth.ulam:11:     return xFlip;
    const u32 Uh_tmpreg_loadable_11 = Up_Um_5xFlip::Read(Uv_4self.GetBits());
    const Ui_Ut_10111b Uh_tmpval_loadable_12(Uh_tmpreg_loadable_11);
    return (Uh_tmpval_loadable_12);

  } // Uf_7getFlip



  //! Fifth.ulam:13:   Void setFlip(Bool inFlip){
  template<class EC>
  void Ue_102335Fifth0<EC>::Uf_7setFlip(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10111b Uv_6inFlip) const
  {

    //! Fifth.ulam:14:     xFlip=inFlip;
    const u32 Uh_tmpreg_loadable_13 = Uv_6inFlip.read();
    Up_Um_5xFlip::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_13);

  } // Uf_7setFlip



  //! Fifth.ulam:16:   Int getOffset(){
  template<class EC>
  Ui_Ut_102321i Ue_102335Fifth0<EC>::Uf_919getOffset(UlamContext<EC>& uc, T& Uv_4self) const
  {

    //! Fifth.ulam:17:     return xOffset;
    const u32 Uh_tmpreg_loadable_15 = Up_Um_7xOffset::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_16 = _SignExtend32(Uh_tmpreg_loadable_15, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_17(Uh_tmpreg_loadable_16);
    return (Uh_tmpval_loadable_17);

  } // Uf_919getOffset



  //! Fifth.ulam:19:   Void setOffset(Int inOffset){
  template<class EC>
  void Ue_102335Fifth0<EC>::Uf_919setOffset(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_8inOffset) const
  {

    //! Fifth.ulam:20:     xOffset=inOffset;
    const u32 Uh_tmpreg_loadable_18 = Uv_8inOffset.read();
    const s32 Uh_tmpreg_loadable_19 = _SignExtend32(Uh_tmpreg_loadable_18, 32);
    Up_Um_7xOffset::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_19);

  } // Uf_919setOffset



  //! Fifth.ulam:22:   Void behave(){
  template<class EC>
  void Ue_102335Fifth0<EC>::Uf_6behave(UlamContext<EC>& uc, T& Uv_4self) const
  {

    //! Fifth.ulam:23:     EventWindow ew;
    Ui_Uq_10109211EventWindow0<EC> Uv_2ew;

    //! Fifth.ulam:24:     self.getFlip();
    const Ui_Ut_10111b Uh_tmpval_loadable_212 = Uf_7getFlip(uc, Uv_4self);
    const u32 Uh_tmpreg_loadable_213 = Uh_tmpval_loadable_212.read();

    //! Fifth.ulam:25:     Bool meFlip = self.getFlip();

    //! Fifth.ulam:25:     Bool meFlip = self.getFlip();
    Ui_Ut_10111b Uv_6meFlip;

    //! Fifth.ulam:25:     Bool meFlip = self.getFlip();
    const Ui_Ut_10111b Uh_tmpval_loadable_215 = Uf_7getFlip(uc, Uv_4self);
    const u32 Uh_tmpreg_loadable_216 = Uh_tmpval_loadable_215.read();
    Uv_6meFlip.write(Uh_tmpreg_loadable_216);

    //! Fifth.ulam:26:     Int  meOffset = self.getOffset();

    //! Fifth.ulam:26:     Int  meOffset = self.getOffset();
    Ui_Ut_102321i Uv_8meOffset;

    //! Fifth.ulam:26:     Int  meOffset = self.getOffset();
    const Ui_Ut_102321i Uh_tmpval_loadable_219 = Uf_919getOffset(uc, Uv_4self);
    const s32 Uh_tmpreg_loadable_220 = Uh_tmpval_loadable_219.read();
    const s32 Uh_tmpreg_loadable_221 = _SignExtend32(Uh_tmpreg_loadable_220, 32);
    Uv_8meOffset.write(Uh_tmpreg_loadable_221);

    //! Fifth.ulam:35:     if(meOffset==0){
    const s32 Uh_tmpreg_loadable_223 = 0;
    const u32 Uh_tmpreg_loadable_224 = Uv_8meOffset.read();
    const s32 Uh_tmpreg_loadable_225 = _SignExtend32(Uh_tmpreg_loadable_224, 32);
    const u32 Uh_tmpreg_loadable_226 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_225, Uh_tmpreg_loadable_223, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_226, 1))
    {

      //! Fifth.ulam:35:     if(meOffset==0){
      {

        //! Fifth.ulam:36:         setOffset(meOffset+=1);
        const s32 Uh_tmpreg_loadable_227 = 1;
        const u32 Uh_tmpreg_loadable_228 = Uv_8meOffset.read();
        const s32 Uh_tmpreg_loadable_229 = _SignExtend32(Uh_tmpreg_loadable_228, 32);
        const s32 Uh_tmpreg_loadable_230 = _BinOpAddInt32(Uh_tmpreg_loadable_229, Uh_tmpreg_loadable_227, 32);
        Uv_8meOffset.write(Uh_tmpreg_loadable_230);
        const Ui_Ut_102321i Uh_tmpval_loadable_231(Uh_tmpreg_loadable_230);
        Uf_919setOffset(uc, Uv_4self, Uh_tmpval_loadable_231);

        //! Fifth.ulam:37:         ew.swap(0,1);
        const s32 Uh_tmpreg_loadable_233 = 0;
        const Ui_Ut_102321i Uh_tmpval_loadable_234(Uh_tmpreg_loadable_233);
        const s32 Uh_tmpreg_loadable_235 = 1;
        const Ui_Ut_102321i Uh_tmpval_loadable_236(Uh_tmpreg_loadable_235);
        const Ui_Ut_10111b Uh_tmpval_loadable_237 = Ui_Uq_10109211EventWindow0<EC>::Us::Uf_4swap(uc, Uv_2ew.getRef(), Uh_tmpval_loadable_234, Uh_tmpval_loadable_236);
        const u32 Uh_tmpreg_loadable_238 = Uh_tmpval_loadable_237.read();
      }
    } // end if
    else
    {

      //! Fifth.ulam:39:     else{
      {

        //! Fifth.ulam:40:         setOffset(meOffset-=1);
        const s32 Uh_tmpreg_loadable_239 = 1;
        const u32 Uh_tmpreg_loadable_240 = Uv_8meOffset.read();
        const s32 Uh_tmpreg_loadable_241 = _SignExtend32(Uh_tmpreg_loadable_240, 32);
        const s32 Uh_tmpreg_loadable_242 = _BinOpSubtractInt32(Uh_tmpreg_loadable_241, Uh_tmpreg_loadable_239, 32);
        Uv_8meOffset.write(Uh_tmpreg_loadable_242);
        const Ui_Ut_102321i Uh_tmpval_loadable_243(Uh_tmpreg_loadable_242);
        Uf_919setOffset(uc, Uv_4self, Uh_tmpval_loadable_243);

        //! Fifth.ulam:41:         ew.swap(0,4);
        const s32 Uh_tmpreg_loadable_245 = 0;
        const Ui_Ut_102321i Uh_tmpval_loadable_246(Uh_tmpreg_loadable_245);
        const s32 Uh_tmpreg_loadable_247 = 4;
        const Ui_Ut_102321i Uh_tmpval_loadable_248(Uh_tmpreg_loadable_247);
        const Ui_Ut_10111b Uh_tmpval_loadable_249 = Ui_Uq_10109211EventWindow0<EC>::Us::Uf_4swap(uc, Uv_2ew.getRef(), Uh_tmpval_loadable_246, Uh_tmpval_loadable_248);
        const u32 Uh_tmpreg_loadable_250 = Uh_tmpval_loadable_249.read();
      }
    } //end else

  } // Uf_6behave


  template<class EC>
  s32 Ue_102335Fifth0<EC>::PositionOfDataMemberType(const char * namearg) const
  {

    return (-1);   //not found
  }  //has

  template<class EC>
  bool Ue_102335Fifth0<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType());
  }   //is

} //MFM

