/**                                      -*- mode:C++ -*- */

#include "Ue_102213Box10.h"
#include "Uq_10109210DebugUtils10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_1010919AtomUtils10.h"
#include "Uq_10106Random10.h"
#include "Ue_102294Pbox10.h"
#include "Ue_10105Empty10.h"
#include "Ue_10104Wall10.h"
#include "Ue_10106Marker10.h"
#include "Uq_102323C2D10.h"
#include "Uq_10105MDist10.h"
#include "Uq_10104Fail10.h"

namespace MFM{

  template<class EC>
  Ue_102689214WindowServices10<EC>::Ue_102689214WindowServices10() : UlamElement<EC>(MFM_UUID_FOR("Ue102689214WindowServices10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("W");  // figure this out later
    Element<EC>::SetName("WindowServices");
  }

  template<class EC>
  Ue_102689214WindowServices10<EC>::~Ue_102689214WindowServices10(){}


  //! WindowServices.ulam:69:   Void reset() {
  template<class EC>
  void Ue_102689214WindowServices10<EC>::Uf_5reset(UlamContext<EC>& uc, T& Uv_4self) const
  {

    //! WindowServices.ulam:70:     for (Int i = 0; i < 4; i += 1) {
    {

      //! WindowServices.ulam:70:     for (Int i = 0; i < 4; i += 1) {

      //! WindowServices.ulam:70:     for (Int i = 0; i < 4; i += 1) {
      Ui_Ut_102321i Uv_1i;

      //! WindowServices.ulam:70:     for (Int i = 0; i < 4; i += 1) {
      const s32 Uh_tmpreg_loadable_3385 = 0;
      Uv_1i.write(Uh_tmpreg_loadable_3385);

      //! WindowServices.ulam:70:     for (Int i = 0; i < 4; i += 1) {
      while(true)
      {
        const s32 Uh_tmpreg_loadable_3387 = 4;
        const u32 Uh_tmpreg_loadable_3388 = Uv_1i.read();
        const s32 Uh_tmpreg_loadable_3389 = _SignExtend32(Uh_tmpreg_loadable_3388, 32);
        const u32 Uh_tmpreg_loadable_3390 = _BinOpCompareLessThanInt32(Uh_tmpreg_loadable_3389, Uh_tmpreg_loadable_3387, 32);

        if(!_Bool32ToCbool(Uh_tmpreg_loadable_3390, 1))
          break;

        //! WindowServices.ulam:70:     for (Int i = 0; i < 4; i += 1) {
        {

          //! WindowServices.ulam:71:       hitCount[i] = 0;
          const s32 Uh_tmpreg_loadable_3391 = 0;
          const u32 Uh_tmpreg_loadable_3392 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3391, 32, 8);
          const u32 Uh_tmpreg_loadable_3393 = Uv_1i.read();
          const s32 Uh_tmpreg_loadable_3394 = _SignExtend32(Uh_tmpreg_loadable_3393, 32);
          Up_Um_8hitCount::WriteArray(Uv_4self.GetBits(), Uh_tmpreg_loadable_3392, Uh_tmpreg_loadable_3394, 8u);

          //! WindowServices.ulam:72:       chosenIndex[i] = 0;
          const s32 Uh_tmpreg_loadable_3396 = 0;
          const u32 Uh_tmpreg_loadable_3397 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3396, 32, 6);
          const u32 Uh_tmpreg_loadable_3398 = Uv_1i.read();
          const s32 Uh_tmpreg_loadable_3399 = _SignExtend32(Uh_tmpreg_loadable_3398, 32);
          Up_Um_9211chosenIndex::WriteArray(Uv_4self.GetBits(), Uh_tmpreg_loadable_3397, Uh_tmpreg_loadable_3399, 6u);
        }

        //! WindowServices.ulam:70:     for (Int i = 0; i < 4; i += 1) {
Ul_endcontrolloop_11:
        __attribute__((__unused__));

        //! WindowServices.ulam:70:     for (Int i = 0; i < 4; i += 1) {
        const s32 Uh_tmpreg_loadable_3401 = 1;
        const u32 Uh_tmpreg_loadable_3402 = Uv_1i.read();
        const s32 Uh_tmpreg_loadable_3403 = _SignExtend32(Uh_tmpreg_loadable_3402, 32);
        const s32 Uh_tmpreg_loadable_3404 = _BinOpAddInt32(Uh_tmpreg_loadable_3403, Uh_tmpreg_loadable_3401, 32);
        Uv_1i.write(Uh_tmpreg_loadable_3404);
      } // end while
    }

    //! WindowServices.ulam:74:     currentIndex = (1<<6)-1;  // Unsigned(6).MAX_VAL
    const s32 Uh_tmpreg_loadable_3405 = 63;
    const u32 Uh_tmpreg_loadable_3406 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3405, 32, 6);
    Up_Um_9212currentIndex::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_3406);

  } // Uf_5reset



  //! WindowServices.ulam:59:   Void reset(Int first, Int last) {
  template<class EC>
  void Ue_102689214WindowServices10<EC>::Uf_5reset(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_5first, Ui_Ut_102321i Uv_4last) const
  {

    //! WindowServices.ulam:60:     reset((Radius) first, (Radius) last);
    const u32 Uh_tmpreg_loadable_3408 = Uv_5first.read();
    const s32 Uh_tmpreg_loadable_3409 = _SignExtend32(Uh_tmpreg_loadable_3408, 32);
    const u32 Uh_tmpreg_loadable_3410 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3409, 32, 3);
    const Ui_Ut_10131u Uh_tmpval_loadable_3411(Uh_tmpreg_loadable_3410);
    const u32 Uh_tmpreg_loadable_3412 = Uv_4last.read();
    const s32 Uh_tmpreg_loadable_3413 = _SignExtend32(Uh_tmpreg_loadable_3412, 32);
    const u32 Uh_tmpreg_loadable_3414 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3413, 32, 3);
    const Ui_Ut_10131u Uh_tmpval_loadable_3415(Uh_tmpreg_loadable_3414);
    Uf_5reset(uc, Uv_4self, Uh_tmpval_loadable_3411, Uh_tmpval_loadable_3415);

  } // Uf_5reset



  //! WindowServices.ulam:63:   Void reset(Radius first, Radius last) {
  template<class EC>
  void Ue_102689214WindowServices10<EC>::Uf_5reset(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10131u Uv_5first, Ui_Ut_10131u Uv_4last) const
  {

    //! WindowServices.ulam:64:     firstRadius = first;
    const u32 Uh_tmpreg_loadable_3416 = Uv_5first.read();
    Up_Um_9211firstRadius::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_3416);

    //! WindowServices.ulam:65:     lastRadius = last;
    const u32 Uh_tmpreg_loadable_3418 = Uv_4last.read();
    Up_Um_9210lastRadius::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_3418);

    //! WindowServices.ulam:66:     reset();
    Uf_5reset(uc, Uv_4self);

  } // Uf_5reset



  //! WindowServices.ulam:77:   Bool scan(Int t0) { return scan(t0, cNO_SITES_HIT, cNO_SITES_HIT, cNO_SITES_HIT); }
  template<class EC>
  Ui_Ut_10111b Ue_102689214WindowServices10<EC>::Uf_4scan(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_2t0) const
  {

    //! WindowServices.ulam:77:   Bool scan(Int t0) { return scan(t0, cNO_SITES_HIT, cNO_SITES_HIT, cNO_SITES_HIT); }
    const u32 Uh_tmpreg_loadable_3420 = Uv_2t0.read();
    const s32 Uh_tmpreg_loadable_3421 = _SignExtend32(Uh_tmpreg_loadable_3420, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3422(Uh_tmpreg_loadable_3421);
    const s32 Uh_tmpreg_loadable_3423 = -1;
    const Ui_Ut_102321i Uh_tmpval_loadable_3424(Uh_tmpreg_loadable_3423);
    const s32 Uh_tmpreg_loadable_3425 = -1;
    const Ui_Ut_102321i Uh_tmpval_loadable_3426(Uh_tmpreg_loadable_3425);
    const s32 Uh_tmpreg_loadable_3427 = -1;
    const Ui_Ut_102321i Uh_tmpval_loadable_3428(Uh_tmpreg_loadable_3427);
    const Ui_Ut_10111b Uh_tmpval_loadable_3429 = Uf_4scan(uc, Uv_4self, Uh_tmpval_loadable_3422, Uh_tmpval_loadable_3424, Uh_tmpval_loadable_3426, Uh_tmpval_loadable_3428);
    const u32 Uh_tmpreg_loadable_3430 = Uh_tmpval_loadable_3429.read();
    const Ui_Ut_10111b Uh_tmpval_loadable_3431(Uh_tmpreg_loadable_3430);
    return (Uh_tmpval_loadable_3431);

  } // Uf_4scan



  //! WindowServices.ulam:78:   Bool scan(Int t0, Int t1) { return scan(t0, t1, cNO_SITES_HIT, cNO_SITES_HIT); }
  template<class EC>
  Ui_Ut_10111b Ue_102689214WindowServices10<EC>::Uf_4scan(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_2t0, Ui_Ut_102321i Uv_2t1) const
  {

    //! WindowServices.ulam:78:   Bool scan(Int t0, Int t1) { return scan(t0, t1, cNO_SITES_HIT, cNO_SITES_HIT); }
    const u32 Uh_tmpreg_loadable_3432 = Uv_2t0.read();
    const s32 Uh_tmpreg_loadable_3433 = _SignExtend32(Uh_tmpreg_loadable_3432, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3434(Uh_tmpreg_loadable_3433);
    const u32 Uh_tmpreg_loadable_3435 = Uv_2t1.read();
    const s32 Uh_tmpreg_loadable_3436 = _SignExtend32(Uh_tmpreg_loadable_3435, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3437(Uh_tmpreg_loadable_3436);
    const s32 Uh_tmpreg_loadable_3438 = -1;
    const Ui_Ut_102321i Uh_tmpval_loadable_3439(Uh_tmpreg_loadable_3438);
    const s32 Uh_tmpreg_loadable_3440 = -1;
    const Ui_Ut_102321i Uh_tmpval_loadable_3441(Uh_tmpreg_loadable_3440);
    const Ui_Ut_10111b Uh_tmpval_loadable_3442 = Uf_4scan(uc, Uv_4self, Uh_tmpval_loadable_3434, Uh_tmpval_loadable_3437, Uh_tmpval_loadable_3439, Uh_tmpval_loadable_3441);
    const u32 Uh_tmpreg_loadable_3443 = Uh_tmpval_loadable_3442.read();
    const Ui_Ut_10111b Uh_tmpval_loadable_3444(Uh_tmpreg_loadable_3443);
    return (Uh_tmpval_loadable_3444);

  } // Uf_4scan



  //! WindowServices.ulam:79:   Bool scan(Int t0, Int t1, Int t2) { return scan(t0, t1, t2, cNO_SITES_HIT); }
  template<class EC>
  Ui_Ut_10111b Ue_102689214WindowServices10<EC>::Uf_4scan(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_2t0, Ui_Ut_102321i Uv_2t1, Ui_Ut_102321i Uv_2t2) const
  {

    //! WindowServices.ulam:79:   Bool scan(Int t0, Int t1, Int t2) { return scan(t0, t1, t2, cNO_SITES_HIT); }
    const u32 Uh_tmpreg_loadable_3445 = Uv_2t0.read();
    const s32 Uh_tmpreg_loadable_3446 = _SignExtend32(Uh_tmpreg_loadable_3445, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3447(Uh_tmpreg_loadable_3446);
    const u32 Uh_tmpreg_loadable_3448 = Uv_2t1.read();
    const s32 Uh_tmpreg_loadable_3449 = _SignExtend32(Uh_tmpreg_loadable_3448, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3450(Uh_tmpreg_loadable_3449);
    const u32 Uh_tmpreg_loadable_3451 = Uv_2t2.read();
    const s32 Uh_tmpreg_loadable_3452 = _SignExtend32(Uh_tmpreg_loadable_3451, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3453(Uh_tmpreg_loadable_3452);
    const s32 Uh_tmpreg_loadable_3454 = -1;
    const Ui_Ut_102321i Uh_tmpval_loadable_3455(Uh_tmpreg_loadable_3454);
    const Ui_Ut_10111b Uh_tmpval_loadable_3456 = Uf_4scan(uc, Uv_4self, Uh_tmpval_loadable_3447, Uh_tmpval_loadable_3450, Uh_tmpval_loadable_3453, Uh_tmpval_loadable_3455);
    const u32 Uh_tmpreg_loadable_3457 = Uh_tmpval_loadable_3456.read();
    const Ui_Ut_10111b Uh_tmpval_loadable_3458(Uh_tmpreg_loadable_3457);
    return (Uh_tmpval_loadable_3458);

  } // Uf_4scan



  //! WindowServices.ulam:98:   Bool scan(Int t0, Int t1, Int t2, Int t3) {
  template<class EC>
  Ui_Ut_10111b Ue_102689214WindowServices10<EC>::Uf_4scan(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_2t0, Ui_Ut_102321i Uv_2t1, Ui_Ut_102321i Uv_2t2, Ui_Ut_102321i Uv_2t3) const
  {

    //! WindowServices.ulam:100:     if (t0 < cMIN_SCAN_CODE ||
    u32 Uh_tmpreg_loadable_3459 = false;
    u32 Uh_tmpreg_loadable_3460 = false;
    u32 Uh_tmpreg_loadable_3461 = false;
    const s32 Uh_tmpreg_loadable_3462 = -4;
    const u32 Uh_tmpreg_loadable_3463 = Uv_2t0.read();
    const s32 Uh_tmpreg_loadable_3464 = _SignExtend32(Uh_tmpreg_loadable_3463, 32);
    const u32 Uh_tmpreg_loadable_3465 = _BinOpCompareLessThanInt32(Uh_tmpreg_loadable_3464, Uh_tmpreg_loadable_3462, 32);
    if(!_Bool32ToCbool(Uh_tmpreg_loadable_3465, 1))
    {
      const s32 Uh_tmpreg_loadable_3466 = -4;
      const u32 Uh_tmpreg_loadable_3467 = Uv_2t1.read();
      const s32 Uh_tmpreg_loadable_3468 = _SignExtend32(Uh_tmpreg_loadable_3467, 32);
      const u32 Uh_tmpreg_loadable_3469 = _BinOpCompareLessThanInt32(Uh_tmpreg_loadable_3468, Uh_tmpreg_loadable_3466, 32);
      Uh_tmpreg_loadable_3461 = Uh_tmpreg_loadable_3469;
    }
    else
    {
      Uh_tmpreg_loadable_3461 = Uh_tmpreg_loadable_3465;
    }
    if(!_Bool32ToCbool(Uh_tmpreg_loadable_3461, 1))
    {
      const s32 Uh_tmpreg_loadable_3470 = -4;
      const u32 Uh_tmpreg_loadable_3471 = Uv_2t2.read();
      const s32 Uh_tmpreg_loadable_3472 = _SignExtend32(Uh_tmpreg_loadable_3471, 32);
      const u32 Uh_tmpreg_loadable_3473 = _BinOpCompareLessThanInt32(Uh_tmpreg_loadable_3472, Uh_tmpreg_loadable_3470, 32);
      Uh_tmpreg_loadable_3460 = Uh_tmpreg_loadable_3473;
    }
    else
    {
      Uh_tmpreg_loadable_3460 = Uh_tmpreg_loadable_3461;
    }
    if(!_Bool32ToCbool(Uh_tmpreg_loadable_3460, 1))
    {
      const s32 Uh_tmpreg_loadable_3474 = -4;
      const u32 Uh_tmpreg_loadable_3475 = Uv_2t3.read();
      const s32 Uh_tmpreg_loadable_3476 = _SignExtend32(Uh_tmpreg_loadable_3475, 32);
      const u32 Uh_tmpreg_loadable_3477 = _BinOpCompareLessThanInt32(Uh_tmpreg_loadable_3476, Uh_tmpreg_loadable_3474, 32);
      Uh_tmpreg_loadable_3459 = Uh_tmpreg_loadable_3477;
    }
    else
    {
      Uh_tmpreg_loadable_3459 = Uh_tmpreg_loadable_3460;
    }
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3459, 1))
    {

      //! WindowServices.ulam:104:       fail.fail();
      Ut_Um_4fail::Uf_4fail(uc, Uv_4self);
    } // end if

    //! WindowServices.ulam:106:     AtomUtils tu;
    Ui_Uq_1010919AtomUtils10<EC> Uv_2tu;

    //! WindowServices.ulam:107:     Int et = tu.getEmptyType();

    //! WindowServices.ulam:107:     Int et = tu.getEmptyType();
    Ui_Ut_102321i Uv_2et;

    //! WindowServices.ulam:107:     Int et = tu.getEmptyType();
    const Ui_Ut_102321i Uh_tmpval_loadable_3480 = Ui_Uq_1010919AtomUtils10<EC>::Us::Uf_9212getEmptyType(uc, Uv_2tu.getRef());
    const s32 Uh_tmpreg_loadable_3481 = Uh_tmpval_loadable_3480.read();
    const s32 Uh_tmpreg_loadable_3482 = _SignExtend32(Uh_tmpreg_loadable_3481, 32);
    Uv_2et.write(Uh_tmpreg_loadable_3482);

    //! WindowServices.ulam:108:     reset();
    Uf_5reset(uc, Uv_4self);

    //! WindowServices.ulam:109:     for (Int slot = next(); slot >= 0; slot = next()) {
    {

      //! WindowServices.ulam:109:     for (Int slot = next(); slot >= 0; slot = next()) {

      //! WindowServices.ulam:109:     for (Int slot = next(); slot >= 0; slot = next()) {
      Ui_Ut_102321i Uv_4slot;

      //! WindowServices.ulam:109:     for (Int slot = next(); slot >= 0; slot = next()) {
      const Ui_Ut_102321i Uh_tmpval_loadable_3484 = Uf_4next(uc, Uv_4self);
      const s32 Uh_tmpreg_loadable_3485 = Uh_tmpval_loadable_3484.read();
      const s32 Uh_tmpreg_loadable_3486 = _SignExtend32(Uh_tmpreg_loadable_3485, 32);
      Uv_4slot.write(Uh_tmpreg_loadable_3486);

      //! WindowServices.ulam:109:     for (Int slot = next(); slot >= 0; slot = next()) {
      while(true)
      {
        const s32 Uh_tmpreg_loadable_3488 = 0;
        const u32 Uh_tmpreg_loadable_3489 = Uv_4slot.read();
        const s32 Uh_tmpreg_loadable_3490 = _SignExtend32(Uh_tmpreg_loadable_3489, 32);
        const u32 Uh_tmpreg_loadable_3491 = _BinOpCompareGreaterEqualInt32(Uh_tmpreg_loadable_3490, Uh_tmpreg_loadable_3488, 32);

        if(!_Bool32ToCbool(Uh_tmpreg_loadable_3491, 1))
          break;

        //! WindowServices.ulam:109:     for (Int slot = next(); slot >= 0; slot = next()) {
        {

          //! WindowServices.ulam:110:       Atom a = ew[slot];

          //! WindowServices.ulam:110:       Atom a = ew[slot];
          Ui_Ut_102961a<EC> Uv_1a;

          //! WindowServices.ulam:110:       Atom a = ew[slot];
          const u32 Uh_tmpreg_loadable_3492 = Uv_4slot.read();
          const s32 Uh_tmpreg_loadable_3493 = _SignExtend32(Uh_tmpreg_loadable_3492, 32);
          const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_3496 = Ut_Um_2ew::Uf_4aref(uc, Uv_4self, Ui_Ut_102321i(Uh_tmpreg_loadable_3493));
          const T Uh_tmpval_unpacked_3497 = Uh_tmpval_unpacked_3496.read();
          Uv_1a.write(Uh_tmpval_unpacked_3497);

          //! WindowServices.ulam:111:       Int at = tu.getType(a);

          //! WindowServices.ulam:111:       Int at = tu.getType(a);
          Ui_Ut_102321i Uv_2at;

          //! WindowServices.ulam:111:       Int at = tu.getType(a);
          const T Uh_tmpval_unpacked_3500 = Uv_1a.read();
          const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_3501(Uh_tmpval_unpacked_3500);
          const Ui_Ut_102321i Uh_tmpval_loadable_3502 = Ui_Uq_1010919AtomUtils10<EC>::Us::Uf_7getType(uc, Uv_2tu.getRef(), Uh_tmpval_unpacked_3501);
          const s32 Uh_tmpreg_loadable_3503 = Uh_tmpval_loadable_3502.read();
          const s32 Uh_tmpreg_loadable_3504 = _SignExtend32(Uh_tmpreg_loadable_3503, 32);
          Uv_2at.write(Uh_tmpreg_loadable_3504);

          //! WindowServices.ulam:112:       if (at < 0) continue;
          const s32 Uh_tmpreg_loadable_3506 = 0;
          const u32 Uh_tmpreg_loadable_3507 = Uv_2at.read();
          const s32 Uh_tmpreg_loadable_3508 = _SignExtend32(Uh_tmpreg_loadable_3507, 32);
          const u32 Uh_tmpreg_loadable_3509 = _BinOpCompareLessThanInt32(Uh_tmpreg_loadable_3508, Uh_tmpreg_loadable_3506, 32);
          if(_Bool32ToCbool(Uh_tmpreg_loadable_3509, 1))
          {

            //! WindowServices.ulam:112:       if (at < 0) continue;
            goto Ul_endcontrolloop_12;
          } // end if

          //! WindowServices.ulam:113:       if ((t0 == -4) || (t0 == -2 && at == et) || (t0 == -3 && at != et) || (at == t0)) hit(0);
          u32 Uh_tmpreg_loadable_3510 = false;
          u32 Uh_tmpreg_loadable_3511 = false;
          u32 Uh_tmpreg_loadable_3512 = false;
          const s32 Uh_tmpreg_loadable_3513 = -4;
          const u32 Uh_tmpreg_loadable_3514 = Uv_2t0.read();
          const s32 Uh_tmpreg_loadable_3515 = _SignExtend32(Uh_tmpreg_loadable_3514, 32);
          const u32 Uh_tmpreg_loadable_3516 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3515, Uh_tmpreg_loadable_3513, 32);
          if(!_Bool32ToCbool(Uh_tmpreg_loadable_3516, 1))
          {
            u32 Uh_tmpreg_loadable_3517 = false;
            const s32 Uh_tmpreg_loadable_3518 = -2;
            const u32 Uh_tmpreg_loadable_3519 = Uv_2t0.read();
            const s32 Uh_tmpreg_loadable_3520 = _SignExtend32(Uh_tmpreg_loadable_3519, 32);
            const u32 Uh_tmpreg_loadable_3521 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3520, Uh_tmpreg_loadable_3518, 32);
            if(_Bool32ToCbool(Uh_tmpreg_loadable_3521, 1))
            {
              const u32 Uh_tmpreg_loadable_3522 = Uv_2et.read();
              const s32 Uh_tmpreg_loadable_3523 = _SignExtend32(Uh_tmpreg_loadable_3522, 32);
              const u32 Uh_tmpreg_loadable_3524 = Uv_2at.read();
              const s32 Uh_tmpreg_loadable_3525 = _SignExtend32(Uh_tmpreg_loadable_3524, 32);
              const u32 Uh_tmpreg_loadable_3526 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3525, Uh_tmpreg_loadable_3523, 32);
              Uh_tmpreg_loadable_3517 = Uh_tmpreg_loadable_3526;
            }
            Uh_tmpreg_loadable_3512 = Uh_tmpreg_loadable_3517;
          }
          else
          {
            Uh_tmpreg_loadable_3512 = Uh_tmpreg_loadable_3516;
          }
          if(!_Bool32ToCbool(Uh_tmpreg_loadable_3512, 1))
          {
            u32 Uh_tmpreg_loadable_3527 = false;
            const s32 Uh_tmpreg_loadable_3528 = -3;
            const u32 Uh_tmpreg_loadable_3529 = Uv_2t0.read();
            const s32 Uh_tmpreg_loadable_3530 = _SignExtend32(Uh_tmpreg_loadable_3529, 32);
            const u32 Uh_tmpreg_loadable_3531 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3530, Uh_tmpreg_loadable_3528, 32);
            if(_Bool32ToCbool(Uh_tmpreg_loadable_3531, 1))
            {
              const u32 Uh_tmpreg_loadable_3532 = Uv_2et.read();
              const s32 Uh_tmpreg_loadable_3533 = _SignExtend32(Uh_tmpreg_loadable_3532, 32);
              const u32 Uh_tmpreg_loadable_3534 = Uv_2at.read();
              const s32 Uh_tmpreg_loadable_3535 = _SignExtend32(Uh_tmpreg_loadable_3534, 32);
              const u32 Uh_tmpreg_loadable_3536 = _BinOpCompareNotEqInt32(Uh_tmpreg_loadable_3535, Uh_tmpreg_loadable_3533, 32);
              Uh_tmpreg_loadable_3527 = Uh_tmpreg_loadable_3536;
            }
            Uh_tmpreg_loadable_3511 = Uh_tmpreg_loadable_3527;
          }
          else
          {
            Uh_tmpreg_loadable_3511 = Uh_tmpreg_loadable_3512;
          }
          if(!_Bool32ToCbool(Uh_tmpreg_loadable_3511, 1))
          {
            const u32 Uh_tmpreg_loadable_3537 = Uv_2t0.read();
            const s32 Uh_tmpreg_loadable_3538 = _SignExtend32(Uh_tmpreg_loadable_3537, 32);
            const u32 Uh_tmpreg_loadable_3539 = Uv_2at.read();
            const s32 Uh_tmpreg_loadable_3540 = _SignExtend32(Uh_tmpreg_loadable_3539, 32);
            const u32 Uh_tmpreg_loadable_3541 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3540, Uh_tmpreg_loadable_3538, 32);
            Uh_tmpreg_loadable_3510 = Uh_tmpreg_loadable_3541;
          }
          else
          {
            Uh_tmpreg_loadable_3510 = Uh_tmpreg_loadable_3511;
          }
          if(_Bool32ToCbool(Uh_tmpreg_loadable_3510, 1))
          {

            //! WindowServices.ulam:113:       if ((t0 == -4) || (t0 == -2 && at == et) || (t0 == -3 && at != et) || (at == t0)) hit(0);
            const s32 Uh_tmpreg_loadable_3542 = 0;
            const Ui_Ut_102321i Uh_tmpval_loadable_3543(Uh_tmpreg_loadable_3542);
            const Ui_Ut_10111b Uh_tmpval_loadable_3544 = Uf_3hit(uc, Uv_4self, Uh_tmpval_loadable_3543);
            const u32 Uh_tmpreg_loadable_3545 = Uh_tmpval_loadable_3544.read();
          } // end if

          //! WindowServices.ulam:114:       if ((t1 == -4) || (t1 == -2 && at == et) || (t1 == -3 && at != et) || (at == t1)) hit(1);
          u32 Uh_tmpreg_loadable_3546 = false;
          u32 Uh_tmpreg_loadable_3547 = false;
          u32 Uh_tmpreg_loadable_3548 = false;
          const s32 Uh_tmpreg_loadable_3549 = -4;
          const u32 Uh_tmpreg_loadable_3550 = Uv_2t1.read();
          const s32 Uh_tmpreg_loadable_3551 = _SignExtend32(Uh_tmpreg_loadable_3550, 32);
          const u32 Uh_tmpreg_loadable_3552 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3551, Uh_tmpreg_loadable_3549, 32);
          if(!_Bool32ToCbool(Uh_tmpreg_loadable_3552, 1))
          {
            u32 Uh_tmpreg_loadable_3553 = false;
            const s32 Uh_tmpreg_loadable_3554 = -2;
            const u32 Uh_tmpreg_loadable_3555 = Uv_2t1.read();
            const s32 Uh_tmpreg_loadable_3556 = _SignExtend32(Uh_tmpreg_loadable_3555, 32);
            const u32 Uh_tmpreg_loadable_3557 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3556, Uh_tmpreg_loadable_3554, 32);
            if(_Bool32ToCbool(Uh_tmpreg_loadable_3557, 1))
            {
              const u32 Uh_tmpreg_loadable_3558 = Uv_2et.read();
              const s32 Uh_tmpreg_loadable_3559 = _SignExtend32(Uh_tmpreg_loadable_3558, 32);
              const u32 Uh_tmpreg_loadable_3560 = Uv_2at.read();
              const s32 Uh_tmpreg_loadable_3561 = _SignExtend32(Uh_tmpreg_loadable_3560, 32);
              const u32 Uh_tmpreg_loadable_3562 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3561, Uh_tmpreg_loadable_3559, 32);
              Uh_tmpreg_loadable_3553 = Uh_tmpreg_loadable_3562;
            }
            Uh_tmpreg_loadable_3548 = Uh_tmpreg_loadable_3553;
          }
          else
          {
            Uh_tmpreg_loadable_3548 = Uh_tmpreg_loadable_3552;
          }
          if(!_Bool32ToCbool(Uh_tmpreg_loadable_3548, 1))
          {
            u32 Uh_tmpreg_loadable_3563 = false;
            const s32 Uh_tmpreg_loadable_3564 = -3;
            const u32 Uh_tmpreg_loadable_3565 = Uv_2t1.read();
            const s32 Uh_tmpreg_loadable_3566 = _SignExtend32(Uh_tmpreg_loadable_3565, 32);
            const u32 Uh_tmpreg_loadable_3567 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3566, Uh_tmpreg_loadable_3564, 32);
            if(_Bool32ToCbool(Uh_tmpreg_loadable_3567, 1))
            {
              const u32 Uh_tmpreg_loadable_3568 = Uv_2et.read();
              const s32 Uh_tmpreg_loadable_3569 = _SignExtend32(Uh_tmpreg_loadable_3568, 32);
              const u32 Uh_tmpreg_loadable_3570 = Uv_2at.read();
              const s32 Uh_tmpreg_loadable_3571 = _SignExtend32(Uh_tmpreg_loadable_3570, 32);
              const u32 Uh_tmpreg_loadable_3572 = _BinOpCompareNotEqInt32(Uh_tmpreg_loadable_3571, Uh_tmpreg_loadable_3569, 32);
              Uh_tmpreg_loadable_3563 = Uh_tmpreg_loadable_3572;
            }
            Uh_tmpreg_loadable_3547 = Uh_tmpreg_loadable_3563;
          }
          else
          {
            Uh_tmpreg_loadable_3547 = Uh_tmpreg_loadable_3548;
          }
          if(!_Bool32ToCbool(Uh_tmpreg_loadable_3547, 1))
          {
            const u32 Uh_tmpreg_loadable_3573 = Uv_2t1.read();
            const s32 Uh_tmpreg_loadable_3574 = _SignExtend32(Uh_tmpreg_loadable_3573, 32);
            const u32 Uh_tmpreg_loadable_3575 = Uv_2at.read();
            const s32 Uh_tmpreg_loadable_3576 = _SignExtend32(Uh_tmpreg_loadable_3575, 32);
            const u32 Uh_tmpreg_loadable_3577 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3576, Uh_tmpreg_loadable_3574, 32);
            Uh_tmpreg_loadable_3546 = Uh_tmpreg_loadable_3577;
          }
          else
          {
            Uh_tmpreg_loadable_3546 = Uh_tmpreg_loadable_3547;
          }
          if(_Bool32ToCbool(Uh_tmpreg_loadable_3546, 1))
          {

            //! WindowServices.ulam:114:       if ((t1 == -4) || (t1 == -2 && at == et) || (t1 == -3 && at != et) || (at == t1)) hit(1);
            const s32 Uh_tmpreg_loadable_3578 = 1;
            const Ui_Ut_102321i Uh_tmpval_loadable_3579(Uh_tmpreg_loadable_3578);
            const Ui_Ut_10111b Uh_tmpval_loadable_3580 = Uf_3hit(uc, Uv_4self, Uh_tmpval_loadable_3579);
            const u32 Uh_tmpreg_loadable_3581 = Uh_tmpval_loadable_3580.read();
          } // end if

          //! WindowServices.ulam:115:       if ((t2 == -4) || (t2 == -2 && at == et) || (t2 == -3 && at != et) || (at == t2)) hit(2);
          u32 Uh_tmpreg_loadable_3582 = false;
          u32 Uh_tmpreg_loadable_3583 = false;
          u32 Uh_tmpreg_loadable_3584 = false;
          const s32 Uh_tmpreg_loadable_3585 = -4;
          const u32 Uh_tmpreg_loadable_3586 = Uv_2t2.read();
          const s32 Uh_tmpreg_loadable_3587 = _SignExtend32(Uh_tmpreg_loadable_3586, 32);
          const u32 Uh_tmpreg_loadable_3588 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3587, Uh_tmpreg_loadable_3585, 32);
          if(!_Bool32ToCbool(Uh_tmpreg_loadable_3588, 1))
          {
            u32 Uh_tmpreg_loadable_3589 = false;
            const s32 Uh_tmpreg_loadable_3590 = -2;
            const u32 Uh_tmpreg_loadable_3591 = Uv_2t2.read();
            const s32 Uh_tmpreg_loadable_3592 = _SignExtend32(Uh_tmpreg_loadable_3591, 32);
            const u32 Uh_tmpreg_loadable_3593 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3592, Uh_tmpreg_loadable_3590, 32);
            if(_Bool32ToCbool(Uh_tmpreg_loadable_3593, 1))
            {
              const u32 Uh_tmpreg_loadable_3594 = Uv_2et.read();
              const s32 Uh_tmpreg_loadable_3595 = _SignExtend32(Uh_tmpreg_loadable_3594, 32);
              const u32 Uh_tmpreg_loadable_3596 = Uv_2at.read();
              const s32 Uh_tmpreg_loadable_3597 = _SignExtend32(Uh_tmpreg_loadable_3596, 32);
              const u32 Uh_tmpreg_loadable_3598 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3597, Uh_tmpreg_loadable_3595, 32);
              Uh_tmpreg_loadable_3589 = Uh_tmpreg_loadable_3598;
            }
            Uh_tmpreg_loadable_3584 = Uh_tmpreg_loadable_3589;
          }
          else
          {
            Uh_tmpreg_loadable_3584 = Uh_tmpreg_loadable_3588;
          }
          if(!_Bool32ToCbool(Uh_tmpreg_loadable_3584, 1))
          {
            u32 Uh_tmpreg_loadable_3599 = false;
            const s32 Uh_tmpreg_loadable_3600 = -3;
            const u32 Uh_tmpreg_loadable_3601 = Uv_2t2.read();
            const s32 Uh_tmpreg_loadable_3602 = _SignExtend32(Uh_tmpreg_loadable_3601, 32);
            const u32 Uh_tmpreg_loadable_3603 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3602, Uh_tmpreg_loadable_3600, 32);
            if(_Bool32ToCbool(Uh_tmpreg_loadable_3603, 1))
            {
              const u32 Uh_tmpreg_loadable_3604 = Uv_2et.read();
              const s32 Uh_tmpreg_loadable_3605 = _SignExtend32(Uh_tmpreg_loadable_3604, 32);
              const u32 Uh_tmpreg_loadable_3606 = Uv_2at.read();
              const s32 Uh_tmpreg_loadable_3607 = _SignExtend32(Uh_tmpreg_loadable_3606, 32);
              const u32 Uh_tmpreg_loadable_3608 = _BinOpCompareNotEqInt32(Uh_tmpreg_loadable_3607, Uh_tmpreg_loadable_3605, 32);
              Uh_tmpreg_loadable_3599 = Uh_tmpreg_loadable_3608;
            }
            Uh_tmpreg_loadable_3583 = Uh_tmpreg_loadable_3599;
          }
          else
          {
            Uh_tmpreg_loadable_3583 = Uh_tmpreg_loadable_3584;
          }
          if(!_Bool32ToCbool(Uh_tmpreg_loadable_3583, 1))
          {
            const u32 Uh_tmpreg_loadable_3609 = Uv_2t2.read();
            const s32 Uh_tmpreg_loadable_3610 = _SignExtend32(Uh_tmpreg_loadable_3609, 32);
            const u32 Uh_tmpreg_loadable_3611 = Uv_2at.read();
            const s32 Uh_tmpreg_loadable_3612 = _SignExtend32(Uh_tmpreg_loadable_3611, 32);
            const u32 Uh_tmpreg_loadable_3613 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3612, Uh_tmpreg_loadable_3610, 32);
            Uh_tmpreg_loadable_3582 = Uh_tmpreg_loadable_3613;
          }
          else
          {
            Uh_tmpreg_loadable_3582 = Uh_tmpreg_loadable_3583;
          }
          if(_Bool32ToCbool(Uh_tmpreg_loadable_3582, 1))
          {

            //! WindowServices.ulam:115:       if ((t2 == -4) || (t2 == -2 && at == et) || (t2 == -3 && at != et) || (at == t2)) hit(2);
            const s32 Uh_tmpreg_loadable_3614 = 2;
            const Ui_Ut_102321i Uh_tmpval_loadable_3615(Uh_tmpreg_loadable_3614);
            const Ui_Ut_10111b Uh_tmpval_loadable_3616 = Uf_3hit(uc, Uv_4self, Uh_tmpval_loadable_3615);
            const u32 Uh_tmpreg_loadable_3617 = Uh_tmpval_loadable_3616.read();
          } // end if

          //! WindowServices.ulam:116:       if ((t3 == -4) || (t3 == -2 && at == et) || (t3 == -3 && at != et) || (at == t3)) hit(3);
          u32 Uh_tmpreg_loadable_3618 = false;
          u32 Uh_tmpreg_loadable_3619 = false;
          u32 Uh_tmpreg_loadable_3620 = false;
          const s32 Uh_tmpreg_loadable_3621 = -4;
          const u32 Uh_tmpreg_loadable_3622 = Uv_2t3.read();
          const s32 Uh_tmpreg_loadable_3623 = _SignExtend32(Uh_tmpreg_loadable_3622, 32);
          const u32 Uh_tmpreg_loadable_3624 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3623, Uh_tmpreg_loadable_3621, 32);
          if(!_Bool32ToCbool(Uh_tmpreg_loadable_3624, 1))
          {
            u32 Uh_tmpreg_loadable_3625 = false;
            const s32 Uh_tmpreg_loadable_3626 = -2;
            const u32 Uh_tmpreg_loadable_3627 = Uv_2t3.read();
            const s32 Uh_tmpreg_loadable_3628 = _SignExtend32(Uh_tmpreg_loadable_3627, 32);
            const u32 Uh_tmpreg_loadable_3629 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3628, Uh_tmpreg_loadable_3626, 32);
            if(_Bool32ToCbool(Uh_tmpreg_loadable_3629, 1))
            {
              const u32 Uh_tmpreg_loadable_3630 = Uv_2et.read();
              const s32 Uh_tmpreg_loadable_3631 = _SignExtend32(Uh_tmpreg_loadable_3630, 32);
              const u32 Uh_tmpreg_loadable_3632 = Uv_2at.read();
              const s32 Uh_tmpreg_loadable_3633 = _SignExtend32(Uh_tmpreg_loadable_3632, 32);
              const u32 Uh_tmpreg_loadable_3634 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3633, Uh_tmpreg_loadable_3631, 32);
              Uh_tmpreg_loadable_3625 = Uh_tmpreg_loadable_3634;
            }
            Uh_tmpreg_loadable_3620 = Uh_tmpreg_loadable_3625;
          }
          else
          {
            Uh_tmpreg_loadable_3620 = Uh_tmpreg_loadable_3624;
          }
          if(!_Bool32ToCbool(Uh_tmpreg_loadable_3620, 1))
          {
            u32 Uh_tmpreg_loadable_3635 = false;
            const s32 Uh_tmpreg_loadable_3636 = -3;
            const u32 Uh_tmpreg_loadable_3637 = Uv_2t3.read();
            const s32 Uh_tmpreg_loadable_3638 = _SignExtend32(Uh_tmpreg_loadable_3637, 32);
            const u32 Uh_tmpreg_loadable_3639 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3638, Uh_tmpreg_loadable_3636, 32);
            if(_Bool32ToCbool(Uh_tmpreg_loadable_3639, 1))
            {
              const u32 Uh_tmpreg_loadable_3640 = Uv_2et.read();
              const s32 Uh_tmpreg_loadable_3641 = _SignExtend32(Uh_tmpreg_loadable_3640, 32);
              const u32 Uh_tmpreg_loadable_3642 = Uv_2at.read();
              const s32 Uh_tmpreg_loadable_3643 = _SignExtend32(Uh_tmpreg_loadable_3642, 32);
              const u32 Uh_tmpreg_loadable_3644 = _BinOpCompareNotEqInt32(Uh_tmpreg_loadable_3643, Uh_tmpreg_loadable_3641, 32);
              Uh_tmpreg_loadable_3635 = Uh_tmpreg_loadable_3644;
            }
            Uh_tmpreg_loadable_3619 = Uh_tmpreg_loadable_3635;
          }
          else
          {
            Uh_tmpreg_loadable_3619 = Uh_tmpreg_loadable_3620;
          }
          if(!_Bool32ToCbool(Uh_tmpreg_loadable_3619, 1))
          {
            const u32 Uh_tmpreg_loadable_3645 = Uv_2t3.read();
            const s32 Uh_tmpreg_loadable_3646 = _SignExtend32(Uh_tmpreg_loadable_3645, 32);
            const u32 Uh_tmpreg_loadable_3647 = Uv_2at.read();
            const s32 Uh_tmpreg_loadable_3648 = _SignExtend32(Uh_tmpreg_loadable_3647, 32);
            const u32 Uh_tmpreg_loadable_3649 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3648, Uh_tmpreg_loadable_3646, 32);
            Uh_tmpreg_loadable_3618 = Uh_tmpreg_loadable_3649;
          }
          else
          {
            Uh_tmpreg_loadable_3618 = Uh_tmpreg_loadable_3619;
          }
          if(_Bool32ToCbool(Uh_tmpreg_loadable_3618, 1))
          {

            //! WindowServices.ulam:116:       if ((t3 == -4) || (t3 == -2 && at == et) || (t3 == -3 && at != et) || (at == t3)) hit(3);
            const s32 Uh_tmpreg_loadable_3650 = 3;
            const Ui_Ut_102321i Uh_tmpval_loadable_3651(Uh_tmpreg_loadable_3650);
            const Ui_Ut_10111b Uh_tmpval_loadable_3652 = Uf_3hit(uc, Uv_4self, Uh_tmpval_loadable_3651);
            const u32 Uh_tmpreg_loadable_3653 = Uh_tmpval_loadable_3652.read();
          } // end if
        }

        //! WindowServices.ulam:109:     for (Int slot = next(); slot >= 0; slot = next()) {
Ul_endcontrolloop_12:
        __attribute__((__unused__));

        //! WindowServices.ulam:109:     for (Int slot = next(); slot >= 0; slot = next()) {
        const Ui_Ut_102321i Uh_tmpval_loadable_3654 = Uf_4next(uc, Uv_4self);
        const s32 Uh_tmpreg_loadable_3655 = Uh_tmpval_loadable_3654.read();
        const s32 Uh_tmpreg_loadable_3656 = _SignExtend32(Uh_tmpreg_loadable_3655, 32);
        Uv_4slot.write(Uh_tmpreg_loadable_3656);
      } // end while
    }

    //! WindowServices.ulam:118:     return (getHits(0) + getHits(1) + getHits(2) + getHits(3)) > 0;
    const s32 Uh_tmpreg_loadable_3658 = 0;
    const s32 Uh_tmpreg_loadable_3659 = 3;
    const Ui_Ut_102321i Uh_tmpval_loadable_3660(Uh_tmpreg_loadable_3659);
    const Ui_Ut_10181u Uh_tmpval_loadable_3661 = Uf_7getHits(uc, Uv_4self, Uh_tmpval_loadable_3660);
    const u32 Uh_tmpreg_loadable_3662 = Uh_tmpval_loadable_3661.read();
    const u32 Uh_tmpreg_loadable_3663 = _Unsigned32ToUnsigned32(Uh_tmpreg_loadable_3662, 8, 32);
    const s32 Uh_tmpreg_loadable_3664 = 2;
    const Ui_Ut_102321i Uh_tmpval_loadable_3665(Uh_tmpreg_loadable_3664);
    const Ui_Ut_10181u Uh_tmpval_loadable_3666 = Uf_7getHits(uc, Uv_4self, Uh_tmpval_loadable_3665);
    const u32 Uh_tmpreg_loadable_3667 = Uh_tmpval_loadable_3666.read();
    const u32 Uh_tmpreg_loadable_3668 = _Unsigned32ToUnsigned32(Uh_tmpreg_loadable_3667, 8, 32);
    const s32 Uh_tmpreg_loadable_3669 = 1;
    const Ui_Ut_102321i Uh_tmpval_loadable_3670(Uh_tmpreg_loadable_3669);
    const Ui_Ut_10181u Uh_tmpval_loadable_3671 = Uf_7getHits(uc, Uv_4self, Uh_tmpval_loadable_3670);
    const u32 Uh_tmpreg_loadable_3672 = Uh_tmpval_loadable_3671.read();
    const u32 Uh_tmpreg_loadable_3673 = _Unsigned32ToUnsigned32(Uh_tmpreg_loadable_3672, 8, 32);
    const s32 Uh_tmpreg_loadable_3674 = 0;
    const Ui_Ut_102321i Uh_tmpval_loadable_3675(Uh_tmpreg_loadable_3674);
    const Ui_Ut_10181u Uh_tmpval_loadable_3676 = Uf_7getHits(uc, Uv_4self, Uh_tmpval_loadable_3675);
    const u32 Uh_tmpreg_loadable_3677 = Uh_tmpval_loadable_3676.read();
    const u32 Uh_tmpreg_loadable_3678 = _Unsigned32ToUnsigned32(Uh_tmpreg_loadable_3677, 8, 32);
    const u32 Uh_tmpreg_loadable_3679 = _BinOpAddUnsigned32(Uh_tmpreg_loadable_3678, Uh_tmpreg_loadable_3673, 32);
    const u32 Uh_tmpreg_loadable_3680 = _BinOpAddUnsigned32(Uh_tmpreg_loadable_3679, Uh_tmpreg_loadable_3668, 32);
    const u32 Uh_tmpreg_loadable_3681 = _BinOpAddUnsigned32(Uh_tmpreg_loadable_3680, Uh_tmpreg_loadable_3663, 32);
    const s32 Uh_tmpreg_loadable_3682 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3681, 32, 32);
    const u32 Uh_tmpreg_loadable_3683 = _BinOpCompareGreaterThanInt32(Uh_tmpreg_loadable_3682, Uh_tmpreg_loadable_3658, 32);
    const Ui_Ut_10111b Uh_tmpval_loadable_3684(Uh_tmpreg_loadable_3683);
    return (Uh_tmpval_loadable_3684);

  } // Uf_4scan



  //! WindowServices.ulam:155:   Index getPick() {
  template<class EC>
  Ui_Ut_10161u Ue_102689214WindowServices10<EC>::Uf_7getPick(UlamContext<EC>& uc, T& Uv_4self) const
  {

    //! WindowServices.ulam:156:     return getPick((Slot) 0);
    const s32 Uh_tmpreg_loadable_3685 = 0;
    const u32 Uh_tmpreg_loadable_3686 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3685, 32, 2);
    const Ui_Ut_10121u Uh_tmpval_loadable_3687(Uh_tmpreg_loadable_3686);
    const Ui_Ut_10161u Uh_tmpval_loadable_3688 = Uf_7getPick(uc, Uv_4self, Uh_tmpval_loadable_3687);
    const u32 Uh_tmpreg_loadable_3689 = Uh_tmpval_loadable_3688.read();
    const Ui_Ut_10161u Uh_tmpval_loadable_3690(Uh_tmpreg_loadable_3689);
    return (Uh_tmpval_loadable_3690);

  } // Uf_7getPick



  //! WindowServices.ulam:164:   Index getPick(Int slot) { return getPick((Slot) slot); }
  template<class EC>
  Ui_Ut_10161u Ue_102689214WindowServices10<EC>::Uf_7getPick(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_4slot) const
  {

    //! WindowServices.ulam:164:   Index getPick(Int slot) { return getPick((Slot) slot); }
    const u32 Uh_tmpreg_loadable_3691 = Uv_4slot.read();
    const s32 Uh_tmpreg_loadable_3692 = _SignExtend32(Uh_tmpreg_loadable_3691, 32);
    const u32 Uh_tmpreg_loadable_3693 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3692, 32, 2);
    const Ui_Ut_10121u Uh_tmpval_loadable_3694(Uh_tmpreg_loadable_3693);
    const Ui_Ut_10161u Uh_tmpval_loadable_3695 = Uf_7getPick(uc, Uv_4self, Uh_tmpval_loadable_3694);
    const u32 Uh_tmpreg_loadable_3696 = Uh_tmpval_loadable_3695.read();
    const Ui_Ut_10161u Uh_tmpval_loadable_3697(Uh_tmpreg_loadable_3696);
    return (Uh_tmpval_loadable_3697);

  } // Uf_7getPick



  //! WindowServices.ulam:159:   Index getPick(Slot slot) {
  template<class EC>
  Ui_Ut_10161u Ue_102689214WindowServices10<EC>::Uf_7getPick(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10121u Uv_4slot) const
  {

    //! WindowServices.ulam:160:     if (getHits(slot) == 0)
    const s32 Uh_tmpreg_loadable_3698 = 0;
    const u32 Uh_tmpreg_loadable_3699 = Uv_4slot.read();
    const Ui_Ut_10121u Uh_tmpval_loadable_3700(Uh_tmpreg_loadable_3699);
    const Ui_Ut_10181u Uh_tmpval_loadable_3701 = Uf_7getHits(uc, Uv_4self, Uh_tmpval_loadable_3700);
    const u32 Uh_tmpreg_loadable_3702 = Uh_tmpval_loadable_3701.read();
    const s32 Uh_tmpreg_loadable_3703 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3702, 8, 32);
    const u32 Uh_tmpreg_loadable_3704 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3703, Uh_tmpreg_loadable_3698, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3704, 1))
    {

      //! WindowServices.ulam:161:       return (1<<6)-1;  // Unsigned(6).MAX_VAL
      const s32 Uh_tmpreg_loadable_3705 = 63;
      const u32 Uh_tmpreg_loadable_3706 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3705, 32, 6);
      const Ui_Ut_10161u Uh_tmpval_loadable_3707(Uh_tmpreg_loadable_3706);
      return (Uh_tmpval_loadable_3707);
    } // end if

    //! WindowServices.ulam:162:     return chosenIndex[slot];
    const u32 Uh_tmpreg_loadable_3708 = Uv_4slot.read();
    const u32 Uh_tmpreg_loadable_3710 = Up_Um_9211chosenIndex::ReadArray(Uv_4self.GetBits(), Uh_tmpreg_loadable_3708, 6u);
    const Ui_Ut_10161u Uh_tmpval_loadable_3711(Uh_tmpreg_loadable_3710);
    return (Uh_tmpval_loadable_3711);

  } // Uf_7getPick



  //! WindowServices.ulam:55:   Void init() {
  template<class EC>
  void Ue_102689214WindowServices10<EC>::Uf_4init(UlamContext<EC>& uc, T& Uv_4self) const
  {

    //! WindowServices.ulam:56:     reset(0, 4);
    const s32 Uh_tmpreg_loadable_3712 = 0;
    const Ui_Ut_102321i Uh_tmpval_loadable_3713(Uh_tmpreg_loadable_3712);
    const s32 Uh_tmpreg_loadable_3714 = 4;
    const Ui_Ut_102321i Uh_tmpval_loadable_3715(Uh_tmpreg_loadable_3714);
    Uf_5reset(uc, Uv_4self, Uh_tmpval_loadable_3713, Uh_tmpval_loadable_3715);

  } // Uf_4init



  //! WindowServices.ulam:121:   Int next() {
  template<class EC>
  Ui_Ut_102321i Ue_102689214WindowServices10<EC>::Uf_4next(UlamContext<EC>& uc, T& Uv_4self) const
  {

    //! WindowServices.ulam:122:     Index end = mdist.getLastIndex(lastRadius);

    //! WindowServices.ulam:122:     Index end = mdist.getLastIndex(lastRadius);
    Ui_Ut_10161u Uv_3end;

    //! WindowServices.ulam:122:     Index end = mdist.getLastIndex(lastRadius);
    const u32 Uh_tmpreg_loadable_3717 = Up_Um_9210lastRadius::Read(Uv_4self.GetBits());
    const Ui_Ut_10131u Uh_tmpval_loadable_3718(Uh_tmpreg_loadable_3717);
    const Ui_Ut_102321u Uh_tmpval_loadable_3719 = Ut_Um_5mdist::Uf_9212getLastIndex(uc, Uv_4self, Uh_tmpval_loadable_3718);
    const u32 Uh_tmpreg_loadable_3720 = Uh_tmpval_loadable_3719.read();
    const u32 Uh_tmpreg_loadable_3721 = _Unsigned32ToUnsigned32(Uh_tmpreg_loadable_3720, 32, 6);
    Uv_3end.write(Uh_tmpreg_loadable_3721);

    //! WindowServices.ulam:124:     if (currentIndex == (1<<6)-1)  // Unsigned(6).MAX_VAL
    const s32 Uh_tmpreg_loadable_3723 = 63;
    const u32 Uh_tmpreg_loadable_3724 = Up_Um_9212currentIndex::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_3725 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3724, 6, 32);
    const u32 Uh_tmpreg_loadable_3726 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3725, Uh_tmpreg_loadable_3723, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3726, 1))
    {

      //! WindowServices.ulam:125:       currentIndex = mdist.getFirstIndex(firstRadius);
      const u32 Uh_tmpreg_loadable_3728 = Up_Um_9211firstRadius::Read(Uv_4self.GetBits());
      const Ui_Ut_10131u Uh_tmpval_loadable_3729(Uh_tmpreg_loadable_3728);
      const Ui_Ut_102321u Uh_tmpval_loadable_3730 = Ut_Um_5mdist::Uf_9213getFirstIndex(uc, Uv_4self, Uh_tmpval_loadable_3729);
      const u32 Uh_tmpreg_loadable_3731 = Uh_tmpval_loadable_3730.read();
      const u32 Uh_tmpreg_loadable_3732 = _Unsigned32ToUnsigned32(Uh_tmpreg_loadable_3731, 32, 6);
      Up_Um_9212currentIndex::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_3732);
    } // end if
    else
    {

      //! WindowServices.ulam:126:     else if (currentIndex <= end)
      const u32 Uh_tmpreg_loadable_3734 = Uv_3end.read();
      const u32 Uh_tmpreg_loadable_3735 = _Unsigned32ToUnsigned32(Uh_tmpreg_loadable_3734, 6, 32);
      const u32 Uh_tmpreg_loadable_3736 = Up_Um_9212currentIndex::Read(Uv_4self.GetBits());
      const u32 Uh_tmpreg_loadable_3737 = _Unsigned32ToUnsigned32(Uh_tmpreg_loadable_3736, 6, 32);
      const u32 Uh_tmpreg_loadable_3738 = _BinOpCompareLessEqualUnsigned32(Uh_tmpreg_loadable_3737, Uh_tmpreg_loadable_3735, 32);
      if(_Bool32ToCbool(Uh_tmpreg_loadable_3738, 1))
      {

        //! WindowServices.ulam:127:       currentIndex += 1;
        const s32 Uh_tmpreg_loadable_3739 = 1;
        const u32 Uh_tmpreg_loadable_3740 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3739, 32, 6);
        const u32 Uh_tmpreg_loadable_3741 = Up_Um_9212currentIndex::Read(Uv_4self.GetBits());
        const u32 Uh_tmpreg_loadable_3742 = _BinOpAddUnsigned32(Uh_tmpreg_loadable_3741, Uh_tmpreg_loadable_3740, 6);
        Up_Um_9212currentIndex::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_3742);
      } // end if
    } //end else

    //! WindowServices.ulam:129:     if (currentIndex > end) return -1;
    const u32 Uh_tmpreg_loadable_3743 = Uv_3end.read();
    const u32 Uh_tmpreg_loadable_3744 = _Unsigned32ToUnsigned32(Uh_tmpreg_loadable_3743, 6, 32);
    const u32 Uh_tmpreg_loadable_3745 = Up_Um_9212currentIndex::Read(Uv_4self.GetBits());
    const u32 Uh_tmpreg_loadable_3746 = _Unsigned32ToUnsigned32(Uh_tmpreg_loadable_3745, 6, 32);
    const u32 Uh_tmpreg_loadable_3747 = _BinOpCompareGreaterThanUnsigned32(Uh_tmpreg_loadable_3746, Uh_tmpreg_loadable_3744, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3747, 1))
    {

      //! WindowServices.ulam:129:     if (currentIndex > end) return -1;
      const s32 Uh_tmpreg_loadable_3748 = -1;
      const Ui_Ut_102321i Uh_tmpval_loadable_3749(Uh_tmpreg_loadable_3748);
      return (Uh_tmpval_loadable_3749);
    } // end if

    //! WindowServices.ulam:131:     return currentIndex;
    const u32 Uh_tmpreg_loadable_3750 = Up_Um_9212currentIndex::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_3751 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3750, 6, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3752(Uh_tmpreg_loadable_3751);
    return (Uh_tmpval_loadable_3752);

  } // Uf_4next



  //! WindowServices.ulam:134:   Bool hit() { return hit((Slot) 0, (Unsigned) 1); }
  template<class EC>
  Ui_Ut_10111b Ue_102689214WindowServices10<EC>::Uf_3hit(UlamContext<EC>& uc, T& Uv_4self) const
  {

    //! WindowServices.ulam:134:   Bool hit() { return hit((Slot) 0, (Unsigned) 1); }
    const s32 Uh_tmpreg_loadable_3753 = 0;
    const u32 Uh_tmpreg_loadable_3754 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3753, 32, 2);
    const Ui_Ut_10121u Uh_tmpval_loadable_3755(Uh_tmpreg_loadable_3754);
    const s32 Uh_tmpreg_loadable_3756 = 1;
    const u32 Uh_tmpreg_loadable_3757 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3756, 32, 32);
    const Ui_Ut_102321u Uh_tmpval_loadable_3758(Uh_tmpreg_loadable_3757);
    const Ui_Ut_10111b Uh_tmpval_loadable_3759 = Uf_3hit(uc, Uv_4self, Uh_tmpval_loadable_3755, Uh_tmpval_loadable_3758);
    const u32 Uh_tmpreg_loadable_3760 = Uh_tmpval_loadable_3759.read();
    const Ui_Ut_10111b Uh_tmpval_loadable_3761(Uh_tmpreg_loadable_3760);
    return (Uh_tmpval_loadable_3761);

  } // Uf_3hit



  //! WindowServices.ulam:137:   Bool hit(Int slot) { return hit((Slot) slot, (Unsigned) 1); }
  template<class EC>
  Ui_Ut_10111b Ue_102689214WindowServices10<EC>::Uf_3hit(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_4slot) const
  {

    //! WindowServices.ulam:137:   Bool hit(Int slot) { return hit((Slot) slot, (Unsigned) 1); }
    const u32 Uh_tmpreg_loadable_3762 = Uv_4slot.read();
    const s32 Uh_tmpreg_loadable_3763 = _SignExtend32(Uh_tmpreg_loadable_3762, 32);
    const u32 Uh_tmpreg_loadable_3764 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3763, 32, 2);
    const Ui_Ut_10121u Uh_tmpval_loadable_3765(Uh_tmpreg_loadable_3764);
    const s32 Uh_tmpreg_loadable_3766 = 1;
    const u32 Uh_tmpreg_loadable_3767 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3766, 32, 32);
    const Ui_Ut_102321u Uh_tmpval_loadable_3768(Uh_tmpreg_loadable_3767);
    const Ui_Ut_10111b Uh_tmpval_loadable_3769 = Uf_3hit(uc, Uv_4self, Uh_tmpval_loadable_3765, Uh_tmpval_loadable_3768);
    const u32 Uh_tmpreg_loadable_3770 = Uh_tmpval_loadable_3769.read();
    const Ui_Ut_10111b Uh_tmpval_loadable_3771(Uh_tmpreg_loadable_3770);
    return (Uh_tmpval_loadable_3771);

  } // Uf_3hit



  //! WindowServices.ulam:136:   Bool hit(Slot slot) { return hit(slot, (Unsigned) 1); }
  template<class EC>
  Ui_Ut_10111b Ue_102689214WindowServices10<EC>::Uf_3hit(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10121u Uv_4slot) const
  {

    //! WindowServices.ulam:136:   Bool hit(Slot slot) { return hit(slot, (Unsigned) 1); }
    const u32 Uh_tmpreg_loadable_3772 = Uv_4slot.read();
    const Ui_Ut_10121u Uh_tmpval_loadable_3773(Uh_tmpreg_loadable_3772);
    const s32 Uh_tmpreg_loadable_3774 = 1;
    const u32 Uh_tmpreg_loadable_3775 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3774, 32, 32);
    const Ui_Ut_102321u Uh_tmpval_loadable_3776(Uh_tmpreg_loadable_3775);
    const Ui_Ut_10111b Uh_tmpval_loadable_3777 = Uf_3hit(uc, Uv_4self, Uh_tmpval_loadable_3773, Uh_tmpval_loadable_3776);
    const u32 Uh_tmpreg_loadable_3778 = Uh_tmpval_loadable_3777.read();
    const Ui_Ut_10111b Uh_tmpval_loadable_3779(Uh_tmpreg_loadable_3778);
    return (Uh_tmpval_loadable_3779);

  } // Uf_3hit



  //! WindowServices.ulam:139:   Bool hit(Slot slot, Unsigned weight) {
  template<class EC>
  Ui_Ut_10111b Ue_102689214WindowServices10<EC>::Uf_3hit(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10121u Uv_4slot, Ui_Ut_102321u Uv_6weight) const
  {

    //! WindowServices.ulam:140:     hitCount[slot] = hitCount[slot] + weight;
    const u32 Uh_tmpreg_loadable_3780 = Uv_6weight.read();
    const u32 Uh_tmpreg_loadable_3781 = Uv_4slot.read();
    const u32 Uh_tmpreg_loadable_3783 = Up_Um_8hitCount::ReadArray(Uv_4self.GetBits(), Uh_tmpreg_loadable_3781, 8u);
    const u32 Uh_tmpreg_loadable_3784 = _Unsigned32ToUnsigned32(Uh_tmpreg_loadable_3783, 8, 32);
    const u32 Uh_tmpreg_loadable_3785 = _BinOpAddUnsigned32(Uh_tmpreg_loadable_3784, Uh_tmpreg_loadable_3780, 32);
    const u32 Uh_tmpreg_loadable_3786 = _Unsigned32ToUnsigned32(Uh_tmpreg_loadable_3785, 32, 8);
    const u32 Uh_tmpreg_loadable_3787 = Uv_4slot.read();
    Up_Um_8hitCount::WriteArray(Uv_4self.GetBits(), Uh_tmpreg_loadable_3786, Uh_tmpreg_loadable_3787, 8u);

    //! WindowServices.ulam:141:     if (random.create((Unsigned) hitCount[slot]) < weight) {
    const u32 Uh_tmpreg_loadable_3789 = Uv_6weight.read();
    const u32 Uh_tmpreg_loadable_3791 = Uv_4slot.read();
    const u32 Uh_tmpreg_loadable_3793 = Up_Um_8hitCount::ReadArray(Uv_4self.GetBits(), Uh_tmpreg_loadable_3791, 8u);
    const u32 Uh_tmpreg_loadable_3794 = _Unsigned32ToUnsigned32(Uh_tmpreg_loadable_3793, 8, 32);
    const Ui_Ut_102321u Uh_tmpval_loadable_3795(Uh_tmpreg_loadable_3794);
    const Ui_Ut_102321u Uh_tmpval_loadable_3796 = Ut_Um_6random::Uf_6create(uc, Uv_4self, Uh_tmpval_loadable_3795);
    const u32 Uh_tmpreg_loadable_3797 = Uh_tmpval_loadable_3796.read();
    const u32 Uh_tmpreg_loadable_3798 = _BinOpCompareLessThanUnsigned32(Uh_tmpreg_loadable_3797, Uh_tmpreg_loadable_3789, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3798, 1))
    {

      //! WindowServices.ulam:141:     if (random.create((Unsigned) hitCount[slot]) < weight) {
      {

        //! WindowServices.ulam:142:       chosenIndex[slot] = currentIndex;
        const u32 Uh_tmpreg_loadable_3799 = Up_Um_9212currentIndex::Read(Uv_4self.GetBits());
        const u32 Uh_tmpreg_loadable_3800 = Uv_4slot.read();
        Up_Um_9211chosenIndex::WriteArray(Uv_4self.GetBits(), Uh_tmpreg_loadable_3799, Uh_tmpreg_loadable_3800, 6u);

        //! WindowServices.ulam:143:       return true;
        const u32 Uh_tmpreg_loadable_3802 = 1u;
        const Ui_Ut_10111b Uh_tmpval_loadable_3803(Uh_tmpreg_loadable_3802);
        return (Uh_tmpval_loadable_3803);
      }
    } // end if

    //! WindowServices.ulam:145:     return false;
    const u32 Uh_tmpreg_loadable_3804 = 0u;
    const Ui_Ut_10111b Uh_tmpval_loadable_3805(Uh_tmpreg_loadable_3804);
    return (Uh_tmpval_loadable_3805);

  } // Uf_3hit



  //! WindowServices.ulam:148:   Count getHits() {
  template<class EC>
  Ui_Ut_10181u Ue_102689214WindowServices10<EC>::Uf_7getHits(UlamContext<EC>& uc, T& Uv_4self) const
  {

    //! WindowServices.ulam:149:     return getHits((Slot) 0);
    const s32 Uh_tmpreg_loadable_3806 = 0;
    const u32 Uh_tmpreg_loadable_3807 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3806, 32, 2);
    const Ui_Ut_10121u Uh_tmpval_loadable_3808(Uh_tmpreg_loadable_3807);
    const Ui_Ut_10181u Uh_tmpval_loadable_3809 = Uf_7getHits(uc, Uv_4self, Uh_tmpval_loadable_3808);
    const u32 Uh_tmpreg_loadable_3810 = Uh_tmpval_loadable_3809.read();
    const Ui_Ut_10181u Uh_tmpval_loadable_3811(Uh_tmpreg_loadable_3810);
    return (Uh_tmpval_loadable_3811);

  } // Uf_7getHits



  //! WindowServices.ulam:153:   Count getHits(Int slot) { return getHits((Slot) slot); }
  template<class EC>
  Ui_Ut_10181u Ue_102689214WindowServices10<EC>::Uf_7getHits(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_4slot) const
  {

    //! WindowServices.ulam:153:   Count getHits(Int slot) { return getHits((Slot) slot); }
    const u32 Uh_tmpreg_loadable_3812 = Uv_4slot.read();
    const s32 Uh_tmpreg_loadable_3813 = _SignExtend32(Uh_tmpreg_loadable_3812, 32);
    const u32 Uh_tmpreg_loadable_3814 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3813, 32, 2);
    const Ui_Ut_10121u Uh_tmpval_loadable_3815(Uh_tmpreg_loadable_3814);
    const Ui_Ut_10181u Uh_tmpval_loadable_3816 = Uf_7getHits(uc, Uv_4self, Uh_tmpval_loadable_3815);
    const u32 Uh_tmpreg_loadable_3817 = Uh_tmpval_loadable_3816.read();
    const Ui_Ut_10181u Uh_tmpval_loadable_3818(Uh_tmpreg_loadable_3817);
    return (Uh_tmpval_loadable_3818);

  } // Uf_7getHits



  //! WindowServices.ulam:152:   Count getHits(Slot slot) { return hitCount[slot]; }
  template<class EC>
  Ui_Ut_10181u Ue_102689214WindowServices10<EC>::Uf_7getHits(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10121u Uv_4slot) const
  {

    //! WindowServices.ulam:152:   Count getHits(Slot slot) { return hitCount[slot]; }
    const u32 Uh_tmpreg_loadable_3819 = Uv_4slot.read();
    const u32 Uh_tmpreg_loadable_3821 = Up_Um_8hitCount::ReadArray(Uv_4self.GetBits(), Uh_tmpreg_loadable_3819, 8u);
    const Ui_Ut_10181u Uh_tmpval_loadable_3822(Uh_tmpreg_loadable_3821);
    return (Uh_tmpval_loadable_3822);

  } // Uf_7getHits



  //! WindowServices.ulam:166:   Int test() {
  template<class EC>
  Ui_Ut_102321i Ue_102689214WindowServices10<EC>::Uf_4test(UlamContext<EC>& uc, T& Uv_4self) const
  {

    //! WindowServices.ulam:167:     Int count = 0;

    //! WindowServices.ulam:167:     Int count = 0;
    Ui_Ut_102321i Uv_5count;

    //! WindowServices.ulam:167:     Int count = 0;
    const s32 Uh_tmpreg_loadable_3823 = 0;
    Uv_5count.write(Uh_tmpreg_loadable_3823);

    //! WindowServices.ulam:168:     Int n0 = 0;

    //! WindowServices.ulam:168:     Int n0 = 0;
    Ui_Ut_102321i Uv_2n0;

    //! WindowServices.ulam:168:     Int n0 = 0;
    const s32 Uh_tmpreg_loadable_3825 = 0;
    Uv_2n0.write(Uh_tmpreg_loadable_3825);

    //! WindowServices.ulam:170:     init();
    Uf_4init(uc, Uv_4self);

    //! WindowServices.ulam:172:     for (Int index = next(); index >= 0; index = next()) {
    {

      //! WindowServices.ulam:172:     for (Int index = next(); index >= 0; index = next()) {

      //! WindowServices.ulam:172:     for (Int index = next(); index >= 0; index = next()) {
      Ui_Ut_102321i Uv_5index;

      //! WindowServices.ulam:172:     for (Int index = next(); index >= 0; index = next()) {
      const Ui_Ut_102321i Uh_tmpval_loadable_3827 = Uf_4next(uc, Uv_4self);
      const s32 Uh_tmpreg_loadable_3828 = Uh_tmpval_loadable_3827.read();
      const s32 Uh_tmpreg_loadable_3829 = _SignExtend32(Uh_tmpreg_loadable_3828, 32);
      Uv_5index.write(Uh_tmpreg_loadable_3829);

      //! WindowServices.ulam:172:     for (Int index = next(); index >= 0; index = next()) {
      while(true)
      {
        const s32 Uh_tmpreg_loadable_3831 = 0;
        const u32 Uh_tmpreg_loadable_3832 = Uv_5index.read();
        const s32 Uh_tmpreg_loadable_3833 = _SignExtend32(Uh_tmpreg_loadable_3832, 32);
        const u32 Uh_tmpreg_loadable_3834 = _BinOpCompareGreaterEqualInt32(Uh_tmpreg_loadable_3833, Uh_tmpreg_loadable_3831, 32);

        if(!_Bool32ToCbool(Uh_tmpreg_loadable_3834, 1))
          break;

        //! WindowServices.ulam:172:     for (Int index = next(); index >= 0; index = next()) {
        {

          //! WindowServices.ulam:173:       count += 1;
          const s32 Uh_tmpreg_loadable_3835 = 1;
          const u32 Uh_tmpreg_loadable_3836 = Uv_5count.read();
          const s32 Uh_tmpreg_loadable_3837 = _SignExtend32(Uh_tmpreg_loadable_3836, 32);
          const s32 Uh_tmpreg_loadable_3838 = _BinOpAddInt32(Uh_tmpreg_loadable_3837, Uh_tmpreg_loadable_3835, 32);
          Uv_5count.write(Uh_tmpreg_loadable_3838);
        }

        //! WindowServices.ulam:172:     for (Int index = next(); index >= 0; index = next()) {
Ul_endcontrolloop_13:
        __attribute__((__unused__));

        //! WindowServices.ulam:172:     for (Int index = next(); index >= 0; index = next()) {
        const Ui_Ut_102321i Uh_tmpval_loadable_3839 = Uf_4next(uc, Uv_4self);
        const s32 Uh_tmpreg_loadable_3840 = Uh_tmpval_loadable_3839.read();
        const s32 Uh_tmpreg_loadable_3841 = _SignExtend32(Uh_tmpreg_loadable_3840, 32);
        Uv_5index.write(Uh_tmpreg_loadable_3841);
      } // end while
    }

    //! WindowServices.ulam:176:     if (count != 41) return 1;
    const s32 Uh_tmpreg_loadable_3843 = 41;
    const u32 Uh_tmpreg_loadable_3844 = Uv_5count.read();
    const s32 Uh_tmpreg_loadable_3845 = _SignExtend32(Uh_tmpreg_loadable_3844, 32);
    const u32 Uh_tmpreg_loadable_3846 = _BinOpCompareNotEqInt32(Uh_tmpreg_loadable_3845, Uh_tmpreg_loadable_3843, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3846, 1))
    {

      //! WindowServices.ulam:176:     if (count != 41) return 1;
      const s32 Uh_tmpreg_loadable_3847 = 1;
      const Ui_Ut_102321i Uh_tmpval_loadable_3848(Uh_tmpreg_loadable_3847);
      return (Uh_tmpval_loadable_3848);
    } // end if

    //! WindowServices.ulam:178:     count = 0;
    const s32 Uh_tmpreg_loadable_3849 = 0;
    Uv_5count.write(Uh_tmpreg_loadable_3849);

    //! WindowServices.ulam:179:     init();
    Uf_4init(uc, Uv_4self);

    //! WindowServices.ulam:180:     for (Int index2 = next(); index2 >= 0; index2 = next()) {
    {

      //! WindowServices.ulam:180:     for (Int index2 = next(); index2 >= 0; index2 = next()) {

      //! WindowServices.ulam:180:     for (Int index2 = next(); index2 >= 0; index2 = next()) {
      Ui_Ut_102321i Uv_6index2;

      //! WindowServices.ulam:180:     for (Int index2 = next(); index2 >= 0; index2 = next()) {
      const Ui_Ut_102321i Uh_tmpval_loadable_3851 = Uf_4next(uc, Uv_4self);
      const s32 Uh_tmpreg_loadable_3852 = Uh_tmpval_loadable_3851.read();
      const s32 Uh_tmpreg_loadable_3853 = _SignExtend32(Uh_tmpreg_loadable_3852, 32);
      Uv_6index2.write(Uh_tmpreg_loadable_3853);

      //! WindowServices.ulam:180:     for (Int index2 = next(); index2 >= 0; index2 = next()) {
      while(true)
      {
        const s32 Uh_tmpreg_loadable_3855 = 0;
        const u32 Uh_tmpreg_loadable_3856 = Uv_6index2.read();
        const s32 Uh_tmpreg_loadable_3857 = _SignExtend32(Uh_tmpreg_loadable_3856, 32);
        const u32 Uh_tmpreg_loadable_3858 = _BinOpCompareGreaterEqualInt32(Uh_tmpreg_loadable_3857, Uh_tmpreg_loadable_3855, 32);

        if(!_Bool32ToCbool(Uh_tmpreg_loadable_3858, 1))
          break;

        //! WindowServices.ulam:180:     for (Int index2 = next(); index2 >= 0; index2 = next()) {
        {

          //! WindowServices.ulam:181:       for (Int idx = 0; idx < 4; idx += 1) {
          {

            //! WindowServices.ulam:181:       for (Int idx = 0; idx < 4; idx += 1) {

            //! WindowServices.ulam:181:       for (Int idx = 0; idx < 4; idx += 1) {
            Ui_Ut_102321i Uv_3idx;

            //! WindowServices.ulam:181:       for (Int idx = 0; idx < 4; idx += 1) {
            const s32 Uh_tmpreg_loadable_3859 = 0;
            Uv_3idx.write(Uh_tmpreg_loadable_3859);

            //! WindowServices.ulam:181:       for (Int idx = 0; idx < 4; idx += 1) {
            while(true)
            {
              const s32 Uh_tmpreg_loadable_3861 = 4;
              const u32 Uh_tmpreg_loadable_3862 = Uv_3idx.read();
              const s32 Uh_tmpreg_loadable_3863 = _SignExtend32(Uh_tmpreg_loadable_3862, 32);
              const u32 Uh_tmpreg_loadable_3864 = _BinOpCompareLessThanInt32(Uh_tmpreg_loadable_3863, Uh_tmpreg_loadable_3861, 32);

              if(!_Bool32ToCbool(Uh_tmpreg_loadable_3864, 1))
                break;

              //! WindowServices.ulam:181:       for (Int idx = 0; idx < 4; idx += 1) {
              {

                //! WindowServices.ulam:182:         debug.print(-1);
                const s32 Uh_tmpreg_loadable_3866 = -1;
                const Ui_Ut_102321i Uh_tmpval_loadable_3867(Uh_tmpreg_loadable_3866);
                Ut_Um_5debug::Uf_5print(uc, Uv_4self, Uh_tmpval_loadable_3867);

                //! WindowServices.ulam:183:         debug.print(count);
                const u32 Uh_tmpreg_loadable_3869 = Uv_5count.read();
                const s32 Uh_tmpreg_loadable_3870 = _SignExtend32(Uh_tmpreg_loadable_3869, 32);
                const Ui_Ut_102321i Uh_tmpval_loadable_3871(Uh_tmpreg_loadable_3870);
                Ut_Um_5debug::Uf_5print(uc, Uv_4self, Uh_tmpval_loadable_3871);

                //! WindowServices.ulam:184:         debug.print(index2);
                const u32 Uh_tmpreg_loadable_3873 = Uv_6index2.read();
                const s32 Uh_tmpreg_loadable_3874 = _SignExtend32(Uh_tmpreg_loadable_3873, 32);
                const Ui_Ut_102321i Uh_tmpval_loadable_3875(Uh_tmpreg_loadable_3874);
                Ut_Um_5debug::Uf_5print(uc, Uv_4self, Uh_tmpval_loadable_3875);

                //! WindowServices.ulam:185:         debug.print(idx);
                const u32 Uh_tmpreg_loadable_3877 = Uv_3idx.read();
                const s32 Uh_tmpreg_loadable_3878 = _SignExtend32(Uh_tmpreg_loadable_3877, 32);
                const Ui_Ut_102321i Uh_tmpval_loadable_3879(Uh_tmpreg_loadable_3878);
                Ut_Um_5debug::Uf_5print(uc, Uv_4self, Uh_tmpval_loadable_3879);

                //! WindowServices.ulam:186:         n0 = (count&(1<<idx));
                const u32 Uh_tmpreg_loadable_3880 = Uv_3idx.read();
                const s32 Uh_tmpreg_loadable_3881 = _SignExtend32(Uh_tmpreg_loadable_3880, 32);
                const s32 Uh_tmpreg_loadable_3882 = 1;
                const s32 Uh_tmpreg_loadable_3883 = _ShiftOpLeftInt32(Uh_tmpreg_loadable_3882, Uh_tmpreg_loadable_3881, 32);
                const u32 Uh_tmpreg_loadable_3884 = Uv_5count.read();
                const s32 Uh_tmpreg_loadable_3885 = _SignExtend32(Uh_tmpreg_loadable_3884, 32);
                const s32 Uh_tmpreg_loadable_3886 = _BitwiseAndInt32(Uh_tmpreg_loadable_3885, Uh_tmpreg_loadable_3883, 32);
                Uv_2n0.write(Uh_tmpreg_loadable_3886);

                //! WindowServices.ulam:187:         debug.print((Unsigned) (count&(1<<idx)));
                const u32 Uh_tmpreg_loadable_3889 = Uv_3idx.read();
                const s32 Uh_tmpreg_loadable_3890 = _SignExtend32(Uh_tmpreg_loadable_3889, 32);
                const s32 Uh_tmpreg_loadable_3891 = 1;
                const s32 Uh_tmpreg_loadable_3892 = _ShiftOpLeftInt32(Uh_tmpreg_loadable_3891, Uh_tmpreg_loadable_3890, 32);
                const u32 Uh_tmpreg_loadable_3893 = Uv_5count.read();
                const s32 Uh_tmpreg_loadable_3894 = _SignExtend32(Uh_tmpreg_loadable_3893, 32);
                const s32 Uh_tmpreg_loadable_3895 = _BitwiseAndInt32(Uh_tmpreg_loadable_3894, Uh_tmpreg_loadable_3892, 32);
                const u32 Uh_tmpreg_loadable_3896 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3895, 32, 32);
                const Ui_Ut_102321u Uh_tmpval_loadable_3897(Uh_tmpreg_loadable_3896);
                Ut_Um_5debug::Uf_5print(uc, Uv_4self, Uh_tmpval_loadable_3897);

                //! WindowServices.ulam:188:         if (count&(1<<idx)) hit((Slot) idx);
                const u32 Uh_tmpreg_loadable_3898 = Uv_3idx.read();
                const s32 Uh_tmpreg_loadable_3899 = _SignExtend32(Uh_tmpreg_loadable_3898, 32);
                const s32 Uh_tmpreg_loadable_3900 = 1;
                const s32 Uh_tmpreg_loadable_3901 = _ShiftOpLeftInt32(Uh_tmpreg_loadable_3900, Uh_tmpreg_loadable_3899, 32);
                const u32 Uh_tmpreg_loadable_3902 = Uv_5count.read();
                const s32 Uh_tmpreg_loadable_3903 = _SignExtend32(Uh_tmpreg_loadable_3902, 32);
                const s32 Uh_tmpreg_loadable_3904 = _BitwiseAndInt32(Uh_tmpreg_loadable_3903, Uh_tmpreg_loadable_3901, 32);
                const u32 Uh_tmpreg_loadable_3905 = _Int32ToBool32(Uh_tmpreg_loadable_3904, 32, 1);
                if(_Bool32ToCbool(Uh_tmpreg_loadable_3905, 1))
                {

                  //! WindowServices.ulam:188:         if (count&(1<<idx)) hit((Slot) idx);
                  const u32 Uh_tmpreg_loadable_3906 = Uv_3idx.read();
                  const s32 Uh_tmpreg_loadable_3907 = _SignExtend32(Uh_tmpreg_loadable_3906, 32);
                  const u32 Uh_tmpreg_loadable_3908 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3907, 32, 2);
                  const Ui_Ut_10121u Uh_tmpval_loadable_3909(Uh_tmpreg_loadable_3908);
                  const Ui_Ut_10111b Uh_tmpval_loadable_3910 = Uf_3hit(uc, Uv_4self, Uh_tmpval_loadable_3909);
                  const u32 Uh_tmpreg_loadable_3911 = Uh_tmpval_loadable_3910.read();
                } // end if
              }

              //! WindowServices.ulam:181:       for (Int idx = 0; idx < 4; idx += 1) {
Ul_endcontrolloop_15:
              __attribute__((__unused__));

              //! WindowServices.ulam:181:       for (Int idx = 0; idx < 4; idx += 1) {
              const s32 Uh_tmpreg_loadable_3912 = 1;
              const u32 Uh_tmpreg_loadable_3913 = Uv_3idx.read();
              const s32 Uh_tmpreg_loadable_3914 = _SignExtend32(Uh_tmpreg_loadable_3913, 32);
              const s32 Uh_tmpreg_loadable_3915 = _BinOpAddInt32(Uh_tmpreg_loadable_3914, Uh_tmpreg_loadable_3912, 32);
              Uv_3idx.write(Uh_tmpreg_loadable_3915);
            } // end while
          }

          //! WindowServices.ulam:190:       count += 1;
          const s32 Uh_tmpreg_loadable_3916 = 1;
          const u32 Uh_tmpreg_loadable_3917 = Uv_5count.read();
          const s32 Uh_tmpreg_loadable_3918 = _SignExtend32(Uh_tmpreg_loadable_3917, 32);
          const s32 Uh_tmpreg_loadable_3919 = _BinOpAddInt32(Uh_tmpreg_loadable_3918, Uh_tmpreg_loadable_3916, 32);
          Uv_5count.write(Uh_tmpreg_loadable_3919);
        }

        //! WindowServices.ulam:180:     for (Int index2 = next(); index2 >= 0; index2 = next()) {
Ul_endcontrolloop_14:
        __attribute__((__unused__));

        //! WindowServices.ulam:180:     for (Int index2 = next(); index2 >= 0; index2 = next()) {
        const Ui_Ut_102321i Uh_tmpval_loadable_3920 = Uf_4next(uc, Uv_4self);
        const s32 Uh_tmpreg_loadable_3921 = Uh_tmpval_loadable_3920.read();
        const s32 Uh_tmpreg_loadable_3922 = _SignExtend32(Uh_tmpreg_loadable_3921, 32);
        Uv_6index2.write(Uh_tmpreg_loadable_3922);
      } // end while
    }

    //! WindowServices.ulam:192:     debug.print(-2);
    const s32 Uh_tmpreg_loadable_3925 = -2;
    const Ui_Ut_102321i Uh_tmpval_loadable_3926(Uh_tmpreg_loadable_3925);
    Ut_Um_5debug::Uf_5print(uc, Uv_4self, Uh_tmpval_loadable_3926);

    //! WindowServices.ulam:194:     n0 = getHits((Slot) 0);                // This works
    const s32 Uh_tmpreg_loadable_3927 = 0;
    const u32 Uh_tmpreg_loadable_3928 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3927, 32, 2);
    const Ui_Ut_10121u Uh_tmpval_loadable_3929(Uh_tmpreg_loadable_3928);
    const Ui_Ut_10181u Uh_tmpval_loadable_3930 = Uf_7getHits(uc, Uv_4self, Uh_tmpval_loadable_3929);
    const u32 Uh_tmpreg_loadable_3931 = Uh_tmpval_loadable_3930.read();
    const s32 Uh_tmpreg_loadable_3932 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3931, 8, 32);
    Uv_2n0.write(Uh_tmpreg_loadable_3932);

    //! WindowServices.ulam:195:     debug.print(n0);
    const u32 Uh_tmpreg_loadable_3935 = Uv_2n0.read();
    const s32 Uh_tmpreg_loadable_3936 = _SignExtend32(Uh_tmpreg_loadable_3935, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3937(Uh_tmpreg_loadable_3936);
    Ut_Um_5debug::Uf_5print(uc, Uv_4self, Uh_tmpval_loadable_3937);

    //! WindowServices.ulam:197:     n0 = getHits((Slot) 1);
    const s32 Uh_tmpreg_loadable_3938 = 1;
    const u32 Uh_tmpreg_loadable_3939 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3938, 32, 2);
    const Ui_Ut_10121u Uh_tmpval_loadable_3940(Uh_tmpreg_loadable_3939);
    const Ui_Ut_10181u Uh_tmpval_loadable_3941 = Uf_7getHits(uc, Uv_4self, Uh_tmpval_loadable_3940);
    const u32 Uh_tmpreg_loadable_3942 = Uh_tmpval_loadable_3941.read();
    const s32 Uh_tmpreg_loadable_3943 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3942, 8, 32);
    Uv_2n0.write(Uh_tmpreg_loadable_3943);

    //! WindowServices.ulam:198:     debug.print(n0);
    const u32 Uh_tmpreg_loadable_3946 = Uv_2n0.read();
    const s32 Uh_tmpreg_loadable_3947 = _SignExtend32(Uh_tmpreg_loadable_3946, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3948(Uh_tmpreg_loadable_3947);
    Ut_Um_5debug::Uf_5print(uc, Uv_4self, Uh_tmpval_loadable_3948);

    //! WindowServices.ulam:200:     n0 = getHits((Slot) 2);
    const s32 Uh_tmpreg_loadable_3949 = 2;
    const u32 Uh_tmpreg_loadable_3950 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3949, 32, 2);
    const Ui_Ut_10121u Uh_tmpval_loadable_3951(Uh_tmpreg_loadable_3950);
    const Ui_Ut_10181u Uh_tmpval_loadable_3952 = Uf_7getHits(uc, Uv_4self, Uh_tmpval_loadable_3951);
    const u32 Uh_tmpreg_loadable_3953 = Uh_tmpval_loadable_3952.read();
    const s32 Uh_tmpreg_loadable_3954 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3953, 8, 32);
    Uv_2n0.write(Uh_tmpreg_loadable_3954);

    //! WindowServices.ulam:201:     debug.print(n0);
    const u32 Uh_tmpreg_loadable_3957 = Uv_2n0.read();
    const s32 Uh_tmpreg_loadable_3958 = _SignExtend32(Uh_tmpreg_loadable_3957, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3959(Uh_tmpreg_loadable_3958);
    Ut_Um_5debug::Uf_5print(uc, Uv_4self, Uh_tmpval_loadable_3959);

    //! WindowServices.ulam:203:     n0 = getHits((Slot) 3);
    const s32 Uh_tmpreg_loadable_3960 = 3;
    const u32 Uh_tmpreg_loadable_3961 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3960, 32, 2);
    const Ui_Ut_10121u Uh_tmpval_loadable_3962(Uh_tmpreg_loadable_3961);
    const Ui_Ut_10181u Uh_tmpval_loadable_3963 = Uf_7getHits(uc, Uv_4self, Uh_tmpval_loadable_3962);
    const u32 Uh_tmpreg_loadable_3964 = Uh_tmpval_loadable_3963.read();
    const s32 Uh_tmpreg_loadable_3965 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3964, 8, 32);
    Uv_2n0.write(Uh_tmpreg_loadable_3965);

    //! WindowServices.ulam:204:     debug.print(n0);
    const u32 Uh_tmpreg_loadable_3968 = Uv_2n0.read();
    const s32 Uh_tmpreg_loadable_3969 = _SignExtend32(Uh_tmpreg_loadable_3968, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_3970(Uh_tmpreg_loadable_3969);
    Ut_Um_5debug::Uf_5print(uc, Uv_4self, Uh_tmpval_loadable_3970);

    //! WindowServices.ulam:206:     return 0;
    const s32 Uh_tmpreg_loadable_3971 = 0;
    const Ui_Ut_102321i Uh_tmpval_loadable_3972(Uh_tmpreg_loadable_3971);
    return (Uh_tmpval_loadable_3972);

  } // Uf_4test


  template<class EC>
  s32 Ue_102689214WindowServices10<EC>::PositionOfDataMemberType(const char * namearg) const
  {
    if(!strcmp(namearg,"Uq_10109211EventWindow10")) return (0);   //pos offset
    if(!strcmp(namearg,"Uq_10104Fail10")) return (0);   //pos offset
    if(!strcmp(namearg,"Uq_10105MDist10")) return (0);   //pos offset
    if(!strcmp(namearg,"Uq_10106Random10")) return (0);   //pos offset
    if(!strcmp(namearg,"Uq_10109210DebugUtils10")) return (0);   //pos offset

    return (-1);   //not found
  }  //has

  template<class EC>
  const UlamClassDataMemberInfo & Ue_102689214WindowServices10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10105MDist10", "mdist", 0u); return i; }
      case 1: { static UlamClassDataMemberInfo i("Uq_10106Random10", "random", 0u); return i; }
      case 2: { static UlamClassDataMemberInfo i("Uq_10109210DebugUtils10", "debug", 0u); return i; }
      case 3: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; }
      case 4: { static UlamClassDataMemberInfo i("Uq_10104Fail10", "fail", 0u); return i; }
      case 5: { static UlamClassDataMemberInfo i("Ut_10131u", "firstRadius", 0u); return i; }
      case 6: { static UlamClassDataMemberInfo i("Ut_10131u", "lastRadius", 3u); return i; }
      case 7: { static UlamClassDataMemberInfo i("Ut_10161u", "currentIndex", 6u); return i; }
      case 8: { static UlamClassDataMemberInfo i("Ut_14181u", "hitCount", 12u); return i; }
      case 9: { static UlamClassDataMemberInfo i("Ut_14161u", "chosenIndex", 44u); return i; }
    } //end switch
    FAIL(ILLEGAL_ARGUMENT);
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_102689214WindowServices10<EC>::GetDataMemberCount() const
  {
    return 10;
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_102689214WindowServices10<EC>::GetMangledClassName() const
  {
    return "Ue_102689214WindowServices10";
  } //GetMangledClassName

  template<class EC>
  bool Ue_102689214WindowServices10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType());
  }   //is

} //MFM

