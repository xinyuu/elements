/**                                      -*- mode:C++ -*- */

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
#include "Uq_10105MDist10.h"
#include "Uq_10104Fail10.h"

namespace MFM{

  template<class EC>
  Ue_102213Box10<EC>::Ue_102213Box10() : UlamElement<EC>(MFM_UUID_FOR("Ue102213Box10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("B");  // figure this out later
    Element<EC>::SetName("Box");
  }

  template<class EC>
  Ue_102213Box10<EC>::~Ue_102213Box10(){}


  //! Box.ulam:15:   Void behave(){
  template<class EC>
  void Ue_102213Box10<EC>::Uf_6behave(UlamContext<EC>& uc, T& Uv_4self) const
  {

    //! Box.ulam:16:     Bool canSwap=true;

    //! Box.ulam:16:     Bool canSwap=true;
    Ui_Ut_10111b Uv_7canSwap;

    //! Box.ulam:16:     Bool canSwap=true;
    const u32 Uh_tmpreg_loadable_16 = 1u;
    Uv_7canSwap.write(Uh_tmpreg_loadable_16);

    //! Box.ulam:17:     WindowServices ws;
    Ui_Ue_102689214WindowServices10<EC> Uv_2ws = Ue_102689214WindowServices10<EC>::THE_INSTANCE.GetDefaultAtom();

    //! Box.ulam:18:     if(id==0){
    const s32 Uh_tmpreg_loadable_18 = 0;
    const u32 Uh_tmpreg_loadable_19 = Up_Um_2id::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_210 = _Unsigned32ToInt32(Uh_tmpreg_loadable_19, 10, 32);
    const u32 Uh_tmpreg_loadable_211 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_210, Uh_tmpreg_loadable_18, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_211, 1))
    {

      //! Box.ulam:18:     if(id==0){
      {

        //! Box.ulam:19:       id=rd.between(1,(Int)id.maxof);
        const s32 Uh_tmpreg_loadable_213 = 1;
        const Ui_Ut_102321i Uh_tmpval_loadable_214(Uh_tmpreg_loadable_213);
        const u32 Uh_tmpreg_loadable_215 = 1023u;
        const s32 Uh_tmpreg_loadable_216 = _Unsigned32ToInt32(Uh_tmpreg_loadable_215, 10, 32);
        const Ui_Ut_102321i Uh_tmpval_loadable_217(Uh_tmpreg_loadable_216);
        const Ui_Ut_102321i Uh_tmpval_loadable_218 = Ut_Um_2rd::Uf_7between(uc, Uv_4self, Uh_tmpval_loadable_214, Uh_tmpval_loadable_217);
        const s32 Uh_tmpreg_loadable_219 = Uh_tmpval_loadable_218.read();
        const s32 Uh_tmpreg_loadable_220 = _SignExtend32(Uh_tmpreg_loadable_219, 32);
        const u32 Uh_tmpreg_loadable_221 = _Int32ToUnsigned32(Uh_tmpreg_loadable_220, 32, 10);
        Up_Um_2id::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_221);
      }
    } // end if

    //! Box.ulam:21:     if(ns==4){
    const s32 Uh_tmpreg_loadable_223 = 4;
    const u32 Uh_tmpreg_loadable_224 = Up_Um_2ns::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_225 = _Unsigned32ToInt32(Uh_tmpreg_loadable_224, 3, 32);
    const u32 Uh_tmpreg_loadable_226 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_225, Uh_tmpreg_loadable_223, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_226, 1))
    {

      //! Box.ulam:21:     if(ns==4){
      {

        //! Box.ulam:22:       ns=0;
        const s32 Uh_tmpreg_loadable_227 = 0;
        const u32 Uh_tmpreg_loadable_228 = _Int32ToUnsigned32(Uh_tmpreg_loadable_227, 32, 3);
        Up_Um_2ns::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_228);
      }
    } // end if

    //! Box.ulam:24:     ns+=1;
    const s32 Uh_tmpreg_loadable_230 = 1;
    const u32 Uh_tmpreg_loadable_231 = _Int32ToUnsigned32(Uh_tmpreg_loadable_230, 32, 3);
    const u32 Uh_tmpreg_loadable_232 = Up_Um_2ns::Read(Uv_4self.GetBits());
    const u32 Uh_tmpreg_loadable_233 = _BinOpAddUnsigned32(Uh_tmpreg_loadable_232, Uh_tmpreg_loadable_231, 3);
    Up_Um_2ns::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_233);

    //! Box.ulam:25:     ew.changeSymmetry(ns);
    const u32 Uh_tmpreg_loadable_235 = Up_Um_2ns::Read(Uv_4self.GetBits());
    const Ui_Ut_10131u Uh_tmpval_loadable_236(Uh_tmpreg_loadable_235);
    const Ui_Ut_10131u Uh_tmpval_loadable_237 = Ut_Um_2ew::Uf_9214changeSymmetry(uc, Uv_4self, Uh_tmpval_loadable_236);
    const u32 Uh_tmpreg_loadable_238 = Uh_tmpval_loadable_237.read();

    //! Box.ulam:40:     if((ew[1] is Box)||(ew[1] is Pbox)){
    u32 Uh_tmpreg_loadable_239 = false;
    const s32 Uh_tmpreg_loadable_240 = 1;
    const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_243 = Ut_Um_2ew::Uf_4aref(uc, Uv_4self, Ui_Ut_102321i(Uh_tmpreg_loadable_240));
    const T Uh_tmpval_unpacked_244 = Uh_tmpval_unpacked_243.read();
    const u32 Uh_tmpreg_loadable_245 = Ue_102213Box10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_tmpval_unpacked_244);
    if(!_Bool32ToCbool(Uh_tmpreg_loadable_245, 1))
    {
      const s32 Uh_tmpreg_loadable_246 = 1;
      const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_249 = Ut_Um_2ew::Uf_4aref(uc, Uv_4self, Ui_Ut_102321i(Uh_tmpreg_loadable_246));
      const T Uh_tmpval_unpacked_250 = Uh_tmpval_unpacked_249.read();
      const u32 Uh_tmpreg_loadable_251 = Ue_102294Pbox10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_tmpval_unpacked_250);
      Uh_tmpreg_loadable_239 = Uh_tmpreg_loadable_251;
    }
    else
    {
      Uh_tmpreg_loadable_239 = Uh_tmpreg_loadable_245;
    }
    if(_Bool32ToCbool(Uh_tmpreg_loadable_239, 1))
    {

      //! Box.ulam:40:     if((ew[1] is Box)||(ew[1] is Pbox)){
      {

        //! Box.ulam:41:       countAlone+=1;
        const s32 Uh_tmpreg_loadable_252 = 1;
        const s32 Uh_tmpreg_loadable_253 = _Int32ToInt32(Uh_tmpreg_loadable_252, 32, 8);
        const u32 Uh_tmpreg_loadable_254 = Up_Um_9210countAlone::Read(Uv_4self.GetBits());
        const s32 Uh_tmpreg_loadable_255 = _SignExtend32(Uh_tmpreg_loadable_254, 8);
        const s32 Uh_tmpreg_loadable_256 = _BinOpAddInt32(Uh_tmpreg_loadable_255, Uh_tmpreg_loadable_253, 8);
        Up_Um_9210countAlone::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_256);
      }
    } // end if
    else
    {

      //! Box.ulam:42:     }else if(ew[1] is Empty){
      const s32 Uh_tmpreg_loadable_257 = 1;
      const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_260 = Ut_Um_2ew::Uf_4aref(uc, Uv_4self, Ui_Ut_102321i(Uh_tmpreg_loadable_257));
      const T Uh_tmpval_unpacked_261 = Uh_tmpval_unpacked_260.read();
      const u32 Uh_tmpreg_loadable_262 = Ue_10105Empty10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_tmpval_unpacked_261);
      if(_Bool32ToCbool(Uh_tmpreg_loadable_262, 1))
      {

        //! Box.ulam:42:     }else if(ew[1] is Empty){
        {

          //! Box.ulam:43:       countAlone-=1;
          const s32 Uh_tmpreg_loadable_263 = 1;
          const s32 Uh_tmpreg_loadable_264 = _Int32ToInt32(Uh_tmpreg_loadable_263, 32, 8);
          const u32 Uh_tmpreg_loadable_265 = Up_Um_9210countAlone::Read(Uv_4self.GetBits());
          const s32 Uh_tmpreg_loadable_266 = _SignExtend32(Uh_tmpreg_loadable_265, 8);
          const s32 Uh_tmpreg_loadable_267 = _BinOpSubtractInt32(Uh_tmpreg_loadable_266, Uh_tmpreg_loadable_264, 8);
          Up_Um_9210countAlone::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_267);
        }
      } // end if
      else
      {

        //! Box.ulam:44:     }else if(ew[1] is Wall){
        const s32 Uh_tmpreg_loadable_268 = 1;
        const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_271 = Ut_Um_2ew::Uf_4aref(uc, Uv_4self, Ui_Ut_102321i(Uh_tmpreg_loadable_268));
        const T Uh_tmpval_unpacked_272 = Uh_tmpval_unpacked_271.read();
        const u32 Uh_tmpreg_loadable_273 = Ue_10104Wall10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_tmpval_unpacked_272);
        if(_Bool32ToCbool(Uh_tmpreg_loadable_273, 1))
        {

          //! Box.ulam:44:     }else if(ew[1] is Wall){
          {

            //! Box.ulam:45:       canSwap=false;
            const u32 Uh_tmpreg_loadable_274 = 0u;
            Uv_7canSwap.write(Uh_tmpreg_loadable_274);
          }
        } // end if
      } //end else
    } //end else

    //! Box.ulam:47:     if(countAlone<=-10){
    const s32 Uh_tmpreg_loadable_276 = -10;
    const u32 Uh_tmpreg_loadable_277 = Up_Um_9210countAlone::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_278 = _SignExtend32(Uh_tmpreg_loadable_277, 8);
    const s32 Uh_tmpreg_loadable_279 = _Int32ToInt32(Uh_tmpreg_loadable_278, 8, 32);
    const u32 Uh_tmpreg_loadable_280 = _BinOpCompareLessEqualInt32(Uh_tmpreg_loadable_279, Uh_tmpreg_loadable_276, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_280, 1))
    {

      //! Box.ulam:47:     if(countAlone<=-10){
      {

        //! Box.ulam:48:       countAlone=0;
        const s32 Uh_tmpreg_loadable_281 = 0;
        const s32 Uh_tmpreg_loadable_282 = _Int32ToInt32(Uh_tmpreg_loadable_281, 32, 8);
        Up_Um_9210countAlone::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_282);
      }
    } // end if
    else
    {

      //! Box.ulam:49:     }else if(countAlone>0){
      const s32 Uh_tmpreg_loadable_284 = 0;
      const u32 Uh_tmpreg_loadable_285 = Up_Um_9210countAlone::Read(Uv_4self.GetBits());
      const s32 Uh_tmpreg_loadable_286 = _SignExtend32(Uh_tmpreg_loadable_285, 8);
      const s32 Uh_tmpreg_loadable_287 = _Int32ToInt32(Uh_tmpreg_loadable_286, 8, 32);
      const u32 Uh_tmpreg_loadable_288 = _BinOpCompareGreaterThanInt32(Uh_tmpreg_loadable_287, Uh_tmpreg_loadable_284, 32);
      if(_Bool32ToCbool(Uh_tmpreg_loadable_288, 1))
      {

        //! Box.ulam:49:     }else if(countAlone>0){
        {

          //! Box.ulam:50:       Pbox p;
          Ui_Ue_102294Pbox10<EC> Uv_1p = Ue_102294Pbox10<EC>::THE_INSTANCE.GetDefaultAtom();

          //! Box.ulam:51:       p.ns=ns;
          const u32 Uh_tmpreg_loadable_289 = Up_Um_2ns::Read(Uv_4self.GetBits());
          Ui_Ue_102294Pbox10<EC>::Us::Up_Um_2ns::Write(Uv_1p.getBits(), Uh_tmpreg_loadable_289);

          //! Box.ulam:52:       p.id=id;
          const u32 Uh_tmpreg_loadable_292 = Up_Um_2id::Read(Uv_4self.GetBits());
          Ui_Ue_102294Pbox10<EC>::Us::Up_Um_2id::Write(Uv_1p.getBits(), Uh_tmpreg_loadable_292);

          //! Box.ulam:53:       ew[0]=p;
          const T Uh_tmpval_unpacked_295 = Uv_1p.read();
          const s32 Uh_tmpreg_loadable_296 = 0;
          Ut_Um_2ew::Uf_4aset(uc, Uv_4self, Ui_Ut_102321i(Uh_tmpreg_loadable_296), Ui_Ut_102961a<EC>(Uh_tmpval_unpacked_295) );
        }
      } // end if
    } //end else

    //! Box.ulam:56:     if(canSwap){
    const u32 Uh_tmpreg_loadable_298 = Uv_7canSwap.read();
    if(_Bool32ToCbool(Uh_tmpreg_loadable_298, 1))
    {

      //! Box.ulam:56:     if(canSwap){
      {

        //! Box.ulam:57:       ew.swap(0,1);
        const s32 Uh_tmpreg_loadable_3100 = 0;
        const Ui_Ut_102321i Uh_tmpval_loadable_3101(Uh_tmpreg_loadable_3100);
        const s32 Uh_tmpreg_loadable_3102 = 1;
        const Ui_Ut_102321i Uh_tmpval_loadable_3103(Uh_tmpreg_loadable_3102);
        const Ui_Ut_10111b Uh_tmpval_loadable_3104 = Ut_Um_2ew::Uf_4swap(uc, Uv_4self, Uh_tmpval_loadable_3101, Uh_tmpval_loadable_3103);
        const u32 Uh_tmpreg_loadable_3105 = Uh_tmpval_loadable_3104.read();
      }
    } // end if
    else
    {

      //! Box.ulam:58:     }else{
      {

        //! Box.ulam:59:       Empty e;
        Ui_Ue_10105Empty10<EC> Uv_1e = Ue_10105Empty10<EC>::THE_INSTANCE.GetDefaultAtom();

        //! Box.ulam:60:       Int et=au.getType((Atom) e);

        //! Box.ulam:60:       Int et=au.getType((Atom) e);
        Ui_Ut_102321i Uv_2et;

        //! Box.ulam:60:       Int et=au.getType((Atom) e);
        const T Uh_tmpval_unpacked_3107 = Uv_1e.read();
        const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_3108(Uh_tmpval_unpacked_3107);
        const Ui_Ut_102321i Uh_tmpval_loadable_3109 = Ut_Um_2au::Uf_7getType(uc, Uv_4self, Uh_tmpval_unpacked_3108);
        const s32 Uh_tmpreg_loadable_3110 = Uh_tmpval_loadable_3109.read();
        const s32 Uh_tmpreg_loadable_3111 = _SignExtend32(Uh_tmpreg_loadable_3110, 32);
        Uv_2et.write(Uh_tmpreg_loadable_3111);

        //! Box.ulam:61:       ws.reset(0,4);
        const s32 Uh_tmpreg_loadable_3114 = 0;
        const Ui_Ut_102321i Uh_tmpval_loadable_3115(Uh_tmpreg_loadable_3114);
        const s32 Uh_tmpreg_loadable_3116 = 4;
        const Ui_Ut_102321i Uh_tmpval_loadable_3117(Uh_tmpreg_loadable_3116);
        Ue_102689214WindowServices10<EC>::THE_INSTANCE.Uf_5reset(uc, Uv_2ws.getRef(), Uh_tmpval_loadable_3115, Uh_tmpval_loadable_3117);

        //! Box.ulam:62:       if(ws.scan(et)){
        const u32 Uh_tmpreg_loadable_3119 = Uv_2et.read();
        const s32 Uh_tmpreg_loadable_3120 = _SignExtend32(Uh_tmpreg_loadable_3119, 32);
        const Ui_Ut_102321i Uh_tmpval_loadable_3121(Uh_tmpreg_loadable_3120);
        const Ui_Ut_10111b Uh_tmpval_loadable_3122 = Ue_102689214WindowServices10<EC>::THE_INSTANCE.Uf_4scan(uc, Uv_2ws.getRef(), Uh_tmpval_loadable_3121);
        const u32 Uh_tmpreg_loadable_3123 = Uh_tmpval_loadable_3122.read();
        if(_Bool32ToCbool(Uh_tmpreg_loadable_3123, 1))
        {

          //! Box.ulam:62:       if(ws.scan(et)){
          {

            //! Box.ulam:63: 	Int slot = ws.getPick(0);

            //! Box.ulam:63: 	Int slot = ws.getPick(0);
            Ui_Ut_102321i Uv_4slot;

            //! Box.ulam:63: 	Int slot = ws.getPick(0);
            const s32 Uh_tmpreg_loadable_3125 = 0;
            const Ui_Ut_102321i Uh_tmpval_loadable_3126(Uh_tmpreg_loadable_3125);
            const Ui_Ut_10161u Uh_tmpval_loadable_3127 = Ue_102689214WindowServices10<EC>::THE_INSTANCE.Uf_7getPick(uc, Uv_2ws.getRef(), Uh_tmpval_loadable_3126);
            const u32 Uh_tmpreg_loadable_3128 = Uh_tmpval_loadable_3127.read();
            const s32 Uh_tmpreg_loadable_3129 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3128, 6, 32);
            Uv_4slot.write(Uh_tmpreg_loadable_3129);

            //! Box.ulam:64: 	Marker m;
            Ui_Ue_10106Marker10<EC> Uv_1m = Ue_10106Marker10<EC>::THE_INSTANCE.GetDefaultAtom();

            //! Box.ulam:65: 	ew[slot]=m;
            const T Uh_tmpval_unpacked_3131 = Uv_1m.read();
            const u32 Uh_tmpreg_loadable_3132 = Uv_4slot.read();
            const s32 Uh_tmpreg_loadable_3133 = _SignExtend32(Uh_tmpreg_loadable_3132, 32);
            Ut_Um_2ew::Uf_4aset(uc, Uv_4self, Ui_Ut_102321i(Uh_tmpreg_loadable_3133), Ui_Ut_102961a<EC>(Uh_tmpval_unpacked_3131) );
          }
        } // end if
      }
    } //end else

  } // Uf_6behave


  template<class EC>
  s32 Ue_102213Box10<EC>::PositionOfDataMemberType(const char * namearg) const
  {
    if(!strcmp(namearg,"Uq_10109210DebugUtils10")) return (0);   //pos offset
    if(!strcmp(namearg,"Uq_10109211EventWindow10")) return (0);   //pos offset
    if(!strcmp(namearg,"Uq_1010919AtomUtils10")) return (0);   //pos offset
    if(!strcmp(namearg,"Uq_10106Random10")) return (0);   //pos offset

    return (-1);   //not found
  }  //has

  template<class EC>
  const UlamClassDataMemberInfo & Ue_102213Box10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10109210DebugUtils10", "du", 0u); return i; }
      case 1: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; }
      case 2: { static UlamClassDataMemberInfo i("Uq_1010919AtomUtils10", "au", 0u); return i; }
      case 3: { static UlamClassDataMemberInfo i("Uq_10106Random10", "rd", 0u); return i; }
      case 4: { static UlamClassDataMemberInfo i("Ut_10131u", "ns", 0u); return i; }
      case 5: { static UlamClassDataMemberInfo i("Ut_102101u", "id", 3u); return i; }
      case 6: { static UlamClassDataMemberInfo i("Ut_10181i", "countAlone", 13u); return i; }
    } //end switch
    FAIL(ILLEGAL_ARGUMENT);
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_102213Box10<EC>::GetDataMemberCount() const
  {
    return 7;
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_102213Box10<EC>::GetMangledClassName() const
  {
    return "Ue_102213Box10";
  } //GetMangledClassName

  template<class EC>
  bool Ue_102213Box10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType());
  }   //is

} //MFM

