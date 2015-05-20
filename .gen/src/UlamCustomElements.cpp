
#include "UlamCustomElements.h"

#ifdef ELEMENT_PLUG_IN

#include "StdEventConfig.h"
#include "ElementLibraryLoader.h"

extern "C" {

  static MFM::UlamElementInfoForUe_10104Four0<MFM::StdEventConfig> _ueinfo10(MFM::Ue_10104Four0<MFM::StdEventConfig>::THE_INSTANCE);
  static MFM::UlamElementLibraryStub<MFM::StdEventConfig> _uelstub10 (
      MFM::Ue_10104Four0<MFM::StdEventConfig>::THE_INSTANCE,
      &_ueinfo10);

  static MFM::UlamElementInfoForUe_10105Empty0<MFM::StdEventConfig> _ueinfoEmpty(MFM::Ue_10105Empty0<MFM::StdEventConfig>::THE_INSTANCE);
  static MFM::UlamEmptyElementLibraryStub<MFM::StdEventConfig> _uelstubEmpty (
      MFM::Ue_10105Empty0<MFM::StdEventConfig>::THE_INSTANCE,
      &_ueinfoEmpty);

  static MFM::UlamElementInfoForUe_10105First0<MFM::StdEventConfig> _ueinfo11(MFM::Ue_10105First0<MFM::StdEventConfig>::THE_INSTANCE);
  static MFM::UlamElementLibraryStub<MFM::StdEventConfig> _uelstub11 (
      MFM::Ue_10105First0<MFM::StdEventConfig>::THE_INSTANCE,
      &_ueinfo11);

  static MFM::UlamElementInfoForUe_10105Third0<MFM::StdEventConfig> _ueinfo12(MFM::Ue_10105Third0<MFM::StdEventConfig>::THE_INSTANCE);
  static MFM::UlamElementLibraryStub<MFM::StdEventConfig> _uelstub12 (
      MFM::Ue_10105Third0<MFM::StdEventConfig>::THE_INSTANCE,
      &_ueinfo12);

  static MFM::UlamElementInfoForUe_10106Second0<MFM::StdEventConfig> _ueinfo13(MFM::Ue_10106Second0<MFM::StdEventConfig>::THE_INSTANCE);
  static MFM::UlamElementLibraryStub<MFM::StdEventConfig> _uelstub13 (
      MFM::Ue_10106Second0<MFM::StdEventConfig>::THE_INSTANCE,
      &_ueinfo13);

  static MFM::UlamElementInfoForUe_10114Five0<MFM::StdEventConfig> _ueinfo14(MFM::Ue_10114Five0<MFM::StdEventConfig>::THE_INSTANCE);
  static MFM::UlamElementLibraryStub<MFM::StdEventConfig> _uelstub14 (
      MFM::Ue_10114Five0<MFM::StdEventConfig>::THE_INSTANCE,
      &_ueinfo14);

  static MFM::UlamElementInfoForUe_10115Five20<MFM::StdEventConfig> _ueinfo15(MFM::Ue_10115Five20<MFM::StdEventConfig>::THE_INSTANCE);
  static MFM::UlamElementLibraryStub<MFM::StdEventConfig> _uelstub15 (
      MFM::Ue_10115Five20<MFM::StdEventConfig>::THE_INSTANCE,
      &_ueinfo15);

  static MFM::UlamElementInfoForUe_102335Fifth0<MFM::StdEventConfig> _ueinfo16(MFM::Ue_102335Fifth0<MFM::StdEventConfig>::THE_INSTANCE);
  static MFM::UlamElementLibraryStub<MFM::StdEventConfig> _uelstub16 (
      MFM::Ue_102335Fifth0<MFM::StdEventConfig>::THE_INSTANCE,
      &_ueinfo16);

  static MFM::ElementLibraryStub<MFM::StdEventConfig> * (_elementStubPtrArray_[]) = {
    &_uelstub10,
    &_uelstub11,
    &_uelstub12,
    &_uelstub13,
    &_uelstub14,
    &_uelstub15,
    &_uelstub16
  };
  static MFM::ElementLibrary<MFM::StdEventConfig> el = {
    MFM::ELEMENT_LIBRARY_MAGIC,
    MFM::ELEMENT_LIBRARY_VERSION,
    0,
    7,
    MFM_BUILD_DATE,
    MFM_BUILD_TIME,
    _elementStubPtrArray_
  };
  void * MFM_ELEMENT_LIBRARY_LOADER_SYMBOL =  &el;
}

#endif /* ELEMENT_PLUG_IN */

