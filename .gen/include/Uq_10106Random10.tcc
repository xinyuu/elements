/**                                      -*- mode:C++ -*- */

#include "Ue_102213Box10.h"
#include "Uq_10109210DebugUtils10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_1010919AtomUtils10.h"
#include "Ue_102689214WindowServices10.h"
#include "Ue_102294Pbox10.h"
#include "Ue_10105Empty10.h"
#include "Ue_10104Wall10.h"
#include "Ue_10106Marker10.h"
#include "Uq_102323C2D10.h"
#include "Uq_10105MDist10.h"
#include "Uq_10104Fail10.h"

namespace MFM{


  //! Random.ulam:26:   Int between(Int lo, Int hi) {
  template<class EC, u32 POS>
  Ui_Ut_102321i Uq_10106Random10<EC, POS>::Uf_7between(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_2lo, Ui_Ut_102321i Uv_2hi)
  {

    //! Random.ulam:27:     if (lo > hi) {
    const u32 Uh_tmpreg_loadable_3296 = Uv_2hi.read();
    const s32 Uh_tmpreg_loadable_3297 = _SignExtend32(Uh_tmpreg_loadable_3296, 32);
    const u32 Uh_tmpreg_loadable_3298 = Uv_2lo.read();
    const s32 Uh_tmpreg_loadable_3299 = _SignExtend32(Uh_tmpreg_loadable_3298, 32);
    const u32 Uh_tmpreg_loadable_3300 = _BinOpCompareGreaterThanInt32(Uh_tmpreg_loadable_3299, Uh_tmpreg_loadable_3297, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3300, 1))
    {

      //! Random.ulam:27:     if (lo > hi) {
      {

        //! Random.ulam:28:       Int t = hi;

        //! Random.ulam:28:       Int t = hi;
        Ui_Ut_102321i Uv_1t;

        //! Random.ulam:28:       Int t = hi;
        const u32 Uh_tmpreg_loadable_3301 = Uv_2hi.read();
        const s32 Uh_tmpreg_loadable_3302 = _SignExtend32(Uh_tmpreg_loadable_3301, 32);
        Uv_1t.write(Uh_tmpreg_loadable_3302);

        //! Random.ulam:29:       hi = lo;
        const u32 Uh_tmpreg_loadable_3304 = Uv_2lo.read();
        const s32 Uh_tmpreg_loadable_3305 = _SignExtend32(Uh_tmpreg_loadable_3304, 32);
        Uv_2hi.write(Uh_tmpreg_loadable_3305);

        //! Random.ulam:30:       lo = t;
        const u32 Uh_tmpreg_loadable_3307 = Uv_1t.read();
        const s32 Uh_tmpreg_loadable_3308 = _SignExtend32(Uh_tmpreg_loadable_3307, 32);
        Uv_2lo.write(Uh_tmpreg_loadable_3308);
      }
    } // end if

    //! Random.ulam:32:     return lo + (Int) create(hi - lo + 1);
    const s32 Uh_tmpreg_loadable_3310 = 1;
    const u32 Uh_tmpreg_loadable_3311 = Uv_2lo.read();
    const s32 Uh_tmpreg_loadable_3312 = _SignExtend32(Uh_tmpreg_loadable_3311, 32);
    const u32 Uh_tmpreg_loadable_3313 = Uv_2hi.read();
    const s32 Uh_tmpreg_loadable_3314 = _SignExtend32(Uh_tmpreg_loadable_3313, 32);
    const s32 Uh_tmpreg_loadable_3315 = _BinOpSubtractInt32(Uh_tmpreg_loadable_3314, Uh_tmpreg_loadable_3312, 32);
    const s32 Uh_tmpreg_loadable_3316 = _BinOpAddInt32(Uh_tmpreg_loadable_3315, Uh_tmpreg_loadable_3310, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3317(Uh_tmpreg_loadable_3316);
    const Ui_Ut_102321u Uh_tmpval_loadable_3318 = Uf_6create(uc, Uv_4self, Uh_tmpval_loadable_3317);
    const u32 Uh_tmpreg_loadable_3319 = Uh_tmpval_loadable_3318.read();
    const s32 Uh_tmpreg_loadable_3320 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3319, 32, 32);
    const u32 Uh_tmpreg_loadable_3321 = Uv_2lo.read();
    const s32 Uh_tmpreg_loadable_3322 = _SignExtend32(Uh_tmpreg_loadable_3321, 32);
    const s32 Uh_tmpreg_loadable_3323 = _BinOpAddInt32(Uh_tmpreg_loadable_3322, Uh_tmpreg_loadable_3320, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3324(Uh_tmpreg_loadable_3323);
    return (Uh_tmpval_loadable_3324);

  } // Uf_7between



  //! Random.ulam:44:   Bool oneIn(Int odds) { return oneIn((Unsigned) odds); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10106Random10<EC, POS>::Uf_5oneIn(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_4odds)
  {

    //! Random.ulam:44:   Bool oneIn(Int odds) { return oneIn((Unsigned) odds); }
    const u32 Uh_tmpreg_loadable_3325 = Uv_4odds.read();
    const s32 Uh_tmpreg_loadable_3326 = _SignExtend32(Uh_tmpreg_loadable_3325, 32);
    const u32 Uh_tmpreg_loadable_3327 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3326, 32, 32);
    const Ui_Ut_102321u Uh_tmpval_loadable_3328(Uh_tmpreg_loadable_3327);
    const Ui_Ut_10111b Uh_tmpval_loadable_3329 = Uf_5oneIn(uc, Uv_4self, Uh_tmpval_loadable_3328);
    const u32 Uh_tmpreg_loadable_3330 = Uh_tmpval_loadable_3329.read();
    const Ui_Ut_10111b Uh_tmpval_loadable_3331(Uh_tmpreg_loadable_3330);
    return (Uh_tmpval_loadable_3331);

  } // Uf_5oneIn



  //! Random.ulam:42:   Bool oneIn(Unsigned odds) { return oddsOf((Unsigned) 1, odds); }
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10106Random10<EC, POS>::Uf_5oneIn(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321u Uv_4odds)
  {

    //! Random.ulam:42:   Bool oneIn(Unsigned odds) { return oddsOf((Unsigned) 1, odds); }
    const s32 Uh_tmpreg_loadable_3332 = 1;
    const u32 Uh_tmpreg_loadable_3333 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3332, 32, 32);
    const Ui_Ut_102321u Uh_tmpval_loadable_3334(Uh_tmpreg_loadable_3333);
    const u32 Uh_tmpreg_loadable_3335 = Uv_4odds.read();
    const Ui_Ut_102321u Uh_tmpval_loadable_3336(Uh_tmpreg_loadable_3335);
    const Ui_Ut_10111b Uh_tmpval_loadable_3337 = Uf_6oddsOf(uc, Uv_4self, Uh_tmpval_loadable_3334, Uh_tmpval_loadable_3336);
    const u32 Uh_tmpreg_loadable_3338 = Uh_tmpval_loadable_3337.read();
    const Ui_Ut_10111b Uh_tmpval_loadable_3339(Uh_tmpreg_loadable_3338);
    return (Uh_tmpval_loadable_3339);

  } // Uf_5oneIn



  //! Random.ulam:15:   Unsigned bits(Int max) {
  template<class EC, u32 POS>
  Ui_Ut_102321u Uq_10106Random10<EC, POS>::Uf_4bits(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_3max)
  {

    //! Random.ulam:16:     if (max <= 0) return 0;
    const s32 Uh_tmpreg_loadable_3340 = 0;
    const u32 Uh_tmpreg_loadable_3341 = Uv_3max.read();
    const s32 Uh_tmpreg_loadable_3342 = _SignExtend32(Uh_tmpreg_loadable_3341, 32);
    const u32 Uh_tmpreg_loadable_3343 = _BinOpCompareLessEqualInt32(Uh_tmpreg_loadable_3342, Uh_tmpreg_loadable_3340, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3343, 1))
    {

      //! Random.ulam:16:     if (max <= 0) return 0;
      const s32 Uh_tmpreg_loadable_3344 = 0;
      const u32 Uh_tmpreg_loadable_3345 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3344, 32, 32);
      const Ui_Ut_102321u Uh_tmpval_loadable_3346(Uh_tmpreg_loadable_3345);
      return (Uh_tmpval_loadable_3346);
    } // end if

    //! Random.ulam:17:     return bits((Unsigned) max);
    const u32 Uh_tmpreg_loadable_3347 = Uv_3max.read();
    const s32 Uh_tmpreg_loadable_3348 = _SignExtend32(Uh_tmpreg_loadable_3347, 32);
    const u32 Uh_tmpreg_loadable_3349 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3348, 32, 32);
    const Ui_Ut_102321u Uh_tmpval_loadable_3350(Uh_tmpreg_loadable_3349);
    const Ui_Ut_102321u Uh_tmpval_loadable_3351 = Uf_4bits(uc, Uv_4self, Uh_tmpval_loadable_3350);
    const u32 Uh_tmpreg_loadable_3352 = Uh_tmpval_loadable_3351.read();
    const Ui_Ut_102321u Uh_tmpval_loadable_3353(Uh_tmpreg_loadable_3352);
    return (Uh_tmpval_loadable_3353);

  } // Uf_4bits



  //! Random.ulam:21:   Unsigned create(Int max) {
  template<class EC, u32 POS>
  Ui_Ut_102321u Uq_10106Random10<EC, POS>::Uf_6create(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_3max)
  {

    //! Random.ulam:22:     if (max <= 0) return 0;
    const s32 Uh_tmpreg_loadable_3354 = 0;
    const u32 Uh_tmpreg_loadable_3355 = Uv_3max.read();
    const s32 Uh_tmpreg_loadable_3356 = _SignExtend32(Uh_tmpreg_loadable_3355, 32);
    const u32 Uh_tmpreg_loadable_3357 = _BinOpCompareLessEqualInt32(Uh_tmpreg_loadable_3356, Uh_tmpreg_loadable_3354, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3357, 1))
    {

      //! Random.ulam:22:     if (max <= 0) return 0;
      const s32 Uh_tmpreg_loadable_3358 = 0;
      const u32 Uh_tmpreg_loadable_3359 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3358, 32, 32);
      const Ui_Ut_102321u Uh_tmpval_loadable_3360(Uh_tmpreg_loadable_3359);
      return (Uh_tmpval_loadable_3360);
    } // end if

    //! Random.ulam:23:     return create((Unsigned) max);
    const u32 Uh_tmpreg_loadable_3361 = Uv_3max.read();
    const s32 Uh_tmpreg_loadable_3362 = _SignExtend32(Uh_tmpreg_loadable_3361, 32);
    const u32 Uh_tmpreg_loadable_3363 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3362, 32, 32);
    const Ui_Ut_102321u Uh_tmpval_loadable_3364(Uh_tmpreg_loadable_3363);
    const Ui_Ut_102321u Uh_tmpval_loadable_3365 = Uf_6create(uc, Uv_4self, Uh_tmpval_loadable_3364);
    const u32 Uh_tmpreg_loadable_3366 = Uh_tmpval_loadable_3365.read();
    const Ui_Ut_102321u Uh_tmpval_loadable_3367(Uh_tmpreg_loadable_3366);
    return (Uh_tmpval_loadable_3367);

  } // Uf_6create



  //! Random.ulam:38:   Bool oddsOf(Int thisMany, Int outOfThisMany) {
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10106Random10<EC, POS>::Uf_6oddsOf(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_8thisMany, Ui_Ut_102321i Uv_9213outOfThisMany)
  {

    //! Random.ulam:39:     return ((Int) create(outOfThisMany)) < thisMany;
    const u32 Uh_tmpreg_loadable_3368 = Uv_8thisMany.read();
    const s32 Uh_tmpreg_loadable_3369 = _SignExtend32(Uh_tmpreg_loadable_3368, 32);
    const u32 Uh_tmpreg_loadable_3370 = Uv_9213outOfThisMany.read();
    const s32 Uh_tmpreg_loadable_3371 = _SignExtend32(Uh_tmpreg_loadable_3370, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3372(Uh_tmpreg_loadable_3371);
    const Ui_Ut_102321u Uh_tmpval_loadable_3373 = Uf_6create(uc, Uv_4self, Uh_tmpval_loadable_3372);
    const u32 Uh_tmpreg_loadable_3374 = Uh_tmpval_loadable_3373.read();
    const s32 Uh_tmpreg_loadable_3375 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3374, 32, 32);
    const u32 Uh_tmpreg_loadable_3376 = _BinOpCompareLessThanInt32(Uh_tmpreg_loadable_3375, Uh_tmpreg_loadable_3369, 32);
    const Ui_Ut_10111b Uh_tmpval_loadable_3377(Uh_tmpreg_loadable_3376);
    return (Uh_tmpval_loadable_3377);

  } // Uf_6oddsOf



  //! Random.ulam:35:   Bool oddsOf(Unsigned thisMany, Unsigned outOfThisMany) {
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_10106Random10<EC, POS>::Uf_6oddsOf(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321u Uv_8thisMany, Ui_Ut_102321u Uv_9213outOfThisMany)
  {

    //! Random.ulam:36:     return create(outOfThisMany) < thisMany;
    const u32 Uh_tmpreg_loadable_3378 = Uv_8thisMany.read();
    const u32 Uh_tmpreg_loadable_3379 = Uv_9213outOfThisMany.read();
    const Ui_Ut_102321u Uh_tmpval_loadable_3380(Uh_tmpreg_loadable_3379);
    const Ui_Ut_102321u Uh_tmpval_loadable_3381 = Uf_6create(uc, Uv_4self, Uh_tmpval_loadable_3380);
    const u32 Uh_tmpreg_loadable_3382 = Uh_tmpval_loadable_3381.read();
    const u32 Uh_tmpreg_loadable_3383 = _BinOpCompareLessThanUnsigned32(Uh_tmpreg_loadable_3382, Uh_tmpreg_loadable_3378, 32);
    const Ui_Ut_10111b Uh_tmpval_loadable_3384(Uh_tmpreg_loadable_3383);
    return (Uh_tmpval_loadable_3384);

  } // Uf_6oddsOf


  template<class EC, u32 POS>
  s32 Uq_10106Random10<EC, POS>::PositionOfDataMemberType(const char * namearg) const
  {

    return (-1);   //not found
  }  //has

  template<class EC, u32 POS>
  const UlamClassDataMemberInfo & Uq_10106Random10<EC, POS>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
    } //end switch
    FAIL(ILLEGAL_ARGUMENT);
  } //GetDataMemberInfo

  template<class EC, u32 POS>
  s32 Uq_10106Random10<EC, POS>::GetDataMemberCount() const
  {
    return 0;
  } //GetDataMemberCount

  template<class EC, u32 POS>
  const char * Uq_10106Random10<EC, POS>::GetMangledClassName() const
  {
    return "Uq_10106Random10";
  } //GetMangledClassName

} //MFM

