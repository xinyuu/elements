/**                                      -*- mode:C++ -*- */

/***********************         DO NOT EDIT        ******************************
*
* EventWindow.h - Quark header for ULAM
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

#ifndef UQ_10109211EVENTWINDOW10_H
#define UQ_10109211EVENTWINDOW10_H

#include "UlamDefs.h"

#include "Uq_10109211EventWindow10_Types.h"

namespace MFM { template <class EC> struct Ue_102213Box10; }  //FORWARD
namespace MFM { template <class EC, u32 POS> struct Uq_10109210DebugUtils10; }  //FORWARD
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
  struct Uq_10109211EventWindow10 : public UlamClass
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


    //! EventWindow.ulam:11:   AtomUtils au;
    typedef Uq_1010919AtomUtils10<EC, POS + 0> Ut_Um_2au;

    //! EventWindow.ulam:13:   typedef Unsigned(6) SiteNum;

    //! EventWindow.ulam:14:   typedef Unsigned(3) Symmetry;

    //! EventWindow.ulam:16:   constant Symmetry cSYMMETRY_000L = 0u;

    //! EventWindow.ulam:17:   constant Symmetry cSYMMETRY_090L = 1u;

    //! EventWindow.ulam:18:   constant Symmetry cSYMMETRY_180L = 2u;

    //! EventWindow.ulam:19:   constant Symmetry cSYMMETRY_270L = 3u;

    //! EventWindow.ulam:20:   constant Symmetry cSYMMETRY_000R = 4u;

    //! EventWindow.ulam:21:   constant Symmetry cSYMMETRY_090R = 5u;

    //! EventWindow.ulam:22:   constant Symmetry cSYMMETRY_180R = 6u;

    //! EventWindow.ulam:23:   constant Symmetry cSYMMETRY_270R = 7u;

    //! EventWindow.ulam:25:   typedef Unsigned(3) Dir;

    //! EventWindow.ulam:26:   constant Dir cDIR_NORTH =     0u;

    //! EventWindow.ulam:27:   constant Dir cDIR_NORTHEAST = 1u;

    //! EventWindow.ulam:28:   constant Dir cDIR_EAST =      2u;

    //! EventWindow.ulam:29:   constant Dir cDIR_SOUTHEAST = 3u;

    //! EventWindow.ulam:30:   constant Dir cDIR_SOUTH =     4u;

    //! EventWindow.ulam:31:   constant Dir cDIR_SOUTHWEST = 5u;

    //! EventWindow.ulam:32:   constant Dir cDIR_WEST =      6u;

    //! EventWindow.ulam:33:   constant Dir cDIR_NORTHWEST = 7u;


    //! EventWindow.ulam:38:   Atom aref(Int index) { return aref((SiteNum) index); }
    static Ui_Ut_102961a<EC> Uf_4aref(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_5index);


    //! EventWindow.ulam:39:   Atom aref(C2D coord) { return aref(getSiteNumber(coord)); }
    static Ui_Ut_102961a<EC> Uf_4aref(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D10<EC> Uv_5coord);


    //! EventWindow.ulam:37:   Atom aref(SiteNum index) native;
    static Ui_Ut_102961a<EC> Uf_4aref(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10161u Uv_5index); //native


    //! EventWindow.ulam:75:   Symmetry changeSymmetry(Symmetry newSym) native;
    static Ui_Ut_10131u Uf_9214changeSymmetry(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10131u Uv_6newSym); //native


    //! EventWindow.ulam:58:   Bool swap(Int index1, Int index2) { return swap((SiteNum) index1, (SiteNum) index2); }
    static Ui_Ut_10111b Uf_4swap(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_6index1, Ui_Ut_102321i Uv_6index2);


    //! EventWindow.ulam:59:   Bool swap(C2D coord1, C2D coord2) { return swap(getSiteNumber(coord1), getSiteNumber(coord2)); }
    static Ui_Ut_10111b Uf_4swap(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D10<EC> Uv_6coord1, Ui_Uq_102323C2D10<EC> Uv_6coord2);


    //! EventWindow.ulam:57:   Bool swap(SiteNum index1, SiteNum index2)  native;
    static Ui_Ut_10111b Uf_4swap(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10161u Uv_6index1, Ui_Ut_10161u Uv_6index2); //native


    //! EventWindow.ulam:73:   SiteNum getSiteNumber(C2D coord) native;
    static Ui_Ut_10161u Uf_9213getSiteNumber(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D10<EC> Uv_5coord); //native


    //! EventWindow.ulam:54:   Bool isEmpty(Int index) { return isEmpty((SiteNum) index); }
    static Ui_Ut_10111b Uf_7isEmpty(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_5index);


    //! EventWindow.ulam:55:   Bool isEmpty(C2D coord) { return isLegal(coord) && isLive(getSiteNumber(coord)); }
    static Ui_Ut_10111b Uf_7isEmpty(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D10<EC> Uv_5coord);


    //! EventWindow.ulam:53:   Bool isEmpty(SiteNum index) { return isLive(index) && au.isEmpty(aref(index)); }
    static Ui_Ut_10111b Uf_7isEmpty(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10161u Uv_5index);


    //! EventWindow.ulam:35:   SiteNum size() native;
    static Ui_Ut_10161u Uf_4size(UlamContext<EC>& uc, T& Uv_4self); //native


    //! EventWindow.ulam:42:   Void aset(Int index, Atom val) { aset((SiteNum) index, val); }
    static void Uf_4aset(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_5index, Ui_Ut_102961a<EC> Uv_3val);


    //! EventWindow.ulam:43:   Void aset(C2D coord, Atom val) { aset(getSiteNumber(coord), val); }
    static void Uf_4aset(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D10<EC> Uv_5coord, Ui_Ut_102961a<EC> Uv_3val);


    //! EventWindow.ulam:41:   Void aset(SiteNum index, Atom val) native;
    static void Uf_4aset(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10161u Uv_5index, Ui_Ut_102961a<EC> Uv_3val); //native


    //! EventWindow.ulam:46:   Bool isLegal(Int index) { return index >= 0 && isLegal((SiteNum) index); }
    static Ui_Ut_10111b Uf_7isLegal(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_5index);


    //! EventWindow.ulam:47:   Bool isLegal(C2D coord) { return isLegal(getSiteNumber(coord)); }
    static Ui_Ut_10111b Uf_7isLegal(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D10<EC> Uv_5coord);


    //! EventWindow.ulam:45:   Bool isLegal(SiteNum index) { return index < size(); }
    static Ui_Ut_10111b Uf_7isLegal(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10161u Uv_5index);


    //! EventWindow.ulam:50:   Bool isLive(Int index) { return isLegal(index) && isLive((SiteNum) index); }
    static Ui_Ut_10111b Uf_6isLive(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_102321i Uv_5index);


    //! EventWindow.ulam:51:   Bool isLive(C2D coord) { return isLegal(coord) && isLive(getSiteNumber(coord)); }
    static Ui_Ut_10111b Uf_6isLive(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D10<EC> Uv_5coord);


    //! EventWindow.ulam:49:   Bool isLive(SiteNum index) native;
    static Ui_Ut_10111b Uf_6isLive(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10161u Uv_5index); //native


    //! EventWindow.ulam:61:   C2D getCoord(SiteNum siteNum) native;
    static Ui_Uq_102323C2D10<EC> Uf_8getCoord(UlamContext<EC>& uc, T& Uv_4self, Ui_Ut_10161u Uv_7siteNum); //native


    //! EventWindow.ulam:67:   C2D mapSym(C2D directCoord) native;
    static Ui_Uq_102323C2D10<EC> Uf_6mapSym(UlamContext<EC>& uc, T& Uv_4self, Ui_Uq_102323C2D10<EC> Uv_9211directCoord); //native


    //! EventWindow.ulam:77:   Void diffuse() native;
    static void Uf_7diffuse(UlamContext<EC>& uc, T& Uv_4self); //native

    //helper method not called directly
    s32 PositionOfDataMemberType(const char * namearg) const;

    const UlamClassDataMemberInfo & GetDataMemberInfo(u32 dataMemberNumber) const;

    s32 GetDataMemberCount() const;

    const char * GetMangledClassName() const;

  };
} //MFM

#include "Uq_10109211EventWindow10.tcc"

#include "Uq_10109211EventWindow10_native.tcc"

#endif //UQ_10109211EVENTWINDOW10_H
