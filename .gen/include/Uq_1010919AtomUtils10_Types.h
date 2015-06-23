/**                                      -*- mode:C++ -*- */

//#include "itype.h"
//#include "BitVector.h"
//#include "BitField.h"

#include "UlamDefs.h"

#ifndef Ud_Ui_Ut_10131i
#define Ud_Ui_Ut_10131i
namespace MFM{
  struct Ui_Ut_10131i
  {
    typedef BitField<BitVector<32>, VD::S32, 3, 29> BF;
    BitVector<32> m_stg;
    Ui_Ut_10131i() : m_stg() { }
    Ui_Ut_10131i(const s32 d) : m_stg(d) {}
    const s32 read() const { return BF::Read(m_stg); }
    void write(const s32 v) { BF::Write(m_stg, v); }
  };
} //MFM
#endif /*Ud_Ui_Ut_10131i */

#ifndef Ud_Ui_Ut_10141i
#define Ud_Ui_Ut_10141i
namespace MFM{
  struct Ui_Ut_10141i
  {
    typedef BitField<BitVector<32>, VD::S32, 4, 28> BF;
    BitVector<32> m_stg;
    Ui_Ut_10141i() : m_stg() { }
    Ui_Ut_10141i(const s32 d) : m_stg(d) {}
    const s32 read() const { return BF::Read(m_stg); }
    void write(const s32 v) { BF::Write(m_stg, v); }
  };
} //MFM
#endif /*Ud_Ui_Ut_10141i */

#ifndef Ud_Ui_Ut_10181i
#define Ud_Ui_Ut_10181i
namespace MFM{
  struct Ui_Ut_10181i
  {
    typedef BitField<BitVector<32>, VD::S32, 8, 24> BF;
    BitVector<32> m_stg;
    Ui_Ut_10181i() : m_stg() { }
    Ui_Ut_10181i(const s32 d) : m_stg(d) {}
    const s32 read() const { return BF::Read(m_stg); }
    void write(const s32 v) { BF::Write(m_stg, v); }
  };
} //MFM
#endif /*Ud_Ui_Ut_10181i */

#ifndef Ud_Ui_Ut_102161i
#define Ud_Ui_Ut_102161i
namespace MFM{
  struct Ui_Ut_102161i
  {
    typedef BitField<BitVector<32>, VD::S32, 16, 16> BF;
    BitVector<32> m_stg;
    Ui_Ut_102161i() : m_stg() { }
    Ui_Ut_102161i(const s32 d) : m_stg(d) {}
    const s32 read() const { return BF::Read(m_stg); }
    void write(const s32 v) { BF::Write(m_stg, v); }
  };
} //MFM
#endif /*Ud_Ui_Ut_102161i */

#ifndef Ud_Ui_Ut_102321i
#define Ud_Ui_Ut_102321i
namespace MFM{
  struct Ui_Ut_102321i
  {
    typedef BitField<BitVector<32>, VD::S32, 32, 0> BF;
    BitVector<32> m_stg;
    Ui_Ut_102321i() : m_stg() { }
    Ui_Ut_102321i(const s32 d) : m_stg(d) {}
    const s32 read() const { return BF::Read(m_stg); }
    void write(const s32 v) { BF::Write(m_stg, v); }
  };
} //MFM
#endif /*Ud_Ui_Ut_102321i */

#ifndef Ud_Ui_Ut_10121u
#define Ud_Ui_Ut_10121u
namespace MFM{
  struct Ui_Ut_10121u
  {
    typedef BitField<BitVector<32>, VD::U32, 2, 30> BF;
    BitVector<32> m_stg;
    Ui_Ut_10121u() : m_stg() { }
    Ui_Ut_10121u(const u32 d) : m_stg(d) {}
    const u32 read() const { return BF::Read(m_stg); }
    void write(const u32 v) { BF::Write(m_stg, v); }
  };
} //MFM
#endif /*Ud_Ui_Ut_10121u */

#ifndef Ud_Ui_Ut_10131u
#define Ud_Ui_Ut_10131u
namespace MFM{
  struct Ui_Ut_10131u
  {
    typedef BitField<BitVector<32>, VD::U32, 3, 29> BF;
    BitVector<32> m_stg;
    Ui_Ut_10131u() : m_stg() { }
    Ui_Ut_10131u(const u32 d) : m_stg(d) {}
    const u32 read() const { return BF::Read(m_stg); }
    void write(const u32 v) { BF::Write(m_stg, v); }
  };
} //MFM
#endif /*Ud_Ui_Ut_10131u */

#ifndef Ud_Ui_Ut_10161u
#define Ud_Ui_Ut_10161u
namespace MFM{
  struct Ui_Ut_10161u
  {
    typedef BitField<BitVector<32>, VD::U32, 6, 26> BF;
    BitVector<32> m_stg;
    Ui_Ut_10161u() : m_stg() { }
    Ui_Ut_10161u(const u32 d) : m_stg(d) {}
    const u32 read() const { return BF::Read(m_stg); }
    void write(const u32 v) { BF::Write(m_stg, v); }
  };
} //MFM
#endif /*Ud_Ui_Ut_10161u */

#ifndef Ud_Ui_Ut_14161u
#define Ud_Ui_Ut_14161u
namespace MFM{
  struct Ui_Ut_14161u
  {
    typedef BitField<BitVector<32>, VD::BITS, 24, 8> BF;
    BitVector<32> m_stg;
    Ui_Ut_14161u() : m_stg() { }
    Ui_Ut_14161u(const u32 d) : m_stg(d) {}
    const u32 read() const { return BF::Read(m_stg); }   //reads entire array
    const u32 readArrayItem(const u32 index, const u32 unitsize) const { return BF::ReadArray(m_stg, index, unitsize); }
    void write(const u32 v) { BF::Write(m_stg, v); }   //writes entire array
    void writeArrayItem(const u32 v, const u32 index, const u32 unitsize) { BF::WriteArray(m_stg, v, index, unitsize); }
  };
} //MFM
#endif /*Ud_Ui_Ut_14161u */

#ifndef Ud_Ui_Ut_10181u
#define Ud_Ui_Ut_10181u
namespace MFM{
  struct Ui_Ut_10181u
  {
    typedef BitField<BitVector<32>, VD::U32, 8, 24> BF;
    BitVector<32> m_stg;
    Ui_Ut_10181u() : m_stg() { }
    Ui_Ut_10181u(const u32 d) : m_stg(d) {}
    const u32 read() const { return BF::Read(m_stg); }
    void write(const u32 v) { BF::Write(m_stg, v); }
  };
} //MFM
#endif /*Ud_Ui_Ut_10181u */

#ifndef Ud_Ui_Ut_14181u
#define Ud_Ui_Ut_14181u
namespace MFM{
  struct Ui_Ut_14181u
  {
    typedef BitField<BitVector<32>, VD::BITS, 32, 0> BF;
    BitVector<32> m_stg;
    Ui_Ut_14181u() : m_stg() { }
    Ui_Ut_14181u(const u32 d) : m_stg(d) {}
    const u32 read() const { return BF::Read(m_stg); }   //reads entire array
    const u32 readArrayItem(const u32 index, const u32 unitsize) const { return BF::ReadArray(m_stg, index, unitsize); }
    void write(const u32 v) { BF::Write(m_stg, v); }   //writes entire array
    void writeArrayItem(const u32 v, const u32 index, const u32 unitsize) { BF::WriteArray(m_stg, v, index, unitsize); }
  };
} //MFM
#endif /*Ud_Ui_Ut_14181u */

#ifndef Ud_Ui_Ut_102101u
#define Ud_Ui_Ut_102101u
namespace MFM{
  struct Ui_Ut_102101u
  {
    typedef BitField<BitVector<32>, VD::U32, 10, 22> BF;
    BitVector<32> m_stg;
    Ui_Ut_102101u() : m_stg() { }
    Ui_Ut_102101u(const u32 d) : m_stg(d) {}
    const u32 read() const { return BF::Read(m_stg); }
    void write(const u32 v) { BF::Write(m_stg, v); }
  };
} //MFM
#endif /*Ud_Ui_Ut_102101u */

#ifndef Ud_Ui_Ut_102321u
#define Ud_Ui_Ut_102321u
namespace MFM{
  struct Ui_Ut_102321u
  {
    typedef BitField<BitVector<32>, VD::U32, 32, 0> BF;
    BitVector<32> m_stg;
    Ui_Ut_102321u() : m_stg() { }
    Ui_Ut_102321u(const u32 d) : m_stg(d) {}
    const u32 read() const { return BF::Read(m_stg); }
    void write(const u32 v) { BF::Write(m_stg, v); }
  };
} //MFM
#endif /*Ud_Ui_Ut_102321u */

#ifndef Ud_Ui_Ut_10111b
#define Ud_Ui_Ut_10111b
namespace MFM{
  struct Ui_Ut_10111b
  {
    typedef BitField<BitVector<32>, VD::BOOL, 1, 31> BF;
    BitVector<32> m_stg;
    Ui_Ut_10111b() : m_stg() { }
    Ui_Ut_10111b(const u32 d) : m_stg(d) {}
    const u32 read() const { return BF::Read(m_stg); }
    void write(const u32 v) { BF::Write(m_stg, v); }
  };
} //MFM
#endif /*Ud_Ui_Ut_10111b */

#ifndef Ud_Ui_Ut_10131b
#define Ud_Ui_Ut_10131b
namespace MFM{
  struct Ui_Ut_10131b
  {
    typedef BitField<BitVector<32>, VD::BOOL, 3, 29> BF;
    BitVector<32> m_stg;
    Ui_Ut_10131b() : m_stg() { }
    Ui_Ut_10131b(const u32 d) : m_stg(d) {}
    const u32 read() const { return BF::Read(m_stg); }
    void write(const u32 v) { BF::Write(m_stg, v); }
  };
} //MFM
#endif /*Ud_Ui_Ut_10131b */

#ifndef Ud_Ui_Ut_10131y
#define Ud_Ui_Ut_10131y
namespace MFM{
  struct Ui_Ut_10131y
  {
    typedef BitField<BitVector<32>, VD::UNARY, 3, 29> BF;
    BitVector<32> m_stg;
    Ui_Ut_10131y() : m_stg() { }
    Ui_Ut_10131y(const u32 d) : m_stg(d) {}
    const u32 read() const { return BF::Read(m_stg); }
    void write(const u32 v) { BF::Write(m_stg, v); }
  };
} //MFM
#endif /*Ud_Ui_Ut_10131y */

#ifndef Ud_Ui_Ut_102321y
#define Ud_Ui_Ut_102321y
namespace MFM{
  struct Ui_Ut_102321y
  {
    typedef BitField<BitVector<32>, VD::UNARY, 32, 0> BF;
    BitVector<32> m_stg;
    Ui_Ut_102321y() : m_stg() { }
    Ui_Ut_102321y(const u32 d) : m_stg(d) {}
    const u32 read() const { return BF::Read(m_stg); }
    void write(const u32 v) { BF::Write(m_stg, v); }
  };
} //MFM
#endif /*Ud_Ui_Ut_102321y */

#ifndef Ud_Ui_Ut_102321t
#define Ud_Ui_Ut_102321t
namespace MFM{
  struct Ui_Ut_102321t
  {
    typedef BitField<BitVector<32>, VD::BITS, 32, 0> BF;
    BitVector<32> m_stg;
    Ui_Ut_102321t() : m_stg() { }
    Ui_Ut_102321t(const u32 d) : m_stg(d) {}
    const u32 read() const { return BF::Read(m_stg); }
    void write(const u32 v) { BF::Write(m_stg, v); }
  };
} //MFM
#endif /*Ud_Ui_Ut_102321t */

#ifndef Ud_Ui_Ut_102961a
#define Ud_Ui_Ut_102961a
namespace MFM{

  template<class EC>
  struct Ui_Ut_102961a
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };
    T m_stg;  //storage here!
    Ui_Ut_102961a() : m_stg() { }
    Ui_Ut_102961a(const T& d) : m_stg(d) {}
    Ui_Ut_102961a(const Ui_Ut_102961a<EC>& d) : m_stg(d.m_stg) {}
    ~Ui_Ut_102961a() {}
    const T read() const { return m_stg; }
    void write(const T& v) { m_stg = v; }
    T& getRef() { return m_stg; }
  };
} //MFM
#endif /*Ud_Ui_Ut_102961a */

#ifndef Ud_Ui_Ue_102213Box10
#define Ud_Ui_Ue_102213Box10
namespace MFM{

  template<class EC> class Ue_102213Box10;  //forward

  template<class EC>
  struct Ui_Ue_102213Box10
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };
    typedef Ue_102213Box10<EC> Us;
    T m_stg;  //possible storage here
    T& m_stgRef;  //storage ref
    Ui_Ue_102213Box10() : m_stg(), m_stgRef(m_stg) { }
    Ui_Ue_102213Box10(const T& d) : m_stg(d), m_stgRef(m_stg) {}
    Ui_Ue_102213Box10(T& d, bool badass) : m_stg(), m_stgRef(d) {}
    Ui_Ue_102213Box10(const Ui_Ue_102213Box10<EC>& d) : m_stg(d.m_stg), m_stgRef(m_stg) {}
    ~Ui_Ue_102213Box10() {}
    const T read() const { return m_stgRef; }
    void write(const T& v) { m_stgRef = v; }
    BitVector<BPA>& getBits() { return m_stgRef.GetBits(); }
    T& getRef() { return m_stgRef; }
  };
} //MFM
#endif /*Ud_Ui_Ue_102213Box10 */

#ifndef Ud_Ui_Uq_10109210DebugUtils10
#define Ud_Ui_Uq_10109210DebugUtils10
namespace MFM{

  template<class EC, u32 POS> class Uq_10109210DebugUtils10;  //forward

  template<class EC>
  struct Ui_Uq_10109210DebugUtils10
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef Uq_10109210DebugUtils10<EC, 96> Us;
    typedef AtomicParameterType<EC, VD::BITS, 0, 96>  Up_Us;
    T m_stg;  //storage here!
    Ui_Uq_10109210DebugUtils10() : m_stg() { }
    Ui_Uq_10109210DebugUtils10(const u32 d) { write(d); }
    const u32 read() const { return Up_Us::Read(m_stg.GetBits() ); }
    void write(const u32 v) { Up_Us::Write(m_stg.GetBits(), v); }
    BitVector<BPA>& getBits() { return m_stg.GetBits(); }
    T& getRef() { return m_stg; }
  };
} //MFM
#endif /*Ud_Ui_Uq_10109210DebugUtils10 */

#ifndef Ud_Ui_Uq_10109210DebugUtils104auto
#define Ud_Ui_Uq_10109210DebugUtils104auto
namespace MFM{

  template<class EC>
  struct Ui_Uq_10109210DebugUtils104auto : public Ui_Uq_10109210DebugUtils10<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    T& m_stgToChange;  //ref to storage here!
    const u32 m_pos;   //pos in atom
    Ui_Uq_10109210DebugUtils104auto(T & realStg, u32 idx) : m_stgToChange(realStg), m_pos(idx)
    {
      const u32 val = realStg.GetBits().Read(m_pos + T::ATOM_FIRST_STATE_BIT, 0);
      Ui_Uq_10109210DebugUtils10<EC>::write(val);
    }
    ~Ui_Uq_10109210DebugUtils104auto()
    {
      m_stgToChange.GetBits().Write(m_pos + T::ATOM_FIRST_STATE_BIT, 0, Ui_Uq_10109210DebugUtils10<EC>::read());
    }
  };
} //MFM
#endif /*Ud_Ui_Uq_10109210DebugUtils104auto */

#ifndef Ud_Ui_Uq_10109211EventWindow10
#define Ud_Ui_Uq_10109211EventWindow10
namespace MFM{

  template<class EC, u32 POS> class Uq_10109211EventWindow10;  //forward

  template<class EC>
  struct Ui_Uq_10109211EventWindow10
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef Uq_10109211EventWindow10<EC, 96> Us;
    typedef AtomicParameterType<EC, VD::BITS, 0, 96>  Up_Us;
    T m_stg;  //storage here!
    Ui_Uq_10109211EventWindow10() : m_stg() { }
    Ui_Uq_10109211EventWindow10(const u32 d) { write(d); }
    const u32 read() const { return Up_Us::Read(m_stg.GetBits() ); }
    void write(const u32 v) { Up_Us::Write(m_stg.GetBits(), v); }
    BitVector<BPA>& getBits() { return m_stg.GetBits(); }
    T& getRef() { return m_stg; }
    //CustomArray accessor methods:
    const T readArrayItem(UlamContext<EC>& uc, const u32 index, const u32 unitsize) { return Us::Uf_4aref(uc, m_stg, Ui_Ut_102321i((const s32)index)).read(); }
    void writeArrayItem(UlamContext<EC>& uc, const T v, const u32 index, const u32 unitsize) { Us::Uf_4aset(uc, m_stg, Ui_Ut_102321i((const s32) index), Ui_Ut_102961a<EC>(v)); }
  };
} //MFM
#endif /*Ud_Ui_Uq_10109211EventWindow10 */

#ifndef Ud_Ui_Uq_10109211EventWindow104auto
#define Ud_Ui_Uq_10109211EventWindow104auto
namespace MFM{

  template<class EC>
  struct Ui_Uq_10109211EventWindow104auto : public Ui_Uq_10109211EventWindow10<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    T& m_stgToChange;  //ref to storage here!
    const u32 m_pos;   //pos in atom
    Ui_Uq_10109211EventWindow104auto(T & realStg, u32 idx) : m_stgToChange(realStg), m_pos(idx)
    {
      const u32 val = realStg.GetBits().Read(m_pos + T::ATOM_FIRST_STATE_BIT, 0);
      Ui_Uq_10109211EventWindow10<EC>::write(val);
    }
    ~Ui_Uq_10109211EventWindow104auto()
    {
      m_stgToChange.GetBits().Write(m_pos + T::ATOM_FIRST_STATE_BIT, 0, Ui_Uq_10109211EventWindow10<EC>::read());
    }
  };
} //MFM
#endif /*Ud_Ui_Uq_10109211EventWindow104auto */

#ifndef Ud_Ui_Uq_1010919AtomUtils10
#define Ud_Ui_Uq_1010919AtomUtils10
namespace MFM{

  template<class EC, u32 POS> class Uq_1010919AtomUtils10;  //forward

  template<class EC>
  struct Ui_Uq_1010919AtomUtils10
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef Uq_1010919AtomUtils10<EC, 96> Us;
    typedef AtomicParameterType<EC, VD::BITS, 0, 96>  Up_Us;
    T m_stg;  //storage here!
    Ui_Uq_1010919AtomUtils10() : m_stg() { }
    Ui_Uq_1010919AtomUtils10(const u32 d) { write(d); }
    const u32 read() const { return Up_Us::Read(m_stg.GetBits() ); }
    void write(const u32 v) { Up_Us::Write(m_stg.GetBits(), v); }
    BitVector<BPA>& getBits() { return m_stg.GetBits(); }
    T& getRef() { return m_stg; }
  };
} //MFM
#endif /*Ud_Ui_Uq_1010919AtomUtils10 */

#ifndef Ud_Ui_Uq_1010919AtomUtils104auto
#define Ud_Ui_Uq_1010919AtomUtils104auto
namespace MFM{

  template<class EC>
  struct Ui_Uq_1010919AtomUtils104auto : public Ui_Uq_1010919AtomUtils10<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    T& m_stgToChange;  //ref to storage here!
    const u32 m_pos;   //pos in atom
    Ui_Uq_1010919AtomUtils104auto(T & realStg, u32 idx) : m_stgToChange(realStg), m_pos(idx)
    {
      const u32 val = realStg.GetBits().Read(m_pos + T::ATOM_FIRST_STATE_BIT, 0);
      Ui_Uq_1010919AtomUtils10<EC>::write(val);
    }
    ~Ui_Uq_1010919AtomUtils104auto()
    {
      m_stgToChange.GetBits().Write(m_pos + T::ATOM_FIRST_STATE_BIT, 0, Ui_Uq_1010919AtomUtils10<EC>::read());
    }
  };
} //MFM
#endif /*Ud_Ui_Uq_1010919AtomUtils104auto */

#ifndef Ud_Ui_Uq_10106Random10
#define Ud_Ui_Uq_10106Random10
namespace MFM{

  template<class EC, u32 POS> class Uq_10106Random10;  //forward

  template<class EC>
  struct Ui_Uq_10106Random10
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef Uq_10106Random10<EC, 96> Us;
    typedef AtomicParameterType<EC, VD::BITS, 0, 96>  Up_Us;
    T m_stg;  //storage here!
    Ui_Uq_10106Random10() : m_stg() { }
    Ui_Uq_10106Random10(const u32 d) { write(d); }
    const u32 read() const { return Up_Us::Read(m_stg.GetBits() ); }
    void write(const u32 v) { Up_Us::Write(m_stg.GetBits(), v); }
    BitVector<BPA>& getBits() { return m_stg.GetBits(); }
    T& getRef() { return m_stg; }
  };
} //MFM
#endif /*Ud_Ui_Uq_10106Random10 */

#ifndef Ud_Ui_Uq_10106Random104auto
#define Ud_Ui_Uq_10106Random104auto
namespace MFM{

  template<class EC>
  struct Ui_Uq_10106Random104auto : public Ui_Uq_10106Random10<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    T& m_stgToChange;  //ref to storage here!
    const u32 m_pos;   //pos in atom
    Ui_Uq_10106Random104auto(T & realStg, u32 idx) : m_stgToChange(realStg), m_pos(idx)
    {
      const u32 val = realStg.GetBits().Read(m_pos + T::ATOM_FIRST_STATE_BIT, 0);
      Ui_Uq_10106Random10<EC>::write(val);
    }
    ~Ui_Uq_10106Random104auto()
    {
      m_stgToChange.GetBits().Write(m_pos + T::ATOM_FIRST_STATE_BIT, 0, Ui_Uq_10106Random10<EC>::read());
    }
  };
} //MFM
#endif /*Ud_Ui_Uq_10106Random104auto */

#ifndef Ud_Ui_Ue_102689214WindowServices10
#define Ud_Ui_Ue_102689214WindowServices10
namespace MFM{

  template<class EC> class Ue_102689214WindowServices10;  //forward

  template<class EC>
  struct Ui_Ue_102689214WindowServices10
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };
    typedef Ue_102689214WindowServices10<EC> Us;
    T m_stg;  //possible storage here
    T& m_stgRef;  //storage ref
    Ui_Ue_102689214WindowServices10() : m_stg(), m_stgRef(m_stg) { }
    Ui_Ue_102689214WindowServices10(const T& d) : m_stg(d), m_stgRef(m_stg) {}
    Ui_Ue_102689214WindowServices10(T& d, bool badass) : m_stg(), m_stgRef(d) {}
    Ui_Ue_102689214WindowServices10(const Ui_Ue_102689214WindowServices10<EC>& d) : m_stg(d.m_stg), m_stgRef(m_stg) {}
    ~Ui_Ue_102689214WindowServices10() {}
    const T read() const { return m_stgRef; }
    void write(const T& v) { m_stgRef = v; }
    BitVector<BPA>& getBits() { return m_stgRef.GetBits(); }
    T& getRef() { return m_stgRef; }
  };
} //MFM
#endif /*Ud_Ui_Ue_102689214WindowServices10 */

#ifndef Ud_Ui_Ue_102294Pbox10
#define Ud_Ui_Ue_102294Pbox10
namespace MFM{

  template<class EC> class Ue_102294Pbox10;  //forward

  template<class EC>
  struct Ui_Ue_102294Pbox10
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };
    typedef Ue_102294Pbox10<EC> Us;
    T m_stg;  //possible storage here
    T& m_stgRef;  //storage ref
    Ui_Ue_102294Pbox10() : m_stg(), m_stgRef(m_stg) { }
    Ui_Ue_102294Pbox10(const T& d) : m_stg(d), m_stgRef(m_stg) {}
    Ui_Ue_102294Pbox10(T& d, bool badass) : m_stg(), m_stgRef(d) {}
    Ui_Ue_102294Pbox10(const Ui_Ue_102294Pbox10<EC>& d) : m_stg(d.m_stg), m_stgRef(m_stg) {}
    ~Ui_Ue_102294Pbox10() {}
    const T read() const { return m_stgRef; }
    void write(const T& v) { m_stgRef = v; }
    BitVector<BPA>& getBits() { return m_stgRef.GetBits(); }
    T& getRef() { return m_stgRef; }
  };
} //MFM
#endif /*Ud_Ui_Ue_102294Pbox10 */

#ifndef Ud_Ui_Ue_10105Empty10
#define Ud_Ui_Ue_10105Empty10
namespace MFM{

  template<class EC> class Ue_10105Empty10;  //forward

  template<class EC>
  struct Ui_Ue_10105Empty10
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };
    typedef Ue_10105Empty10<EC> Us;
    T m_stg;  //possible storage here
    T& m_stgRef;  //storage ref
    Ui_Ue_10105Empty10() : m_stg(), m_stgRef(m_stg) { }
    Ui_Ue_10105Empty10(const T& d) : m_stg(d), m_stgRef(m_stg) {}
    Ui_Ue_10105Empty10(T& d, bool badass) : m_stg(), m_stgRef(d) {}
    Ui_Ue_10105Empty10(const Ui_Ue_10105Empty10<EC>& d) : m_stg(d.m_stg), m_stgRef(m_stg) {}
    ~Ui_Ue_10105Empty10() {}
    const T read() const { return m_stgRef; }
    void write(const T& v) { m_stgRef = v; }
    BitVector<BPA>& getBits() { return m_stgRef.GetBits(); }
    T& getRef() { return m_stgRef; }
  };
} //MFM
#endif /*Ud_Ui_Ue_10105Empty10 */

#ifndef Ud_Ui_Ue_10104Wall10
#define Ud_Ui_Ue_10104Wall10
namespace MFM{

  template<class EC> class Ue_10104Wall10;  //forward

  template<class EC>
  struct Ui_Ue_10104Wall10
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };
    typedef Ue_10104Wall10<EC> Us;
    T m_stg;  //possible storage here
    T& m_stgRef;  //storage ref
    Ui_Ue_10104Wall10() : m_stg(), m_stgRef(m_stg) { }
    Ui_Ue_10104Wall10(const T& d) : m_stg(d), m_stgRef(m_stg) {}
    Ui_Ue_10104Wall10(T& d, bool badass) : m_stg(), m_stgRef(d) {}
    Ui_Ue_10104Wall10(const Ui_Ue_10104Wall10<EC>& d) : m_stg(d.m_stg), m_stgRef(m_stg) {}
    ~Ui_Ue_10104Wall10() {}
    const T read() const { return m_stgRef; }
    void write(const T& v) { m_stgRef = v; }
    BitVector<BPA>& getBits() { return m_stgRef.GetBits(); }
    T& getRef() { return m_stgRef; }
  };
} //MFM
#endif /*Ud_Ui_Ue_10104Wall10 */

#ifndef Ud_Ui_Ue_10106Marker10
#define Ud_Ui_Ue_10106Marker10
namespace MFM{

  template<class EC> class Ue_10106Marker10;  //forward

  template<class EC>
  struct Ui_Ue_10106Marker10
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };
    typedef Ue_10106Marker10<EC> Us;
    T m_stg;  //possible storage here
    T& m_stgRef;  //storage ref
    Ui_Ue_10106Marker10() : m_stg(), m_stgRef(m_stg) { }
    Ui_Ue_10106Marker10(const T& d) : m_stg(d), m_stgRef(m_stg) {}
    Ui_Ue_10106Marker10(T& d, bool badass) : m_stg(), m_stgRef(d) {}
    Ui_Ue_10106Marker10(const Ui_Ue_10106Marker10<EC>& d) : m_stg(d.m_stg), m_stgRef(m_stg) {}
    ~Ui_Ue_10106Marker10() {}
    const T read() const { return m_stgRef; }
    void write(const T& v) { m_stgRef = v; }
    BitVector<BPA>& getBits() { return m_stgRef.GetBits(); }
    T& getRef() { return m_stgRef; }
  };
} //MFM
#endif /*Ud_Ui_Ue_10106Marker10 */

#ifndef Ud_Ui_Uq_102323C2D10
#define Ud_Ui_Uq_102323C2D10
namespace MFM{

  template<class EC, u32 POS> class Uq_102323C2D10;  //forward

  template<class EC>
  struct Ui_Uq_102323C2D10
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef Uq_102323C2D10<EC, 64> Us;
    typedef AtomicParameterType<EC, VD::BITS, 32, 64>  Up_Us;
    T m_stg;  //storage here!
    Ui_Uq_102323C2D10() : m_stg() { }
    Ui_Uq_102323C2D10(const u32 d) { write(d); }
    const u32 read() const { return Up_Us::Read(m_stg.GetBits() ); }
    void write(const u32 v) { Up_Us::Write(m_stg.GetBits(), v); }
    BitVector<BPA>& getBits() { return m_stg.GetBits(); }
    T& getRef() { return m_stg; }
  };
} //MFM
#endif /*Ud_Ui_Uq_102323C2D10 */

#ifndef Ud_Ui_Uq_102323C2D104auto
#define Ud_Ui_Uq_102323C2D104auto
namespace MFM{

  template<class EC>
  struct Ui_Uq_102323C2D104auto : public Ui_Uq_102323C2D10<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    T& m_stgToChange;  //ref to storage here!
    const u32 m_pos;   //pos in atom
    Ui_Uq_102323C2D104auto(T & realStg, u32 idx) : m_stgToChange(realStg), m_pos(idx)
    {
      const u32 val = realStg.GetBits().Read(m_pos + T::ATOM_FIRST_STATE_BIT, 32);
      Ui_Uq_102323C2D10<EC>::write(val);
    }
    ~Ui_Uq_102323C2D104auto()
    {
      m_stgToChange.GetBits().Write(m_pos + T::ATOM_FIRST_STATE_BIT, 32, Ui_Uq_102323C2D10<EC>::read());
    }
  };
} //MFM
#endif /*Ud_Ui_Uq_102323C2D104auto */

#ifndef Ud_Ui_Uq_10105MDist10
#define Ud_Ui_Uq_10105MDist10
namespace MFM{

  template<class EC, u32 POS> class Uq_10105MDist10;  //forward

  template<class EC>
  struct Ui_Uq_10105MDist10
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef Uq_10105MDist10<EC, 96> Us;
    typedef AtomicParameterType<EC, VD::BITS, 0, 96>  Up_Us;
    T m_stg;  //storage here!
    Ui_Uq_10105MDist10() : m_stg() { }
    Ui_Uq_10105MDist10(const u32 d) { write(d); }
    const u32 read() const { return Up_Us::Read(m_stg.GetBits() ); }
    void write(const u32 v) { Up_Us::Write(m_stg.GetBits(), v); }
    BitVector<BPA>& getBits() { return m_stg.GetBits(); }
    T& getRef() { return m_stg; }
  };
} //MFM
#endif /*Ud_Ui_Uq_10105MDist10 */

#ifndef Ud_Ui_Uq_10105MDist104auto
#define Ud_Ui_Uq_10105MDist104auto
namespace MFM{

  template<class EC>
  struct Ui_Uq_10105MDist104auto : public Ui_Uq_10105MDist10<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    T& m_stgToChange;  //ref to storage here!
    const u32 m_pos;   //pos in atom
    Ui_Uq_10105MDist104auto(T & realStg, u32 idx) : m_stgToChange(realStg), m_pos(idx)
    {
      const u32 val = realStg.GetBits().Read(m_pos + T::ATOM_FIRST_STATE_BIT, 0);
      Ui_Uq_10105MDist10<EC>::write(val);
    }
    ~Ui_Uq_10105MDist104auto()
    {
      m_stgToChange.GetBits().Write(m_pos + T::ATOM_FIRST_STATE_BIT, 0, Ui_Uq_10105MDist10<EC>::read());
    }
  };
} //MFM
#endif /*Ud_Ui_Uq_10105MDist104auto */

#ifndef Ud_Ui_Uq_10104Fail10
#define Ud_Ui_Uq_10104Fail10
namespace MFM{

  template<class EC, u32 POS> class Uq_10104Fail10;  //forward

  template<class EC>
  struct Ui_Uq_10104Fail10
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef Uq_10104Fail10<EC, 96> Us;
    typedef AtomicParameterType<EC, VD::BITS, 0, 96>  Up_Us;
    T m_stg;  //storage here!
    Ui_Uq_10104Fail10() : m_stg() { }
    Ui_Uq_10104Fail10(const u32 d) { write(d); }
    const u32 read() const { return Up_Us::Read(m_stg.GetBits() ); }
    void write(const u32 v) { Up_Us::Write(m_stg.GetBits(), v); }
    BitVector<BPA>& getBits() { return m_stg.GetBits(); }
    T& getRef() { return m_stg; }
  };
} //MFM
#endif /*Ud_Ui_Uq_10104Fail10 */

#ifndef Ud_Ui_Uq_10104Fail104auto
#define Ud_Ui_Uq_10104Fail104auto
namespace MFM{

  template<class EC>
  struct Ui_Uq_10104Fail104auto : public Ui_Uq_10104Fail10<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    T& m_stgToChange;  //ref to storage here!
    const u32 m_pos;   //pos in atom
    Ui_Uq_10104Fail104auto(T & realStg, u32 idx) : m_stgToChange(realStg), m_pos(idx)
    {
      const u32 val = realStg.GetBits().Read(m_pos + T::ATOM_FIRST_STATE_BIT, 0);
      Ui_Uq_10104Fail10<EC>::write(val);
    }
    ~Ui_Uq_10104Fail104auto()
    {
      m_stgToChange.GetBits().Write(m_pos + T::ATOM_FIRST_STATE_BIT, 0, Ui_Uq_10104Fail10<EC>::read());
    }
  };
} //MFM
#endif /*Ud_Ui_Uq_10104Fail104auto */

