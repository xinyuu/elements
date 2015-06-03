/**                                      -*- mode:C++ -*- */

#include "Ue_10133Box10.h"
#include "Uq_10109210DebugUtils10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_1010919AtomUtils10.h"
#include "Ue_10105Empty10.h"

namespace MFM{


  //! C2D.ulam:12:   Void init(Int ax, Int ay) {
  template<class EC, u32 POS>
  void Uq_102323C2D10<EC, POS>::Uf_4init(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_2ax, Ui_Ut_102321i Uv_2ay)
  {

    //! C2D.ulam:13:     x = ax;
    const u32 Uh_tmpreg_loadable_3169 = Uv_2ax.read();
    const s32 Uh_tmpreg_loadable_3170 = _SignExtend32(Uh_tmpreg_loadable_3169, 32);
    const s32 Uh_tmpreg_loadable_3171 = _Int32ToInt32(Uh_tmpreg_loadable_3170, 32, 16);
    Up_Um_1x::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_3171);

    //! C2D.ulam:14:     y = ay;
    const u32 Uh_tmpreg_loadable_3173 = Uv_2ay.read();
    const s32 Uh_tmpreg_loadable_3174 = _SignExtend32(Uh_tmpreg_loadable_3173, 32);
    const s32 Uh_tmpreg_loadable_3175 = _Int32ToInt32(Uh_tmpreg_loadable_3174, 32, 16);
    Up_Um_1y::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_3175);

  } // Uf_4init



  //! C2D.ulam:17:   Int getX() { return (Int) x; }
  template<class EC, u32 POS>
  Ui_Ut_102321i Uq_102323C2D10<EC, POS>::Uf_4getX(UlamContext<EC>& uc, T& Uv_4self)
  {

    //! C2D.ulam:17:   Int getX() { return (Int) x; }
    const u32 Uh_tmpreg_loadable_3177 = Up_Um_1x::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_3178 = _SignExtend32(Uh_tmpreg_loadable_3177, 16);
    const s32 Uh_tmpreg_loadable_3179 = _Int32ToInt32(Uh_tmpreg_loadable_3178, 16, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3180(Uh_tmpreg_loadable_3179);
    return (Uh_tmpval_loadable_3180);

  } // Uf_4getX



  //! C2D.ulam:18:   Int getY() { return (Int) y; }
  template<class EC, u32 POS>
  Ui_Ut_102321i Uq_102323C2D10<EC, POS>::Uf_4getY(UlamContext<EC>& uc, T& Uv_4self)
  {

    //! C2D.ulam:18:   Int getY() { return (Int) y; }
    const u32 Uh_tmpreg_loadable_3181 = Up_Um_1y::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_3182 = _SignExtend32(Uh_tmpreg_loadable_3181, 16);
    const s32 Uh_tmpreg_loadable_3183 = _Int32ToInt32(Uh_tmpreg_loadable_3182, 16, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3184(Uh_tmpreg_loadable_3183);
    return (Uh_tmpval_loadable_3184);

  } // Uf_4getY



  //! C2D.ulam:20:   Void setX(Int ax) { x = (Coord) ax; }
  template<class EC, u32 POS>
  void Uq_102323C2D10<EC, POS>::Uf_4setX(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_2ax)
  {

    //! C2D.ulam:20:   Void setX(Int ax) { x = (Coord) ax; }
    const u32 Uh_tmpreg_loadable_3185 = Uv_2ax.read();
    const s32 Uh_tmpreg_loadable_3186 = _SignExtend32(Uh_tmpreg_loadable_3185, 32);
    const s32 Uh_tmpreg_loadable_3187 = _Int32ToInt32(Uh_tmpreg_loadable_3186, 32, 16);
    Up_Um_1x::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_3187);

  } // Uf_4setX



  //! C2D.ulam:21:   Void setY(Int ay) { y = (Coord) ay; }
  template<class EC, u32 POS>
  void Uq_102323C2D10<EC, POS>::Uf_4setY(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_2ay)
  {

    //! C2D.ulam:21:   Void setY(Int ay) { y = (Coord) ay; }
    const u32 Uh_tmpreg_loadable_3189 = Uv_2ay.read();
    const s32 Uh_tmpreg_loadable_3190 = _SignExtend32(Uh_tmpreg_loadable_3189, 32);
    const s32 Uh_tmpreg_loadable_3191 = _Int32ToInt32(Uh_tmpreg_loadable_3190, 32, 16);
    Up_Um_1y::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_3191);

  } // Uf_4setY



  //! C2D.ulam:23:   C2D make(Int x, Int y) {
  template<class EC, u32 POS>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC, POS>::Uf_4make(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_1x, Ui_Ut_102321i Uv_1y)
  {

    //! C2D.ulam:24:     C2D ret;
    Ui_Uq_102323C2D10<EC> Uv_3ret;

    //! C2D.ulam:25:     ret.init(x,y);
    const u32 Uh_tmpreg_loadable_3194 = Uv_1x.read();
    const s32 Uh_tmpreg_loadable_3195 = _SignExtend32(Uh_tmpreg_loadable_3194, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3196(Uh_tmpreg_loadable_3195);
    const u32 Uh_tmpreg_loadable_3197 = Uv_1y.read();
    const s32 Uh_tmpreg_loadable_3198 = _SignExtend32(Uh_tmpreg_loadable_3197, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3199(Uh_tmpreg_loadable_3198);
    Ui_Uq_102323C2D10<EC>::Us::Uf_4init(uc, Uv_3ret.getRef(), Uh_tmpval_loadable_3196, Uh_tmpval_loadable_3199);

    //! C2D.ulam:26:     return ret;
    const u32 Uh_tmpreg_loadable_3200 = Uv_3ret.read();
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3201(Uh_tmpreg_loadable_3200);
    return (Uh_tmpval_loadable_3201);

  } // Uf_4make



  //! C2D.ulam:29:   Bool equals(C2D other) {
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_102323C2D10<EC, POS>::Uf_6equals(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D10<EC> Uv_5other)
  {

    //! C2D.ulam:30:     return x == other.x && y == other.y;
    u32 Uh_tmpreg_loadable_3202 = false;
    const u32 Uh_tmpreg_loadable_3204 = Ui_Uq_102323C2D10<EC>::Us::Up_Um_1x::Read(Uv_5other.getBits());
    const s32 Uh_tmpreg_loadable_3205 = _SignExtend32(Uh_tmpreg_loadable_3204, 16);
    const s32 Uh_tmpreg_loadable_3206 = _Int32ToInt32(Uh_tmpreg_loadable_3205, 16, 32);
    const u32 Uh_tmpreg_loadable_3207 = Up_Um_1x::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_3208 = _SignExtend32(Uh_tmpreg_loadable_3207, 16);
    const s32 Uh_tmpreg_loadable_3209 = _Int32ToInt32(Uh_tmpreg_loadable_3208, 16, 32);
    const u32 Uh_tmpreg_loadable_3210 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3209, Uh_tmpreg_loadable_3206, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3210, 1))
    {
      const u32 Uh_tmpreg_loadable_3212 = Ui_Uq_102323C2D10<EC>::Us::Up_Um_1y::Read(Uv_5other.getBits());
      const s32 Uh_tmpreg_loadable_3213 = _SignExtend32(Uh_tmpreg_loadable_3212, 16);
      const s32 Uh_tmpreg_loadable_3214 = _Int32ToInt32(Uh_tmpreg_loadable_3213, 16, 32);
      const u32 Uh_tmpreg_loadable_3215 = Up_Um_1y::Read(Uv_4self.GetBits());
      const s32 Uh_tmpreg_loadable_3216 = _SignExtend32(Uh_tmpreg_loadable_3215, 16);
      const s32 Uh_tmpreg_loadable_3217 = _Int32ToInt32(Uh_tmpreg_loadable_3216, 16, 32);
      const u32 Uh_tmpreg_loadable_3218 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3217, Uh_tmpreg_loadable_3214, 32);
      Uh_tmpreg_loadable_3202 = Uh_tmpreg_loadable_3218;
    }
    const Ui_Ut_10111b Uh_tmpval_loadable_3219(Uh_tmpreg_loadable_3202);
    return (Uh_tmpval_loadable_3219);

  } // Uf_6equals



  //! C2D.ulam:33:   C2D add(C2D other) {
  template<class EC, u32 POS>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC, POS>::Uf_3add(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D10<EC> Uv_5other)
  {

    //! C2D.ulam:34:     return make(x + other.x, y + other.y);
    const u32 Uh_tmpreg_loadable_3221 = Ui_Uq_102323C2D10<EC>::Us::Up_Um_1x::Read(Uv_5other.getBits());
    const s32 Uh_tmpreg_loadable_3222 = _SignExtend32(Uh_tmpreg_loadable_3221, 16);
    const s32 Uh_tmpreg_loadable_3223 = _Int32ToInt32(Uh_tmpreg_loadable_3222, 16, 32);
    const u32 Uh_tmpreg_loadable_3224 = Up_Um_1x::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_3225 = _SignExtend32(Uh_tmpreg_loadable_3224, 16);
    const s32 Uh_tmpreg_loadable_3226 = _Int32ToInt32(Uh_tmpreg_loadable_3225, 16, 32);
    const s32 Uh_tmpreg_loadable_3227 = _BinOpAddInt32(Uh_tmpreg_loadable_3226, Uh_tmpreg_loadable_3223, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3228(Uh_tmpreg_loadable_3227);
    const u32 Uh_tmpreg_loadable_3230 = Ui_Uq_102323C2D10<EC>::Us::Up_Um_1y::Read(Uv_5other.getBits());
    const s32 Uh_tmpreg_loadable_3231 = _SignExtend32(Uh_tmpreg_loadable_3230, 16);
    const s32 Uh_tmpreg_loadable_3232 = _Int32ToInt32(Uh_tmpreg_loadable_3231, 16, 32);
    const u32 Uh_tmpreg_loadable_3233 = Up_Um_1y::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_3234 = _SignExtend32(Uh_tmpreg_loadable_3233, 16);
    const s32 Uh_tmpreg_loadable_3235 = _Int32ToInt32(Uh_tmpreg_loadable_3234, 16, 32);
    const s32 Uh_tmpreg_loadable_3236 = _BinOpAddInt32(Uh_tmpreg_loadable_3235, Uh_tmpreg_loadable_3232, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3237(Uh_tmpreg_loadable_3236);
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3238 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3228, Uh_tmpval_loadable_3237);
    const u32 Uh_tmpreg_loadable_3239 = Uh_tmpval_loadable_3238.read();
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3240(Uh_tmpreg_loadable_3239);
    return (Uh_tmpval_loadable_3240);

  } // Uf_3add



  //! C2D.ulam:37:   C2D subtract(C2D other) {
  template<class EC, u32 POS>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC, POS>::Uf_8subtract(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D10<EC> Uv_5other)
  {

    //! C2D.ulam:38:     return make(x - other.x, y - other.y);
    const u32 Uh_tmpreg_loadable_3242 = Ui_Uq_102323C2D10<EC>::Us::Up_Um_1x::Read(Uv_5other.getBits());
    const s32 Uh_tmpreg_loadable_3243 = _SignExtend32(Uh_tmpreg_loadable_3242, 16);
    const s32 Uh_tmpreg_loadable_3244 = _Int32ToInt32(Uh_tmpreg_loadable_3243, 16, 32);
    const u32 Uh_tmpreg_loadable_3245 = Up_Um_1x::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_3246 = _SignExtend32(Uh_tmpreg_loadable_3245, 16);
    const s32 Uh_tmpreg_loadable_3247 = _Int32ToInt32(Uh_tmpreg_loadable_3246, 16, 32);
    const s32 Uh_tmpreg_loadable_3248 = _BinOpSubtractInt32(Uh_tmpreg_loadable_3247, Uh_tmpreg_loadable_3244, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3249(Uh_tmpreg_loadable_3248);
    const u32 Uh_tmpreg_loadable_3251 = Ui_Uq_102323C2D10<EC>::Us::Up_Um_1y::Read(Uv_5other.getBits());
    const s32 Uh_tmpreg_loadable_3252 = _SignExtend32(Uh_tmpreg_loadable_3251, 16);
    const s32 Uh_tmpreg_loadable_3253 = _Int32ToInt32(Uh_tmpreg_loadable_3252, 16, 32);
    const u32 Uh_tmpreg_loadable_3254 = Up_Um_1y::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_3255 = _SignExtend32(Uh_tmpreg_loadable_3254, 16);
    const s32 Uh_tmpreg_loadable_3256 = _Int32ToInt32(Uh_tmpreg_loadable_3255, 16, 32);
    const s32 Uh_tmpreg_loadable_3257 = _BinOpSubtractInt32(Uh_tmpreg_loadable_3256, Uh_tmpreg_loadable_3253, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3258(Uh_tmpreg_loadable_3257);
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3259 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3249, Uh_tmpval_loadable_3258);
    const u32 Uh_tmpreg_loadable_3260 = Uh_tmpval_loadable_3259.read();
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3261(Uh_tmpreg_loadable_3260);
    return (Uh_tmpval_loadable_3261);

  } // Uf_8subtract



  //! C2D.ulam:41:   Int dot(C2D other) {
  template<class EC, u32 POS>
  Ui_Ut_102321i Uq_102323C2D10<EC, POS>::Uf_3dot(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D10<EC> Uv_5other)
  {

    //! C2D.ulam:42:     return x * other.x + y * other.y;
    const u32 Uh_tmpreg_loadable_3263 = Ui_Uq_102323C2D10<EC>::Us::Up_Um_1y::Read(Uv_5other.getBits());
    const s32 Uh_tmpreg_loadable_3264 = _SignExtend32(Uh_tmpreg_loadable_3263, 16);
    const s32 Uh_tmpreg_loadable_3265 = _Int32ToInt32(Uh_tmpreg_loadable_3264, 16, 32);
    const u32 Uh_tmpreg_loadable_3266 = Up_Um_1y::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_3267 = _SignExtend32(Uh_tmpreg_loadable_3266, 16);
    const s32 Uh_tmpreg_loadable_3268 = _Int32ToInt32(Uh_tmpreg_loadable_3267, 16, 32);
    const s32 Uh_tmpreg_loadable_3269 = _BinOpMultiplyInt32(Uh_tmpreg_loadable_3268, Uh_tmpreg_loadable_3265, 32);
    const u32 Uh_tmpreg_loadable_3271 = Ui_Uq_102323C2D10<EC>::Us::Up_Um_1x::Read(Uv_5other.getBits());
    const s32 Uh_tmpreg_loadable_3272 = _SignExtend32(Uh_tmpreg_loadable_3271, 16);
    const s32 Uh_tmpreg_loadable_3273 = _Int32ToInt32(Uh_tmpreg_loadable_3272, 16, 32);
    const u32 Uh_tmpreg_loadable_3274 = Up_Um_1x::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_3275 = _SignExtend32(Uh_tmpreg_loadable_3274, 16);
    const s32 Uh_tmpreg_loadable_3276 = _Int32ToInt32(Uh_tmpreg_loadable_3275, 16, 32);
    const s32 Uh_tmpreg_loadable_3277 = _BinOpMultiplyInt32(Uh_tmpreg_loadable_3276, Uh_tmpreg_loadable_3273, 32);
    const s32 Uh_tmpreg_loadable_3278 = _BinOpAddInt32(Uh_tmpreg_loadable_3277, Uh_tmpreg_loadable_3269, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3279(Uh_tmpreg_loadable_3278);
    return (Uh_tmpval_loadable_3279);

  } // Uf_3dot



  //! C2D.ulam:45:   Int toInt() {
  template<class EC, u32 POS>
  Ui_Ut_102321i Uq_102323C2D10<EC, POS>::Uf_5toInt(UlamContext<EC>& uc, T& Uv_4self)
  {

    //! C2D.ulam:47:     return (Int) ew.getSiteNumber(make((Int) x,(Int) y));
    const u32 Uh_tmpreg_loadable_3281 = Up_Um_1x::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_3282 = _SignExtend32(Uh_tmpreg_loadable_3281, 16);
    const s32 Uh_tmpreg_loadable_3283 = _Int32ToInt32(Uh_tmpreg_loadable_3282, 16, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3284(Uh_tmpreg_loadable_3283);
    const u32 Uh_tmpreg_loadable_3285 = Up_Um_1y::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_3286 = _SignExtend32(Uh_tmpreg_loadable_3285, 16);
    const s32 Uh_tmpreg_loadable_3287 = _Int32ToInt32(Uh_tmpreg_loadable_3286, 16, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3288(Uh_tmpreg_loadable_3287);
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3289 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3284, Uh_tmpval_loadable_3288);
    const u32 Uh_tmpreg_loadable_3290 = Uh_tmpval_loadable_3289.read();
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3291(Uh_tmpreg_loadable_3290);
    const Ui_Ut_10161u Uh_tmpval_loadable_3292 = Ut_Um_2ew::Uf_9213getSiteNumber(uc, Uv_4self, Uh_tmpval_loadable_3291);
    const u32 Uh_tmpreg_loadable_3293 = Uh_tmpval_loadable_3292.read();
    const s32 Uh_tmpreg_loadable_3294 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3293, 6, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3295(Uh_tmpreg_loadable_3294);
    return (Uh_tmpval_loadable_3295);

  } // Uf_5toInt



  //! C2D.ulam:53:   C2D neighbor(Dir d) {
  template<class EC, u32 POS>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC, POS>::Uf_8neighbor(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10131u Uv_1d)
  {

    //! C2D.ulam:54:     if (d==0) return make( 0, 1);
    const s32 Uh_tmpreg_loadable_3296 = 0;
    const u32 Uh_tmpreg_loadable_3297 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_3298 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3297, 3, 32);
    const u32 Uh_tmpreg_loadable_3299 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3298, Uh_tmpreg_loadable_3296, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3299, 1))
    {

      //! C2D.ulam:54:     if (d==0) return make( 0, 1);
      const s32 Uh_tmpreg_loadable_3300 = 0;
      const Ui_Ut_102321i Uh_tmpval_loadable_3301(Uh_tmpreg_loadable_3300);
      const s32 Uh_tmpreg_loadable_3302 = 1;
      const Ui_Ut_102321i Uh_tmpval_loadable_3303(Uh_tmpreg_loadable_3302);
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3304 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3301, Uh_tmpval_loadable_3303);
      const u32 Uh_tmpreg_loadable_3305 = Uh_tmpval_loadable_3304.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3306(Uh_tmpreg_loadable_3305);
      return (Uh_tmpval_loadable_3306);
    } // end if

    //! C2D.ulam:55:     if (d==1) return make( 1, 1);
    const s32 Uh_tmpreg_loadable_3307 = 1;
    const u32 Uh_tmpreg_loadable_3308 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_3309 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3308, 3, 32);
    const u32 Uh_tmpreg_loadable_3310 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3309, Uh_tmpreg_loadable_3307, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3310, 1))
    {

      //! C2D.ulam:55:     if (d==1) return make( 1, 1);
      const s32 Uh_tmpreg_loadable_3311 = 1;
      const Ui_Ut_102321i Uh_tmpval_loadable_3312(Uh_tmpreg_loadable_3311);
      const s32 Uh_tmpreg_loadable_3313 = 1;
      const Ui_Ut_102321i Uh_tmpval_loadable_3314(Uh_tmpreg_loadable_3313);
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3315 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3312, Uh_tmpval_loadable_3314);
      const u32 Uh_tmpreg_loadable_3316 = Uh_tmpval_loadable_3315.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3317(Uh_tmpreg_loadable_3316);
      return (Uh_tmpval_loadable_3317);
    } // end if

    //! C2D.ulam:56:     if (d==2) return make( 1, 0);
    const s32 Uh_tmpreg_loadable_3318 = 2;
    const u32 Uh_tmpreg_loadable_3319 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_3320 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3319, 3, 32);
    const u32 Uh_tmpreg_loadable_3321 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3320, Uh_tmpreg_loadable_3318, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3321, 1))
    {

      //! C2D.ulam:56:     if (d==2) return make( 1, 0);
      const s32 Uh_tmpreg_loadable_3322 = 1;
      const Ui_Ut_102321i Uh_tmpval_loadable_3323(Uh_tmpreg_loadable_3322);
      const s32 Uh_tmpreg_loadable_3324 = 0;
      const Ui_Ut_102321i Uh_tmpval_loadable_3325(Uh_tmpreg_loadable_3324);
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3326 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3323, Uh_tmpval_loadable_3325);
      const u32 Uh_tmpreg_loadable_3327 = Uh_tmpval_loadable_3326.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3328(Uh_tmpreg_loadable_3327);
      return (Uh_tmpval_loadable_3328);
    } // end if

    //! C2D.ulam:57:     if (d==3) return make( 1,-1);
    const s32 Uh_tmpreg_loadable_3329 = 3;
    const u32 Uh_tmpreg_loadable_3330 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_3331 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3330, 3, 32);
    const u32 Uh_tmpreg_loadable_3332 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3331, Uh_tmpreg_loadable_3329, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3332, 1))
    {

      //! C2D.ulam:57:     if (d==3) return make( 1,-1);
      const s32 Uh_tmpreg_loadable_3333 = 1;
      const Ui_Ut_102321i Uh_tmpval_loadable_3334(Uh_tmpreg_loadable_3333);
      const s32 Uh_tmpreg_loadable_3335 = -1;
      const Ui_Ut_102321i Uh_tmpval_loadable_3336(Uh_tmpreg_loadable_3335);
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3337 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3334, Uh_tmpval_loadable_3336);
      const u32 Uh_tmpreg_loadable_3338 = Uh_tmpval_loadable_3337.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3339(Uh_tmpreg_loadable_3338);
      return (Uh_tmpval_loadable_3339);
    } // end if

    //! C2D.ulam:58:     if (d==4) return make( 0,-1);
    const s32 Uh_tmpreg_loadable_3340 = 4;
    const u32 Uh_tmpreg_loadable_3341 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_3342 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3341, 3, 32);
    const u32 Uh_tmpreg_loadable_3343 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3342, Uh_tmpreg_loadable_3340, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3343, 1))
    {

      //! C2D.ulam:58:     if (d==4) return make( 0,-1);
      const s32 Uh_tmpreg_loadable_3344 = 0;
      const Ui_Ut_102321i Uh_tmpval_loadable_3345(Uh_tmpreg_loadable_3344);
      const s32 Uh_tmpreg_loadable_3346 = -1;
      const Ui_Ut_102321i Uh_tmpval_loadable_3347(Uh_tmpreg_loadable_3346);
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3348 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3345, Uh_tmpval_loadable_3347);
      const u32 Uh_tmpreg_loadable_3349 = Uh_tmpval_loadable_3348.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3350(Uh_tmpreg_loadable_3349);
      return (Uh_tmpval_loadable_3350);
    } // end if

    //! C2D.ulam:59:     if (d==5) return make(-1,-1);
    const s32 Uh_tmpreg_loadable_3351 = 5;
    const u32 Uh_tmpreg_loadable_3352 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_3353 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3352, 3, 32);
    const u32 Uh_tmpreg_loadable_3354 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3353, Uh_tmpreg_loadable_3351, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3354, 1))
    {

      //! C2D.ulam:59:     if (d==5) return make(-1,-1);
      const s32 Uh_tmpreg_loadable_3355 = -1;
      const Ui_Ut_102321i Uh_tmpval_loadable_3356(Uh_tmpreg_loadable_3355);
      const s32 Uh_tmpreg_loadable_3357 = -1;
      const Ui_Ut_102321i Uh_tmpval_loadable_3358(Uh_tmpreg_loadable_3357);
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3359 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3356, Uh_tmpval_loadable_3358);
      const u32 Uh_tmpreg_loadable_3360 = Uh_tmpval_loadable_3359.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3361(Uh_tmpreg_loadable_3360);
      return (Uh_tmpval_loadable_3361);
    } // end if

    //! C2D.ulam:60:     if (d==6) return make(-1, 0);
    const s32 Uh_tmpreg_loadable_3362 = 6;
    const u32 Uh_tmpreg_loadable_3363 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_3364 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3363, 3, 32);
    const u32 Uh_tmpreg_loadable_3365 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3364, Uh_tmpreg_loadable_3362, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3365, 1))
    {

      //! C2D.ulam:60:     if (d==6) return make(-1, 0);
      const s32 Uh_tmpreg_loadable_3366 = -1;
      const Ui_Ut_102321i Uh_tmpval_loadable_3367(Uh_tmpreg_loadable_3366);
      const s32 Uh_tmpreg_loadable_3368 = 0;
      const Ui_Ut_102321i Uh_tmpval_loadable_3369(Uh_tmpreg_loadable_3368);
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3370 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3367, Uh_tmpval_loadable_3369);
      const u32 Uh_tmpreg_loadable_3371 = Uh_tmpval_loadable_3370.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3372(Uh_tmpreg_loadable_3371);
      return (Uh_tmpval_loadable_3372);
    } // end if

    //! C2D.ulam:61:     /* d==7*/ return make(-1, 1);
    const s32 Uh_tmpreg_loadable_3373 = -1;
    const Ui_Ut_102321i Uh_tmpval_loadable_3374(Uh_tmpreg_loadable_3373);
    const s32 Uh_tmpreg_loadable_3375 = 1;
    const Ui_Ut_102321i Uh_tmpval_loadable_3376(Uh_tmpreg_loadable_3375);
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3377 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3374, Uh_tmpval_loadable_3376);
    const u32 Uh_tmpreg_loadable_3378 = Uh_tmpval_loadable_3377.read();
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3379(Uh_tmpreg_loadable_3378);
    return (Uh_tmpval_loadable_3379);

  } // Uf_8neighbor



  //! C2D.ulam:67:   C2D corner(Dir d) {
  template<class EC, u32 POS>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC, POS>::Uf_6corner(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10131u Uv_1d)
  {

    //! C2D.ulam:68:     if (d==0) return make( 0, 4);
    const s32 Uh_tmpreg_loadable_3380 = 0;
    const u32 Uh_tmpreg_loadable_3381 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_3382 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3381, 3, 32);
    const u32 Uh_tmpreg_loadable_3383 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3382, Uh_tmpreg_loadable_3380, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3383, 1))
    {

      //! C2D.ulam:68:     if (d==0) return make( 0, 4);
      const s32 Uh_tmpreg_loadable_3384 = 0;
      const Ui_Ut_102321i Uh_tmpval_loadable_3385(Uh_tmpreg_loadable_3384);
      const s32 Uh_tmpreg_loadable_3386 = 4;
      const Ui_Ut_102321i Uh_tmpval_loadable_3387(Uh_tmpreg_loadable_3386);
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3388 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3385, Uh_tmpval_loadable_3387);
      const u32 Uh_tmpreg_loadable_3389 = Uh_tmpval_loadable_3388.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3390(Uh_tmpreg_loadable_3389);
      return (Uh_tmpval_loadable_3390);
    } // end if

    //! C2D.ulam:69:     if (d==1) return make( 2, 2);
    const s32 Uh_tmpreg_loadable_3391 = 1;
    const u32 Uh_tmpreg_loadable_3392 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_3393 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3392, 3, 32);
    const u32 Uh_tmpreg_loadable_3394 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3393, Uh_tmpreg_loadable_3391, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3394, 1))
    {

      //! C2D.ulam:69:     if (d==1) return make( 2, 2);
      const s32 Uh_tmpreg_loadable_3395 = 2;
      const Ui_Ut_102321i Uh_tmpval_loadable_3396(Uh_tmpreg_loadable_3395);
      const s32 Uh_tmpreg_loadable_3397 = 2;
      const Ui_Ut_102321i Uh_tmpval_loadable_3398(Uh_tmpreg_loadable_3397);
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3399 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3396, Uh_tmpval_loadable_3398);
      const u32 Uh_tmpreg_loadable_3400 = Uh_tmpval_loadable_3399.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3401(Uh_tmpreg_loadable_3400);
      return (Uh_tmpval_loadable_3401);
    } // end if

    //! C2D.ulam:70:     if (d==2) return make( 4, 0);
    const s32 Uh_tmpreg_loadable_3402 = 2;
    const u32 Uh_tmpreg_loadable_3403 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_3404 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3403, 3, 32);
    const u32 Uh_tmpreg_loadable_3405 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3404, Uh_tmpreg_loadable_3402, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3405, 1))
    {

      //! C2D.ulam:70:     if (d==2) return make( 4, 0);
      const s32 Uh_tmpreg_loadable_3406 = 4;
      const Ui_Ut_102321i Uh_tmpval_loadable_3407(Uh_tmpreg_loadable_3406);
      const s32 Uh_tmpreg_loadable_3408 = 0;
      const Ui_Ut_102321i Uh_tmpval_loadable_3409(Uh_tmpreg_loadable_3408);
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3410 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3407, Uh_tmpval_loadable_3409);
      const u32 Uh_tmpreg_loadable_3411 = Uh_tmpval_loadable_3410.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3412(Uh_tmpreg_loadable_3411);
      return (Uh_tmpval_loadable_3412);
    } // end if

    //! C2D.ulam:71:     if (d==3) return make( 2,-2);
    const s32 Uh_tmpreg_loadable_3413 = 3;
    const u32 Uh_tmpreg_loadable_3414 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_3415 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3414, 3, 32);
    const u32 Uh_tmpreg_loadable_3416 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3415, Uh_tmpreg_loadable_3413, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3416, 1))
    {

      //! C2D.ulam:71:     if (d==3) return make( 2,-2);
      const s32 Uh_tmpreg_loadable_3417 = 2;
      const Ui_Ut_102321i Uh_tmpval_loadable_3418(Uh_tmpreg_loadable_3417);
      const s32 Uh_tmpreg_loadable_3419 = -2;
      const Ui_Ut_102321i Uh_tmpval_loadable_3420(Uh_tmpreg_loadable_3419);
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3421 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3418, Uh_tmpval_loadable_3420);
      const u32 Uh_tmpreg_loadable_3422 = Uh_tmpval_loadable_3421.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3423(Uh_tmpreg_loadable_3422);
      return (Uh_tmpval_loadable_3423);
    } // end if

    //! C2D.ulam:72:     if (d==4) return make( 0,-4);
    const s32 Uh_tmpreg_loadable_3424 = 4;
    const u32 Uh_tmpreg_loadable_3425 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_3426 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3425, 3, 32);
    const u32 Uh_tmpreg_loadable_3427 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3426, Uh_tmpreg_loadable_3424, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3427, 1))
    {

      //! C2D.ulam:72:     if (d==4) return make( 0,-4);
      const s32 Uh_tmpreg_loadable_3428 = 0;
      const Ui_Ut_102321i Uh_tmpval_loadable_3429(Uh_tmpreg_loadable_3428);
      const s32 Uh_tmpreg_loadable_3430 = -4;
      const Ui_Ut_102321i Uh_tmpval_loadable_3431(Uh_tmpreg_loadable_3430);
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3432 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3429, Uh_tmpval_loadable_3431);
      const u32 Uh_tmpreg_loadable_3433 = Uh_tmpval_loadable_3432.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3434(Uh_tmpreg_loadable_3433);
      return (Uh_tmpval_loadable_3434);
    } // end if

    //! C2D.ulam:73:     if (d==5) return make(-2,-2);
    const s32 Uh_tmpreg_loadable_3435 = 5;
    const u32 Uh_tmpreg_loadable_3436 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_3437 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3436, 3, 32);
    const u32 Uh_tmpreg_loadable_3438 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3437, Uh_tmpreg_loadable_3435, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3438, 1))
    {

      //! C2D.ulam:73:     if (d==5) return make(-2,-2);
      const s32 Uh_tmpreg_loadable_3439 = -2;
      const Ui_Ut_102321i Uh_tmpval_loadable_3440(Uh_tmpreg_loadable_3439);
      const s32 Uh_tmpreg_loadable_3441 = -2;
      const Ui_Ut_102321i Uh_tmpval_loadable_3442(Uh_tmpreg_loadable_3441);
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3443 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3440, Uh_tmpval_loadable_3442);
      const u32 Uh_tmpreg_loadable_3444 = Uh_tmpval_loadable_3443.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3445(Uh_tmpreg_loadable_3444);
      return (Uh_tmpval_loadable_3445);
    } // end if

    //! C2D.ulam:74:     if (d==6) return make(-4, 0);
    const s32 Uh_tmpreg_loadable_3446 = 6;
    const u32 Uh_tmpreg_loadable_3447 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_3448 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3447, 3, 32);
    const u32 Uh_tmpreg_loadable_3449 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3448, Uh_tmpreg_loadable_3446, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3449, 1))
    {

      //! C2D.ulam:74:     if (d==6) return make(-4, 0);
      const s32 Uh_tmpreg_loadable_3450 = -4;
      const Ui_Ut_102321i Uh_tmpval_loadable_3451(Uh_tmpreg_loadable_3450);
      const s32 Uh_tmpreg_loadable_3452 = 0;
      const Ui_Ut_102321i Uh_tmpval_loadable_3453(Uh_tmpreg_loadable_3452);
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3454 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3451, Uh_tmpval_loadable_3453);
      const u32 Uh_tmpreg_loadable_3455 = Uh_tmpval_loadable_3454.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3456(Uh_tmpreg_loadable_3455);
      return (Uh_tmpval_loadable_3456);
    } // end if

    //! C2D.ulam:75:     /* d==7*/ return make(-2, 2);
    const s32 Uh_tmpreg_loadable_3457 = -2;
    const Ui_Ut_102321i Uh_tmpval_loadable_3458(Uh_tmpreg_loadable_3457);
    const s32 Uh_tmpreg_loadable_3459 = 2;
    const Ui_Ut_102321i Uh_tmpval_loadable_3460(Uh_tmpreg_loadable_3459);
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3461 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3458, Uh_tmpval_loadable_3460);
    const u32 Uh_tmpreg_loadable_3462 = Uh_tmpval_loadable_3461.read();
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3463(Uh_tmpreg_loadable_3462);
    return (Uh_tmpval_loadable_3463);

  } // Uf_6corner



  //! C2D.ulam:78:   Unsigned length() {
  template<class EC, u32 POS>
  Ui_Ut_102321u Uq_102323C2D10<EC, POS>::Uf_6length(UlamContext<EC>& uc, T& Uv_4self)
  {

    //! C2D.ulam:79:     C2D origin;
    Ui_Uq_102323C2D10<EC> Uv_6origin;

    //! C2D.ulam:80:     return manhattanDistance(origin);
    const u32 Uh_tmpreg_loadable_3464 = Uv_6origin.read();
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_3465(Uh_tmpreg_loadable_3464);
    const Ui_Ut_102321u Uh_tmpval_loadable_3466 = Uf_9217manhattanDistance(uc, Uv_4self, Uh_tmpval_loadable_3465);
    const u32 Uh_tmpreg_loadable_3467 = Uh_tmpval_loadable_3466.read();
    const Ui_Ut_102321u Uh_tmpval_loadable_3468(Uh_tmpreg_loadable_3467);
    return (Uh_tmpval_loadable_3468);

  } // Uf_6length



  //! C2D.ulam:83:   Unsigned manhattanDistance(C2D other) {
  template<class EC, u32 POS>
  Ui_Ut_102321u Uq_102323C2D10<EC, POS>::Uf_9217manhattanDistance(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D10<EC> Uv_5other)
  {

    //! C2D.ulam:84:     Int dx = x - other.x, dy = y - other.y;

    //! C2D.ulam:84:     Int dx = x - other.x, dy = y - other.y;

    //! C2D.ulam:84:     Int dx = x - other.x, dy = y - other.y;

    //! C2D.ulam:84:     Int dx = x - other.x, dy = y - other.y;
    Ui_Ut_102321i Uv_2dx;

    //! C2D.ulam:84:     Int dx = x - other.x, dy = y - other.y;
    const u32 Uh_tmpreg_loadable_3470 = Ui_Uq_102323C2D10<EC>::Us::Up_Um_1x::Read(Uv_5other.getBits());
    const s32 Uh_tmpreg_loadable_3471 = _SignExtend32(Uh_tmpreg_loadable_3470, 16);
    const s32 Uh_tmpreg_loadable_3472 = _Int32ToInt32(Uh_tmpreg_loadable_3471, 16, 32);
    const u32 Uh_tmpreg_loadable_3473 = Up_Um_1x::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_3474 = _SignExtend32(Uh_tmpreg_loadable_3473, 16);
    const s32 Uh_tmpreg_loadable_3475 = _Int32ToInt32(Uh_tmpreg_loadable_3474, 16, 32);
    const s32 Uh_tmpreg_loadable_3476 = _BinOpSubtractInt32(Uh_tmpreg_loadable_3475, Uh_tmpreg_loadable_3472, 32);
    Uv_2dx.write(Uh_tmpreg_loadable_3476);

    //! C2D.ulam:84:     Int dx = x - other.x, dy = y - other.y;
    Ui_Ut_102321i Uv_2dy;

    //! C2D.ulam:84:     Int dx = x - other.x, dy = y - other.y;
    const u32 Uh_tmpreg_loadable_3479 = Ui_Uq_102323C2D10<EC>::Us::Up_Um_1y::Read(Uv_5other.getBits());
    const s32 Uh_tmpreg_loadable_3480 = _SignExtend32(Uh_tmpreg_loadable_3479, 16);
    const s32 Uh_tmpreg_loadable_3481 = _Int32ToInt32(Uh_tmpreg_loadable_3480, 16, 32);
    const u32 Uh_tmpreg_loadable_3482 = Up_Um_1y::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_3483 = _SignExtend32(Uh_tmpreg_loadable_3482, 16);
    const s32 Uh_tmpreg_loadable_3484 = _Int32ToInt32(Uh_tmpreg_loadable_3483, 16, 32);
    const s32 Uh_tmpreg_loadable_3485 = _BinOpSubtractInt32(Uh_tmpreg_loadable_3484, Uh_tmpreg_loadable_3481, 32);
    Uv_2dy.write(Uh_tmpreg_loadable_3485);

    //! C2D.ulam:85:     if (dx < 0) dx = -dx;
    const s32 Uh_tmpreg_loadable_3487 = 0;
    const u32 Uh_tmpreg_loadable_3488 = Uv_2dx.read();
    const s32 Uh_tmpreg_loadable_3489 = _SignExtend32(Uh_tmpreg_loadable_3488, 32);
    const u32 Uh_tmpreg_loadable_3490 = _BinOpCompareLessThanInt32(Uh_tmpreg_loadable_3489, Uh_tmpreg_loadable_3487, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3490, 1))
    {

      //! C2D.ulam:85:     if (dx < 0) dx = -dx;
      const u32 Uh_tmpreg_loadable_3491 = Uv_2dx.read();
      const s32 Uh_tmpreg_loadable_3492 = _SignExtend32(Uh_tmpreg_loadable_3491, 32);
      const s32 Uh_tmpreg_loadable_3493 = _UnaryMinusInt32(Uh_tmpreg_loadable_3492, 32);
      Uv_2dx.write(Uh_tmpreg_loadable_3493);
    } // end if

    //! C2D.ulam:86:     if (dy < 0) dy = -dy;
    const s32 Uh_tmpreg_loadable_3495 = 0;
    const u32 Uh_tmpreg_loadable_3496 = Uv_2dy.read();
    const s32 Uh_tmpreg_loadable_3497 = _SignExtend32(Uh_tmpreg_loadable_3496, 32);
    const u32 Uh_tmpreg_loadable_3498 = _BinOpCompareLessThanInt32(Uh_tmpreg_loadable_3497, Uh_tmpreg_loadable_3495, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3498, 1))
    {

      //! C2D.ulam:86:     if (dy < 0) dy = -dy;
      const u32 Uh_tmpreg_loadable_3499 = Uv_2dy.read();
      const s32 Uh_tmpreg_loadable_3500 = _SignExtend32(Uh_tmpreg_loadable_3499, 32);
      const s32 Uh_tmpreg_loadable_3501 = _UnaryMinusInt32(Uh_tmpreg_loadable_3500, 32);
      Uv_2dy.write(Uh_tmpreg_loadable_3501);
    } // end if

    //! C2D.ulam:87:     return (Unsigned) (dx + dy);
    const u32 Uh_tmpreg_loadable_3503 = Uv_2dy.read();
    const s32 Uh_tmpreg_loadable_3504 = _SignExtend32(Uh_tmpreg_loadable_3503, 32);
    const u32 Uh_tmpreg_loadable_3505 = Uv_2dx.read();
    const s32 Uh_tmpreg_loadable_3506 = _SignExtend32(Uh_tmpreg_loadable_3505, 32);
    const s32 Uh_tmpreg_loadable_3507 = _BinOpAddInt32(Uh_tmpreg_loadable_3506, Uh_tmpreg_loadable_3504, 32);
    const u32 Uh_tmpreg_loadable_3508 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3507, 32, 32);
    const Ui_Ut_102321u Uh_tmpval_loadable_3509(Uh_tmpreg_loadable_3508);
    return (Uh_tmpval_loadable_3509);

  } // Uf_9217manhattanDistance


  template<class EC, u32 POS>
  s32 Uq_102323C2D10<EC, POS>::PositionOfDataMemberType(const char * namearg) const
  {
    if(!strcmp(namearg,"Uq_10109211EventWindow10")) return (0);   //pos offset

    return (-1);   //not found
  }  //has

  template<class EC, u32 POS>
  const UlamClassDataMemberInfo & Uq_102323C2D10<EC, POS>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; }
      case 1: { static UlamClassDataMemberInfo i("Ut_102161i", "x", 0u); return i; }
      case 2: { static UlamClassDataMemberInfo i("Ut_102161i", "y", 16u); return i; }
    } //end switch
    FAIL(ILLEGAL_ARGUMENT);
  } //GetDataMemberInfo

  template<class EC, u32 POS>
  s32 Uq_102323C2D10<EC, POS>::GetDataMemberCount() const
  {
    return 3;
  } //GetDataMemberCount

  template<class EC, u32 POS>
  const char * Uq_102323C2D10<EC, POS>::GetMangledClassName() const
  {
    return "Uq_102323C2D10";
  } //GetMangledClassName

} //MFM

