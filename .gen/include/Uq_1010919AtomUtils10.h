/**                                      -*- mode:C++ -*- */

/***********************         DO NOT EDIT        ******************************
*
* AtomUtils.h - Quark header for ULAM
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

#ifndef UQ_1010919ATOMUTILS10_H
#define UQ_1010919ATOMUTILS10_H

#include "UlamDefs.h"

#include "Uq_1010919AtomUtils10_Types.h"

namespace MFM { template <class EC> struct Ue_102213Box10; }  //FORWARD
namespace MFM { template <class EC, u32 POS> struct Uq_10109210DebugUtils10; }  //FORWARD
namespace MFM { template <class EC, u32 POS> struct Uq_10109211EventWindow10; }  //FORWARD
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
  struct Uq_1010919AtomUtils10 : public UlamClass
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


    //! AtomUtils.ulam:11:   Int getType(Atom a) native;
    static Ui_Ut_102321i Uf_7getType(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102961a<EC> Uv_1a); //native


    //! AtomUtils.ulam:17:   Int getEmptyType() {
    static Ui_Ut_102321i Uf_9212getEmptyType(UlamContext<EC>& uc, T& Uv_4self);


    //! AtomUtils.ulam:26:   Bool isEmpty(Atom a) {
    static Ui_Ut_10111b Uf_7isEmpty(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102961a<EC> Uv_1a);


    //! AtomUtils.ulam:39:   Atom new(Int t) native;
    static Ui_Ut_102961a<EC> Uf_3new(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_1t); //native


    //! AtomUtils.ulam:45:   Bits read(Atom a, Unsigned stateIndex, Unsigned fieldLength) native;
    static Ui_Ut_102321t Uf_4read(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102961a<EC> Uv_1a, Ui_Ut_102321u Uv_9210stateIndex, Ui_Ut_102321u Uv_9211fieldLength); //native


    //! AtomUtils.ulam:52:   Atom writeCopy(Atom a, Bits bits, Unsigned stateIndex, Unsigned fieldLength) native;
    static Ui_Ut_102961a<EC> Uf_919writeCopy(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102961a<EC> Uv_1a, Ui_Ut_102321t Uv_4bits, Ui_Ut_102321u Uv_9210stateIndex, Ui_Ut_102321u Uv_9211fieldLength); //native

    //helper method not called directly
    s32 PositionOfDataMemberType(const char * namearg) const;

    const UlamClassDataMemberInfo & GetDataMemberInfo(u32 dataMemberNumber) const;

    s32 GetDataMemberCount() const;

    const char * GetMangledClassName() const;

  };
} //MFM

#include "Uq_1010919AtomUtils10.tcc"

#include "Uq_1010919AtomUtils10_native.tcc"

#endif //UQ_1010919ATOMUTILS10_H
