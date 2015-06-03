#ifndef ULAMCUSTOMELEMENTS_H
#define ULAMCUSTOMELEMENTS_H

#include "AbstractDriver.h"

#include "Ue_10105Empty10.h"
#include "Ue_10133Box10.h"

/* Metadata for UlamElementInfoForUe_10105Empty10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in '/home/c/ULAM/ulam1/share/ulam/Empty.ulam'.
   Make any desired changes there!

   Generated on Tue Jun  2 21:07:28 2015 UTC
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

/* Metadata for UlamElementInfoForUe_10133Box10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in './Box.ulam'.
   Make any desired changes there!

   Generated on Tue Jun  2 21:07:28 2015 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_10133Box10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    const UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_10133Box10(const UlamElement<EC> & ue)
        : m_ulamElement(ue)
    { }

    UlamElementInfoForUe_10133Box10() { }
    const char * GetName() const { return "Box"; }
    const char * GetSymbol() const { return "Bx"; }
    const char * GetSummary() const { return "Box is a demo element."; }
    const char * GetDetails() const { return "Box (no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetNumColors() const { return 1; }
    const u32 GetElementColor() const { return 0xff666666; }
    const u32 GetSymmetry(UlamContext<EC>& uc) const {
      return 0;
    }
  };
} // MFM

#endif /* ULAMCUSTOMELEMENTS_H */
