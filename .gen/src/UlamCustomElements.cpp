
#include "UlamCustomElements.h"

#ifdef ELEMENT_PLUG_IN

#include "StdEventConfig.h"
#include "ElementLibraryLoader.h"

extern "C" {

  static MFM::UlamElementInfoForUe_10105Empty10<MFM::StdEventConfig> _ueinfoEmpty(MFM::Ue_10105Empty10<MFM::StdEventConfig>::THE_INSTANCE);
  static MFM::UlamEmptyElementLibraryStub<MFM::StdEventConfig> _uelstubEmpty (
      MFM::Ue_10105Empty10<MFM::StdEventConfig>::THE_INSTANCE,
      &_ueinfoEmpty);

  static MFM::UlamElementInfoForUe_10133Box10<MFM::StdEventConfig> _ueinfo10(MFM::Ue_10133Box10<MFM::StdEventConfig>::THE_INSTANCE);
  static MFM::UlamElementLibraryStub<MFM::StdEventConfig> _uelstub10 (
      MFM::Ue_10133Box10<MFM::StdEventConfig>::THE_INSTANCE,
      &_ueinfo10);

  static MFM::ElementLibraryStub<MFM::StdEventConfig> * (_elementStubPtrArray_[]) = {
    &_uelstub10
  };
  static MFM::ElementLibrary<MFM::StdEventConfig> el = {
    MFM::ELEMENT_LIBRARY_MAGIC,
    MFM::ELEMENT_LIBRARY_VERSION,
    0,
    1,
    MFM_BUILD_DATE,
    MFM_BUILD_TIME,
    _elementStubPtrArray_
  };
  void * MFM_ELEMENT_LIBRARY_LOADER_SYMBOL =  &el;
}

#endif /* ELEMENT_PLUG_IN */

