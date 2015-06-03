/**                                      -*- mode:C++ -*- */

#include "Ue_10133Box10.h"
#include "Uq_10109210DebugUtils10.h"
#include "Uq_102323C2D10.h"
#include "Uq_1010919AtomUtils10.h"
#include "Ue_10105Empty10.h"

namespace MFM{


  //! EventWindow.ulam:34:   Atom aref(C2D coord) { return aref(getSiteNumber(coord)); }
  template<class EC, u32 POS>
  Ui_Ut_102961a<EC> Uq_10109211EventWindow10<EC, POS>::Uf_4aref(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D10<EC> Uv_5coord)
  {

    //! EventWindow.ulam:34:   Atom aref(C2D coord) { return aref(getSiteNumber(coord)); }
    const u32 Uh_tmpreg_loadable_230 = Uv_5coord.read();
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_231(Uh_tmpreg_loadable_230);
    const Ui_Ut_10161u Uh_tmpval_loadable_232 = Uf_9213getSiteNumber(uc, Uv_4self, Uh_tmpval_loadable_231);
    const u32 Uh_tmpreg_loadable_233 = Uh_tmpval_loadable_232.read();
    const Ui_Ut_10161u Uh_tmpval_loadable_234(Uh_tmpreg_loadable_233);
    const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_235 = Uf_4aref(uc, Uv_4self, Uh_tmpval_loadable_234);
    const T Uh_tmpval_unpacked_236 = Uh_tmpval_unpacked_235.read();
    const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_237(Uh_tmpval_unpacked_236);
    return (Uh_tmpval_unpacked_237);

  } // Uf_4aref



  //! EventWindow.ulam:33:   Atom aref(Int index) { return aref((SiteNum) index); }
  template<class EC, u32 POS>
  Ui_Ut_102961a<EC> Uq_10109211EventWindow10<EC, POS>::Uf_4aref(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_5index)
  {

    //! EventWindow.ulam:33:   Atom aref(Int index) { return aref((SiteNum) index); }
    const u32 Uh_tmpreg_loadable_238 = Uv_5index.read();
    const s32 Uh_tmpreg_loadable_239 = _SignExtend32(Uh_tmpreg_loadable_238, 32);
    const u32 Uh_tmpreg_loadable_240 = _Int32ToUnsigned32(Uh_tmpreg_loadable_239, 32, 6);
    const Ui_Ut_10161u Uh_tmpval_loadable_241(Uh_tmpreg_loadable_240);
    const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_242 = Uf_4aref(uc, Uv_4self, Uh_tmpval_loadable_241);
    const T Uh_tmpval_unpacked_243 = Uh_tmpval_unpacked_242.read();
    const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_244(Uh_tmpval_unpacked_243);
    return (Uh_tmpval_unpacked_244);

  } // Uf_4aref



  //! EventWindow.ulam:54:   Bool swap(C2D coord1, C2D coord2) { return swap(getSiteNumber(coord1), getSiteNumber(coord2)); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10109211EventWindow10<EC, POS>::Uf_4swap(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D10<EC> Uv_6coord1, Ui_Uq_102323C2D10<EC> Uv_6coord2)
  {

    //! EventWindow.ulam:54:   Bool swap(C2D coord1, C2D coord2) { return swap(getSiteNumber(coord1), getSiteNumber(coord2)); }
    const u32 Uh_tmpreg_loadable_245 = Uv_6coord1.read();
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_246(Uh_tmpreg_loadable_245);
    const Ui_Ut_10161u Uh_tmpval_loadable_247 = Uf_9213getSiteNumber(uc, Uv_4self, Uh_tmpval_loadable_246);
    const u32 Uh_tmpreg_loadable_248 = Uh_tmpval_loadable_247.read();
    const Ui_Ut_10161u Uh_tmpval_loadable_249(Uh_tmpreg_loadable_248);
    const u32 Uh_tmpreg_loadable_250 = Uv_6coord2.read();
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_251(Uh_tmpreg_loadable_250);
    const Ui_Ut_10161u Uh_tmpval_loadable_252 = Uf_9213getSiteNumber(uc, Uv_4self, Uh_tmpval_loadable_251);
    const u32 Uh_tmpreg_loadable_253 = Uh_tmpval_loadable_252.read();
    const Ui_Ut_10161u Uh_tmpval_loadable_254(Uh_tmpreg_loadable_253);
    const Ui_Ut_10111b Uh_tmpval_loadable_255 = Uf_4swap(uc, Uv_4self, Uh_tmpval_loadable_249, Uh_tmpval_loadable_254);
    const u32 Uh_tmpreg_loadable_256 = Uh_tmpval_loadable_255.read();
    const Ui_Ut_10111b Uh_tmpval_loadable_257(Uh_tmpreg_loadable_256);
    return (Uh_tmpval_loadable_257);

  } // Uf_4swap



  //! EventWindow.ulam:53:   Bool swap(Int index1, Int index2) { return swap((SiteNum) index1, (SiteNum) index2); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10109211EventWindow10<EC, POS>::Uf_4swap(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_6index1, Ui_Ut_102321i Uv_6index2)
  {

    //! EventWindow.ulam:53:   Bool swap(Int index1, Int index2) { return swap((SiteNum) index1, (SiteNum) index2); }
    const u32 Uh_tmpreg_loadable_258 = Uv_6index1.read();
    const s32 Uh_tmpreg_loadable_259 = _SignExtend32(Uh_tmpreg_loadable_258, 32);
    const u32 Uh_tmpreg_loadable_260 = _Int32ToUnsigned32(Uh_tmpreg_loadable_259, 32, 6);
    const Ui_Ut_10161u Uh_tmpval_loadable_261(Uh_tmpreg_loadable_260);
    const u32 Uh_tmpreg_loadable_262 = Uv_6index2.read();
    const s32 Uh_tmpreg_loadable_263 = _SignExtend32(Uh_tmpreg_loadable_262, 32);
    const u32 Uh_tmpreg_loadable_264 = _Int32ToUnsigned32(Uh_tmpreg_loadable_263, 32, 6);
    const Ui_Ut_10161u Uh_tmpval_loadable_265(Uh_tmpreg_loadable_264);
    const Ui_Ut_10111b Uh_tmpval_loadable_266 = Uf_4swap(uc, Uv_4self, Uh_tmpval_loadable_261, Uh_tmpval_loadable_265);
    const u32 Uh_tmpreg_loadable_267 = Uh_tmpval_loadable_266.read();
    const Ui_Ut_10111b Uh_tmpval_loadable_268(Uh_tmpreg_loadable_267);
    return (Uh_tmpval_loadable_268);

  } // Uf_4swap



  //! EventWindow.ulam:50:   Bool isEmpty(C2D coord) { return isLegal(coord) && isLive(getSiteNumber(coord)); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10109211EventWindow10<EC, POS>::Uf_7isEmpty(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D10<EC> Uv_5coord)
  {

    //! EventWindow.ulam:50:   Bool isEmpty(C2D coord) { return isLegal(coord) && isLive(getSiteNumber(coord)); }
    u32 Uh_tmpreg_loadable_269 = false;
    const u32 Uh_tmpreg_loadable_270 = Uv_5coord.read();
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_271(Uh_tmpreg_loadable_270);
    const Ui_Ut_10111b Uh_tmpval_loadable_272 = Uf_7isLegal(uc, Uv_4self, Uh_tmpval_loadable_271);
    const u32 Uh_tmpreg_loadable_273 = Uh_tmpval_loadable_272.read();
    if(_Bool32ToCbool(Uh_tmpreg_loadable_273, 1))
    {
      const u32 Uh_tmpreg_loadable_274 = Uv_5coord.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_275(Uh_tmpreg_loadable_274);
      const Ui_Ut_10161u Uh_tmpval_loadable_276 = Uf_9213getSiteNumber(uc, Uv_4self, Uh_tmpval_loadable_275);
      const u32 Uh_tmpreg_loadable_277 = Uh_tmpval_loadable_276.read();
      const Ui_Ut_10161u Uh_tmpval_loadable_278(Uh_tmpreg_loadable_277);
      const Ui_Ut_10111b Uh_tmpval_loadable_279 = Uf_6isLive(uc, Uv_4self, Uh_tmpval_loadable_278);
      const u32 Uh_tmpreg_loadable_280 = Uh_tmpval_loadable_279.read();
      Uh_tmpreg_loadable_269 = Uh_tmpreg_loadable_280;
    }
    const Ui_Ut_10111b Uh_tmpval_loadable_281(Uh_tmpreg_loadable_269);
    return (Uh_tmpval_loadable_281);

  } // Uf_7isEmpty



  //! EventWindow.ulam:49:   Bool isEmpty(Int index) { return isEmpty((SiteNum) index); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10109211EventWindow10<EC, POS>::Uf_7isEmpty(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_5index)
  {

    //! EventWindow.ulam:49:   Bool isEmpty(Int index) { return isEmpty((SiteNum) index); }
    const u32 Uh_tmpreg_loadable_282 = Uv_5index.read();
    const s32 Uh_tmpreg_loadable_283 = _SignExtend32(Uh_tmpreg_loadable_282, 32);
    const u32 Uh_tmpreg_loadable_284 = _Int32ToUnsigned32(Uh_tmpreg_loadable_283, 32, 6);
    const Ui_Ut_10161u Uh_tmpval_loadable_285(Uh_tmpreg_loadable_284);
    const Ui_Ut_10111b Uh_tmpval_loadable_286 = Uf_7isEmpty(uc, Uv_4self, Uh_tmpval_loadable_285);
    const u32 Uh_tmpreg_loadable_287 = Uh_tmpval_loadable_286.read();
    const Ui_Ut_10111b Uh_tmpval_loadable_288(Uh_tmpreg_loadable_287);
    return (Uh_tmpval_loadable_288);

  } // Uf_7isEmpty



  //! EventWindow.ulam:48:   Bool isEmpty(SiteNum index) { return isLive(index) && au.isEmpty(aref(index)); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10109211EventWindow10<EC, POS>::Uf_7isEmpty(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10161u Uv_5index)
  {

    //! EventWindow.ulam:48:   Bool isEmpty(SiteNum index) { return isLive(index) && au.isEmpty(aref(index)); }
    u32 Uh_tmpreg_loadable_289 = false;
    const u32 Uh_tmpreg_loadable_290 = Uv_5index.read();
    const Ui_Ut_10161u Uh_tmpval_loadable_291(Uh_tmpreg_loadable_290);
    const Ui_Ut_10111b Uh_tmpval_loadable_292 = Uf_6isLive(uc, Uv_4self, Uh_tmpval_loadable_291);
    const u32 Uh_tmpreg_loadable_293 = Uh_tmpval_loadable_292.read();
    if(_Bool32ToCbool(Uh_tmpreg_loadable_293, 1))
    {
      const u32 Uh_tmpreg_loadable_295 = Uv_5index.read();
      const Ui_Ut_10161u Uh_tmpval_loadable_296(Uh_tmpreg_loadable_295);
      const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_297 = Uf_4aref(uc, Uv_4self, Uh_tmpval_loadable_296);
      const T Uh_tmpval_unpacked_298 = Uh_tmpval_unpacked_297.read();
      const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_299(Uh_tmpval_unpacked_298);
      const Ui_Ut_10111b Uh_tmpval_loadable_3100 = Ut_Um_2au::Uf_7isEmpty(uc, Uv_4self, Uh_tmpval_unpacked_299);
      const u32 Uh_tmpreg_loadable_3101 = Uh_tmpval_loadable_3100.read();
      Uh_tmpreg_loadable_289 = Uh_tmpreg_loadable_3101;
    }
    const Ui_Ut_10111b Uh_tmpval_loadable_3102(Uh_tmpreg_loadable_289);
    return (Uh_tmpval_loadable_3102);

  } // Uf_7isEmpty



  //! EventWindow.ulam:38:   Void aset(C2D coord, Atom val) { aset(getSiteNumber(coord), val); }
  template<class EC, u32 POS>
  void Uq_10109211EventWindow10<EC, POS>::Uf_4aset(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D10<EC> Uv_5coord, Ui_Ut_102961a<EC> Uv_3val)
  {

    //! EventWindow.ulam:38:   Void aset(C2D coord, Atom val) { aset(getSiteNumber(coord), val); }
    const u32 Uh_tmpreg_loadable_3103 = Uv_5coord.read();
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3104(Uh_tmpreg_loadable_3103);
    const Ui_Ut_10161u Uh_tmpval_loadable_3105 = Uf_9213getSiteNumber(uc, Uv_4self, Uh_tmpval_loadable_3104);
    const u32 Uh_tmpreg_loadable_3106 = Uh_tmpval_loadable_3105.read();
    const Ui_Ut_10161u Uh_tmpval_loadable_3107(Uh_tmpreg_loadable_3106);
    const T Uh_tmpval_unpacked_3108 = Uv_3val.read();
    const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_3109(Uh_tmpval_unpacked_3108);
    Uf_4aset(uc, Uv_4self, Uh_tmpval_loadable_3107, Uh_tmpval_unpacked_3109);

  } // Uf_4aset



  //! EventWindow.ulam:37:   Void aset(Int index, Atom val) { aset((SiteNum) index, val); }
  template<class EC, u32 POS>
  void Uq_10109211EventWindow10<EC, POS>::Uf_4aset(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_5index, Ui_Ut_102961a<EC> Uv_3val)
  {

    //! EventWindow.ulam:37:   Void aset(Int index, Atom val) { aset((SiteNum) index, val); }
    const u32 Uh_tmpreg_loadable_3110 = Uv_5index.read();
    const s32 Uh_tmpreg_loadable_3111 = _SignExtend32(Uh_tmpreg_loadable_3110, 32);
    const u32 Uh_tmpreg_loadable_3112 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3111, 32, 6);
    const Ui_Ut_10161u Uh_tmpval_loadable_3113(Uh_tmpreg_loadable_3112);
    const T Uh_tmpval_unpacked_3114 = Uv_3val.read();
    const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_3115(Uh_tmpval_unpacked_3114);
    Uf_4aset(uc, Uv_4self, Uh_tmpval_loadable_3113, Uh_tmpval_unpacked_3115);

  } // Uf_4aset



  //! EventWindow.ulam:42:   Bool isLegal(C2D coord) { return isLegal(getSiteNumber(coord)); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10109211EventWindow10<EC, POS>::Uf_7isLegal(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D10<EC> Uv_5coord)
  {

    //! EventWindow.ulam:42:   Bool isLegal(C2D coord) { return isLegal(getSiteNumber(coord)); }
    const u32 Uh_tmpreg_loadable_3116 = Uv_5coord.read();
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3117(Uh_tmpreg_loadable_3116);
    const Ui_Ut_10161u Uh_tmpval_loadable_3118 = Uf_9213getSiteNumber(uc, Uv_4self, Uh_tmpval_loadable_3117);
    const u32 Uh_tmpreg_loadable_3119 = Uh_tmpval_loadable_3118.read();
    const Ui_Ut_10161u Uh_tmpval_loadable_3120(Uh_tmpreg_loadable_3119);
    const Ui_Ut_10111b Uh_tmpval_loadable_3121 = Uf_7isLegal(uc, Uv_4self, Uh_tmpval_loadable_3120);
    const u32 Uh_tmpreg_loadable_3122 = Uh_tmpval_loadable_3121.read();
    const Ui_Ut_10111b Uh_tmpval_loadable_3123(Uh_tmpreg_loadable_3122);
    return (Uh_tmpval_loadable_3123);

  } // Uf_7isLegal



  //! EventWindow.ulam:41:   Bool isLegal(Int index) { return index >= 0 && isLegal((SiteNum) index); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10109211EventWindow10<EC, POS>::Uf_7isLegal(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_5index)
  {

    //! EventWindow.ulam:41:   Bool isLegal(Int index) { return index >= 0 && isLegal((SiteNum) index); }
    u32 Uh_tmpreg_loadable_3124 = false;
    const s32 Uh_tmpreg_loadable_3125 = 0;
    const u32 Uh_tmpreg_loadable_3126 = Uv_5index.read();
    const s32 Uh_tmpreg_loadable_3127 = _SignExtend32(Uh_tmpreg_loadable_3126, 32);
    const u32 Uh_tmpreg_loadable_3128 = _BinOpCompareGreaterEqualInt32(Uh_tmpreg_loadable_3127, Uh_tmpreg_loadable_3125, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3128, 1))
    {
      const u32 Uh_tmpreg_loadable_3129 = Uv_5index.read();
      const s32 Uh_tmpreg_loadable_3130 = _SignExtend32(Uh_tmpreg_loadable_3129, 32);
      const u32 Uh_tmpreg_loadable_3131 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3130, 32, 6);
      const Ui_Ut_10161u Uh_tmpval_loadable_3132(Uh_tmpreg_loadable_3131);
      const Ui_Ut_10111b Uh_tmpval_loadable_3133 = Uf_7isLegal(uc, Uv_4self, Uh_tmpval_loadable_3132);
      const u32 Uh_tmpreg_loadable_3134 = Uh_tmpval_loadable_3133.read();
      Uh_tmpreg_loadable_3124 = Uh_tmpreg_loadable_3134;
    }
    const Ui_Ut_10111b Uh_tmpval_loadable_3135(Uh_tmpreg_loadable_3124);
    return (Uh_tmpval_loadable_3135);

  } // Uf_7isLegal



  //! EventWindow.ulam:40:   Bool isLegal(SiteNum index) { return index < size(); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10109211EventWindow10<EC, POS>::Uf_7isLegal(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10161u Uv_5index)
  {

    //! EventWindow.ulam:40:   Bool isLegal(SiteNum index) { return index < size(); }
    const Ui_Ut_10161u Uh_tmpval_loadable_3136 = Uf_4size(uc, Uv_4self);
    const u32 Uh_tmpreg_loadable_3137 = Uh_tmpval_loadable_3136.read();
    const u32 Uh_tmpreg_loadable_3138 = _Unsigned32ToUnsigned32(Uh_tmpreg_loadable_3137, 6, 32);
    const u32 Uh_tmpreg_loadable_3139 = Uv_5index.read();
    const u32 Uh_tmpreg_loadable_3140 = _Unsigned32ToUnsigned32(Uh_tmpreg_loadable_3139, 6, 32);
    const u32 Uh_tmpreg_loadable_3141 = _BinOpCompareLessThanUnsigned32(Uh_tmpreg_loadable_3140, Uh_tmpreg_loadable_3138, 32);
    const Ui_Ut_10111b Uh_tmpval_loadable_3142(Uh_tmpreg_loadable_3141);
    return (Uh_tmpval_loadable_3142);

  } // Uf_7isLegal



  //! EventWindow.ulam:46:   Bool isLive(C2D coord) { return isLegal(coord) && isLive(getSiteNumber(coord)); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10109211EventWindow10<EC, POS>::Uf_6isLive(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D10<EC> Uv_5coord)
  {

    //! EventWindow.ulam:46:   Bool isLive(C2D coord) { return isLegal(coord) && isLive(getSiteNumber(coord)); }
    u32 Uh_tmpreg_loadable_3143 = false;
    const u32 Uh_tmpreg_loadable_3144 = Uv_5coord.read();
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3145(Uh_tmpreg_loadable_3144);
    const Ui_Ut_10111b Uh_tmpval_loadable_3146 = Uf_7isLegal(uc, Uv_4self, Uh_tmpval_loadable_3145);
    const u32 Uh_tmpreg_loadable_3147 = Uh_tmpval_loadable_3146.read();
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3147, 1))
    {
      const u32 Uh_tmpreg_loadable_3148 = Uv_5coord.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3149(Uh_tmpreg_loadable_3148);
      const Ui_Ut_10161u Uh_tmpval_loadable_3150 = Uf_9213getSiteNumber(uc, Uv_4self, Uh_tmpval_loadable_3149);
      const u32 Uh_tmpreg_loadable_3151 = Uh_tmpval_loadable_3150.read();
      const Ui_Ut_10161u Uh_tmpval_loadable_3152(Uh_tmpreg_loadable_3151);
      const Ui_Ut_10111b Uh_tmpval_loadable_3153 = Uf_6isLive(uc, Uv_4self, Uh_tmpval_loadable_3152);
      const u32 Uh_tmpreg_loadable_3154 = Uh_tmpval_loadable_3153.read();
      Uh_tmpreg_loadable_3143 = Uh_tmpreg_loadable_3154;
    }
    const Ui_Ut_10111b Uh_tmpval_loadable_3155(Uh_tmpreg_loadable_3143);
    return (Uh_tmpval_loadable_3155);

  } // Uf_6isLive



  //! EventWindow.ulam:45:   Bool isLive(Int index) { return isLegal(index) && isLive((SiteNum) index); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10109211EventWindow10<EC, POS>::Uf_6isLive(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_5index)
  {

    //! EventWindow.ulam:45:   Bool isLive(Int index) { return isLegal(index) && isLive((SiteNum) index); }
    u32 Uh_tmpreg_loadable_3156 = false;
    const u32 Uh_tmpreg_loadable_3157 = Uv_5index.read();
    const s32 Uh_tmpreg_loadable_3158 = _SignExtend32(Uh_tmpreg_loadable_3157, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3159(Uh_tmpreg_loadable_3158);
    const Ui_Ut_10111b Uh_tmpval_loadable_3160 = Uf_7isLegal(uc, Uv_4self, Uh_tmpval_loadable_3159);
    const u32 Uh_tmpreg_loadable_3161 = Uh_tmpval_loadable_3160.read();
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3161, 1))
    {
      const u32 Uh_tmpreg_loadable_3162 = Uv_5index.read();
      const s32 Uh_tmpreg_loadable_3163 = _SignExtend32(Uh_tmpreg_loadable_3162, 32);
      const u32 Uh_tmpreg_loadable_3164 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3163, 32, 6);
      const Ui_Ut_10161u Uh_tmpval_loadable_3165(Uh_tmpreg_loadable_3164);
      const Ui_Ut_10111b Uh_tmpval_loadable_3166 = Uf_6isLive(uc, Uv_4self, Uh_tmpval_loadable_3165);
      const u32 Uh_tmpreg_loadable_3167 = Uh_tmpval_loadable_3166.read();
      Uh_tmpreg_loadable_3156 = Uh_tmpreg_loadable_3167;
    }
    const Ui_Ut_10111b Uh_tmpval_loadable_3168(Uh_tmpreg_loadable_3156);
    return (Uh_tmpval_loadable_3168);

  } // Uf_6isLive


  template<class EC, u32 POS>
  s32 Uq_10109211EventWindow10<EC, POS>::PositionOfDataMemberType(const char * namearg) const
  {
    if(!strcmp(namearg,"Uq_1010919AtomUtils10")) return (0);   //pos offset

    return (-1);   //not found
  }  //has

  template<class EC, u32 POS>
  const UlamClassDataMemberInfo & Uq_10109211EventWindow10<EC, POS>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_1010919AtomUtils10", "au", 0u); return i; }
    } //end switch
    FAIL(ILLEGAL_ARGUMENT);
  } //GetDataMemberInfo

  template<class EC, u32 POS>
  s32 Uq_10109211EventWindow10<EC, POS>::GetDataMemberCount() const
  {
    return 1;
  } //GetDataMemberCount

  template<class EC, u32 POS>
  const char * Uq_10109211EventWindow10<EC, POS>::GetMangledClassName() const
  {
    return "Uq_10109211EventWindow10";
  } //GetMangledClassName

} //MFM

