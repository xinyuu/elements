/**                                      -*- mode:C++ -*- */

#include "Ue_102335Fifth0.h"
#include "Uq_10109211EventWindow0.h"
#include "Ue_10105First0.h"
#include "Ue_10115Five20.h"
#include "Ue_10114Five0.h"
#include "Ue_10104Four0.h"
#include "Ue_10106Second0.h"
#include "Ue_10105Third0.h"
#include "Uq_1010919AtomUtils0.h"
#include "Ue_10105Empty0.h"

namespace MFM{


  //! C2D.ulam:12:   C2D make(Int x, Int y) {
  template<class EC, u32 POS>
  Ui_Uq_102323C2D0<EC> Uq_102323C2D0<EC, POS>::Uf_4make(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_1x, Ui_Ut_102321i Uv_1y)
  {

    //! C2D.ulam:13:     C2D ret;
    Ui_Uq_102323C2D0<EC> Uv_3ret;

    //! C2D.ulam:14:     ret.x = x;
    const u32 Uh_tmpreg_loadable_3268 = Uv_1x.read();
    const s32 Uh_tmpreg_loadable_3269 = _SignExtend32(Uh_tmpreg_loadable_3268, 32);
    const s32 Uh_tmpreg_loadable_3270 = _Int32ToInt32(Uh_tmpreg_loadable_3269, 32, 16);
    Ui_Uq_102323C2D0<EC>::Us::Up_Um_1x::Write(Uv_3ret.getBits(), Uh_tmpreg_loadable_3270);

    //! C2D.ulam:15:     ret.y = y;
    const u32 Uh_tmpreg_loadable_3273 = Uv_1y.read();
    const s32 Uh_tmpreg_loadable_3274 = _SignExtend32(Uh_tmpreg_loadable_3273, 32);
    const s32 Uh_tmpreg_loadable_3275 = _Int32ToInt32(Uh_tmpreg_loadable_3274, 32, 16);
    Ui_Uq_102323C2D0<EC>::Us::Up_Um_1y::Write(Uv_3ret.getBits(), Uh_tmpreg_loadable_3275);

    //! C2D.ulam:16:     return ret;
    const u32 Uh_tmpreg_loadable_3278 = Uv_3ret.read();
    const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3279(Uh_tmpreg_loadable_3278);
    return (Uh_tmpval_loadable_3279);

  } // Uf_4make



  //! C2D.ulam:19:   Bool equals(C2D other) {
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_102323C2D0<EC, POS>::Uf_6equals(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D0<EC> Uv_5other)
  {

    //! C2D.ulam:20:     return x == other.x && y == other.y;
    u32 Uh_tmpreg_loadable_3280 = false;
    const u32 Uh_tmpreg_loadable_3282 = Ui_Uq_102323C2D0<EC>::Us::Up_Um_1x::Read(Uv_5other.getBits());
    const s32 Uh_tmpreg_loadable_3283 = _SignExtend32(Uh_tmpreg_loadable_3282, 16);
    const s32 Uh_tmpreg_loadable_3284 = _Int32ToInt32(Uh_tmpreg_loadable_3283, 16, 32);
    const u32 Uh_tmpreg_loadable_3285 = Up_Um_1x::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_3286 = _SignExtend32(Uh_tmpreg_loadable_3285, 16);
    const s32 Uh_tmpreg_loadable_3287 = _Int32ToInt32(Uh_tmpreg_loadable_3286, 16, 32);
    const u32 Uh_tmpreg_loadable_3288 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3287, Uh_tmpreg_loadable_3284, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3288, 1))
    {
      const u32 Uh_tmpreg_loadable_3290 = Ui_Uq_102323C2D0<EC>::Us::Up_Um_1y::Read(Uv_5other.getBits());
      const s32 Uh_tmpreg_loadable_3291 = _SignExtend32(Uh_tmpreg_loadable_3290, 16);
      const s32 Uh_tmpreg_loadable_3292 = _Int32ToInt32(Uh_tmpreg_loadable_3291, 16, 32);
      const u32 Uh_tmpreg_loadable_3293 = Up_Um_1y::Read(Uv_4self.GetBits());
      const s32 Uh_tmpreg_loadable_3294 = _SignExtend32(Uh_tmpreg_loadable_3293, 16);
      const s32 Uh_tmpreg_loadable_3295 = _Int32ToInt32(Uh_tmpreg_loadable_3294, 16, 32);
      const u32 Uh_tmpreg_loadable_3296 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3295, Uh_tmpreg_loadable_3292, 32);
      Uh_tmpreg_loadable_3280 = Uh_tmpreg_loadable_3296;
    }
    const Ui_Ut_10111b Uh_tmpval_loadable_3297(Uh_tmpreg_loadable_3280);
    return (Uh_tmpval_loadable_3297);

  } // Uf_6equals



  //! C2D.ulam:23:   C2D add(C2D other) {
  template<class EC, u32 POS>
  Ui_Uq_102323C2D0<EC> Uq_102323C2D0<EC, POS>::Uf_3add(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D0<EC> Uv_5other)
  {

    //! C2D.ulam:24:     return make(x + other.x, y + other.y);
    const u32 Uh_tmpreg_loadable_3299 = Ui_Uq_102323C2D0<EC>::Us::Up_Um_1x::Read(Uv_5other.getBits());
    const s32 Uh_tmpreg_loadable_3300 = _SignExtend32(Uh_tmpreg_loadable_3299, 16);
    const s32 Uh_tmpreg_loadable_3301 = _Int32ToInt32(Uh_tmpreg_loadable_3300, 16, 32);
    const u32 Uh_tmpreg_loadable_3302 = Up_Um_1x::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_3303 = _SignExtend32(Uh_tmpreg_loadable_3302, 16);
    const s32 Uh_tmpreg_loadable_3304 = _Int32ToInt32(Uh_tmpreg_loadable_3303, 16, 32);
    const s32 Uh_tmpreg_loadable_3305 = _BinOpAddInt32(Uh_tmpreg_loadable_3304, Uh_tmpreg_loadable_3301, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3306(Uh_tmpreg_loadable_3305);
    const u32 Uh_tmpreg_loadable_3308 = Ui_Uq_102323C2D0<EC>::Us::Up_Um_1y::Read(Uv_5other.getBits());
    const s32 Uh_tmpreg_loadable_3309 = _SignExtend32(Uh_tmpreg_loadable_3308, 16);
    const s32 Uh_tmpreg_loadable_3310 = _Int32ToInt32(Uh_tmpreg_loadable_3309, 16, 32);
    const u32 Uh_tmpreg_loadable_3311 = Up_Um_1y::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_3312 = _SignExtend32(Uh_tmpreg_loadable_3311, 16);
    const s32 Uh_tmpreg_loadable_3313 = _Int32ToInt32(Uh_tmpreg_loadable_3312, 16, 32);
    const s32 Uh_tmpreg_loadable_3314 = _BinOpAddInt32(Uh_tmpreg_loadable_3313, Uh_tmpreg_loadable_3310, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3315(Uh_tmpreg_loadable_3314);
    const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3316 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3306, Uh_tmpval_loadable_3315);
    const u32 Uh_tmpreg_loadable_3317 = Uh_tmpval_loadable_3316.read();
    const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3318(Uh_tmpreg_loadable_3317);
    return (Uh_tmpval_loadable_3318);

  } // Uf_3add



  //! C2D.ulam:27:   C2D subtract(C2D other) {
  template<class EC, u32 POS>
  Ui_Uq_102323C2D0<EC> Uq_102323C2D0<EC, POS>::Uf_8subtract(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D0<EC> Uv_5other)
  {

    //! C2D.ulam:28:     return make(x - other.x, y - other.y);
    const u32 Uh_tmpreg_loadable_3320 = Ui_Uq_102323C2D0<EC>::Us::Up_Um_1x::Read(Uv_5other.getBits());
    const s32 Uh_tmpreg_loadable_3321 = _SignExtend32(Uh_tmpreg_loadable_3320, 16);
    const s32 Uh_tmpreg_loadable_3322 = _Int32ToInt32(Uh_tmpreg_loadable_3321, 16, 32);
    const u32 Uh_tmpreg_loadable_3323 = Up_Um_1x::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_3324 = _SignExtend32(Uh_tmpreg_loadable_3323, 16);
    const s32 Uh_tmpreg_loadable_3325 = _Int32ToInt32(Uh_tmpreg_loadable_3324, 16, 32);
    const s32 Uh_tmpreg_loadable_3326 = _BinOpSubtractInt32(Uh_tmpreg_loadable_3325, Uh_tmpreg_loadable_3322, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3327(Uh_tmpreg_loadable_3326);
    const u32 Uh_tmpreg_loadable_3329 = Ui_Uq_102323C2D0<EC>::Us::Up_Um_1y::Read(Uv_5other.getBits());
    const s32 Uh_tmpreg_loadable_3330 = _SignExtend32(Uh_tmpreg_loadable_3329, 16);
    const s32 Uh_tmpreg_loadable_3331 = _Int32ToInt32(Uh_tmpreg_loadable_3330, 16, 32);
    const u32 Uh_tmpreg_loadable_3332 = Up_Um_1y::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_3333 = _SignExtend32(Uh_tmpreg_loadable_3332, 16);
    const s32 Uh_tmpreg_loadable_3334 = _Int32ToInt32(Uh_tmpreg_loadable_3333, 16, 32);
    const s32 Uh_tmpreg_loadable_3335 = _BinOpSubtractInt32(Uh_tmpreg_loadable_3334, Uh_tmpreg_loadable_3331, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3336(Uh_tmpreg_loadable_3335);
    const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3337 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3327, Uh_tmpval_loadable_3336);
    const u32 Uh_tmpreg_loadable_3338 = Uh_tmpval_loadable_3337.read();
    const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3339(Uh_tmpreg_loadable_3338);
    return (Uh_tmpval_loadable_3339);

  } // Uf_8subtract



  //! C2D.ulam:31:   Int dot(C2D other) {
  template<class EC, u32 POS>
  Ui_Ut_102321i Uq_102323C2D0<EC, POS>::Uf_3dot(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D0<EC> Uv_5other)
  {

    //! C2D.ulam:32:     return x * other.x + y * other.y;
    const u32 Uh_tmpreg_loadable_3341 = Ui_Uq_102323C2D0<EC>::Us::Up_Um_1y::Read(Uv_5other.getBits());
    const s32 Uh_tmpreg_loadable_3342 = _SignExtend32(Uh_tmpreg_loadable_3341, 16);
    const s32 Uh_tmpreg_loadable_3343 = _Int32ToInt32(Uh_tmpreg_loadable_3342, 16, 32);
    const u32 Uh_tmpreg_loadable_3344 = Up_Um_1y::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_3345 = _SignExtend32(Uh_tmpreg_loadable_3344, 16);
    const s32 Uh_tmpreg_loadable_3346 = _Int32ToInt32(Uh_tmpreg_loadable_3345, 16, 32);
    const s32 Uh_tmpreg_loadable_3347 = _BinOpMultiplyInt32(Uh_tmpreg_loadable_3346, Uh_tmpreg_loadable_3343, 32);
    const u32 Uh_tmpreg_loadable_3349 = Ui_Uq_102323C2D0<EC>::Us::Up_Um_1x::Read(Uv_5other.getBits());
    const s32 Uh_tmpreg_loadable_3350 = _SignExtend32(Uh_tmpreg_loadable_3349, 16);
    const s32 Uh_tmpreg_loadable_3351 = _Int32ToInt32(Uh_tmpreg_loadable_3350, 16, 32);
    const u32 Uh_tmpreg_loadable_3352 = Up_Um_1x::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_3353 = _SignExtend32(Uh_tmpreg_loadable_3352, 16);
    const s32 Uh_tmpreg_loadable_3354 = _Int32ToInt32(Uh_tmpreg_loadable_3353, 16, 32);
    const s32 Uh_tmpreg_loadable_3355 = _BinOpMultiplyInt32(Uh_tmpreg_loadable_3354, Uh_tmpreg_loadable_3351, 32);
    const s32 Uh_tmpreg_loadable_3356 = _BinOpAddInt32(Uh_tmpreg_loadable_3355, Uh_tmpreg_loadable_3347, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3357(Uh_tmpreg_loadable_3356);
    return (Uh_tmpval_loadable_3357);

  } // Uf_3dot



  //! C2D.ulam:35:   Int toInt() {
  template<class EC, u32 POS>
  Ui_Ut_102321i Uq_102323C2D0<EC, POS>::Uf_5toInt(UlamContext<EC>& uc, T& Uv_4self)
  {

    //! C2D.ulam:37:     return (Int) ew.getSiteNumber(make((Int) x,(Int) y));
    const u32 Uh_tmpreg_loadable_3359 = Up_Um_1x::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_3360 = _SignExtend32(Uh_tmpreg_loadable_3359, 16);
    const s32 Uh_tmpreg_loadable_3361 = _Int32ToInt32(Uh_tmpreg_loadable_3360, 16, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3362(Uh_tmpreg_loadable_3361);
    const u32 Uh_tmpreg_loadable_3363 = Up_Um_1y::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_3364 = _SignExtend32(Uh_tmpreg_loadable_3363, 16);
    const s32 Uh_tmpreg_loadable_3365 = _Int32ToInt32(Uh_tmpreg_loadable_3364, 16, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3366(Uh_tmpreg_loadable_3365);
    const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3367 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3362, Uh_tmpval_loadable_3366);
    const u32 Uh_tmpreg_loadable_3368 = Uh_tmpval_loadable_3367.read();
    const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3369(Uh_tmpreg_loadable_3368);
    const Ui_Ut_10161u Uh_tmpval_loadable_3370 = Ut_Um_2ew::Uf_9213getSiteNumber(uc, Uv_4self, Uh_tmpval_loadable_3369);
    const u32 Uh_tmpreg_loadable_3371 = Uh_tmpval_loadable_3370.read();
    const s32 Uh_tmpreg_loadable_3372 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3371, 6, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3373(Uh_tmpreg_loadable_3372);
    return (Uh_tmpval_loadable_3373);

  } // Uf_5toInt



  //! C2D.ulam:43:   C2D neighbor(Dir d) {
  template<class EC, u32 POS>
  Ui_Uq_102323C2D0<EC> Uq_102323C2D0<EC, POS>::Uf_8neighbor(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10131u Uv_1d)
  {

    //! C2D.ulam:44:     if (d==0) return make( 0, 1);
    const s32 Uh_tmpreg_loadable_3374 = 0;
    const u32 Uh_tmpreg_loadable_3375 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_3376 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3375, 3, 32);
    const u32 Uh_tmpreg_loadable_3377 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3376, Uh_tmpreg_loadable_3374, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3377, 1))
    {

      //! C2D.ulam:44:     if (d==0) return make( 0, 1);
      const s32 Uh_tmpreg_loadable_3378 = 0;
      const Ui_Ut_102321i Uh_tmpval_loadable_3379(Uh_tmpreg_loadable_3378);
      const s32 Uh_tmpreg_loadable_3380 = 1;
      const Ui_Ut_102321i Uh_tmpval_loadable_3381(Uh_tmpreg_loadable_3380);
      const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3382 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3379, Uh_tmpval_loadable_3381);
      const u32 Uh_tmpreg_loadable_3383 = Uh_tmpval_loadable_3382.read();
      const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3384(Uh_tmpreg_loadable_3383);
      return (Uh_tmpval_loadable_3384);
    } // end if

    //! C2D.ulam:45:     if (d==1) return make( 1, 1);
    const s32 Uh_tmpreg_loadable_3385 = 1;
    const u32 Uh_tmpreg_loadable_3386 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_3387 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3386, 3, 32);
    const u32 Uh_tmpreg_loadable_3388 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3387, Uh_tmpreg_loadable_3385, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3388, 1))
    {

      //! C2D.ulam:45:     if (d==1) return make( 1, 1);
      const s32 Uh_tmpreg_loadable_3389 = 1;
      const Ui_Ut_102321i Uh_tmpval_loadable_3390(Uh_tmpreg_loadable_3389);
      const s32 Uh_tmpreg_loadable_3391 = 1;
      const Ui_Ut_102321i Uh_tmpval_loadable_3392(Uh_tmpreg_loadable_3391);
      const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3393 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3390, Uh_tmpval_loadable_3392);
      const u32 Uh_tmpreg_loadable_3394 = Uh_tmpval_loadable_3393.read();
      const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3395(Uh_tmpreg_loadable_3394);
      return (Uh_tmpval_loadable_3395);
    } // end if

    //! C2D.ulam:46:     if (d==2) return make( 1, 0);
    const s32 Uh_tmpreg_loadable_3396 = 2;
    const u32 Uh_tmpreg_loadable_3397 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_3398 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3397, 3, 32);
    const u32 Uh_tmpreg_loadable_3399 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3398, Uh_tmpreg_loadable_3396, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3399, 1))
    {

      //! C2D.ulam:46:     if (d==2) return make( 1, 0);
      const s32 Uh_tmpreg_loadable_3400 = 1;
      const Ui_Ut_102321i Uh_tmpval_loadable_3401(Uh_tmpreg_loadable_3400);
      const s32 Uh_tmpreg_loadable_3402 = 0;
      const Ui_Ut_102321i Uh_tmpval_loadable_3403(Uh_tmpreg_loadable_3402);
      const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3404 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3401, Uh_tmpval_loadable_3403);
      const u32 Uh_tmpreg_loadable_3405 = Uh_tmpval_loadable_3404.read();
      const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3406(Uh_tmpreg_loadable_3405);
      return (Uh_tmpval_loadable_3406);
    } // end if

    //! C2D.ulam:47:     if (d==3) return make( 1,-1);
    const s32 Uh_tmpreg_loadable_3407 = 3;
    const u32 Uh_tmpreg_loadable_3408 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_3409 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3408, 3, 32);
    const u32 Uh_tmpreg_loadable_3410 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3409, Uh_tmpreg_loadable_3407, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3410, 1))
    {

      //! C2D.ulam:47:     if (d==3) return make( 1,-1);
      const s32 Uh_tmpreg_loadable_3411 = 1;
      const Ui_Ut_102321i Uh_tmpval_loadable_3412(Uh_tmpreg_loadable_3411);
      const s32 Uh_tmpreg_loadable_3413 = -1;
      const Ui_Ut_102321i Uh_tmpval_loadable_3414(Uh_tmpreg_loadable_3413);
      const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3415 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3412, Uh_tmpval_loadable_3414);
      const u32 Uh_tmpreg_loadable_3416 = Uh_tmpval_loadable_3415.read();
      const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3417(Uh_tmpreg_loadable_3416);
      return (Uh_tmpval_loadable_3417);
    } // end if

    //! C2D.ulam:48:     if (d==4) return make( 0,-1);
    const s32 Uh_tmpreg_loadable_3418 = 4;
    const u32 Uh_tmpreg_loadable_3419 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_3420 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3419, 3, 32);
    const u32 Uh_tmpreg_loadable_3421 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3420, Uh_tmpreg_loadable_3418, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3421, 1))
    {

      //! C2D.ulam:48:     if (d==4) return make( 0,-1);
      const s32 Uh_tmpreg_loadable_3422 = 0;
      const Ui_Ut_102321i Uh_tmpval_loadable_3423(Uh_tmpreg_loadable_3422);
      const s32 Uh_tmpreg_loadable_3424 = -1;
      const Ui_Ut_102321i Uh_tmpval_loadable_3425(Uh_tmpreg_loadable_3424);
      const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3426 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3423, Uh_tmpval_loadable_3425);
      const u32 Uh_tmpreg_loadable_3427 = Uh_tmpval_loadable_3426.read();
      const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3428(Uh_tmpreg_loadable_3427);
      return (Uh_tmpval_loadable_3428);
    } // end if

    //! C2D.ulam:49:     if (d==5) return make(-1,-1);
    const s32 Uh_tmpreg_loadable_3429 = 5;
    const u32 Uh_tmpreg_loadable_3430 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_3431 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3430, 3, 32);
    const u32 Uh_tmpreg_loadable_3432 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3431, Uh_tmpreg_loadable_3429, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3432, 1))
    {

      //! C2D.ulam:49:     if (d==5) return make(-1,-1);
      const s32 Uh_tmpreg_loadable_3433 = -1;
      const Ui_Ut_102321i Uh_tmpval_loadable_3434(Uh_tmpreg_loadable_3433);
      const s32 Uh_tmpreg_loadable_3435 = -1;
      const Ui_Ut_102321i Uh_tmpval_loadable_3436(Uh_tmpreg_loadable_3435);
      const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3437 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3434, Uh_tmpval_loadable_3436);
      const u32 Uh_tmpreg_loadable_3438 = Uh_tmpval_loadable_3437.read();
      const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3439(Uh_tmpreg_loadable_3438);
      return (Uh_tmpval_loadable_3439);
    } // end if

    //! C2D.ulam:50:     if (d==6) return make(-1, 0);
    const s32 Uh_tmpreg_loadable_3440 = 6;
    const u32 Uh_tmpreg_loadable_3441 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_3442 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3441, 3, 32);
    const u32 Uh_tmpreg_loadable_3443 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3442, Uh_tmpreg_loadable_3440, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3443, 1))
    {

      //! C2D.ulam:50:     if (d==6) return make(-1, 0);
      const s32 Uh_tmpreg_loadable_3444 = -1;
      const Ui_Ut_102321i Uh_tmpval_loadable_3445(Uh_tmpreg_loadable_3444);
      const s32 Uh_tmpreg_loadable_3446 = 0;
      const Ui_Ut_102321i Uh_tmpval_loadable_3447(Uh_tmpreg_loadable_3446);
      const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3448 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3445, Uh_tmpval_loadable_3447);
      const u32 Uh_tmpreg_loadable_3449 = Uh_tmpval_loadable_3448.read();
      const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3450(Uh_tmpreg_loadable_3449);
      return (Uh_tmpval_loadable_3450);
    } // end if

    //! C2D.ulam:51:     /* d==7*/ return make(-1, 1);
    const s32 Uh_tmpreg_loadable_3451 = -1;
    const Ui_Ut_102321i Uh_tmpval_loadable_3452(Uh_tmpreg_loadable_3451);
    const s32 Uh_tmpreg_loadable_3453 = 1;
    const Ui_Ut_102321i Uh_tmpval_loadable_3454(Uh_tmpreg_loadable_3453);
    const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3455 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3452, Uh_tmpval_loadable_3454);
    const u32 Uh_tmpreg_loadable_3456 = Uh_tmpval_loadable_3455.read();
    const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3457(Uh_tmpreg_loadable_3456);
    return (Uh_tmpval_loadable_3457);

  } // Uf_8neighbor



  //! C2D.ulam:57:   C2D corner(Dir d) {
  template<class EC, u32 POS>
  Ui_Uq_102323C2D0<EC> Uq_102323C2D0<EC, POS>::Uf_6corner(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10131u Uv_1d)
  {

    //! C2D.ulam:58:     if (d==0) return make( 0, 4);
    const s32 Uh_tmpreg_loadable_3458 = 0;
    const u32 Uh_tmpreg_loadable_3459 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_3460 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3459, 3, 32);
    const u32 Uh_tmpreg_loadable_3461 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3460, Uh_tmpreg_loadable_3458, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3461, 1))
    {

      //! C2D.ulam:58:     if (d==0) return make( 0, 4);
      const s32 Uh_tmpreg_loadable_3462 = 0;
      const Ui_Ut_102321i Uh_tmpval_loadable_3463(Uh_tmpreg_loadable_3462);
      const s32 Uh_tmpreg_loadable_3464 = 4;
      const Ui_Ut_102321i Uh_tmpval_loadable_3465(Uh_tmpreg_loadable_3464);
      const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3466 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3463, Uh_tmpval_loadable_3465);
      const u32 Uh_tmpreg_loadable_3467 = Uh_tmpval_loadable_3466.read();
      const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3468(Uh_tmpreg_loadable_3467);
      return (Uh_tmpval_loadable_3468);
    } // end if

    //! C2D.ulam:59:     if (d==1) return make( 2, 2);
    const s32 Uh_tmpreg_loadable_3469 = 1;
    const u32 Uh_tmpreg_loadable_3470 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_3471 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3470, 3, 32);
    const u32 Uh_tmpreg_loadable_3472 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3471, Uh_tmpreg_loadable_3469, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3472, 1))
    {

      //! C2D.ulam:59:     if (d==1) return make( 2, 2);
      const s32 Uh_tmpreg_loadable_3473 = 2;
      const Ui_Ut_102321i Uh_tmpval_loadable_3474(Uh_tmpreg_loadable_3473);
      const s32 Uh_tmpreg_loadable_3475 = 2;
      const Ui_Ut_102321i Uh_tmpval_loadable_3476(Uh_tmpreg_loadable_3475);
      const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3477 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3474, Uh_tmpval_loadable_3476);
      const u32 Uh_tmpreg_loadable_3478 = Uh_tmpval_loadable_3477.read();
      const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3479(Uh_tmpreg_loadable_3478);
      return (Uh_tmpval_loadable_3479);
    } // end if

    //! C2D.ulam:60:     if (d==2) return make( 4, 0);
    const s32 Uh_tmpreg_loadable_3480 = 2;
    const u32 Uh_tmpreg_loadable_3481 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_3482 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3481, 3, 32);
    const u32 Uh_tmpreg_loadable_3483 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3482, Uh_tmpreg_loadable_3480, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3483, 1))
    {

      //! C2D.ulam:60:     if (d==2) return make( 4, 0);
      const s32 Uh_tmpreg_loadable_3484 = 4;
      const Ui_Ut_102321i Uh_tmpval_loadable_3485(Uh_tmpreg_loadable_3484);
      const s32 Uh_tmpreg_loadable_3486 = 0;
      const Ui_Ut_102321i Uh_tmpval_loadable_3487(Uh_tmpreg_loadable_3486);
      const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3488 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3485, Uh_tmpval_loadable_3487);
      const u32 Uh_tmpreg_loadable_3489 = Uh_tmpval_loadable_3488.read();
      const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3490(Uh_tmpreg_loadable_3489);
      return (Uh_tmpval_loadable_3490);
    } // end if

    //! C2D.ulam:61:     if (d==3) return make( 2,-2);
    const s32 Uh_tmpreg_loadable_3491 = 3;
    const u32 Uh_tmpreg_loadable_3492 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_3493 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3492, 3, 32);
    const u32 Uh_tmpreg_loadable_3494 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3493, Uh_tmpreg_loadable_3491, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3494, 1))
    {

      //! C2D.ulam:61:     if (d==3) return make( 2,-2);
      const s32 Uh_tmpreg_loadable_3495 = 2;
      const Ui_Ut_102321i Uh_tmpval_loadable_3496(Uh_tmpreg_loadable_3495);
      const s32 Uh_tmpreg_loadable_3497 = -2;
      const Ui_Ut_102321i Uh_tmpval_loadable_3498(Uh_tmpreg_loadable_3497);
      const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3499 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3496, Uh_tmpval_loadable_3498);
      const u32 Uh_tmpreg_loadable_3500 = Uh_tmpval_loadable_3499.read();
      const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3501(Uh_tmpreg_loadable_3500);
      return (Uh_tmpval_loadable_3501);
    } // end if

    //! C2D.ulam:62:     if (d==4) return make( 0,-4);
    const s32 Uh_tmpreg_loadable_3502 = 4;
    const u32 Uh_tmpreg_loadable_3503 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_3504 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3503, 3, 32);
    const u32 Uh_tmpreg_loadable_3505 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3504, Uh_tmpreg_loadable_3502, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3505, 1))
    {

      //! C2D.ulam:62:     if (d==4) return make( 0,-4);
      const s32 Uh_tmpreg_loadable_3506 = 0;
      const Ui_Ut_102321i Uh_tmpval_loadable_3507(Uh_tmpreg_loadable_3506);
      const s32 Uh_tmpreg_loadable_3508 = -4;
      const Ui_Ut_102321i Uh_tmpval_loadable_3509(Uh_tmpreg_loadable_3508);
      const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3510 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3507, Uh_tmpval_loadable_3509);
      const u32 Uh_tmpreg_loadable_3511 = Uh_tmpval_loadable_3510.read();
      const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3512(Uh_tmpreg_loadable_3511);
      return (Uh_tmpval_loadable_3512);
    } // end if

    //! C2D.ulam:63:     if (d==5) return make(-2,-2);
    const s32 Uh_tmpreg_loadable_3513 = 5;
    const u32 Uh_tmpreg_loadable_3514 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_3515 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3514, 3, 32);
    const u32 Uh_tmpreg_loadable_3516 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3515, Uh_tmpreg_loadable_3513, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3516, 1))
    {

      //! C2D.ulam:63:     if (d==5) return make(-2,-2);
      const s32 Uh_tmpreg_loadable_3517 = -2;
      const Ui_Ut_102321i Uh_tmpval_loadable_3518(Uh_tmpreg_loadable_3517);
      const s32 Uh_tmpreg_loadable_3519 = -2;
      const Ui_Ut_102321i Uh_tmpval_loadable_3520(Uh_tmpreg_loadable_3519);
      const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3521 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3518, Uh_tmpval_loadable_3520);
      const u32 Uh_tmpreg_loadable_3522 = Uh_tmpval_loadable_3521.read();
      const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3523(Uh_tmpreg_loadable_3522);
      return (Uh_tmpval_loadable_3523);
    } // end if

    //! C2D.ulam:64:     if (d==6) return make(-4, 0);
    const s32 Uh_tmpreg_loadable_3524 = 6;
    const u32 Uh_tmpreg_loadable_3525 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_3526 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3525, 3, 32);
    const u32 Uh_tmpreg_loadable_3527 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3526, Uh_tmpreg_loadable_3524, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3527, 1))
    {

      //! C2D.ulam:64:     if (d==6) return make(-4, 0);
      const s32 Uh_tmpreg_loadable_3528 = -4;
      const Ui_Ut_102321i Uh_tmpval_loadable_3529(Uh_tmpreg_loadable_3528);
      const s32 Uh_tmpreg_loadable_3530 = 0;
      const Ui_Ut_102321i Uh_tmpval_loadable_3531(Uh_tmpreg_loadable_3530);
      const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3532 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3529, Uh_tmpval_loadable_3531);
      const u32 Uh_tmpreg_loadable_3533 = Uh_tmpval_loadable_3532.read();
      const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3534(Uh_tmpreg_loadable_3533);
      return (Uh_tmpval_loadable_3534);
    } // end if

    //! C2D.ulam:65:     /* d==7*/ return make(-2, 2);
    const s32 Uh_tmpreg_loadable_3535 = -2;
    const Ui_Ut_102321i Uh_tmpval_loadable_3536(Uh_tmpreg_loadable_3535);
    const s32 Uh_tmpreg_loadable_3537 = 2;
    const Ui_Ut_102321i Uh_tmpval_loadable_3538(Uh_tmpreg_loadable_3537);
    const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3539 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_3536, Uh_tmpval_loadable_3538);
    const u32 Uh_tmpreg_loadable_3540 = Uh_tmpval_loadable_3539.read();
    const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3541(Uh_tmpreg_loadable_3540);
    return (Uh_tmpval_loadable_3541);

  } // Uf_6corner



  //! C2D.ulam:68:   Unsigned length() {
  template<class EC, u32 POS>
  Ui_Ut_102321u Uq_102323C2D0<EC, POS>::Uf_6length(UlamContext<EC>& uc, T& Uv_4self)
  {

    //! C2D.ulam:69:     C2D origin;
    Ui_Uq_102323C2D0<EC> Uv_6origin;

    //! C2D.ulam:70:     return manhattanDistance(origin);
    const u32 Uh_tmpreg_loadable_3542 = Uv_6origin.read();
    const Ui_Uq_102323C2D0<EC> Uh_tmpval_loadable_3543(Uh_tmpreg_loadable_3542);
    const Ui_Ut_102321u Uh_tmpval_loadable_3544 = Uf_9217manhattanDistance(uc, Uv_4self, Uh_tmpval_loadable_3543);
    const u32 Uh_tmpreg_loadable_3545 = Uh_tmpval_loadable_3544.read();
    const Ui_Ut_102321u Uh_tmpval_loadable_3546(Uh_tmpreg_loadable_3545);
    return (Uh_tmpval_loadable_3546);

  } // Uf_6length



  //! C2D.ulam:73:   Unsigned manhattanDistance(C2D other) {
  template<class EC, u32 POS>
  Ui_Ut_102321u Uq_102323C2D0<EC, POS>::Uf_9217manhattanDistance(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D0<EC> Uv_5other)
  {

    //! C2D.ulam:74:     Int dx = x - other.x, dy = y - other.y;

    //! C2D.ulam:74:     Int dx = x - other.x, dy = y - other.y;

    //! C2D.ulam:74:     Int dx = x - other.x, dy = y - other.y;

    //! C2D.ulam:74:     Int dx = x - other.x, dy = y - other.y;
    Ui_Ut_102321i Uv_2dx;

    //! C2D.ulam:74:     Int dx = x - other.x, dy = y - other.y;
    const u32 Uh_tmpreg_loadable_3548 = Ui_Uq_102323C2D0<EC>::Us::Up_Um_1x::Read(Uv_5other.getBits());
    const s32 Uh_tmpreg_loadable_3549 = _SignExtend32(Uh_tmpreg_loadable_3548, 16);
    const s32 Uh_tmpreg_loadable_3550 = _Int32ToInt32(Uh_tmpreg_loadable_3549, 16, 32);
    const u32 Uh_tmpreg_loadable_3551 = Up_Um_1x::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_3552 = _SignExtend32(Uh_tmpreg_loadable_3551, 16);
    const s32 Uh_tmpreg_loadable_3553 = _Int32ToInt32(Uh_tmpreg_loadable_3552, 16, 32);
    const s32 Uh_tmpreg_loadable_3554 = _BinOpSubtractInt32(Uh_tmpreg_loadable_3553, Uh_tmpreg_loadable_3550, 32);
    Uv_2dx.write(Uh_tmpreg_loadable_3554);

    //! C2D.ulam:74:     Int dx = x - other.x, dy = y - other.y;
    Ui_Ut_102321i Uv_2dy;

    //! C2D.ulam:74:     Int dx = x - other.x, dy = y - other.y;
    const u32 Uh_tmpreg_loadable_3557 = Ui_Uq_102323C2D0<EC>::Us::Up_Um_1y::Read(Uv_5other.getBits());
    const s32 Uh_tmpreg_loadable_3558 = _SignExtend32(Uh_tmpreg_loadable_3557, 16);
    const s32 Uh_tmpreg_loadable_3559 = _Int32ToInt32(Uh_tmpreg_loadable_3558, 16, 32);
    const u32 Uh_tmpreg_loadable_3560 = Up_Um_1y::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_3561 = _SignExtend32(Uh_tmpreg_loadable_3560, 16);
    const s32 Uh_tmpreg_loadable_3562 = _Int32ToInt32(Uh_tmpreg_loadable_3561, 16, 32);
    const s32 Uh_tmpreg_loadable_3563 = _BinOpSubtractInt32(Uh_tmpreg_loadable_3562, Uh_tmpreg_loadable_3559, 32);
    Uv_2dy.write(Uh_tmpreg_loadable_3563);

    //! C2D.ulam:75:     if (dx < 0) dx = -dx;
    const s32 Uh_tmpreg_loadable_3565 = 0;
    const u32 Uh_tmpreg_loadable_3566 = Uv_2dx.read();
    const s32 Uh_tmpreg_loadable_3567 = _SignExtend32(Uh_tmpreg_loadable_3566, 32);
    const u32 Uh_tmpreg_loadable_3568 = _BinOpCompareLessThanInt32(Uh_tmpreg_loadable_3567, Uh_tmpreg_loadable_3565, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3568, 1))
    {

      //! C2D.ulam:75:     if (dx < 0) dx = -dx;
      const u32 Uh_tmpreg_loadable_3569 = Uv_2dx.read();
      const s32 Uh_tmpreg_loadable_3570 = _SignExtend32(Uh_tmpreg_loadable_3569, 32);
      const s32 Uh_tmpreg_loadable_3571 = _UnaryMinusInt32(Uh_tmpreg_loadable_3570, 32);
      Uv_2dx.write(Uh_tmpreg_loadable_3571);
    } // end if

    //! C2D.ulam:76:     if (dy < 0) dy = -dy;
    const s32 Uh_tmpreg_loadable_3573 = 0;
    const u32 Uh_tmpreg_loadable_3574 = Uv_2dy.read();
    const s32 Uh_tmpreg_loadable_3575 = _SignExtend32(Uh_tmpreg_loadable_3574, 32);
    const u32 Uh_tmpreg_loadable_3576 = _BinOpCompareLessThanInt32(Uh_tmpreg_loadable_3575, Uh_tmpreg_loadable_3573, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3576, 1))
    {

      //! C2D.ulam:76:     if (dy < 0) dy = -dy;
      const u32 Uh_tmpreg_loadable_3577 = Uv_2dy.read();
      const s32 Uh_tmpreg_loadable_3578 = _SignExtend32(Uh_tmpreg_loadable_3577, 32);
      const s32 Uh_tmpreg_loadable_3579 = _UnaryMinusInt32(Uh_tmpreg_loadable_3578, 32);
      Uv_2dy.write(Uh_tmpreg_loadable_3579);
    } // end if

    //! C2D.ulam:77:     return (Unsigned) (dx + dy);
    const u32 Uh_tmpreg_loadable_3581 = Uv_2dy.read();
    const s32 Uh_tmpreg_loadable_3582 = _SignExtend32(Uh_tmpreg_loadable_3581, 32);
    const u32 Uh_tmpreg_loadable_3583 = Uv_2dx.read();
    const s32 Uh_tmpreg_loadable_3584 = _SignExtend32(Uh_tmpreg_loadable_3583, 32);
    const s32 Uh_tmpreg_loadable_3585 = _BinOpAddInt32(Uh_tmpreg_loadable_3584, Uh_tmpreg_loadable_3582, 32);
    const u32 Uh_tmpreg_loadable_3586 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3585, 32, 32);
    const Ui_Ut_102321u Uh_tmpval_loadable_3587(Uh_tmpreg_loadable_3586);
    return (Uh_tmpval_loadable_3587);

  } // Uf_9217manhattanDistance


  template<class EC, u32 POS>
  s32 Uq_102323C2D0<EC, POS>::PositionOfDataMemberType(const char * namearg) const
  {
    if(!strcmp(namearg,"EventWindow")) return (0);   //pos offset

    return (-1);   //not found
  }  //has

} //MFM

