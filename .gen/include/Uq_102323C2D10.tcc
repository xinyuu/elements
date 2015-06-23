/**                                      -*- mode:C++ -*- */

#include "Ue_102213Box10.h"
#include "Uq_10109210DebugUtils10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_1010919AtomUtils10.h"
#include "Uq_10106Random10.h"
#include "Ue_102689214WindowServices10.h"
#include "Ue_102294Pbox10.h"
#include "Ue_10105Empty10.h"
#include "Ue_10104Wall10.h"
#include "Ue_10106Marker10.h"
#include "Uq_10105MDist10.h"
#include "Uq_10104Fail10.h"

namespace MFM{


  //! C2D.ulam:12:   Void init(Int ax, Int ay) {
  template<class EC, u32 POS>
  void Uq_102323C2D10<EC, POS>::Uf_4init(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_2ax, Ui_Ut_102321i Uv_2ay)
  {

    //! C2D.ulam:13:     x = ax;
    const u32 Uh_tmpreg_loadable_41128 = Uv_2ax.read();
    const s32 Uh_tmpreg_loadable_41129 = _SignExtend32(Uh_tmpreg_loadable_41128, 32);
    const s32 Uh_tmpreg_loadable_41130 = _Int32ToInt32(Uh_tmpreg_loadable_41129, 32, 16);
    Up_Um_1x::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_41130);

    //! C2D.ulam:14:     y = ay;
    const u32 Uh_tmpreg_loadable_41132 = Uv_2ay.read();
    const s32 Uh_tmpreg_loadable_41133 = _SignExtend32(Uh_tmpreg_loadable_41132, 32);
    const s32 Uh_tmpreg_loadable_41134 = _Int32ToInt32(Uh_tmpreg_loadable_41133, 32, 16);
    Up_Um_1y::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_41134);

  } // Uf_4init



  //! C2D.ulam:17:   Int getX() { return (Int) x; }
  template<class EC, u32 POS>
  Ui_Ut_102321i Uq_102323C2D10<EC, POS>::Uf_4getX(UlamContext<EC>& uc, T& Uv_4self)
  {

    //! C2D.ulam:17:   Int getX() { return (Int) x; }
    const u32 Uh_tmpreg_loadable_41136 = Up_Um_1x::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_41137 = _SignExtend32(Uh_tmpreg_loadable_41136, 16);
    const s32 Uh_tmpreg_loadable_41138 = _Int32ToInt32(Uh_tmpreg_loadable_41137, 16, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_41139(Uh_tmpreg_loadable_41138);
    return (Uh_tmpval_loadable_41139);

  } // Uf_4getX



  //! C2D.ulam:18:   Int getY() { return (Int) y; }
  template<class EC, u32 POS>
  Ui_Ut_102321i Uq_102323C2D10<EC, POS>::Uf_4getY(UlamContext<EC>& uc, T& Uv_4self)
  {

    //! C2D.ulam:18:   Int getY() { return (Int) y; }
    const u32 Uh_tmpreg_loadable_41140 = Up_Um_1y::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_41141 = _SignExtend32(Uh_tmpreg_loadable_41140, 16);
    const s32 Uh_tmpreg_loadable_41142 = _Int32ToInt32(Uh_tmpreg_loadable_41141, 16, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_41143(Uh_tmpreg_loadable_41142);
    return (Uh_tmpval_loadable_41143);

  } // Uf_4getY



  //! C2D.ulam:20:   Void setX(Int ax) { x = (Coord) ax; }
  template<class EC, u32 POS>
  void Uq_102323C2D10<EC, POS>::Uf_4setX(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_2ax)
  {

    //! C2D.ulam:20:   Void setX(Int ax) { x = (Coord) ax; }
    const u32 Uh_tmpreg_loadable_41144 = Uv_2ax.read();
    const s32 Uh_tmpreg_loadable_41145 = _SignExtend32(Uh_tmpreg_loadable_41144, 32);
    const s32 Uh_tmpreg_loadable_41146 = _Int32ToInt32(Uh_tmpreg_loadable_41145, 32, 16);
    Up_Um_1x::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_41146);

  } // Uf_4setX



  //! C2D.ulam:21:   Void setY(Int ay) { y = (Coord) ay; }
  template<class EC, u32 POS>
  void Uq_102323C2D10<EC, POS>::Uf_4setY(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_2ay)
  {

    //! C2D.ulam:21:   Void setY(Int ay) { y = (Coord) ay; }
    const u32 Uh_tmpreg_loadable_41148 = Uv_2ay.read();
    const s32 Uh_tmpreg_loadable_41149 = _SignExtend32(Uh_tmpreg_loadable_41148, 32);
    const s32 Uh_tmpreg_loadable_41150 = _Int32ToInt32(Uh_tmpreg_loadable_41149, 32, 16);
    Up_Um_1y::Write(Uv_4self.GetBits(), Uh_tmpreg_loadable_41150);

  } // Uf_4setY



  //! C2D.ulam:23:   C2D make(Int x, Int y) {
  template<class EC, u32 POS>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC, POS>::Uf_4make(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_1x, Ui_Ut_102321i Uv_1y)
  {

    //! C2D.ulam:24:     C2D ret;
    Ui_Uq_102323C2D10<EC> Uv_3ret;

    //! C2D.ulam:25:     ret.init(x,y);
    const u32 Uh_tmpreg_loadable_41153 = Uv_1x.read();
    const s32 Uh_tmpreg_loadable_41154 = _SignExtend32(Uh_tmpreg_loadable_41153, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_41155(Uh_tmpreg_loadable_41154);
    const u32 Uh_tmpreg_loadable_41156 = Uv_1y.read();
    const s32 Uh_tmpreg_loadable_41157 = _SignExtend32(Uh_tmpreg_loadable_41156, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_41158(Uh_tmpreg_loadable_41157);
    Ui_Uq_102323C2D10<EC>::Us::Uf_4init(uc, Uv_3ret.getRef(), Uh_tmpval_loadable_41155, Uh_tmpval_loadable_41158);

    //! C2D.ulam:26:     return ret;
    const u32 Uh_tmpreg_loadable_41159 = Uv_3ret.read();
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41160(Uh_tmpreg_loadable_41159);
    return (Uh_tmpval_loadable_41160);

  } // Uf_4make



  //! C2D.ulam:29:   Bool equals(C2D other) {
  template<class EC, u32 POS>
  Ui_Ut_10111b Uq_102323C2D10<EC, POS>::Uf_6equals(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D10<EC> Uv_5other)
  {

    //! C2D.ulam:30:     return x == other.x && y == other.y;
    u32 Uh_tmpreg_loadable_41161 = false;
    const u32 Uh_tmpreg_loadable_41163 = Ui_Uq_102323C2D10<EC>::Us::Up_Um_1x::Read(Uv_5other.getBits());
    const s32 Uh_tmpreg_loadable_41164 = _SignExtend32(Uh_tmpreg_loadable_41163, 16);
    const s32 Uh_tmpreg_loadable_41165 = _Int32ToInt32(Uh_tmpreg_loadable_41164, 16, 32);
    const u32 Uh_tmpreg_loadable_41166 = Up_Um_1x::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_41167 = _SignExtend32(Uh_tmpreg_loadable_41166, 16);
    const s32 Uh_tmpreg_loadable_41168 = _Int32ToInt32(Uh_tmpreg_loadable_41167, 16, 32);
    const u32 Uh_tmpreg_loadable_41169 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_41168, Uh_tmpreg_loadable_41165, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_41169, 1))
    {
      const u32 Uh_tmpreg_loadable_41171 = Ui_Uq_102323C2D10<EC>::Us::Up_Um_1y::Read(Uv_5other.getBits());
      const s32 Uh_tmpreg_loadable_41172 = _SignExtend32(Uh_tmpreg_loadable_41171, 16);
      const s32 Uh_tmpreg_loadable_41173 = _Int32ToInt32(Uh_tmpreg_loadable_41172, 16, 32);
      const u32 Uh_tmpreg_loadable_41174 = Up_Um_1y::Read(Uv_4self.GetBits());
      const s32 Uh_tmpreg_loadable_41175 = _SignExtend32(Uh_tmpreg_loadable_41174, 16);
      const s32 Uh_tmpreg_loadable_41176 = _Int32ToInt32(Uh_tmpreg_loadable_41175, 16, 32);
      const u32 Uh_tmpreg_loadable_41177 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_41176, Uh_tmpreg_loadable_41173, 32);
      Uh_tmpreg_loadable_41161 = Uh_tmpreg_loadable_41177;
    }
    const Ui_Ut_10111b Uh_tmpval_loadable_41178(Uh_tmpreg_loadable_41161);
    return (Uh_tmpval_loadable_41178);

  } // Uf_6equals



  //! C2D.ulam:33:   C2D add(C2D other) {
  template<class EC, u32 POS>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC, POS>::Uf_3add(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D10<EC> Uv_5other)
  {

    //! C2D.ulam:34:     return make(x + other.x, y + other.y);
    const u32 Uh_tmpreg_loadable_41180 = Ui_Uq_102323C2D10<EC>::Us::Up_Um_1x::Read(Uv_5other.getBits());
    const s32 Uh_tmpreg_loadable_41181 = _SignExtend32(Uh_tmpreg_loadable_41180, 16);
    const s32 Uh_tmpreg_loadable_41182 = _Int32ToInt32(Uh_tmpreg_loadable_41181, 16, 32);
    const u32 Uh_tmpreg_loadable_41183 = Up_Um_1x::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_41184 = _SignExtend32(Uh_tmpreg_loadable_41183, 16);
    const s32 Uh_tmpreg_loadable_41185 = _Int32ToInt32(Uh_tmpreg_loadable_41184, 16, 32);
    const s32 Uh_tmpreg_loadable_41186 = _BinOpAddInt32(Uh_tmpreg_loadable_41185, Uh_tmpreg_loadable_41182, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_41187(Uh_tmpreg_loadable_41186);
    const u32 Uh_tmpreg_loadable_41189 = Ui_Uq_102323C2D10<EC>::Us::Up_Um_1y::Read(Uv_5other.getBits());
    const s32 Uh_tmpreg_loadable_41190 = _SignExtend32(Uh_tmpreg_loadable_41189, 16);
    const s32 Uh_tmpreg_loadable_41191 = _Int32ToInt32(Uh_tmpreg_loadable_41190, 16, 32);
    const u32 Uh_tmpreg_loadable_41192 = Up_Um_1y::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_41193 = _SignExtend32(Uh_tmpreg_loadable_41192, 16);
    const s32 Uh_tmpreg_loadable_41194 = _Int32ToInt32(Uh_tmpreg_loadable_41193, 16, 32);
    const s32 Uh_tmpreg_loadable_41195 = _BinOpAddInt32(Uh_tmpreg_loadable_41194, Uh_tmpreg_loadable_41191, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_41196(Uh_tmpreg_loadable_41195);
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41197 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_41187, Uh_tmpval_loadable_41196);
    const u32 Uh_tmpreg_loadable_41198 = Uh_tmpval_loadable_41197.read();
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41199(Uh_tmpreg_loadable_41198);
    return (Uh_tmpval_loadable_41199);

  } // Uf_3add



  //! C2D.ulam:37:   C2D subtract(C2D other) {
  template<class EC, u32 POS>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC, POS>::Uf_8subtract(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D10<EC> Uv_5other)
  {

    //! C2D.ulam:38:     return make(x - other.x, y - other.y);
    const u32 Uh_tmpreg_loadable_41201 = Ui_Uq_102323C2D10<EC>::Us::Up_Um_1x::Read(Uv_5other.getBits());
    const s32 Uh_tmpreg_loadable_41202 = _SignExtend32(Uh_tmpreg_loadable_41201, 16);
    const s32 Uh_tmpreg_loadable_41203 = _Int32ToInt32(Uh_tmpreg_loadable_41202, 16, 32);
    const u32 Uh_tmpreg_loadable_41204 = Up_Um_1x::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_41205 = _SignExtend32(Uh_tmpreg_loadable_41204, 16);
    const s32 Uh_tmpreg_loadable_41206 = _Int32ToInt32(Uh_tmpreg_loadable_41205, 16, 32);
    const s32 Uh_tmpreg_loadable_41207 = _BinOpSubtractInt32(Uh_tmpreg_loadable_41206, Uh_tmpreg_loadable_41203, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_41208(Uh_tmpreg_loadable_41207);
    const u32 Uh_tmpreg_loadable_41210 = Ui_Uq_102323C2D10<EC>::Us::Up_Um_1y::Read(Uv_5other.getBits());
    const s32 Uh_tmpreg_loadable_41211 = _SignExtend32(Uh_tmpreg_loadable_41210, 16);
    const s32 Uh_tmpreg_loadable_41212 = _Int32ToInt32(Uh_tmpreg_loadable_41211, 16, 32);
    const u32 Uh_tmpreg_loadable_41213 = Up_Um_1y::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_41214 = _SignExtend32(Uh_tmpreg_loadable_41213, 16);
    const s32 Uh_tmpreg_loadable_41215 = _Int32ToInt32(Uh_tmpreg_loadable_41214, 16, 32);
    const s32 Uh_tmpreg_loadable_41216 = _BinOpSubtractInt32(Uh_tmpreg_loadable_41215, Uh_tmpreg_loadable_41212, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_41217(Uh_tmpreg_loadable_41216);
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41218 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_41208, Uh_tmpval_loadable_41217);
    const u32 Uh_tmpreg_loadable_41219 = Uh_tmpval_loadable_41218.read();
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41220(Uh_tmpreg_loadable_41219);
    return (Uh_tmpval_loadable_41220);

  } // Uf_8subtract



  //! C2D.ulam:41:   Int dot(C2D other) {
  template<class EC, u32 POS>
  Ui_Ut_102321i Uq_102323C2D10<EC, POS>::Uf_3dot(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D10<EC> Uv_5other)
  {

    //! C2D.ulam:42:     return x * other.x + y * other.y;
    const u32 Uh_tmpreg_loadable_41222 = Ui_Uq_102323C2D10<EC>::Us::Up_Um_1y::Read(Uv_5other.getBits());
    const s32 Uh_tmpreg_loadable_41223 = _SignExtend32(Uh_tmpreg_loadable_41222, 16);
    const s32 Uh_tmpreg_loadable_41224 = _Int32ToInt32(Uh_tmpreg_loadable_41223, 16, 32);
    const u32 Uh_tmpreg_loadable_41225 = Up_Um_1y::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_41226 = _SignExtend32(Uh_tmpreg_loadable_41225, 16);
    const s32 Uh_tmpreg_loadable_41227 = _Int32ToInt32(Uh_tmpreg_loadable_41226, 16, 32);
    const s32 Uh_tmpreg_loadable_41228 = _BinOpMultiplyInt32(Uh_tmpreg_loadable_41227, Uh_tmpreg_loadable_41224, 32);
    const u32 Uh_tmpreg_loadable_41230 = Ui_Uq_102323C2D10<EC>::Us::Up_Um_1x::Read(Uv_5other.getBits());
    const s32 Uh_tmpreg_loadable_41231 = _SignExtend32(Uh_tmpreg_loadable_41230, 16);
    const s32 Uh_tmpreg_loadable_41232 = _Int32ToInt32(Uh_tmpreg_loadable_41231, 16, 32);
    const u32 Uh_tmpreg_loadable_41233 = Up_Um_1x::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_41234 = _SignExtend32(Uh_tmpreg_loadable_41233, 16);
    const s32 Uh_tmpreg_loadable_41235 = _Int32ToInt32(Uh_tmpreg_loadable_41234, 16, 32);
    const s32 Uh_tmpreg_loadable_41236 = _BinOpMultiplyInt32(Uh_tmpreg_loadable_41235, Uh_tmpreg_loadable_41232, 32);
    const s32 Uh_tmpreg_loadable_41237 = _BinOpAddInt32(Uh_tmpreg_loadable_41236, Uh_tmpreg_loadable_41228, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_41238(Uh_tmpreg_loadable_41237);
    return (Uh_tmpval_loadable_41238);

  } // Uf_3dot



  //! C2D.ulam:45:   Int toInt() {
  template<class EC, u32 POS>
  Ui_Ut_102321i Uq_102323C2D10<EC, POS>::Uf_5toInt(UlamContext<EC>& uc, T& Uv_4self)
  {

    //! C2D.ulam:47:     return (Int) ew.getSiteNumber(make((Int) x,(Int) y));
    const u32 Uh_tmpreg_loadable_41240 = Up_Um_1x::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_41241 = _SignExtend32(Uh_tmpreg_loadable_41240, 16);
    const s32 Uh_tmpreg_loadable_41242 = _Int32ToInt32(Uh_tmpreg_loadable_41241, 16, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_41243(Uh_tmpreg_loadable_41242);
    const u32 Uh_tmpreg_loadable_41244 = Up_Um_1y::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_41245 = _SignExtend32(Uh_tmpreg_loadable_41244, 16);
    const s32 Uh_tmpreg_loadable_41246 = _Int32ToInt32(Uh_tmpreg_loadable_41245, 16, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_41247(Uh_tmpreg_loadable_41246);
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41248 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_41243, Uh_tmpval_loadable_41247);
    const u32 Uh_tmpreg_loadable_41249 = Uh_tmpval_loadable_41248.read();
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41250(Uh_tmpreg_loadable_41249);
    const Ui_Ut_10161u Uh_tmpval_loadable_41251 = Ut_Um_2ew::Uf_9213getSiteNumber(uc, Uv_4self, Uh_tmpval_loadable_41250);
    const u32 Uh_tmpreg_loadable_41252 = Uh_tmpval_loadable_41251.read();
    const s32 Uh_tmpreg_loadable_41253 = _Unsigned32ToInt32(Uh_tmpreg_loadable_41252, 6, 32);
    const Ui_Ut_102321i Uh_tmpval_loadable_41254(Uh_tmpreg_loadable_41253);
    return (Uh_tmpval_loadable_41254);

  } // Uf_5toInt



  //! C2D.ulam:53:   C2D neighbor(Dir d) {
  template<class EC, u32 POS>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC, POS>::Uf_8neighbor(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10131u Uv_1d)
  {

    //! C2D.ulam:54:     if (d==0) return make( 0, 1);
    const s32 Uh_tmpreg_loadable_41255 = 0;
    const u32 Uh_tmpreg_loadable_41256 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_41257 = _Unsigned32ToInt32(Uh_tmpreg_loadable_41256, 3, 32);
    const u32 Uh_tmpreg_loadable_41258 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_41257, Uh_tmpreg_loadable_41255, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_41258, 1))
    {

      //! C2D.ulam:54:     if (d==0) return make( 0, 1);
      const s32 Uh_tmpreg_loadable_41259 = 0;
      const Ui_Ut_102321i Uh_tmpval_loadable_41260(Uh_tmpreg_loadable_41259);
      const s32 Uh_tmpreg_loadable_41261 = 1;
      const Ui_Ut_102321i Uh_tmpval_loadable_41262(Uh_tmpreg_loadable_41261);
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41263 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_41260, Uh_tmpval_loadable_41262);
      const u32 Uh_tmpreg_loadable_41264 = Uh_tmpval_loadable_41263.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41265(Uh_tmpreg_loadable_41264);
      return (Uh_tmpval_loadable_41265);
    } // end if

    //! C2D.ulam:55:     if (d==1) return make( 1, 1);
    const s32 Uh_tmpreg_loadable_41266 = 1;
    const u32 Uh_tmpreg_loadable_41267 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_41268 = _Unsigned32ToInt32(Uh_tmpreg_loadable_41267, 3, 32);
    const u32 Uh_tmpreg_loadable_41269 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_41268, Uh_tmpreg_loadable_41266, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_41269, 1))
    {

      //! C2D.ulam:55:     if (d==1) return make( 1, 1);
      const s32 Uh_tmpreg_loadable_41270 = 1;
      const Ui_Ut_102321i Uh_tmpval_loadable_41271(Uh_tmpreg_loadable_41270);
      const s32 Uh_tmpreg_loadable_41272 = 1;
      const Ui_Ut_102321i Uh_tmpval_loadable_41273(Uh_tmpreg_loadable_41272);
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41274 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_41271, Uh_tmpval_loadable_41273);
      const u32 Uh_tmpreg_loadable_41275 = Uh_tmpval_loadable_41274.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41276(Uh_tmpreg_loadable_41275);
      return (Uh_tmpval_loadable_41276);
    } // end if

    //! C2D.ulam:56:     if (d==2) return make( 1, 0);
    const s32 Uh_tmpreg_loadable_41277 = 2;
    const u32 Uh_tmpreg_loadable_41278 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_41279 = _Unsigned32ToInt32(Uh_tmpreg_loadable_41278, 3, 32);
    const u32 Uh_tmpreg_loadable_41280 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_41279, Uh_tmpreg_loadable_41277, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_41280, 1))
    {

      //! C2D.ulam:56:     if (d==2) return make( 1, 0);
      const s32 Uh_tmpreg_loadable_41281 = 1;
      const Ui_Ut_102321i Uh_tmpval_loadable_41282(Uh_tmpreg_loadable_41281);
      const s32 Uh_tmpreg_loadable_41283 = 0;
      const Ui_Ut_102321i Uh_tmpval_loadable_41284(Uh_tmpreg_loadable_41283);
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41285 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_41282, Uh_tmpval_loadable_41284);
      const u32 Uh_tmpreg_loadable_41286 = Uh_tmpval_loadable_41285.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41287(Uh_tmpreg_loadable_41286);
      return (Uh_tmpval_loadable_41287);
    } // end if

    //! C2D.ulam:57:     if (d==3) return make( 1,-1);
    const s32 Uh_tmpreg_loadable_41288 = 3;
    const u32 Uh_tmpreg_loadable_41289 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_41290 = _Unsigned32ToInt32(Uh_tmpreg_loadable_41289, 3, 32);
    const u32 Uh_tmpreg_loadable_41291 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_41290, Uh_tmpreg_loadable_41288, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_41291, 1))
    {

      //! C2D.ulam:57:     if (d==3) return make( 1,-1);
      const s32 Uh_tmpreg_loadable_41292 = 1;
      const Ui_Ut_102321i Uh_tmpval_loadable_41293(Uh_tmpreg_loadable_41292);
      const s32 Uh_tmpreg_loadable_41294 = -1;
      const Ui_Ut_102321i Uh_tmpval_loadable_41295(Uh_tmpreg_loadable_41294);
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41296 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_41293, Uh_tmpval_loadable_41295);
      const u32 Uh_tmpreg_loadable_41297 = Uh_tmpval_loadable_41296.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41298(Uh_tmpreg_loadable_41297);
      return (Uh_tmpval_loadable_41298);
    } // end if

    //! C2D.ulam:58:     if (d==4) return make( 0,-1);
    const s32 Uh_tmpreg_loadable_41299 = 4;
    const u32 Uh_tmpreg_loadable_41300 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_41301 = _Unsigned32ToInt32(Uh_tmpreg_loadable_41300, 3, 32);
    const u32 Uh_tmpreg_loadable_41302 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_41301, Uh_tmpreg_loadable_41299, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_41302, 1))
    {

      //! C2D.ulam:58:     if (d==4) return make( 0,-1);
      const s32 Uh_tmpreg_loadable_41303 = 0;
      const Ui_Ut_102321i Uh_tmpval_loadable_41304(Uh_tmpreg_loadable_41303);
      const s32 Uh_tmpreg_loadable_41305 = -1;
      const Ui_Ut_102321i Uh_tmpval_loadable_41306(Uh_tmpreg_loadable_41305);
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41307 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_41304, Uh_tmpval_loadable_41306);
      const u32 Uh_tmpreg_loadable_41308 = Uh_tmpval_loadable_41307.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41309(Uh_tmpreg_loadable_41308);
      return (Uh_tmpval_loadable_41309);
    } // end if

    //! C2D.ulam:59:     if (d==5) return make(-1,-1);
    const s32 Uh_tmpreg_loadable_41310 = 5;
    const u32 Uh_tmpreg_loadable_41311 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_41312 = _Unsigned32ToInt32(Uh_tmpreg_loadable_41311, 3, 32);
    const u32 Uh_tmpreg_loadable_41313 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_41312, Uh_tmpreg_loadable_41310, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_41313, 1))
    {

      //! C2D.ulam:59:     if (d==5) return make(-1,-1);
      const s32 Uh_tmpreg_loadable_41314 = -1;
      const Ui_Ut_102321i Uh_tmpval_loadable_41315(Uh_tmpreg_loadable_41314);
      const s32 Uh_tmpreg_loadable_41316 = -1;
      const Ui_Ut_102321i Uh_tmpval_loadable_41317(Uh_tmpreg_loadable_41316);
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41318 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_41315, Uh_tmpval_loadable_41317);
      const u32 Uh_tmpreg_loadable_41319 = Uh_tmpval_loadable_41318.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41320(Uh_tmpreg_loadable_41319);
      return (Uh_tmpval_loadable_41320);
    } // end if

    //! C2D.ulam:60:     if (d==6) return make(-1, 0);
    const s32 Uh_tmpreg_loadable_41321 = 6;
    const u32 Uh_tmpreg_loadable_41322 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_41323 = _Unsigned32ToInt32(Uh_tmpreg_loadable_41322, 3, 32);
    const u32 Uh_tmpreg_loadable_41324 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_41323, Uh_tmpreg_loadable_41321, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_41324, 1))
    {

      //! C2D.ulam:60:     if (d==6) return make(-1, 0);
      const s32 Uh_tmpreg_loadable_41325 = -1;
      const Ui_Ut_102321i Uh_tmpval_loadable_41326(Uh_tmpreg_loadable_41325);
      const s32 Uh_tmpreg_loadable_41327 = 0;
      const Ui_Ut_102321i Uh_tmpval_loadable_41328(Uh_tmpreg_loadable_41327);
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41329 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_41326, Uh_tmpval_loadable_41328);
      const u32 Uh_tmpreg_loadable_41330 = Uh_tmpval_loadable_41329.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41331(Uh_tmpreg_loadable_41330);
      return (Uh_tmpval_loadable_41331);
    } // end if

    //! C2D.ulam:61:     /* d==7*/ return make(-1, 1);
    const s32 Uh_tmpreg_loadable_41332 = -1;
    const Ui_Ut_102321i Uh_tmpval_loadable_41333(Uh_tmpreg_loadable_41332);
    const s32 Uh_tmpreg_loadable_41334 = 1;
    const Ui_Ut_102321i Uh_tmpval_loadable_41335(Uh_tmpreg_loadable_41334);
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41336 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_41333, Uh_tmpval_loadable_41335);
    const u32 Uh_tmpreg_loadable_41337 = Uh_tmpval_loadable_41336.read();
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41338(Uh_tmpreg_loadable_41337);
    return (Uh_tmpval_loadable_41338);

  } // Uf_8neighbor



  //! C2D.ulam:67:   C2D corner(Dir d) {
  template<class EC, u32 POS>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC, POS>::Uf_6corner(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10131u Uv_1d)
  {

    //! C2D.ulam:68:     if (d==0) return make( 0, 4);
    const s32 Uh_tmpreg_loadable_41339 = 0;
    const u32 Uh_tmpreg_loadable_41340 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_41341 = _Unsigned32ToInt32(Uh_tmpreg_loadable_41340, 3, 32);
    const u32 Uh_tmpreg_loadable_41342 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_41341, Uh_tmpreg_loadable_41339, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_41342, 1))
    {

      //! C2D.ulam:68:     if (d==0) return make( 0, 4);
      const s32 Uh_tmpreg_loadable_41343 = 0;
      const Ui_Ut_102321i Uh_tmpval_loadable_41344(Uh_tmpreg_loadable_41343);
      const s32 Uh_tmpreg_loadable_41345 = 4;
      const Ui_Ut_102321i Uh_tmpval_loadable_41346(Uh_tmpreg_loadable_41345);
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41347 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_41344, Uh_tmpval_loadable_41346);
      const u32 Uh_tmpreg_loadable_41348 = Uh_tmpval_loadable_41347.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41349(Uh_tmpreg_loadable_41348);
      return (Uh_tmpval_loadable_41349);
    } // end if

    //! C2D.ulam:69:     if (d==1) return make( 2, 2);
    const s32 Uh_tmpreg_loadable_41350 = 1;
    const u32 Uh_tmpreg_loadable_41351 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_41352 = _Unsigned32ToInt32(Uh_tmpreg_loadable_41351, 3, 32);
    const u32 Uh_tmpreg_loadable_41353 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_41352, Uh_tmpreg_loadable_41350, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_41353, 1))
    {

      //! C2D.ulam:69:     if (d==1) return make( 2, 2);
      const s32 Uh_tmpreg_loadable_41354 = 2;
      const Ui_Ut_102321i Uh_tmpval_loadable_41355(Uh_tmpreg_loadable_41354);
      const s32 Uh_tmpreg_loadable_41356 = 2;
      const Ui_Ut_102321i Uh_tmpval_loadable_41357(Uh_tmpreg_loadable_41356);
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41358 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_41355, Uh_tmpval_loadable_41357);
      const u32 Uh_tmpreg_loadable_41359 = Uh_tmpval_loadable_41358.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41360(Uh_tmpreg_loadable_41359);
      return (Uh_tmpval_loadable_41360);
    } // end if

    //! C2D.ulam:70:     if (d==2) return make( 4, 0);
    const s32 Uh_tmpreg_loadable_41361 = 2;
    const u32 Uh_tmpreg_loadable_41362 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_41363 = _Unsigned32ToInt32(Uh_tmpreg_loadable_41362, 3, 32);
    const u32 Uh_tmpreg_loadable_41364 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_41363, Uh_tmpreg_loadable_41361, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_41364, 1))
    {

      //! C2D.ulam:70:     if (d==2) return make( 4, 0);
      const s32 Uh_tmpreg_loadable_41365 = 4;
      const Ui_Ut_102321i Uh_tmpval_loadable_41366(Uh_tmpreg_loadable_41365);
      const s32 Uh_tmpreg_loadable_41367 = 0;
      const Ui_Ut_102321i Uh_tmpval_loadable_41368(Uh_tmpreg_loadable_41367);
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41369 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_41366, Uh_tmpval_loadable_41368);
      const u32 Uh_tmpreg_loadable_41370 = Uh_tmpval_loadable_41369.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41371(Uh_tmpreg_loadable_41370);
      return (Uh_tmpval_loadable_41371);
    } // end if

    //! C2D.ulam:71:     if (d==3) return make( 2,-2);
    const s32 Uh_tmpreg_loadable_41372 = 3;
    const u32 Uh_tmpreg_loadable_41373 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_41374 = _Unsigned32ToInt32(Uh_tmpreg_loadable_41373, 3, 32);
    const u32 Uh_tmpreg_loadable_41375 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_41374, Uh_tmpreg_loadable_41372, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_41375, 1))
    {

      //! C2D.ulam:71:     if (d==3) return make( 2,-2);
      const s32 Uh_tmpreg_loadable_41376 = 2;
      const Ui_Ut_102321i Uh_tmpval_loadable_41377(Uh_tmpreg_loadable_41376);
      const s32 Uh_tmpreg_loadable_41378 = -2;
      const Ui_Ut_102321i Uh_tmpval_loadable_41379(Uh_tmpreg_loadable_41378);
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41380 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_41377, Uh_tmpval_loadable_41379);
      const u32 Uh_tmpreg_loadable_41381 = Uh_tmpval_loadable_41380.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41382(Uh_tmpreg_loadable_41381);
      return (Uh_tmpval_loadable_41382);
    } // end if

    //! C2D.ulam:72:     if (d==4) return make( 0,-4);
    const s32 Uh_tmpreg_loadable_41383 = 4;
    const u32 Uh_tmpreg_loadable_41384 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_41385 = _Unsigned32ToInt32(Uh_tmpreg_loadable_41384, 3, 32);
    const u32 Uh_tmpreg_loadable_41386 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_41385, Uh_tmpreg_loadable_41383, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_41386, 1))
    {

      //! C2D.ulam:72:     if (d==4) return make( 0,-4);
      const s32 Uh_tmpreg_loadable_41387 = 0;
      const Ui_Ut_102321i Uh_tmpval_loadable_41388(Uh_tmpreg_loadable_41387);
      const s32 Uh_tmpreg_loadable_41389 = -4;
      const Ui_Ut_102321i Uh_tmpval_loadable_41390(Uh_tmpreg_loadable_41389);
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41391 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_41388, Uh_tmpval_loadable_41390);
      const u32 Uh_tmpreg_loadable_41392 = Uh_tmpval_loadable_41391.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41393(Uh_tmpreg_loadable_41392);
      return (Uh_tmpval_loadable_41393);
    } // end if

    //! C2D.ulam:73:     if (d==5) return make(-2,-2);
    const s32 Uh_tmpreg_loadable_41394 = 5;
    const u32 Uh_tmpreg_loadable_41395 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_41396 = _Unsigned32ToInt32(Uh_tmpreg_loadable_41395, 3, 32);
    const u32 Uh_tmpreg_loadable_41397 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_41396, Uh_tmpreg_loadable_41394, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_41397, 1))
    {

      //! C2D.ulam:73:     if (d==5) return make(-2,-2);
      const s32 Uh_tmpreg_loadable_41398 = -2;
      const Ui_Ut_102321i Uh_tmpval_loadable_41399(Uh_tmpreg_loadable_41398);
      const s32 Uh_tmpreg_loadable_41400 = -2;
      const Ui_Ut_102321i Uh_tmpval_loadable_41401(Uh_tmpreg_loadable_41400);
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41402 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_41399, Uh_tmpval_loadable_41401);
      const u32 Uh_tmpreg_loadable_41403 = Uh_tmpval_loadable_41402.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41404(Uh_tmpreg_loadable_41403);
      return (Uh_tmpval_loadable_41404);
    } // end if

    //! C2D.ulam:74:     if (d==6) return make(-4, 0);
    const s32 Uh_tmpreg_loadable_41405 = 6;
    const u32 Uh_tmpreg_loadable_41406 = Uv_1d.read();
    const s32 Uh_tmpreg_loadable_41407 = _Unsigned32ToInt32(Uh_tmpreg_loadable_41406, 3, 32);
    const u32 Uh_tmpreg_loadable_41408 = _BinOpCompareEqEqInt32(Uh_tmpreg_loadable_41407, Uh_tmpreg_loadable_41405, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_41408, 1))
    {

      //! C2D.ulam:74:     if (d==6) return make(-4, 0);
      const s32 Uh_tmpreg_loadable_41409 = -4;
      const Ui_Ut_102321i Uh_tmpval_loadable_41410(Uh_tmpreg_loadable_41409);
      const s32 Uh_tmpreg_loadable_41411 = 0;
      const Ui_Ut_102321i Uh_tmpval_loadable_41412(Uh_tmpreg_loadable_41411);
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41413 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_41410, Uh_tmpval_loadable_41412);
      const u32 Uh_tmpreg_loadable_41414 = Uh_tmpval_loadable_41413.read();
      const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41415(Uh_tmpreg_loadable_41414);
      return (Uh_tmpval_loadable_41415);
    } // end if

    //! C2D.ulam:75:     /* d==7*/ return make(-2, 2);
    const s32 Uh_tmpreg_loadable_41416 = -2;
    const Ui_Ut_102321i Uh_tmpval_loadable_41417(Uh_tmpreg_loadable_41416);
    const s32 Uh_tmpreg_loadable_41418 = 2;
    const Ui_Ut_102321i Uh_tmpval_loadable_41419(Uh_tmpreg_loadable_41418);
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41420 = Uf_4make(uc, Uv_4self, Uh_tmpval_loadable_41417, Uh_tmpval_loadable_41419);
    const u32 Uh_tmpreg_loadable_41421 = Uh_tmpval_loadable_41420.read();
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41422(Uh_tmpreg_loadable_41421);
    return (Uh_tmpval_loadable_41422);

  } // Uf_6corner



  //! C2D.ulam:78:   Unsigned length() {
  template<class EC, u32 POS>
  Ui_Ut_102321u Uq_102323C2D10<EC, POS>::Uf_6length(UlamContext<EC>& uc, T& Uv_4self)
  {

    //! C2D.ulam:79:     C2D origin;
    Ui_Uq_102323C2D10<EC> Uv_6origin;

    //! C2D.ulam:80:     return manhattanDistance(origin);
    const u32 Uh_tmpreg_loadable_41423 = Uv_6origin.read();
    const Ui_Uq_102323C2D10<EC> Uh_tmpval_loadable_41424(Uh_tmpreg_loadable_41423);
    const Ui_Ut_102321u Uh_tmpval_loadable_41425 = Uf_9217manhattanDistance(uc, Uv_4self, Uh_tmpval_loadable_41424);
    const u32 Uh_tmpreg_loadable_41426 = Uh_tmpval_loadable_41425.read();
    const Ui_Ut_102321u Uh_tmpval_loadable_41427(Uh_tmpreg_loadable_41426);
    return (Uh_tmpval_loadable_41427);

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
    const u32 Uh_tmpreg_loadable_41429 = Ui_Uq_102323C2D10<EC>::Us::Up_Um_1x::Read(Uv_5other.getBits());
    const s32 Uh_tmpreg_loadable_41430 = _SignExtend32(Uh_tmpreg_loadable_41429, 16);
    const s32 Uh_tmpreg_loadable_41431 = _Int32ToInt32(Uh_tmpreg_loadable_41430, 16, 32);
    const u32 Uh_tmpreg_loadable_41432 = Up_Um_1x::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_41433 = _SignExtend32(Uh_tmpreg_loadable_41432, 16);
    const s32 Uh_tmpreg_loadable_41434 = _Int32ToInt32(Uh_tmpreg_loadable_41433, 16, 32);
    const s32 Uh_tmpreg_loadable_41435 = _BinOpSubtractInt32(Uh_tmpreg_loadable_41434, Uh_tmpreg_loadable_41431, 32);
    Uv_2dx.write(Uh_tmpreg_loadable_41435);

    //! C2D.ulam:84:     Int dx = x - other.x, dy = y - other.y;
    Ui_Ut_102321i Uv_2dy;

    //! C2D.ulam:84:     Int dx = x - other.x, dy = y - other.y;
    const u32 Uh_tmpreg_loadable_41438 = Ui_Uq_102323C2D10<EC>::Us::Up_Um_1y::Read(Uv_5other.getBits());
    const s32 Uh_tmpreg_loadable_41439 = _SignExtend32(Uh_tmpreg_loadable_41438, 16);
    const s32 Uh_tmpreg_loadable_41440 = _Int32ToInt32(Uh_tmpreg_loadable_41439, 16, 32);
    const u32 Uh_tmpreg_loadable_41441 = Up_Um_1y::Read(Uv_4self.GetBits());
    const s32 Uh_tmpreg_loadable_41442 = _SignExtend32(Uh_tmpreg_loadable_41441, 16);
    const s32 Uh_tmpreg_loadable_41443 = _Int32ToInt32(Uh_tmpreg_loadable_41442, 16, 32);
    const s32 Uh_tmpreg_loadable_41444 = _BinOpSubtractInt32(Uh_tmpreg_loadable_41443, Uh_tmpreg_loadable_41440, 32);
    Uv_2dy.write(Uh_tmpreg_loadable_41444);

    //! C2D.ulam:85:     if (dx < 0) dx = -dx;
    const s32 Uh_tmpreg_loadable_41446 = 0;
    const u32 Uh_tmpreg_loadable_41447 = Uv_2dx.read();
    const s32 Uh_tmpreg_loadable_41448 = _SignExtend32(Uh_tmpreg_loadable_41447, 32);
    const u32 Uh_tmpreg_loadable_41449 = _BinOpCompareLessThanInt32(Uh_tmpreg_loadable_41448, Uh_tmpreg_loadable_41446, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_41449, 1))
    {

      //! C2D.ulam:85:     if (dx < 0) dx = -dx;
      const u32 Uh_tmpreg_loadable_41450 = Uv_2dx.read();
      const s32 Uh_tmpreg_loadable_41451 = _SignExtend32(Uh_tmpreg_loadable_41450, 32);
      const s32 Uh_tmpreg_loadable_41452 = _UnaryMinusInt32(Uh_tmpreg_loadable_41451, 32);
      Uv_2dx.write(Uh_tmpreg_loadable_41452);
    } // end if

    //! C2D.ulam:86:     if (dy < 0) dy = -dy;
    const s32 Uh_tmpreg_loadable_41454 = 0;
    const u32 Uh_tmpreg_loadable_41455 = Uv_2dy.read();
    const s32 Uh_tmpreg_loadable_41456 = _SignExtend32(Uh_tmpreg_loadable_41455, 32);
    const u32 Uh_tmpreg_loadable_41457 = _BinOpCompareLessThanInt32(Uh_tmpreg_loadable_41456, Uh_tmpreg_loadable_41454, 32);
    if(_Bool32ToCbool(Uh_tmpreg_loadable_41457, 1))
    {

      //! C2D.ulam:86:     if (dy < 0) dy = -dy;
      const u32 Uh_tmpreg_loadable_41458 = Uv_2dy.read();
      const s32 Uh_tmpreg_loadable_41459 = _SignExtend32(Uh_tmpreg_loadable_41458, 32);
      const s32 Uh_tmpreg_loadable_41460 = _UnaryMinusInt32(Uh_tmpreg_loadable_41459, 32);
      Uv_2dy.write(Uh_tmpreg_loadable_41460);
    } // end if

    //! C2D.ulam:87:     return (Unsigned) (dx + dy);
    const u32 Uh_tmpreg_loadable_41462 = Uv_2dy.read();
    const s32 Uh_tmpreg_loadable_41463 = _SignExtend32(Uh_tmpreg_loadable_41462, 32);
    const u32 Uh_tmpreg_loadable_41464 = Uv_2dx.read();
    const s32 Uh_tmpreg_loadable_41465 = _SignExtend32(Uh_tmpreg_loadable_41464, 32);
    const s32 Uh_tmpreg_loadable_41466 = _BinOpAddInt32(Uh_tmpreg_loadable_41465, Uh_tmpreg_loadable_41463, 32);
    const u32 Uh_tmpreg_loadable_41467 = _Int32ToUnsigned32(Uh_tmpreg_loadable_41466, 32, 32);
    const Ui_Ut_102321u Uh_tmpval_loadable_41468(Uh_tmpreg_loadable_41467);
    return (Uh_tmpval_loadable_41468);

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

