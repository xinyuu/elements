#include <stdio.h>
#include <iostream>
#include "itype.h"
#include "P3Atom.h"
#include "SizedTile.h"

#include "UlamDefs.h"

#include "Ue_102689214WindowServices10.h"
#include "Ue_102213Box10.h"
#include "Uq_10109210DebugUtils10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_1010919AtomUtils10.h"
#include "Uq_10106Random10.h"
#include "Ue_102294Pbox10.h"
#include "Ue_10105Empty10.h"
#include "Ue_10104Wall10.h"
#include "Ue_10106Marker10.h"
#include "Uq_102323C2D10.h"
#include "Uq_10105MDist10.h"
#include "Uq_10104Fail10.h"

namespace MFM
{
  typedef P3Atom OurAtomAll;
  typedef Site<P3AtomConfig> OurSiteAll;
  typedef EventConfig<OurSiteAll,4> OurEventConfigAll;
  typedef SizedTile<OurEventConfigAll, 20> OurTestTile;
  typedef ElementTypeNumberMap<OurEventConfigAll> OurEventTypeNumberMapAll;

  typedef ElementTable<OurEventConfigAll> TestElementTable;
  typedef EventWindow<OurEventConfigAll> TestEventWindow;

  typedef UlamContext<OurEventConfigAll> OurUlamContext;

  template<class EC>
  int TestSingleElement()
  {
    OurEventTypeNumberMapAll etnm;
    OurTestTile tile;
    OurUlamContext uc;
    const u32 TILE_SIDE = tile.TILE_SIDE;
    SPoint center(TILE_SIDE/2, TILE_SIDE/2);  // Hitting no caches, for starters;
    uc.SetTile(tile);

    {
      Element<EC> & elt = Ue_102213Box10<EC>::THE_INSTANCE;
      elt.AllocateType(etnm); //Force element type allocation now
      tile.RegisterElement(elt);
    }

    {
      Element<EC> & elt = Ue_102689214WindowServices10<EC>::THE_INSTANCE;
      elt.AllocateType(etnm); //Force element type allocation now
      tile.RegisterElement(elt);
    }

    {
      Element<EC> & elt = Ue_102294Pbox10<EC>::THE_INSTANCE;
      elt.AllocateType(etnm); //Force element type allocation now
      tile.RegisterElement(elt);
    }

    {
      Element<EC> & elt = Ue_10105Empty10<EC>::THE_INSTANCE;
      elt.AllocateType(etnm); //Force element type allocation now
      tile.RegisterElement(elt);
    }

    {
      Element<EC> & elt = Ue_10104Wall10<EC>::THE_INSTANCE;
      elt.AllocateType(etnm); //Force element type allocation now
      tile.RegisterElement(elt);
    }

    {
      Element<EC> & elt = Ue_10106Marker10<EC>::THE_INSTANCE;
      elt.AllocateType(etnm); //Force element type allocation now
      tile.RegisterElement(elt);
    }

    OurAtomAll atom;
    MFM::Ui_Ut_102321i rtn;

    atom = Ue_102689214WindowServices10<EC>::THE_INSTANCE.GetDefaultAtom();
    tile.PlaceAtom(atom, center);
    rtn = Ue_102689214WindowServices10<EC>::THE_INSTANCE.Uf_4test(uc, atom);
    //std::cerr << rtn.read() << std::endl;
    //return rtn.read();

    return 0;
  }
} //MFM

int main(int argc, const char** argv)
{
  return MFM::TestSingleElement<MFM::OurEventConfigAll>();
} //main 
