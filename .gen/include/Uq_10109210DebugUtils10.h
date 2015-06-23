/**                                      -*- mode:C++ -*- */

/***********************         DO NOT EDIT        ******************************
*
* DebugUtils.h - Quark header for ULAM
*
**********************************************************************************
* This code is generated by the ULAM programming language compilation system.
*
* The ULAM programming language compilation system is free software:
* you can redistribute it and/or modify it under the terms of the GNU
* General Public License as published by the Free Software
* Foundation, either version 3 of the License, or (at your option)
* any later version.
*
* The ULAM programming language compilation system is distributed in
* the hope that it will be useful, but WITHOUT ANY WARRANTY; without
* even the implied warranty of MERCHANTABILITY or FITNESS FOR A
* PARTICULAR PURPOSE.  See the GNU General Public License for more
* details.
*
* You should have received a copy of the GNU General Public License
* along with the ULAM programming language compilation system
* software.  If not, see <http://www.gnu.org/licenses/>.
*
* @license GPL-3.0+ <http://spdx.org/licenses/GPL-3.0+>
*/

#ifndef UQ_10109210DEBUGUTILS10_H
#define UQ_10109210DEBUGUTILS10_H

#include "UlamDefs.h"

#include "Uq_10109210DebugUtils10_Types.h"

namespace MFM { template <class EC> struct Ue_102213Box10; }  //FORWARD
namespace MFM { template <class EC, u32 POS> struct Uq_10109211EventWindow10; }  //FORWARD
namespace MFM { template <class EC, u32 POS> struct Uq_1010919AtomUtils10; }  //FORWARD
namespace MFM { template <class EC, u32 POS> struct Uq_10106Random10; }  //FORWARD
namespace MFM { template <class EC> struct Ue_102689214WindowServices10; }  //FORWARD
namespace MFM { template <class EC> struct Ue_102294Pbox10; }  //FORWARD
namespace MFM { template <class EC> struct Ue_10105Empty10; }  //FORWARD
namespace MFM { template <class EC> struct Ue_10104Wall10; }  //FORWARD
namespace MFM { template <class EC> struct Ue_10106Marker10; }  //FORWARD
namespace MFM { template <class EC, u32 POS> struct Uq_102323C2D10; }  //FORWARD
namespace MFM { template <class EC, u32 POS> struct Uq_10105MDist10; }  //FORWARD
namespace MFM { template <class EC, u32 POS> struct Uq_10104Fail10; }  //FORWARD

namespace MFM{

  template <class EC, u32 POS>
  struct Uq_10109210DebugUtils10 : public UlamClass
  {

    // Extract short names for parameter types
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };
    typedef BitVector<BPA> BV;

    enum { 
      QUARK_SIZE = 0 /* Requiring quarks to advertise their size in a std way.) */
    };

    typedef AtomicParameterType <EC, VD::BITS, QUARK_SIZE, POS> Up_Us; //entire quark


    //! DebugUtils.ulam:9:   constant Unsigned cPRINT_SYMBOL =          0x00000001; //< Include element symbol

    //! DebugUtils.ulam:10:   constant Unsigned cPRINT_FULL_NAME =       0x00000002; //< Include element name

    //! DebugUtils.ulam:11:   constant Unsigned cPRINT_ATOM_BODY =       0x00000004; //< Include entire atom in hex

    //! DebugUtils.ulam:12:   constant Unsigned cPRINT_MEMBER_VALUES =   0x00000008; //< Include data member values

    //! DebugUtils.ulam:13:   constant Unsigned cPRINT_MEMBER_BITVALS =  0x00000010; //< Include data member values as bits in hex

    //! DebugUtils.ulam:14:   constant Unsigned cPRINT_MEMBER_NAMES =    0x00000020; //< Include data member names

    //! DebugUtils.ulam:15:   constant Unsigned cPRINT_MEMBER_TYPES =    0x00000040; //< Include data member types

    //! DebugUtils.ulam:16:   constant Unsigned cPRINT_SIZE0_MEMBERS =   0x00000080; //< Include size 0 data members

    //! DebugUtils.ulam:17:   constant Unsigned cPRINT_MEMBER_ARRAYS =   0x00000100; //< Print array values individually

    //! DebugUtils.ulam:18:   constant Unsigned cPRINT_RECURSE_QUARKS =  0x00000200; //< Print quarks recursively

    //! DebugUtils.ulam:20:   constant Unsigned cPRINT_NOTHING = Unsigned.minof;

    //! DebugUtils.ulam:21:   constant Unsigned cPRINT_HEX_ATOM = cPRINT_SYMBOL|cPRINT_ATOM_BODY;

    //! DebugUtils.ulam:22:   constant Unsigned cPRINT_TOP_MEMBERS = cPRINT_SYMBOL|cPRINT_MEMBER_VALUES;

    //! DebugUtils.ulam:23:   constant Unsigned cPRINT_MEMBERS = cPRINT_SYMBOL|cPRINT_MEMBER_NAMES|cPRINT_MEMBER_VALUES;

    //! DebugUtils.ulam:24:   constant Unsigned cPRINT_QUARK_MEMBERS = cPRINT_MEMBERS|cPRINT_RECURSE_QUARKS;

    //! DebugUtils.ulam:25:   constant Unsigned cPRINT_ALL_MEMBERS = cPRINT_SYMBOL|cPRINT_MEMBER_VALUES|cPRINT_RECURSE_QUARKS|cPRINT_MEMBER_ARRAYS;

    //! DebugUtils.ulam:26:   constant Unsigned cPRINT_EVERYTHING = Unsigned.maxof;


    //! DebugUtils.ulam:35:   Void print(Int arg) native;
    static void Uf_5print(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_3arg); //native


    //! DebugUtils.ulam:36:   Void print(Int(4) arg) native;
    static void Uf_5print(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10141i Uv_3arg); //native


    //! DebugUtils.ulam:37:   Void print(Int(3) arg) native;
    static void Uf_5print(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10131i Uv_3arg); //native


    //! DebugUtils.ulam:34:   Void print(Unsigned arg) native;
    static void Uf_5print(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321u Uv_3arg); //native


    //! DebugUtils.ulam:38:   Void print(Unary(3) arg) native;
    static void Uf_5print(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10131y Uv_3arg); //native


    //! DebugUtils.ulam:39:   Void print(Bool(3) arg) native;
    static void Uf_5print(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10131b Uv_3arg); //native


    //! DebugUtils.ulam:28:   Void print(Atom arg) { print(arg, cPRINT_MEMBERS); }
    static void Uf_5print(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102961a<EC> Uv_3arg);


    //! DebugUtils.ulam:29:   Void print(Atom a, Unsigned flags) native;
    static void Uf_5print(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102961a<EC> Uv_1a, Ui_Ut_102321u Uv_5flags); //native


    //! DebugUtils.ulam:31:   Void printContext() { printContext(cPRINT_QUARK_MEMBERS); }
    static void Uf_9212printContext(UlamContext<EC>& uc, T& Uv_4self);


    //! DebugUtils.ulam:32:   Void printContext(Unsigned flags) native;
    static void Uf_9212printContext(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321u Uv_5flags); //native


    //! DebugUtils.ulam:40:   Void assert(Bool b) native;
    static void Uf_6assert(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10111b Uv_1b); //native

    //helper method not called directly
    s32 PositionOfDataMemberType(const char * namearg) const;

    const UlamClassDataMemberInfo & GetDataMemberInfo(u32 dataMemberNumber) const;

    s32 GetDataMemberCount() const;

    const char * GetMangledClassName() const;

  };
} //MFM

#include "Uq_10109210DebugUtils10.tcc"

#include "Uq_10109210DebugUtils10_native.tcc"

#endif //UQ_10109210DEBUGUTILS10_H
