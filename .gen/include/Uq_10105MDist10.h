/**                                      -*- mode:C++ -*- */

/***********************         DO NOT EDIT        ******************************
*
* MDist.h - Quark header for ULAM
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

#ifndef UQ_10105MDIST10_H
#define UQ_10105MDIST10_H

#include "UlamDefs.h"

#include "Uq_10105MDist10_Types.h"

namespace MFM { template <class EC> struct Ue_102213Box10; }  //FORWARD
namespace MFM { template <class EC, u32 POS> struct Uq_10109210DebugUtils10; }  //FORWARD
namespace MFM { template <class EC, u32 POS> struct Uq_10109211EventWindow10; }  //FORWARD
namespace MFM { template <class EC, u32 POS> struct Uq_1010919AtomUtils10; }  //FORWARD
namespace MFM { template <class EC, u32 POS> struct Uq_10106Random10; }  //FORWARD
namespace MFM { template <class EC> struct Ue_102689214WindowServices10; }  //FORWARD
namespace MFM { template <class EC> struct Ue_102294Pbox10; }  //FORWARD
namespace MFM { template <class EC> struct Ue_10105Empty10; }  //FORWARD
namespace MFM { template <class EC> struct Ue_10104Wall10; }  //FORWARD
namespace MFM { template <class EC> struct Ue_10106Marker10; }  //FORWARD
namespace MFM { template <class EC, u32 POS> struct Uq_102323C2D10; }  //FORWARD
namespace MFM { template <class EC, u32 POS> struct Uq_10104Fail10; }  //FORWARD

namespace MFM{

  template <class EC, u32 POS>
  struct Uq_10105MDist10 : public UlamClass
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


    //! MDist.ulam:11:   typedef Unsigned(3) Radius;


    //! MDist.ulam:13:   Unsigned getFirstIndex(Radius radius) native;
    static Ui_Ut_102321u Uf_9213getFirstIndex(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10131u Uv_6radius); //native


    //! MDist.ulam:15:   Unsigned getLastIndex(Radius radius) native;
    static Ui_Ut_102321u Uf_9212getLastIndex(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10131u Uv_6radius); //native

    //helper method not called directly
    s32 PositionOfDataMemberType(const char * namearg) const;

    const UlamClassDataMemberInfo & GetDataMemberInfo(u32 dataMemberNumber) const;

    s32 GetDataMemberCount() const;

    const char * GetMangledClassName() const;

  };
} //MFM

#include "Uq_10105MDist10.tcc"

#include "Uq_10105MDist10_native.tcc"

#endif //UQ_10105MDIST10_H
