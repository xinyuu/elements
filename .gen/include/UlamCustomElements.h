#ifndef ULAMCUSTOMELEMENTS_H
#define ULAMCUSTOMELEMENTS_H

#include "AbstractDriver.h"

#include "Ue_10104Four0.h"
#include "Ue_10105Empty0.h"
#include "Ue_10105First0.h"
#include "Ue_10105Third0.h"
#include "Ue_10106Second0.h"
#include "Ue_10114Five0.h"
#include "Ue_10115Five20.h"
#include "Ue_102335Fifth0.h"

/* Metadata for UlamElementInfoForUe_10104Four0 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in './Four.ulam'.
   Make any desired changes there!

   Generated on Wed May 20 20:00:47 2015 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_10104Four0 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    const UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_10104Four0(const UlamElement<EC> & ue)
        : m_ulamElement(ue)
    { }

    UlamElementInfoForUe_10104Four0() { }
    const char * GetName() const { return "Four"; }
    const char * GetSymbol() const { return "F1"; }
    const char * GetSummary() const { return "Fourth is a demo element."; }
    const char * GetDetails() const { return "Four (no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetNumColors() const { return 1; }
    const u32 GetElementColor() const { return 0xff777700; }
    const u32 GetSymmetry(UlamContext<EC>& uc) const {
      return 0;
    }
  };
} // MFM

/* Metadata for UlamElementInfoForUe_10105Empty0 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in '/home/c/ULAM/ulam1/share/ulam/Empty.ulam'.
   Make any desired changes there!

   Generated on Wed May 20 20:00:47 2015 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_10105Empty0 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    const UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_10105Empty0(const UlamElement<EC> & ue)
        : m_ulamElement(ue)
    { }

    UlamElementInfoForUe_10105Empty0() { }
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

/* Metadata for UlamElementInfoForUe_10105First0 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in './First.ulam'.
   Make any desired changes there!

   Generated on Wed May 20 20:00:47 2015 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_10105First0 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    const UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_10105First0(const UlamElement<EC> & ue)
        : m_ulamElement(ue)
    { }

    UlamElementInfoForUe_10105First0() { }
    const char * GetName() const { return "First"; }
    const char * GetSymbol() const { return "Fi"; }
    const char * GetSummary() const { return "First (no summary provided)"; }
    const char * GetDetails() const { return "First (no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetNumColors() const { return 1; }
    const u32 GetElementColor() const { return 0xFFFFFFFF; }
    const u32 GetSymmetry(UlamContext<EC>& uc) const {
      return 0;
    }
  };
} // MFM

/* Metadata for UlamElementInfoForUe_10105Third0 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in './Third.ulam'.
   Make any desired changes there!

   Generated on Wed May 20 20:00:47 2015 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_10105Third0 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    const UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_10105Third0(const UlamElement<EC> & ue)
        : m_ulamElement(ue)
    { }

    UlamElementInfoForUe_10105Third0() { }
    const char * GetName() const { return "Third"; }
    const char * GetSymbol() const { return "T1"; }
    const char * GetSummary() const { return "Third is a demo element."; }
    const char * GetDetails() const { return "Third (no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetNumColors() const { return 1; }
    const u32 GetElementColor() const { return 0xffff00ff; }
    const u32 GetSymmetry(UlamContext<EC>& uc) const {
      return 0;
    }
  };
} // MFM

/* Metadata for UlamElementInfoForUe_10106Second0 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in './Second.ulam'.
   Make any desired changes there!

   Generated on Wed May 20 20:00:47 2015 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_10106Second0 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    const UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_10106Second0(const UlamElement<EC> & ue)
        : m_ulamElement(ue)
    { }

    UlamElementInfoForUe_10106Second0() { }
    const char * GetName() const { return "Second"; }
    const char * GetSymbol() const { return "S1"; }
    const char * GetSummary() const { return "Second is a demo element."; }
    const char * GetDetails() const { return "Second (no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetNumColors() const { return 1; }
    const u32 GetElementColor() const { return 0xff22ee22; }
    const u32 GetSymmetry(UlamContext<EC>& uc) const {
      return 0;
    }
  };
} // MFM

/* Metadata for UlamElementInfoForUe_10114Five0 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in './Five.ulam'.
   Make any desired changes there!

   Generated on Wed May 20 20:00:47 2015 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_10114Five0 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    const UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_10114Five0(const UlamElement<EC> & ue)
        : m_ulamElement(ue)
    { }

    UlamElementInfoForUe_10114Five0() { }
    const char * GetName() const { return "Five"; }
    const char * GetSymbol() const { return "Fv"; }
    const char * GetSummary() const { return "Fifth is a demo element."; }
    const char * GetDetails() const { return "Five (no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetNumColors() const { return 1; }
    const u32 GetElementColor() const { return 0xff660066; }
    const u32 GetSymmetry(UlamContext<EC>& uc) const {
      return 0;
    }
  };
} // MFM

/* Metadata for UlamElementInfoForUe_10115Five20 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in './Five2.ulam'.
   Make any desired changes there!

   Generated on Wed May 20 20:00:47 2015 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_10115Five20 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    const UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_10115Five20(const UlamElement<EC> & ue)
        : m_ulamElement(ue)
    { }

    UlamElementInfoForUe_10115Five20() { }
    const char * GetName() const { return "Five2"; }
    const char * GetSymbol() const { return "FF"; }
    const char * GetSummary() const { return "Fifth is a demo element."; }
    const char * GetDetails() const { return "Five2 (no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetNumColors() const { return 1; }
    const u32 GetElementColor() const { return 0xff660066; }
    const u32 GetSymmetry(UlamContext<EC>& uc) const {
      return 0;
    }
  };
} // MFM

/* Metadata for UlamElementInfoForUe_102335Fifth0 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in './Fifth.ulam'.
   Make any desired changes there!

   Generated on Wed May 20 20:00:47 2015 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_102335Fifth0 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    const UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_102335Fifth0(const UlamElement<EC> & ue)
        : m_ulamElement(ue)
    { }

    UlamElementInfoForUe_102335Fifth0() { }
    const char * GetName() const { return "Fifth"; }
    const char * GetSymbol() const { return "F5"; }
    const char * GetSummary() const { return "Fifth is a demo element."; }
    const char * GetDetails() const { return "Fifth (no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetNumColors() const { return 1; }
    const u32 GetElementColor() const { return 0xff660066; }
    const u32 GetSymmetry(UlamContext<EC>& uc) const {
      return 0;
    }
  };
} // MFM

#endif /* ULAMCUSTOMELEMENTS_H */
