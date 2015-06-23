/**                                      -*- mode:C++ -*- */

#include "Ue_102213Box10.h"
#include "Uq_10109210DebugUtils10.h"
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


  //! EventWindow.ulam:38:   Atom aref(Int index) { return aref((SiteNum) index); }
  template<class EC, u32 POS>
  Ui_Ut_102961a<EC> Uq_10109211EventWindow10<EC, POS>::Uf_4aref(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_5index)
  {

    //! EventWindow.ulam:38:   Atom aref(Int index) { return aref((SiteNum) index); }
    const u32 Uh_tmpreg_loadable_3141 = Uv_5index.read();
    const s32 Uh_tmpreg_loadable_3142 = _SignExtend32(Uh_tmpreg_loadable_3141, 32);
    const u32 Uh_tmpreg_loadable_3143 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3142, 32, 6);
    const Ui_Ut_10161u Uh_tmpval_loadable_3144(Uh_tmpreg_loadable_3143);
    const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_3145 = Uf_4aref(uc, Uv_4self, Uh_tmpval_loadable_3144);
    const T Uh_tmpval_unpacked_3146 = Uh_tmpval_unpacked_3145.read();
    const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_3147(Uh_tmpval_unpacked_3146);
    return (Uh_tmpval_unpacked_3147);

  } // Uf_4aref



  //! EventWindow.ulam:39:   Atom aref(C2D coord) { return aref(getSiteNumber(coord)); }
  template<class EC, u32 POS>
  Ui_Ut_102961a<EC> Uq_10109211EventWindow10<EC, POS>::Uf_4aref(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D10<EC> Uv_5coord)
  {

    //! EventWindow.ulam:39:   Atom aref(C2D coord) { return aref(getSiteNumber(coord)); }
    const u32 Uh_tmpreg_loadable_3148 = Uv_5coord.read();
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3149(Uh_tmpreg_loadable_3148);
    const Ui_Ut_10161u Uh_tmpval_loadable_3150 = Uf_9213getSiteNumber(uc, Uv_4self, Uh_tmpval_loadable_3149);
    const u32 Uh_tmpreg_loadable_3151 = Uh_tmpval_loadable_3150.read();
    const Ui_Ut_10161u Uh_tmpval_loadable_3152(Uh_tmpreg_loadable_3151);
    const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_3153 = Uf_4aref(uc, Uv_4self, Uh_tmpval_loadable_3152);
    const T Uh_tmpval_unpacked_3154 = Uh_tmpval_unpacked_3153.read();
    const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_3155(Uh_tmpval_unpacked_3154);
    return (Uh_tmpval_unpacked_3155);

  } // Uf_4aref



  //! EventWindow.ulam:58:   Bool swap(Int index1, Int index2) { return swap((SiteNum) index1, (SiteNum) index2); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10109211EventWindow10<EC, POS>::Uf_4swap(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_6index1, Ui_Ut_102321i Uv_6index2)
  {

    //! EventWindow.ulam:58:   Bool swap(Int index1, Int index2) { return swap((SiteNum) index1, (SiteNum) index2); }
    const u32 Uh_tmpreg_loadable_3156 = Uv_6index1.read();
    const s32 Uh_tmpreg_loadable_3157 = _SignExtend32(Uh_tmpreg_loadable_3156, 32);
    const u32 Uh_tmpreg_loadable_3158 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3157, 32, 6);
    const Ui_Ut_10161u Uh_tmpval_loadable_3159(Uh_tmpreg_loadable_3158);
    const u32 Uh_tmpreg_loadable_3160 = Uv_6index2.read();
    const s32 Uh_tmpreg_loadable_3161 = _SignExtend32(Uh_tmpreg_loadable_3160, 32);
    const u32 Uh_tmpreg_loadable_3162 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3161, 32, 6);
    const Ui_Ut_10161u Uh_tmpval_loadable_3163(Uh_tmpreg_loadable_3162);
    const Ui_Ut_10111b Uh_tmpval_loadable_3164 = Uf_4swap(uc, Uv_4self, Uh_tmpval_loadable_3159, Uh_tmpval_loadable_3163);
    const u32 Uh_tmpreg_loadable_3165 = Uh_tmpval_loadable_3164.read();
    const Ui_Ut_10111b Uh_tmpval_loadable_3166(Uh_tmpreg_loadable_3165);
    return (Uh_tmpval_loadable_3166);

  } // Uf_4swap



  //! EventWindow.ulam:59:   Bool swap(C2D coord1, C2D coord2) { return swap(getSiteNumber(coord1), getSiteNumber(coord2)); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10109211EventWindow10<EC, POS>::Uf_4swap(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D10<EC> Uv_6coord1, Ui_Uq_102323C2D10<EC> Uv_6coord2)
  {

    //! EventWindow.ulam:59:   Bool swap(C2D coord1, C2D coord2) { return swap(getSiteNumber(coord1), getSiteNumber(coord2)); }
    const u32 Uh_tmpreg_loadable_3167 = Uv_6coord1.read();
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3168(Uh_tmpreg_loadable_3167);
    const Ui_Ut_10161u Uh_tmpval_loadable_3169 = Uf_9213getSiteNumber(uc, Uv_4self, Uh_tmpval_loadable_3168);
    const u32 Uh_tmpreg_loadable_3170 = Uh_tmpval_loadable_3169.read();
    const Ui_Ut_10161u Uh_tmpval_loadable_3171(Uh_tmpreg_loadable_3170);
    const u32 Uh_tmpreg_loadable_3172 = Uv_6coord2.read();
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3173(Uh_tmpreg_loadable_3172);
    const Ui_Ut_10161u Uh_tmpval_loadable_3174 = Uf_9213getSiteNumber(uc, Uv_4self, Uh_tmpval_loadable_3173);
    const u32 Uh_tmpreg_loadable_3175 = Uh_tmpval_loadable_3174.read();
    const Ui_Ut_10161u Uh_tmpval_loadable_3176(Uh_tmpreg_loadable_3175);
    const Ui_Ut_10111b Uh_tmpval_loadable_3177 = Uf_4swap(uc, Uv_4self, Uh_tmpval_loadable_3171, Uh_tmpval_loadable_3176);
    const u32 Uh_tmpreg_loadable_3178 = Uh_tmpval_loadable_3177.read();
    const Ui_Ut_10111b Uh_tmpval_loadable_3179(Uh_tmpreg_loadable_3178);
    return (Uh_tmpval_loadable_3179);

  } // Uf_4swap



  //! EventWindow.ulam:54:   Bool isEmpty(Int index) { return isEmpty((SiteNum) index); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10109211EventWindow10<EC, POS>::Uf_7isEmpty(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_5index)
  {

    //! EventWindow.ulam:54:   Bool isEmpty(Int index) { return isEmpty((SiteNum) index); }
    const u32 Uh_tmpreg_loadable_3180 = Uv_5index.read();
    const s32 Uh_tmpreg_loadable_3181 = _SignExtend32(Uh_tmpreg_loadable_3180, 32);
    const u32 Uh_tmpreg_loadable_3182 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3181, 32, 6);
    const Ui_Ut_10161u Uh_tmpval_loadable_3183(Uh_tmpreg_loadable_3182);
    const Ui_Ut_10111b Uh_tmpval_loadable_3184 = Uf_7isEmpty(uc, Uv_4self, Uh_tmpval_loadable_3183);
    const u32 Uh_tmpreg_loadable_3185 = Uh_tmpval_loadable_3184.read();
    const Ui_Ut_10111b Uh_tmpval_loadable_3186(Uh_tmpreg_loadable_3185);
    return (Uh_tmpval_loadable_3186);

  } // Uf_7isEmpty



  //! EventWindow.ulam:55:   Bool isEmpty(C2D coord) { return isLegal(coord) && isLive(getSiteNumber(coord)); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10109211EventWindow10<EC, POS>::Uf_7isEmpty(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D10<EC> Uv_5coord)
  {

    //! EventWindow.ulam:55:   Bool isEmpty(C2D coord) { return isLegal(coord) && isLive(getSiteNumber(coord)); }
    u32 Uh_tmpreg_loadable_3187 = false;
    const u32 Uh_tmpreg_loadable_3188 = Uv_5coord.read();
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3189(Uh_tmpreg_loadable_3188);
    const Ui_Ut_10111b Uh_tmpval_loadable_3190 = Uf_7isLegal(uc, Uv_4self, Uh_tmpval_loadable_3189);
    const u32 Uh_tmpreg_loadable_3191 = Uh_tmpval_loadable_3190.read();
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3191, 1))
    {
      const u32 Uh_tmpreg_loadable_3192 = Uv_5coord.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3193(Uh_tmpreg_loadable_3192);
      const Ui_Ut_10161u Uh_tmpval_loadable_3194 = Uf_9213getSiteNumber(uc, Uv_4self, Uh_tmpval_loadable_3193);
      const u32 Uh_tmpreg_loadable_3195 = Uh_tmpval_loadable_3194.read();
      const Ui_Ut_10161u Uh_tmpval_loadable_3196(Uh_tmpreg_loadable_3195);
      const Ui_Ut_10111b Uh_tmpval_loadable_3197 = Uf_6isLive(uc, Uv_4self, Uh_tmpval_loadable_3196);
      const u32 Uh_tmpreg_loadable_3198 = Uh_tmpval_loadable_3197.read();
      Uh_tmpreg_loadable_3187 = Uh_tmpreg_loadable_3198;
    }
    const Ui_Ut_10111b Uh_tmpval_loadable_3199(Uh_tmpreg_loadable_3187);
    return (Uh_tmpval_loadable_3199);

  } // Uf_7isEmpty



  //! EventWindow.ulam:53:   Bool isEmpty(SiteNum index) { return isLive(index) && au.isEmpty(aref(index)); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10109211EventWindow10<EC, POS>::Uf_7isEmpty(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10161u Uv_5index)
  {

    //! EventWindow.ulam:53:   Bool isEmpty(SiteNum index) { return isLive(index) && au.isEmpty(aref(index)); }
    u32 Uh_tmpreg_loadable_3200 = false;
    const u32 Uh_tmpreg_loadable_3201 = Uv_5index.read();
    const Ui_Ut_10161u Uh_tmpval_loadable_3202(Uh_tmpreg_loadable_3201);
    const Ui_Ut_10111b Uh_tmpval_loadable_3203 = Uf_6isLive(uc, Uv_4self, Uh_tmpval_loadable_3202);
    const u32 Uh_tmpreg_loadable_3204 = Uh_tmpval_loadable_3203.read();
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3204, 1))
    {
      const u32 Uh_tmpreg_loadable_3206 = Uv_5index.read();
      const Ui_Ut_10161u Uh_tmpval_loadable_3207(Uh_tmpreg_loadable_3206);
      const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_3208 = Uf_4aref(uc, Uv_4self, Uh_tmpval_loadable_3207);
      const T Uh_tmpval_unpacked_3209 = Uh_tmpval_unpacked_3208.read();
      const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_3210(Uh_tmpval_unpacked_3209);
      const Ui_Ut_10111b Uh_tmpval_loadable_3211 = Ut_Um_2au::Uf_7isEmpty(uc, Uv_4self, Uh_tmpval_unpacked_3210);
      const u32 Uh_tmpreg_loadable_3212 = Uh_tmpval_loadable_3211.read();
      Uh_tmpreg_loadable_3200 = Uh_tmpreg_loadable_3212;
    }
    const Ui_Ut_10111b Uh_tmpval_loadable_3213(Uh_tmpreg_loadable_3200);
    return (Uh_tmpval_loadable_3213);

  } // Uf_7isEmpty



  //! EventWindow.ulam:42:   Void aset(Int index, Atom val) { aset((SiteNum) index, val); }
  template<class EC, u32 POS>
  void Uq_10109211EventWindow10<EC, POS>::Uf_4aset(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_5index, Ui_Ut_102961a<EC> Uv_3val)
  {

    //! EventWindow.ulam:42:   Void aset(Int index, Atom val) { aset((SiteNum) index, val); }
    const u32 Uh_tmpreg_loadable_3214 = Uv_5index.read();
    const s32 Uh_tmpreg_loadable_3215 = _SignExtend32(Uh_tmpreg_loadable_3214, 32);
    const u32 Uh_tmpreg_loadable_3216 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3215, 32, 6);
    const Ui_Ut_10161u Uh_tmpval_loadable_3217(Uh_tmpreg_loadable_3216);
    const T Uh_tmpval_unpacked_3218 = Uv_3val.read();
    const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_3219(Uh_tmpval_unpacked_3218);
    Uf_4aset(uc, Uv_4self, Uh_tmpval_loadable_3217, Uh_tmpval_unpacked_3219);

  } // Uf_4aset



  //! EventWindow.ulam:43:   Void aset(C2D coord, Atom val) { aset(getSiteNumber(coord), val); }
  template<class EC, u32 POS>
  void Uq_10109211EventWindow10<EC, POS>::Uf_4aset(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D10<EC> Uv_5coord, Ui_Ut_102961a<EC> Uv_3val)
  {

    //! EventWindow.ulam:43:   Void aset(C2D coord, Atom val) { aset(getSiteNumber(coord), val); }
    const u32 Uh_tmpreg_loadable_3220 = Uv_5coord.read();
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3221(Uh_tmpreg_loadable_3220);
    const Ui_Ut_10161u Uh_tmpval_loadable_3222 = Uf_9213getSiteNumber(uc, Uv_4self, Uh_tmpval_loadable_3221);
    const u32 Uh_tmpreg_loadable_3223 = Uh_tmpval_loadable_3222.read();
    const Ui_Ut_10161u Uh_tmpval_loadable_3224(Uh_tmpreg_loadable_3223);
    const T Uh_tmpval_unpacked_3225 = Uv_3val.read();
    const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_3226(Uh_tmpval_unpacked_3225);
    Uf_4aset(uc, Uv_4self, Uh_tmpval_loadable_3224, Uh_tmpval_unpacked_3226);

  } // Uf_4aset



  //! EventWindow.ulam:46:   Bool isLegal(Int index) { return index >= 0 && isLegal((SiteNum) index); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10109211EventWindow10<EC, POS>::Uf_7isLegal(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_5index)
  {

    //! EventWindow.ulam:46:   Bool isLegal(Int index) { return index >= 0 && isLegal((SiteNum) index); }
    u32 Uh_tmpreg_loadable_3227 = false;
    const s32 Uh_tmpreg_loadable_3228 = 0;
    const u32 Uh_tmpreg_loadable_3229 = Uv_5index.read();
    const s32 Uh_tmpreg_loadable_3230 = _SignExtend32(Uh_tmpreg_loadable_3229, 32);
    const u32 Uh_tmpreg_loadable_3231 = _BinOpCompareGreaterEqualInt32(Uh_tmpreg_loadable_3230, Uh_tmpreg_loadable_3228, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3231, 1))
    {
      const u32 Uh_tmpreg_loadable_3232 = Uv_5index.read();
      const s32 Uh_tmpreg_loadable_3233 = _SignExtend32(Uh_tmpreg_loadable_3232, 32);
      const u32 Uh_tmpreg_loadable_3234 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3233, 32, 6);
      const Ui_Ut_10161u Uh_tmpval_loadable_3235(Uh_tmpreg_loadable_3234);
      const Ui_Ut_10111b Uh_tmpval_loadable_3236 = Uf_7isLegal(uc, Uv_4self, Uh_tmpval_loadable_3235);
      const u32 Uh_tmpreg_loadable_3237 = Uh_tmpval_loadable_3236.read();
      Uh_tmpreg_loadable_3227 = Uh_tmpreg_loadable_3237;
    }
    const Ui_Ut_10111b Uh_tmpval_loadable_3238(Uh_tmpreg_loadable_3227);
    return (Uh_tmpval_loadable_3238);

  } // Uf_7isLegal



  //! EventWindow.ulam:47:   Bool isLegal(C2D coord) { return isLegal(getSiteNumber(coord)); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10109211EventWindow10<EC, POS>::Uf_7isLegal(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D10<EC> Uv_5coord)
  {

    //! EventWindow.ulam:47:   Bool isLegal(C2D coord) { return isLegal(getSiteNumber(coord)); }
    const u32 Uh_tmpreg_loadable_3239 = Uv_5coord.read();
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3240(Uh_tmpreg_loadable_3239);
    const Ui_Ut_10161u Uh_tmpval_loadable_3241 = Uf_9213getSiteNumber(uc, Uv_4self, Uh_tmpval_loadable_3240);
    const u32 Uh_tmpreg_loadable_3242 = Uh_tmpval_loadable_3241.read();
    const Ui_Ut_10161u Uh_tmpval_loadable_3243(Uh_tmpreg_loadable_3242);
    const Ui_Ut_10111b Uh_tmpval_loadable_3244 = Uf_7isLegal(uc, Uv_4self, Uh_tmpval_loadable_3243);
    const u32 Uh_tmpreg_loadable_3245 = Uh_tmpval_loadable_3244.read();
    const Ui_Ut_10111b Uh_tmpval_loadable_3246(Uh_tmpreg_loadable_3245);
    return (Uh_tmpval_loadable_3246);

  } // Uf_7isLegal



  //! EventWindow.ulam:45:   Bool isLegal(SiteNum index) { return index < size(); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10109211EventWindow10<EC, POS>::Uf_7isLegal(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10161u Uv_5index)
  {

    //! EventWindow.ulam:45:   Bool isLegal(SiteNum index) { return index < size(); }
    const Ui_Ut_10161u Uh_tmpval_loadable_3247 = Uf_4size(uc, Uv_4self);
    const u32 Uh_tmpreg_loadable_3248 = Uh_tmpval_loadable_3247.read();
    const u32 Uh_tmpreg_loadable_3249 = _Unsigned32ToUnsigned32(Uh_tmpreg_loadable_3248, 6, 32);
    const u32 Uh_tmpreg_loadable_3250 = Uv_5index.read();
    const u32 Uh_tmpreg_loadable_3251 = _Unsigned32ToUnsigned32(Uh_tmpreg_loadable_3250, 6, 32);
    const u32 Uh_tmpreg_loadable_3252 = _BinOpCompareLessThanUnsigned32(Uh_tmpreg_loadable_3251, Uh_tmpreg_loadable_3249, 32);
    const Ui_Ut_10111b Uh_tmpval_loadable_3253(Uh_tmpreg_loadable_3252);
    return (Uh_tmpval_loadable_3253);

  } // Uf_7isLegal



  //! EventWindow.ulam:50:   Bool isLive(Int index) { return isLegal(index) && isLive((SiteNum) index); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10109211EventWindow10<EC, POS>::Uf_6isLive(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_5index)
  {

    //! EventWindow.ulam:50:   Bool isLive(Int index) { return isLegal(index) && isLive((SiteNum) index); }
    u32 Uh_tmpreg_loadable_3254 = false;
    const u32 Uh_tmpreg_loadable_3255 = Uv_5index.read();
    const s32 Uh_tmpreg_loadable_3256 = _SignExtend32(Uh_tmpreg_loadable_3255, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3257(Uh_tmpreg_loadable_3256);
    const Ui_Ut_10111b Uh_tmpval_loadable_3258 = Uf_7isLegal(uc, Uv_4self, Uh_tmpval_loadable_3257);
    const u32 Uh_tmpreg_loadable_3259 = Uh_tmpval_loadable_3258.read();
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3259, 1))
    {
      const u32 Uh_tmpreg_loadable_3260 = Uv_5index.read();
      const s32 Uh_tmpreg_loadable_3261 = _SignExtend32(Uh_tmpreg_loadable_3260, 32);
      const u32 Uh_tmpreg_loadable_3262 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3261, 32, 6);
      const Ui_Ut_10161u Uh_tmpval_loadable_3263(Uh_tmpreg_loadable_3262);
      const Ui_Ut_10111b Uh_tmpval_loadable_3264 = Uf_6isLive(uc, Uv_4self, Uh_tmpval_loadable_3263);
      const u32 Uh_tmpreg_loadable_3265 = Uh_tmpval_loadable_3264.read();
      Uh_tmpreg_loadable_3254 = Uh_tmpreg_loadable_3265;
    }
    const Ui_Ut_10111b Uh_tmpval_loadable_3266(Uh_tmpreg_loadable_3254);
    return (Uh_tmpval_loadable_3266);

  } // Uf_6isLive



  //! EventWindow.ulam:51:   Bool isLive(C2D coord) { return isLegal(coord) && isLive(getSiteNumber(coord)); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10109211EventWindow10<EC, POS>::Uf_6isLive(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D10<EC> Uv_5coord)
  {

    //! EventWindow.ulam:51:   Bool isLive(C2D coord) { return isLegal(coord) && isLive(getSiteNumber(coord)); }
    u32 Uh_tmpreg_loadable_3267 = false;
    const u32 Uh_tmpreg_loadable_3268 = Uv_5coord.read();
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3269(Uh_tmpreg_loadable_3268);
    const Ui_Ut_10111b Uh_tmpval_loadable_3270 = Uf_7isLegal(uc, Uv_4self, Uh_tmpval_loadable_3269);
    const u32 Uh_tmpreg_loadable_3271 = Uh_tmpval_loadable_3270.read();
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3271, 1))
    {
      const u32 Uh_tmpreg_loadable_3272 = Uv_5coord.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3273(Uh_tmpreg_loadable_3272);
      const Ui_Ut_10161u Uh_tmpval_loadable_3274 = Uf_9213getSiteNumber(uc, Uv_4self, Uh_tmpval_loadable_3273);
      const u32 Uh_tmpreg_loadable_3275 = Uh_tmpval_loadable_3274.read();
      const Ui_Ut_10161u Uh_tmpval_loadable_3276(Uh_tmpreg_loadable_3275);
      const Ui_Ut_10111b Uh_tmpval_loadable_3277 = Uf_6isLive(uc, Uv_4self, Uh_tmpval_loadable_3276);
      const u32 Uh_tmpreg_loadable_3278 = Uh_tmpval_loadable_3277.read();
      Uh_tmpreg_loadable_3267 = Uh_tmpreg_loadable_3278;
    }
    const Ui_Ut_10111b Uh_tmpval_loadable_3279(Uh_tmpreg_loadable_3267);
    return (Uh_tmpval_loadable_3279);

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

