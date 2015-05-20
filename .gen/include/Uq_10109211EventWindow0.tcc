/**                                      -*- mode:C++ -*- */

#include "Ue_102335Fifth0.h"
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


  //! EventWindow.ulam:34:   Atom aref(C2D coord) { return aref(getSiteNumber(coord)); }
  template<class EC, u32 POS>
  Ui_Ut_102961a<EC> Uq_10109211EventWindow0<EC, POS>::Uf_4aref(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D0<EC> Uv_5coord)
  {

    //! EventWindow.ulam:34:   Atom aref(C2D coord) { return aref(getSiteNumber(coord)); }
    const u32 Uh_tmpreg_loadable_251 = Uv_5coord.read();
    const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_252(Uh_tmpreg_loadable_251);
    const Ui_Ut_10161u Uh_tmpval_loadable_253 = Uf_9213getSiteNumber(uc, Uv_4self, Uh_tmpval_loadable_252);
    const u32 Uh_tmpreg_loadable_254 = Uh_tmpval_loadable_253.read();
    const Ui_Ut_10161u Uh_tmpval_loadable_255(Uh_tmpreg_loadable_254);
    const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_256 = Uf_4aref(uc, Uv_4self, Uh_tmpval_loadable_255);
    const T Uh_tmpval_unpacked_257 = Uh_tmpval_unpacked_256.read();
    const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_258(Uh_tmpval_unpacked_257);
    return (Uh_tmpval_unpacked_258);

  } // Uf_4aref



  //! EventWindow.ulam:33:   Atom aref(Int index) { return aref((SiteNum) index); }
  template<class EC, u32 POS>
  Ui_Ut_102961a<EC> Uq_10109211EventWindow0<EC, POS>::Uf_4aref(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_5index)
  {

    //! EventWindow.ulam:33:   Atom aref(Int index) { return aref((SiteNum) index); }
    const u32 Uh_tmpreg_loadable_259 = Uv_5index.read();
    const s32 Uh_tmpreg_loadable_260 = _SignExtend32(Uh_tmpreg_loadable_259, 32);
    const u32 Uh_tmpreg_loadable_261 = _Int32ToUnsigned32(Uh_tmpreg_loadable_260, 32, 6);
    const Ui_Ut_10161u Uh_tmpval_loadable_262(Uh_tmpreg_loadable_261);
    const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_263 = Uf_4aref(uc, Uv_4self, Uh_tmpval_loadable_262);
    const T Uh_tmpval_unpacked_264 = Uh_tmpval_unpacked_263.read();
    const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_265(Uh_tmpval_unpacked_264);
    return (Uh_tmpval_unpacked_265);

  } // Uf_4aref



  //! EventWindow.ulam:54:   Bool swap(C2D coord1, C2D coord2) { return swap(getSiteNumber(coord1), getSiteNumber(coord2)); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10109211EventWindow0<EC, POS>::Uf_4swap(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D0<EC> Uv_6coord1, Ui_Uq_102323C2D0<EC> Uv_6coord2)
  {

    //! EventWindow.ulam:54:   Bool swap(C2D coord1, C2D coord2) { return swap(getSiteNumber(coord1), getSiteNumber(coord2)); }
    const u32 Uh_tmpreg_loadable_266 = Uv_6coord1.read();
    const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_267(Uh_tmpreg_loadable_266);
    const Ui_Ut_10161u Uh_tmpval_loadable_268 = Uf_9213getSiteNumber(uc, Uv_4self, Uh_tmpval_loadable_267);
    const u32 Uh_tmpreg_loadable_269 = Uh_tmpval_loadable_268.read();
    const Ui_Ut_10161u Uh_tmpval_loadable_270(Uh_tmpreg_loadable_269);
    const u32 Uh_tmpreg_loadable_271 = Uv_6coord2.read();
    const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_272(Uh_tmpreg_loadable_271);
    const Ui_Ut_10161u Uh_tmpval_loadable_273 = Uf_9213getSiteNumber(uc, Uv_4self, Uh_tmpval_loadable_272);
    const u32 Uh_tmpreg_loadable_274 = Uh_tmpval_loadable_273.read();
    const Ui_Ut_10161u Uh_tmpval_loadable_275(Uh_tmpreg_loadable_274);
    const Ui_Ut_10111b Uh_tmpval_loadable_276 = Uf_4swap(uc, Uv_4self, Uh_tmpval_loadable_270, Uh_tmpval_loadable_275);
    const u32 Uh_tmpreg_loadable_277 = Uh_tmpval_loadable_276.read();
    const Ui_Ut_10111b Uh_tmpval_loadable_278(Uh_tmpreg_loadable_277);
    return (Uh_tmpval_loadable_278);

  } // Uf_4swap



  //! EventWindow.ulam:53:   Bool swap(Int index1, Int index2) { return swap((SiteNum) index1, (SiteNum) index2); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10109211EventWindow0<EC, POS>::Uf_4swap(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_6index1, Ui_Ut_102321i Uv_6index2)
  {

    //! EventWindow.ulam:53:   Bool swap(Int index1, Int index2) { return swap((SiteNum) index1, (SiteNum) index2); }
    const u32 Uh_tmpreg_loadable_279 = Uv_6index1.read();
    const s32 Uh_tmpreg_loadable_280 = _SignExtend32(Uh_tmpreg_loadable_279, 32);
    const u32 Uh_tmpreg_loadable_281 = _Int32ToUnsigned32(Uh_tmpreg_loadable_280, 32, 6);
    const Ui_Ut_10161u Uh_tmpval_loadable_282(Uh_tmpreg_loadable_281);
    const u32 Uh_tmpreg_loadable_283 = Uv_6index2.read();
    const s32 Uh_tmpreg_loadable_284 = _SignExtend32(Uh_tmpreg_loadable_283, 32);
    const u32 Uh_tmpreg_loadable_285 = _Int32ToUnsigned32(Uh_tmpreg_loadable_284, 32, 6);
    const Ui_Ut_10161u Uh_tmpval_loadable_286(Uh_tmpreg_loadable_285);
    const Ui_Ut_10111b Uh_tmpval_loadable_287 = Uf_4swap(uc, Uv_4self, Uh_tmpval_loadable_282, Uh_tmpval_loadable_286);
    const u32 Uh_tmpreg_loadable_288 = Uh_tmpval_loadable_287.read();
    const Ui_Ut_10111b Uh_tmpval_loadable_289(Uh_tmpreg_loadable_288);
    return (Uh_tmpval_loadable_289);

  } // Uf_4swap



  //! EventWindow.ulam:50:   Bool isEmpty(C2D coord) { return isLegal(coord) && isLive(getSiteNumber(coord)); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10109211EventWindow0<EC, POS>::Uf_7isEmpty(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D0<EC> Uv_5coord)
  {

    //! EventWindow.ulam:50:   Bool isEmpty(C2D coord) { return isLegal(coord) && isLive(getSiteNumber(coord)); }
    u32 Uh_tmpreg_loadable_290 = false;
    const u32 Uh_tmpreg_loadable_291 = Uv_5coord.read();
    const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_292(Uh_tmpreg_loadable_291);
    const Ui_Ut_10111b Uh_tmpval_loadable_293 = Uf_7isLegal(uc, Uv_4self, Uh_tmpval_loadable_292);
    const u32 Uh_tmpreg_loadable_294 = Uh_tmpval_loadable_293.read();
    if(_Bool32ToCbool(Uh_tmpreg_loadable_294, 1))
    {
      const u32 Uh_tmpreg_loadable_295 = Uv_5coord.read();
      const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_296(Uh_tmpreg_loadable_295);
      const Ui_Ut_10161u Uh_tmpval_loadable_297 = Uf_9213getSiteNumber(uc, Uv_4self, Uh_tmpval_loadable_296);
      const u32 Uh_tmpreg_loadable_298 = Uh_tmpval_loadable_297.read();
      const Ui_Ut_10161u Uh_tmpval_loadable_299(Uh_tmpreg_loadable_298);
      const Ui_Ut_10111b Uh_tmpval_loadable_3100 = Uf_6isLive(uc, Uv_4self, Uh_tmpval_loadable_299);
      const u32 Uh_tmpreg_loadable_3101 = Uh_tmpval_loadable_3100.read();
      Uh_tmpreg_loadable_290 = Uh_tmpreg_loadable_3101;
    }
    const Ui_Ut_10111b Uh_tmpval_loadable_3102(Uh_tmpreg_loadable_290);
    return (Uh_tmpval_loadable_3102);

  } // Uf_7isEmpty



  //! EventWindow.ulam:49:   Bool isEmpty(Int index) { return isEmpty((SiteNum) index); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10109211EventWindow0<EC, POS>::Uf_7isEmpty(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_5index)
  {

    //! EventWindow.ulam:49:   Bool isEmpty(Int index) { return isEmpty((SiteNum) index); }
    const u32 Uh_tmpreg_loadable_3103 = Uv_5index.read();
    const s32 Uh_tmpreg_loadable_3104 = _SignExtend32(Uh_tmpreg_loadable_3103, 32);
    const u32 Uh_tmpreg_loadable_3105 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3104, 32, 6);
    const Ui_Ut_10161u Uh_tmpval_loadable_3106(Uh_tmpreg_loadable_3105);
    const Ui_Ut_10111b Uh_tmpval_loadable_3107 = Uf_7isEmpty(uc, Uv_4self, Uh_tmpval_loadable_3106);
    const u32 Uh_tmpreg_loadable_3108 = Uh_tmpval_loadable_3107.read();
    const Ui_Ut_10111b Uh_tmpval_loadable_3109(Uh_tmpreg_loadable_3108);
    return (Uh_tmpval_loadable_3109);

  } // Uf_7isEmpty



  //! EventWindow.ulam:48:   Bool isEmpty(SiteNum index) { return isLive(index) && au.isEmpty(aref(index)); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10109211EventWindow0<EC, POS>::Uf_7isEmpty(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10161u Uv_5index)
  {

    //! EventWindow.ulam:48:   Bool isEmpty(SiteNum index) { return isLive(index) && au.isEmpty(aref(index)); }
    u32 Uh_tmpreg_loadable_3110 = false;
    const u32 Uh_tmpreg_loadable_3111 = Uv_5index.read();
    const Ui_Ut_10161u Uh_tmpval_loadable_3112(Uh_tmpreg_loadable_3111);
    const Ui_Ut_10111b Uh_tmpval_loadable_3113 = Uf_6isLive(uc, Uv_4self, Uh_tmpval_loadable_3112);
    const u32 Uh_tmpreg_loadable_3114 = Uh_tmpval_loadable_3113.read();
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3114, 1))
    {
      const u32 Uh_tmpreg_loadable_3116 = Uv_5index.read();
      const Ui_Ut_10161u Uh_tmpval_loadable_3117(Uh_tmpreg_loadable_3116);
      const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_3118 = Uf_4aref(uc, Uv_4self, Uh_tmpval_loadable_3117);
      const T Uh_tmpval_unpacked_3119 = Uh_tmpval_unpacked_3118.read();
      const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_3120(Uh_tmpval_unpacked_3119);
      const Ui_Ut_10111b Uh_tmpval_loadable_3121 = Ut_Um_2au::Uf_7isEmpty(uc, Uv_4self, Uh_tmpval_unpacked_3120);
      const u32 Uh_tmpreg_loadable_3122 = Uh_tmpval_loadable_3121.read();
      Uh_tmpreg_loadable_3110 = Uh_tmpreg_loadable_3122;
    }
    const Ui_Ut_10111b Uh_tmpval_loadable_3123(Uh_tmpreg_loadable_3110);
    return (Uh_tmpval_loadable_3123);

  } // Uf_7isEmpty



  //! EventWindow.ulam:38:   Void aset(C2D coord, Atom val) { aset(getSiteNumber(coord), val); }
  template<class EC, u32 POS>
  void Uq_10109211EventWindow0<EC, POS>::Uf_4aset(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D0<EC> Uv_5coord, Ui_Ut_102961a<EC> Uv_3val)
  {

    //! EventWindow.ulam:38:   Void aset(C2D coord, Atom val) { aset(getSiteNumber(coord), val); }
    const u32 Uh_tmpreg_loadable_3124 = Uv_5coord.read();
    const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3125(Uh_tmpreg_loadable_3124);
    const Ui_Ut_10161u Uh_tmpval_loadable_3126 = Uf_9213getSiteNumber(uc, Uv_4self, Uh_tmpval_loadable_3125);
    const u32 Uh_tmpreg_loadable_3127 = Uh_tmpval_loadable_3126.read();
    const Ui_Ut_10161u Uh_tmpval_loadable_3128(Uh_tmpreg_loadable_3127);
    const T Uh_tmpval_unpacked_3129 = Uv_3val.read();
    const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_3130(Uh_tmpval_unpacked_3129);
    Uf_4aset(uc, Uv_4self, Uh_tmpval_loadable_3128, Uh_tmpval_unpacked_3130);

  } // Uf_4aset



  //! EventWindow.ulam:37:   Void aset(Int index, Atom val) { aset((SiteNum) index, val); }
  template<class EC, u32 POS>
  void Uq_10109211EventWindow0<EC, POS>::Uf_4aset(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_5index, Ui_Ut_102961a<EC> Uv_3val)
  {

    //! EventWindow.ulam:37:   Void aset(Int index, Atom val) { aset((SiteNum) index, val); }
    const u32 Uh_tmpreg_loadable_3131 = Uv_5index.read();
    const s32 Uh_tmpreg_loadable_3132 = _SignExtend32(Uh_tmpreg_loadable_3131, 32);
    const u32 Uh_tmpreg_loadable_3133 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3132, 32, 6);
    const Ui_Ut_10161u Uh_tmpval_loadable_3134(Uh_tmpreg_loadable_3133);
    const T Uh_tmpval_unpacked_3135 = Uv_3val.read();
    const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_3136(Uh_tmpval_unpacked_3135);
    Uf_4aset(uc, Uv_4self, Uh_tmpval_loadable_3134, Uh_tmpval_unpacked_3136);

  } // Uf_4aset



  //! EventWindow.ulam:42:   Bool isLegal(C2D coord) { return isLegal(getSiteNumber(coord)); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10109211EventWindow0<EC, POS>::Uf_7isLegal(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D0<EC> Uv_5coord)
  {

    //! EventWindow.ulam:42:   Bool isLegal(C2D coord) { return isLegal(getSiteNumber(coord)); }
    const u32 Uh_tmpreg_loadable_3137 = Uv_5coord.read();
    const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3138(Uh_tmpreg_loadable_3137);
    const Ui_Ut_10161u Uh_tmpval_loadable_3139 = Uf_9213getSiteNumber(uc, Uv_4self, Uh_tmpval_loadable_3138);
    const u32 Uh_tmpreg_loadable_3140 = Uh_tmpval_loadable_3139.read();
    const Ui_Ut_10161u Uh_tmpval_loadable_3141(Uh_tmpreg_loadable_3140);
    const Ui_Ut_10111b Uh_tmpval_loadable_3142 = Uf_7isLegal(uc, Uv_4self, Uh_tmpval_loadable_3141);
    const u32 Uh_tmpreg_loadable_3143 = Uh_tmpval_loadable_3142.read();
    const Ui_Ut_10111b Uh_tmpval_loadable_3144(Uh_tmpreg_loadable_3143);
    return (Uh_tmpval_loadable_3144);

  } // Uf_7isLegal



  //! EventWindow.ulam:41:   Bool isLegal(Int index) { return index >= 0 && isLegal((SiteNum) index); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10109211EventWindow0<EC, POS>::Uf_7isLegal(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_5index)
  {

    //! EventWindow.ulam:41:   Bool isLegal(Int index) { return index >= 0 && isLegal((SiteNum) index); }
    u32 Uh_tmpreg_loadable_3145 = false;
    const s32 Uh_tmpreg_loadable_3146 = 0;
    const u32 Uh_tmpreg_loadable_3147 = Uv_5index.read();
    const s32 Uh_tmpreg_loadable_3148 = _SignExtend32(Uh_tmpreg_loadable_3147, 32);
    const u32 Uh_tmpreg_loadable_3149 = _BinOpCompareGreaterEqualInt32(Uh_tmpreg_loadable_3148, Uh_tmpreg_loadable_3146, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3149, 1))
    {
      const u32 Uh_tmpreg_loadable_3150 = Uv_5index.read();
      const s32 Uh_tmpreg_loadable_3151 = _SignExtend32(Uh_tmpreg_loadable_3150, 32);
      const u32 Uh_tmpreg_loadable_3152 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3151, 32, 6);
      const Ui_Ut_10161u Uh_tmpval_loadable_3153(Uh_tmpreg_loadable_3152);
      const Ui_Ut_10111b Uh_tmpval_loadable_3154 = Uf_7isLegal(uc, Uv_4self, Uh_tmpval_loadable_3153);
      const u32 Uh_tmpreg_loadable_3155 = Uh_tmpval_loadable_3154.read();
      Uh_tmpreg_loadable_3145 = Uh_tmpreg_loadable_3155;
    }
    const Ui_Ut_10111b Uh_tmpval_loadable_3156(Uh_tmpreg_loadable_3145);
    return (Uh_tmpval_loadable_3156);

  } // Uf_7isLegal



  //! EventWindow.ulam:40:   Bool isLegal(SiteNum index) { return index < size(); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10109211EventWindow0<EC, POS>::Uf_7isLegal(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10161u Uv_5index)
  {

    //! EventWindow.ulam:40:   Bool isLegal(SiteNum index) { return index < size(); }
    const Ui_Ut_10161u Uh_tmpval_loadable_3157 = Uf_4size(uc, Uv_4self);
    const u32 Uh_tmpreg_loadable_3158 = Uh_tmpval_loadable_3157.read();
    const u32 Uh_tmpreg_loadable_3159 = _Unsigned32ToUnsigned32(Uh_tmpreg_loadable_3158, 6, 32);
    const u32 Uh_tmpreg_loadable_3160 = Uv_5index.read();
    const u32 Uh_tmpreg_loadable_3161 = _Unsigned32ToUnsigned32(Uh_tmpreg_loadable_3160, 6, 32);
    const u32 Uh_tmpreg_loadable_3162 = _BinOpCompareLessThanUnsigned32(Uh_tmpreg_loadable_3161, Uh_tmpreg_loadable_3159, 32);
    const Ui_Ut_10111b Uh_tmpval_loadable_3163(Uh_tmpreg_loadable_3162);
    return (Uh_tmpval_loadable_3163);

  } // Uf_7isLegal



  //! EventWindow.ulam:46:   Bool isLive(C2D coord) { return isLegal(coord) && isLive(getSiteNumber(coord)); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10109211EventWindow0<EC, POS>::Uf_6isLive(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D0<EC> Uv_5coord)
  {

    //! EventWindow.ulam:46:   Bool isLive(C2D coord) { return isLegal(coord) && isLive(getSiteNumber(coord)); }
    u32 Uh_tmpreg_loadable_3164 = false;
    const u32 Uh_tmpreg_loadable_3165 = Uv_5coord.read();
    const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3166(Uh_tmpreg_loadable_3165);
    const Ui_Ut_10111b Uh_tmpval_loadable_3167 = Uf_7isLegal(uc, Uv_4self, Uh_tmpval_loadable_3166);
    const u32 Uh_tmpreg_loadable_3168 = Uh_tmpval_loadable_3167.read();
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3168, 1))
    {
      const u32 Uh_tmpreg_loadable_3169 = Uv_5coord.read();
      const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3170(Uh_tmpreg_loadable_3169);
      const Ui_Ut_10161u Uh_tmpval_loadable_3171 = Uf_9213getSiteNumber(uc, Uv_4self, Uh_tmpval_loadable_3170);
      const u32 Uh_tmpreg_loadable_3172 = Uh_tmpval_loadable_3171.read();
      const Ui_Ut_10161u Uh_tmpval_loadable_3173(Uh_tmpreg_loadable_3172);
      const Ui_Ut_10111b Uh_tmpval_loadable_3174 = Uf_6isLive(uc, Uv_4self, Uh_tmpval_loadable_3173);
      const u32 Uh_tmpreg_loadable_3175 = Uh_tmpval_loadable_3174.read();
      Uh_tmpreg_loadable_3164 = Uh_tmpreg_loadable_3175;
    }
    const Ui_Ut_10111b Uh_tmpval_loadable_3176(Uh_tmpreg_loadable_3164);
    return (Uh_tmpval_loadable_3176);

  } // Uf_6isLive



  //! EventWindow.ulam:45:   Bool isLive(Int index) { return isLegal(index) && isLive((SiteNum) index); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10109211EventWindow0<EC, POS>::Uf_6isLive(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_5index)
  {

    //! EventWindow.ulam:45:   Bool isLive(Int index) { return isLegal(index) && isLive((SiteNum) index); }
    u32 Uh_tmpreg_loadable_3177 = false;
    const u32 Uh_tmpreg_loadable_3178 = Uv_5index.read();
    const s32 Uh_tmpreg_loadable_3179 = _SignExtend32(Uh_tmpreg_loadable_3178, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3180(Uh_tmpreg_loadable_3179);
    const Ui_Ut_10111b Uh_tmpval_loadable_3181 = Uf_7isLegal(uc, Uv_4self, Uh_tmpval_loadable_3180);
    const u32 Uh_tmpreg_loadable_3182 = Uh_tmpval_loadable_3181.read();
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3182, 1))
    {
      const u32 Uh_tmpreg_loadable_3183 = Uv_5index.read();
      const s32 Uh_tmpreg_loadable_3184 = _SignExtend32(Uh_tmpreg_loadable_3183, 32);
      const u32 Uh_tmpreg_loadable_3185 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3184, 32, 6);
      const Ui_Ut_10161u Uh_tmpval_loadable_3186(Uh_tmpreg_loadable_3185);
      const Ui_Ut_10111b Uh_tmpval_loadable_3187 = Uf_6isLive(uc, Uv_4self, Uh_tmpval_loadable_3186);
      const u32 Uh_tmpreg_loadable_3188 = Uh_tmpval_loadable_3187.read();
      Uh_tmpreg_loadable_3177 = Uh_tmpreg_loadable_3188;
    }
    const Ui_Ut_10111b Uh_tmpval_loadable_3189(Uh_tmpreg_loadable_3177);
    return (Uh_tmpval_loadable_3189);

  } // Uf_6isLive


  template<class EC, u32 POS>
  s32 Uq_10109211EventWindow0<EC, POS>::PositionOfDataMemberType(const char * namearg) const
  {
    if(!strcmp(namearg,"AtomUtils")) return (0);   //pos offset

    return (-1);   //not found
  }  //has

} //MFM

