/**                                      -*- mode:C++ -*- */

/***********************         DO NOT EDIT        ******************************
*
* Marker.h - Element header for ULAM
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

#ifndef UE_10106MARKER10_H
#define UE_10106MARKER10_H

#include "UlamDefs.h"

#include "Ue_10106Marker10_Types.h"

namespace MFM { template <class EC> struct Ue_102213Box10; }  //FORWARD
namespace MFM { template <class EC, u32 POS> struct Uq_10109210DebugUtils10; }  //FORWARD
namespace MFM { template <class EC, u32 POS> struct Uq_10109211EventWindow10; }  //FORWARD
namespace MFM { template <class EC, u32 POS> struct Uq_1010919AtomUtils10; }  //FORWARD
namespace MFM { template <class EC, u32 POS> struct Uq_10106Random10; }  //FORWARD
namespace MFM { template <class EC> struct Ue_102689214WindowServices10; }  //FORWARD
namespace MFM { template <class EC> struct Ue_102294Pbox10; }  //FORWARD
namespace MFM { template <class EC> struct Ue_10105Empty10; }  //FORWARD
namespace MFM { template <class EC> struct Ue_10104Wall10; }  //FORWARD
namespace MFM { template <class EC, u32 POS> struct Uq_102323C2D10; }  //FORWARD
namespace MFM { template <class EC, u32 POS> struct Uq_10105MDist10; }  //FORWARD
namespace MFM { template <class EC, u32 POS> struct Uq_10104Fail10; }  //FORWARD

namespace MFM{

  template<class EC>
  class Ue_10106Marker10 : public UlamElement<EC>  {
    // Extract short names for parameter types
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };
    typedef BitVector<BPA> BV;


  public:

    static Ue_10106Marker10 THE_INSTANCE;

    //! Marker.ulam:8:   EventWindow ew;
    typedef Uq_10109211EventWindow10<EC, 25> Ut_Um_2ew;

    //! Marker.ulam:9:   Random rd;
    typedef Uq_10106Random10<EC, 25> Ut_Um_2rd;

    Ue_10106Marker10();
    ~Ue_10106Marker10();


    //! Marker.ulam:10:   Void behave(){
    void Uf_6behave(UlamContext<EC>& uc, T& Uv_4self) const;

    //helper method not called directly
    s32 PositionOfDataMemberType(const char * namearg) const;

    const UlamClassDataMemberInfo & GetDataMemberInfo(u32 dataMemberNumber) const;

    s32 GetDataMemberCount() const;

    const char * GetMangledClassName() const;

    //helper method not called directly
    bool internalCMethodImplementingIs(const T& targ) const;

  };

  template<class EC>
  Ue_10106Marker10<EC> Ue_10106Marker10<EC>::THE_INSTANCE;

} //MFM

#include "Ue_10106Marker10.tcc"

#endif //UE_10106MARKER10_H
