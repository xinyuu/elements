
#include "UlamCustomElements.h"

#ifdef ELEMENT_PLUG_IN

#include "StdEventConfig.h"
#include "ElementLibraryLoader.h"

extern "C" {

  static MFM::UlamElementInfoForUe_10104Wall10<MFM::StdEventConfig> _ueinfo10(MFM::Ue_10104Wall10<MFM::StdEventConfig>::THE_INSTANCE);
  static MFM::UlamElementLibraryStub<MFM::StdEventConfig> _uelstub10 (
      MFM::Ue_10104Wall10<MFM::StdEventConfig>::THE_INSTANCE,
      &_ueinfo10);

  static MFM::UlamElementInfoForUe_10105Empty10<MFM::StdEventConfig> _ueinfoEmpty(MFM::Ue_10105Empty10<MFM::StdEventConfig>::THE_INSTANCE);
  static MFM::UlamEmptyElementLibraryStub<MFM::StdEventConfig> _uelstubEmpty (
      MFM::Ue_10105Empty10<MFM::StdEventConfig>::THE_INSTANCE,
      &_ueinfoEmpty);

  static MFM::UlamElementInfoForUe_10106Marker10<MFM::StdEventConfig> _ueinfo11(MFM::Ue_10106Marker10<MFM::StdEventConfig>::THE_INSTANCE);
  static MFM::UlamElementLibraryStub<MFM::StdEventConfig> _uelstub11 (
      MFM::Ue_10106Marker10<MFM::StdEventConfig>::THE_INSTANCE,
      &_ueinfo11);

  static MFM::UlamElementInfoForUe_102213Box10<MFM::StdEventConfig> _ueinfo12(MFM::Ue_102213Box10<MFM::StdEventConfig>::THE_INSTANCE);
  static MFM::UlamElementLibraryStub<MFM::StdEventConfig> _uelstub12 (
      MFM::Ue_102213Box10<MFM::StdEventConfig>::THE_INSTANCE,
      &_ueinfo12);

  static MFM::UlamElementInfoForUe_102294Pbox10<MFM::StdEventConfig> _ueinfo13(MFM::Ue_102294Pbox10<MFM::StdEventConfig>::THE_INSTANCE);
  static MFM::UlamElementLibraryStub<MFM::StdEventConfig> _uelstub13 (
      MFM::Ue_102294Pbox10<MFM::StdEventConfig>::THE_INSTANCE,
      &_ueinfo13);

  static MFM::UlamElementInfoForUe_102689214WindowServices10<MFM::StdEventConfig> _ueinfo14(MFM::Ue_102689214WindowServices10<MFM::StdEventConfig>::THE_INSTANCE);
  static MFM::UlamElementLibraryStub<MFM::StdEventConfig> _uelstub14 (
      MFM::Ue_102689214WindowServices10<MFM::StdEventConfig>::THE_INSTANCE,
      &_ueinfo14);

  static MFM::ElementLibraryStub<MFM::StdEventConfig> * (_elementStubPtrArray_[]) = {
    &_uelstub10,
    &_uelstub11,
    &_uelstub12,
    &_uelstub13,
    &_uelstub14
  };

  static MFM::Uq_10104Fail10<MFM::StdEventConfig,0> _uqinstance10;

  static MFM::Uq_10105MDist10<MFM::StdEventConfig,0> _uqinstance11;

  static MFM::Uq_10106Random10<MFM::StdEventConfig,0> _uqinstance12;

  static MFM::Uq_1010919AtomUtils10<MFM::StdEventConfig,0> _uqinstance13;

  static MFM::Uq_10109210DebugUtils10<MFM::StdEventConfig,0> _uqinstance14;

  static MFM::Uq_10109211EventWindow10<MFM::StdEventConfig,0> _uqinstance15;

  static MFM::Uq_102323C2D10<MFM::StdEventConfig,0> _uqinstance16;

  static MFM::UlamClass * (_otherUlamClassPtrArray_[]) = {
    &_uqinstance10,
    &_uqinstance11,
    &_uqinstance12,
    &_uqinstance13,
    &_uqinstance14,
    &_uqinstance15,
    &_uqinstance16
  };
  static MFM::ElementLibrary<MFM::StdEventConfig> el = {
    MFM::ELEMENT_LIBRARY_MAGIC,
    MFM::ELEMENT_LIBRARY_VERSION,
    MFM::ELEMENT_LIBRARY_SUBVERSION,
    0,
    MFM_BUILD_DATE,
    MFM_BUILD_TIME,
    5,
    _elementStubPtrArray_,
    7,
    _otherUlamClassPtrArray_
  };
  void * MFM_ELEMENT_LIBRARY_LOADER_SYMBOL =  &el;
}

#endif /* ELEMENT_PLUG_IN */

