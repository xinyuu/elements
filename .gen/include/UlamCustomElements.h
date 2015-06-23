#ifndef ULAMCUSTOMELEMENTS_H
#define ULAMCUSTOMELEMENTS_H

#include "AbstractDriver.h"

#include "Ue_10104Wall10.h"
#include "Ue_10105Empty10.h"
#include "Ue_10106Marker10.h"
#include "Ue_102213Box10.h"
#include "Ue_102294Pbox10.h"
#include "Ue_102689214WindowServices10.h"
#include "Uq_10104Fail10.h"
#include "Uq_10105MDist10.h"
#include "Uq_10106Random10.h"
#include "Uq_1010919AtomUtils10.h"
#include "Uq_10109210DebugUtils10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_102323C2D10.h"

/* Metadata for UlamElementInfoForUe_10104Wall10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in '/home/c/ULAM/ulam1/share/ulam/Wall.ulam'.
   Make any desired changes there!

   Generated on Tue Jun 16 16:39:33 2015 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_10104Wall10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    const UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_10104Wall10(const UlamElement<EC> & ue)
        : m_ulamElement(ue)
    { }

    UlamElementInfoForUe_10104Wall10() { }
    const char * GetName() const { return "Wall"; }
    const char * GetSymbol() const { return "W"; }
    const char * GetSummary() const { return "Wall."; }
    const char * GetDetails() const { return "A thing that doesn't want to move or be moved"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetCopyright() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }
    virtual const u32 GetPercentDiffusability() const
    {
      return 0;
    }

    const u32 GetNumColors() const { return 1; }
    const u32 GetElementColor() const { return 0xffffffff; }
    const u32 GetSymmetry(UlamContext<EC>& uc) const {
      return 0;
    }
  };
} // MFM

/* Metadata for UlamElementInfoForUe_10105Empty10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in '/home/c/ULAM/ulam1/share/ulam/Empty.ulam'.
   Make any desired changes there!

   Generated on Tue Jun 16 16:39:33 2015 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_10105Empty10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    const UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_10105Empty10(const UlamElement<EC> & ue)
        : m_ulamElement(ue)
    { }

    UlamElementInfoForUe_10105Empty10() { }
    const char * GetName() const { return "Empty"; }
    const char * GetSymbol() const { return "E"; }
    const char * GetSummary() const { return "This stub is linked to the actual Element_Empty by special-case setup code."; }
    const char * GetDetails() const { return "Empty (no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetCopyright() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetNumColors() const { return 1; }
    const u32 GetElementColor() const { return 0xff000000; }
    const u32 GetSymmetry(UlamContext<EC>& uc) const {
      return 0;
    }
  };
} // MFM

/* Metadata for UlamElementInfoForUe_10106Marker10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in './Marker.ulam'.
   Make any desired changes there!

   Generated on Tue Jun 16 16:39:33 2015 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_10106Marker10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    const UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_10106Marker10(const UlamElement<EC> & ue)
        : m_ulamElement(ue)
    { }

    UlamElementInfoForUe_10106Marker10() { }
    const char * GetName() const { return "Marker"; }
    const char * GetSymbol() const { return "Mk"; }
    const char * GetSummary() const { return "Marker is a demo element."; }
    const char * GetDetails() const { return "Marker (no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetCopyright() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetNumColors() const { return 1; }
    const u32 GetElementColor() const { return 0xffff00ff; }
    const u32 GetSymmetry(UlamContext<EC>& uc) const {
      Random & r = uc.GetRandom();
      return r.Create(8);
    }
  };
} // MFM

/* Metadata for UlamElementInfoForUe_102213Box10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in './Box.ulam'.
   Make any desired changes there!

   Generated on Tue Jun 16 16:39:33 2015 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_102213Box10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    const UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_102213Box10(const UlamElement<EC> & ue)
        : m_ulamElement(ue)
    { }

    UlamElementInfoForUe_102213Box10() { }
    const char * GetName() const { return "Box"; }
    const char * GetSymbol() const { return "Bx"; }
    const char * GetSummary() const { return "Box is a demo element."; }
    const char * GetDetails() const { return "Box (no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetCopyright() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetNumColors() const { return 1; }
    const u32 GetElementColor() const { return 0xffaa3388; }
    const u32 GetSymmetry(UlamContext<EC>& uc) const {
      return 0;
    }
  };
} // MFM

/* Metadata for UlamElementInfoForUe_102294Pbox10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in './Pbox.ulam'.
   Make any desired changes there!

   Generated on Tue Jun 16 16:39:33 2015 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_102294Pbox10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    const UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_102294Pbox10(const UlamElement<EC> & ue)
        : m_ulamElement(ue)
    { }

    UlamElementInfoForUe_102294Pbox10() { }
    const char * GetName() const { return "Pbox"; }
    const char * GetSymbol() const { return "Pb"; }
    const char * GetSummary() const { return "Pbox is a demo element."; }
    const char * GetDetails() const { return "Pbox (no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetCopyright() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetNumColors() const { return 1; }
    const u32 GetElementColor() const { return 0xffaa6633; }
    const u32 GetSymmetry(UlamContext<EC>& uc) const {
      return 0;
    }
  };
} // MFM

/* Metadata for UlamElementInfoForUe_102689214WindowServices10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in '/home/c/ULAM/ulam1/share/ulam/WindowServices.ulam'.
   Make any desired changes there!

   Generated on Tue Jun 16 16:39:33 2015 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_102689214WindowServices10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    const UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_102689214WindowServices10(const UlamElement<EC> & ue)
        : m_ulamElement(ue)
    { }

    UlamElementInfoForUe_102689214WindowServices10() { }
    const char * GetName() const { return "WindowServices"; }
    const char * GetSymbol() const { return "Wi"; }
    const char * GetSummary() const { return "A simple scanning framework to help automate common event window search and selection tasks."; }
    const char * GetDetails() const { return "WindowServices (no details provided)"; }
    const char * GetAuthor() const { return "Dave Ackley"; }
    const char * GetCopyright() const { return "--none specified--"; }
    const char * GetLicense() const { return "lgpl"; }
    bool GetPlaceable() const { return false; }
    const u32 GetVersion() const { return 0; }

    const u32 GetNumColors() const { return 1; }
    const u32 GetElementColor() const { return 0xFFFFFFFF; }
    const u32 GetSymmetry(UlamContext<EC>& uc) const {
      return 0;
    }
  };
} // MFM

#endif /* ULAMCUSTOMELEMENTS_H */
