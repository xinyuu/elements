/**                                      -*- mode:C++ -*- */

#include "Ue_102213Box10.h"
#include "Uq_10109210DebugUtils10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_1010919AtomUtils10.h"
#include "Uq_10106Random10.h"
#include "Ue_102689214WindowServices10.h"
#include "Ue_10105Empty10.h"
#include "Ue_10104Wall10.h"
#include "Ue_10106Marker10.h"
#include "Uq_102323C2D10.h"
#include "Uq_10105MDist10.h"
#include "Uq_10104Fail10.h"

namespace MFM{

  template<class EC>
  Ue_102294Pbox10<EC>::Ue_102294Pbox10() : UlamElement<EC>(MFM_UUID_FOR("Ue102294Pbox10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("P");  // figure this out later
    Element<EC>::SetName("Pbox");
  }

  template<class EC>
  Ue_102294Pbox10<EC>::~Ue_102294Pbox10(){}


  //! Pbox.ulam:16:   Void behave(){
  template<class EC>
  void Ue_102294Pbox10<EC>::Uf_6behave(UlamContext<EC>& uc, T& Uv_4self) const
  {

    //! Pbox.ulam:17:     Bool canSwap=true;

    //! Pbox.ulam:17:     Bool canSwap=true;
    Ui_Ut_10111b Uv_7canSwap;

    //! Pbox.ulam:17:     Bool canSwap=true;
    const u32 Uh_tmpreg_loadable_3973 = 1u;
    Uv_7canSwap.write(Uh_tmpreg_loadable_3973);

    //! Pbox.ulam:18:     WindowServices ws;
    Ui_Ue_102689214WindowServices10<EC> Uv_2ws = Ue_102689214WindowServices10<EC>::THE_INSTANCE.GetDefaultAtom();

    //! Pbox.ulam:19:     if(ns==4){
    const s32 Uh_tmpreg_loadable_3975 = 4;
    const u32 Uh_tmpreg_loadable_3976 = Up_Um_2ns::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_3977 = _Unsigned32ToInt32(Uh_tmpreg_loadable_3976, 3, 32);
    const u32 Uh_tmpreg_loadable_3978 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3977, Uh_tmpreg_loadable_3975, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3978, 1))
    {

      //! Pbox.ulam:19:     if(ns==4){
      {

        //! Pbox.ulam:20:       ns=0;
        const s32 Uh_tmpreg_loadable_3979 = 0;
        const u32 Uh_tmpreg_loadable_3980 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3979, 32, 3);
        Up_Um_2ns::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_3980);
      }
    } // end if

    //! Pbox.ulam:22:     ns+=1;
    const s32 Uh_tmpreg_loadable_3982 = 1;
    const u32 Uh_tmpreg_loadable_3983 = _Int32ToUnsigned32(Uh_tmpreg_loadable_3982, 32, 3);
    const u32 Uh_tmpreg_loadable_3984 = Up_Um_2ns::Read(Uv_4self.GetBits());
    const u32 Uh_tmpreg_loadable_3985 = _BinOpAddUnsigned32(Uh_tmpreg_loadable_3984, Uh_tmpreg_loadable_3983, 3);
    Up_Um_2ns::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_3985);

    //! Pbox.ulam:23:     ew.changeSymmetry(ns);
    const u32 Uh_tmpreg_loadable_3987 = Up_Um_2ns::Read(Uv_4self.GetBits());
    const Ui_Ut_10131u Uh_tmpval_loadable_3988(Uh_tmpreg_loadable_3987);
    const Ui_Ut_10131u Uh_tmpval_loadable_3989 = Ut_Um_2ew::Uf_9214changeSymmetry(uc, Uv_4self, Uh_tmpval_loadable_3988);
    const u32 Uh_tmpreg_loadable_3990 = Uh_tmpval_loadable_3989.read();

    //! Pbox.ulam:24:     if(countAlone==0){
    const s32 Uh_tmpreg_loadable_3991 = 0;
    const u32 Uh_tmpreg_loadable_3992 = Up_Um_9210countAlone::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_3993 = _SignExtend32(Uh_tmpreg_loadable_3992, 8);
    const s32 Uh_tmpreg_loadable_3994 = _Int32ToInt32(Uh_tmpreg_loadable_3993, 8, 32);
    const u32 Uh_tmpreg_loadable_3995 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_3994, Uh_tmpreg_loadable_3991, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_3995, 1))
    {

      //! Pbox.ulam:24:     if(countAlone==0){
      {

        //! Pbox.ulam:25:       abs=1;
        const s32 Uh_tmpreg_loadable_3996 = 1;
        const s32 Uh_tmpreg_loadable_3997 = _Int32ToInt32(Uh_tmpreg_loadable_3996, 32, 8);
        Up_Um_3abs::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_3997);
      }
    } // end if
    else
    {

      //! Pbox.ulam:26:     }else if(countAlone<0){
      const s32 Uh_tmpreg_loadable_3999 = 0;
      const u32 Uh_tmpreg_loadable_41000 = Up_Um_9210countAlone::Read(Uv_4self.GetBits());
      const s32 Uh_tmpreg_loadable_41001 = _SignExtend32(Uh_tmpreg_loadable_41000, 8);
      const s32 Uh_tmpreg_loadable_41002 = _Int32ToInt32(Uh_tmpreg_loadable_41001, 8, 32);
      const u32 Uh_tmpreg_loadable_41003 = _BinOpCompareLessThanInt32(Uh_tmpreg_loadable_41002, Uh_tmpreg_loadable_3999, 32);
      if(_Bool32ToCbool(Uh_tmpreg_loadable_41003, 1))
      {

        //! Pbox.ulam:26:     }else if(countAlone<0){
        {

          //! Pbox.ulam:27:       abs=(-1)*countAlone;
          const u32 Uh_tmpreg_loadable_41004 = Up_Um_9210countAlone::Read(Uv_4self.GetBits());
          const s32 Uh_tmpreg_loadable_41005 = _SignExtend32(Uh_tmpreg_loadable_41004, 8);
          const s32 Uh_tmpreg_loadable_41006 = _Int32ToInt32(Uh_tmpreg_loadable_41005, 8, 32);
          const s32 Uh_tmpreg_loadable_41007 = -1;
          const s32 Uh_tmpreg_loadable_41008 = _BinOpMultiplyInt32(Uh_tmpreg_loadable_41007, Uh_tmpreg_loadable_41006, 32);
          const s32 Uh_tmpreg_loadable_41009 = _Int32ToInt32(Uh_tmpreg_loadable_41008, 32, 8);
          Up_Um_3abs::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_41009);
        }
      } // end if
    } //end else

    //! Pbox.ulam:29:     if(ew[1] is Box){
    const s32 Uh_tmpreg_loadable_41011 = 1;
    const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_41014 = Ut_Um_2ew::Uf_4aref(uc, Uv_4self, Ui_Ut_102321i(Uh_tmpreg_loadable_41011));
    const T Uh_tmpval_unpacked_41015 = Uh_tmpval_unpacked_41014.read();
    const u32 Uh_tmpreg_loadable_41016 = Ue_102213Box10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_tmpval_unpacked_41015);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_41016, 1))
    {

      //! Pbox.ulam:29:     if(ew[1] is Box){
      {

        //! Pbox.ulam:34:       countAlone+=2;
        const s32 Uh_tmpreg_loadable_41017 = 2;
        const s32 Uh_tmpreg_loadable_41018 = _Int32ToInt32(Uh_tmpreg_loadable_41017, 32, 8);
        const u32 Uh_tmpreg_loadable_41019 = Up_Um_9210countAlone::Read(Uv_4self.GetBits());
        const s32 Uh_tmpreg_loadable_41020 = _SignExtend32(Uh_tmpreg_loadable_41019, 8);
        const s32 Uh_tmpreg_loadable_41021 = _BinOpAddInt32(Uh_tmpreg_loadable_41020, Uh_tmpreg_loadable_41018, 8);
        Up_Um_9210countAlone::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_41021);
      }
    } // end if
    else
    {

      //! Pbox.ulam:35:     }else if(ew[1] is Pbox){
      const s32 Uh_tmpreg_loadable_41022 = 1;
      const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_41025 = Ut_Um_2ew::Uf_4aref(uc, Uv_4self, Ui_Ut_102321i(Uh_tmpreg_loadable_41022));
      const T Uh_tmpval_unpacked_41026 = Uh_tmpval_unpacked_41025.read();
      const u32 Uh_tmpreg_loadable_41027 = Ue_102294Pbox10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_tmpval_unpacked_41026);
      if(_Bool32ToCbool(Uh_tmpreg_loadable_41027, 1))
      {

        //! Pbox.ulam:35:     }else if(ew[1] is Pbox){
        {

          //! Pbox.ulam:40:       countAlone+=2;
          const s32 Uh_tmpreg_loadable_41028 = 2;
          const s32 Uh_tmpreg_loadable_41029 = _Int32ToInt32(Uh_tmpreg_loadable_41028, 32, 8);
          const u32 Uh_tmpreg_loadable_41030 = Up_Um_9210countAlone::Read(Uv_4self.GetBits());
          const s32 Uh_tmpreg_loadable_41031 = _SignExtend32(Uh_tmpreg_loadable_41030, 8);
          const s32 Uh_tmpreg_loadable_41032 = _BinOpAddInt32(Uh_tmpreg_loadable_41031, Uh_tmpreg_loadable_41029, 8);
          Up_Um_9210countAlone::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_41032);
        }
      } // end if
      else
      {

        //! Pbox.ulam:41:     }else if(ew[1] is Empty){
        const s32 Uh_tmpreg_loadable_41033 = 1;
        const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_41036 = Ut_Um_2ew::Uf_4aref(uc, Uv_4self, Ui_Ut_102321i(Uh_tmpreg_loadable_41033));
        const T Uh_tmpval_unpacked_41037 = Uh_tmpval_unpacked_41036.read();
        const u32 Uh_tmpreg_loadable_41038 = Ue_10105Empty10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_tmpval_unpacked_41037);
        if(_Bool32ToCbool(Uh_tmpreg_loadable_41038, 1))
        {

          //! Pbox.ulam:41:     }else if(ew[1] is Empty){
          {

            //! Pbox.ulam:42:       if(rd.oneIn((Int)abs)){
            const u32 Uh_tmpreg_loadable_41040 = Up_Um_3abs::Read(Uv_4self.GetBits());
            const s32 Uh_tmpreg_loadable_41041 = _SignExtend32(Uh_tmpreg_loadable_41040, 8);
            const s32 Uh_tmpreg_loadable_41042 = _Int32ToInt32(Uh_tmpreg_loadable_41041, 8, 32);
            const Ui_Ut_102321i Uh_tmpval_loadable_41043(Uh_tmpreg_loadable_41042);
            const Ui_Ut_10111b Uh_tmpval_loadable_41044 = Ut_Um_2rd::Uf_5oneIn(uc, Uv_4self, Uh_tmpval_loadable_41043);
            const u32 Uh_tmpreg_loadable_41045 = Uh_tmpval_loadable_41044.read();
            if(_Bool32ToCbool(Uh_tmpreg_loadable_41045, 1))
            {

              //! Pbox.ulam:42:       if(rd.oneIn((Int)abs)){
              {

                //! Pbox.ulam:43: 	countAlone-=1;
                const s32 Uh_tmpreg_loadable_41046 = 1;
                const s32 Uh_tmpreg_loadable_41047 = _Int32ToInt32(Uh_tmpreg_loadable_41046, 32, 8);
                const u32 Uh_tmpreg_loadable_41048 = Up_Um_9210countAlone::Read(Uv_4self.GetBits());
                const s32 Uh_tmpreg_loadable_41049 = _SignExtend32(Uh_tmpreg_loadable_41048, 8);
                const s32 Uh_tmpreg_loadable_41050 = _BinOpSubtractInt32(Uh_tmpreg_loadable_41049, Uh_tmpreg_loadable_41047, 8);
                Up_Um_9210countAlone::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_41050);
              }
            } // end if
          }
        } // end if
        else
        {

          //! Pbox.ulam:45:     }else if(ew[1] is Wall){
          const s32 Uh_tmpreg_loadable_41051 = 1;
          const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_41054 = Ut_Um_2ew::Uf_4aref(uc, Uv_4self, Ui_Ut_102321i(Uh_tmpreg_loadable_41051));
          const T Uh_tmpval_unpacked_41055 = Uh_tmpval_unpacked_41054.read();
          const u32 Uh_tmpreg_loadable_41056 = Ue_10104Wall10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_tmpval_unpacked_41055);
          if(_Bool32ToCbool(Uh_tmpreg_loadable_41056, 1))
          {

            //! Pbox.ulam:45:     }else if(ew[1] is Wall){
            {

              //! Pbox.ulam:46:       canSwap=false;
              const u32 Uh_tmpreg_loadable_41057 = 0u;
              Uv_7canSwap.write(Uh_tmpreg_loadable_41057);
            }
          } // end if
        } //end else
      } //end else
    } //end else

    //! Pbox.ulam:48:     if(countAlone<=-15){
    const s32 Uh_tmpreg_loadable_41059 = -15;
    const u32 Uh_tmpreg_loadable_41060 = Up_Um_9210countAlone::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_41061 = _SignExtend32(Uh_tmpreg_loadable_41060, 8);
    const s32 Uh_tmpreg_loadable_41062 = _Int32ToInt32(Uh_tmpreg_loadable_41061, 8, 32);
    const u32 Uh_tmpreg_loadable_41063 = _BinOpCompareLessEqualInt32(Uh_tmpreg_loadable_41062, Uh_tmpreg_loadable_41059, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_41063, 1))
    {

      //! Pbox.ulam:48:     if(countAlone<=-15){
      {

        //! Pbox.ulam:49:       Box b;
        Ui_Ue_102213Box10<EC> Uv_1b = Ue_102213Box10<EC>::THE_INSTANCE.GetDefaultAtom();

        //! Pbox.ulam:50:       b.ns=ns;
        const u32 Uh_tmpreg_loadable_41064 = Up_Um_2ns::Read(Uv_4self.GetBits());
        Ui_Ue_102213Box10<EC>::Us::Up_Um_2ns::Write(Uv_1b.getBits(), Uh_tmpreg_loadable_41064);

        //! Pbox.ulam:51:       b.id=id;
        const u32 Uh_tmpreg_loadable_41067 = Up_Um_2id::Read(Uv_4self.GetBits());
        Ui_Ue_102213Box10<EC>::Us::Up_Um_2id::Write(Uv_1b.getBits(), Uh_tmpreg_loadable_41067);

        //! Pbox.ulam:52:       ew[0]=b;
        const T Uh_tmpval_unpacked_41070 = Uv_1b.read();
        const s32 Uh_tmpreg_loadable_41071 = 0;
        Ut_Um_2ew::Uf_4aset(uc, Uv_4self, Ui_Ut_102321i(Uh_tmpreg_loadable_41071), Ui_Ut_102961a<EC>(Uh_tmpval_unpacked_41070) );
      }
    } // end if

    //! Pbox.ulam:55:     if(canSwap){
    const u32 Uh_tmpreg_loadable_41073 = Uv_7canSwap.read();
    if(_Bool32ToCbool(Uh_tmpreg_loadable_41073, 1))
    {

      //! Pbox.ulam:55:     if(canSwap){
      {

        //! Pbox.ulam:56:       ew.swap(0,1);
        const s32 Uh_tmpreg_loadable_41075 = 0;
        const Ui_Ut_102321i Uh_tmpval_loadable_41076(Uh_tmpreg_loadable_41075);
        const s32 Uh_tmpreg_loadable_41077 = 1;
        const Ui_Ut_102321i Uh_tmpval_loadable_41078(Uh_tmpreg_loadable_41077);
        const Ui_Ut_10111b Uh_tmpval_loadable_41079 = Ut_Um_2ew::Uf_4swap(uc, Uv_4self, Uh_tmpval_loadable_41076, Uh_tmpval_loadable_41078);
        const u32 Uh_tmpreg_loadable_41080 = Uh_tmpval_loadable_41079.read();
      }
    } // end if
    else
    {

      //! Pbox.ulam:57:     }else{
      {

        //! Pbox.ulam:58:       Empty e;
        Ui_Ue_10105Empty10<EC> Uv_1e = Ue_10105Empty10<EC>::THE_INSTANCE.GetDefaultAtom();

        //! Pbox.ulam:59:       Int et=au.getType((Atom) e);

        //! Pbox.ulam:59:       Int et=au.getType((Atom) e);
        Ui_Ut_102321i Uv_2et;

        //! Pbox.ulam:59:       Int et=au.getType((Atom) e);
        const T Uh_tmpval_unpacked_41082 = Uv_1e.read();
        const Ui_Ut_102961a<EC> Uh_tmpval_unpacked_41083(Uh_tmpval_unpacked_41082);
        const Ui_Ut_102321i Uh_tmpval_loadable_41084 = Ut_Um_2au::Uf_7getType(uc, Uv_4self, Uh_tmpval_unpacked_41083);
        const s32 Uh_tmpreg_loadable_41085 = Uh_tmpval_loadable_41084.read();
        const s32 Uh_tmpreg_loadable_41086 = _SignExtend32(Uh_tmpreg_loadable_41085, 32);
        Uv_2et.write(Uh_tmpreg_loadable_41086);

        //! Pbox.ulam:60:       ws.reset(0,4);
        const s32 Uh_tmpreg_loadable_41089 = 0;
        const Ui_Ut_102321i Uh_tmpval_loadable_41090(Uh_tmpreg_loadable_41089);
        const s32 Uh_tmpreg_loadable_41091 = 4;
        const Ui_Ut_102321i Uh_tmpval_loadable_41092(Uh_tmpreg_loadable_41091);
        Ue_102689214WindowServices10<EC>::THE_INSTANCE.Uf_5reset(uc, Uv_2ws.getRef(), Uh_tmpval_loadable_41090, Uh_tmpval_loadable_41092);

        //! Pbox.ulam:61:       if(ws.scan(et)){
        const u32 Uh_tmpreg_loadable_41094 = Uv_2et.read();
        const s32 Uh_tmpreg_loadable_41095 = _SignExtend32(Uh_tmpreg_loadable_41094, 32);
        const Ui_Ut_102321i Uh_tmpval_loadable_41096(Uh_tmpreg_loadable_41095);
        const Ui_Ut_10111b Uh_tmpval_loadable_41097 = Ue_102689214WindowServices10<EC>::THE_INSTANCE.Uf_4scan(uc, Uv_2ws.getRef(), Uh_tmpval_loadable_41096);
        const u32 Uh_tmpreg_loadable_41098 = Uh_tmpval_loadable_41097.read();
        if(_Bool32ToCbool(Uh_tmpreg_loadable_41098, 1))
        {

          //! Pbox.ulam:61:       if(ws.scan(et)){
          {

            //! Pbox.ulam:62: 	Int slot = ws.getPick(0);

            //! Pbox.ulam:62: 	Int slot = ws.getPick(0);
            Ui_Ut_102321i Uv_4slot;

            //! Pbox.ulam:62: 	Int slot = ws.getPick(0);
            const s32 Uh_tmpreg_loadable_41100 = 0;
            const Ui_Ut_102321i Uh_tmpval_loadable_41101(Uh_tmpreg_loadable_41100);
            const Ui_Ut_10161u Uh_tmpval_loadable_41102 = Ue_102689214WindowServices10<EC>::THE_INSTANCE.Uf_7getPick(uc, Uv_2ws.getRef(), Uh_tmpval_loadable_41101);
            const u32 Uh_tmpreg_loadable_41103 = Uh_tmpval_loadable_41102.read();
            const s32 Uh_tmpreg_loadable_41104 = _Unsigned32ToInt32(Uh_tmpreg_loadable_41103, 6, 32);
            Uv_4slot.write(Uh_tmpreg_loadable_41104);

            //! Pbox.ulam:63: 	Marker m;
            Ui_Ue_10106Marker10<EC> Uv_1m = Ue_10106Marker10<EC>::THE_INSTANCE.GetDefaultAtom();

            //! Pbox.ulam:64: 	ew[slot]=m;
            const T Uh_tmpval_unpacked_41106 = Uv_1m.read();
            const u32 Uh_tmpreg_loadable_41107 = Uv_4slot.read();
            const s32 Uh_tmpreg_loadable_41108 = _SignExtend32(Uh_tmpreg_loadable_41107, 32);
            Ut_Um_2ew::Uf_4aset(uc, Uv_4self, Ui_Ut_102321i(Uh_tmpreg_loadable_41108), Ui_Ut_102961a<EC>(Uh_tmpval_unpacked_41106) );
          }
        } // end if
      }
    } //end else

  } // Uf_6behave


  template<class EC>
  s32 Ue_102294Pbox10<EC>::PositionOfDataMemberType(const char * namearg) const
  {
    if(!strcmp(namearg,"Uq_10109210DebugUtils10")) return (0);   //pos offset
    if(!strcmp(namearg,"Uq_10109211EventWindow10")) return (0);   //pos offset
    if(!strcmp(namearg,"Uq_1010919AtomUtils10")) return (0);   //pos offset
    if(!strcmp(namearg,"Uq_10106Random10")) return (0);   //pos offset

    return (-1);   //not found
  }  //has

  template<class EC>
  const UlamClassDataMemberInfo & Ue_102294Pbox10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
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
      case 7: { static UlamClassDataMemberInfo i("Ut_10181i", "abs", 21u); return i; }
    } //end switch
    FAIL(ILLEGAL_ARGUMENT);
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_102294Pbox10<EC>::GetDataMemberCount() const
  {
    return 8;
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_102294Pbox10<EC>::GetMangledClassName() const
  {
    return "Ue_102294Pbox10";
  } //GetMangledClassName

  template<class EC>
  bool Ue_102294Pbox10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType());
  }   //is

} //MFM

