/**                                      -*- mode:C++ -*- */

//#include "itype.h"
//#include "BitVector.h"
//#include "BitField.h"

#include "UlamDefs.h"

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

#ifndef Ud_Ui_Ue_102335Fifth0
#define Ud_Ui_Ue_102335Fifth0
namespace MFM{

  template<class EC> class Ue_102335Fifth0;  //forward

  template<class EC>
  struct Ui_Ue_102335Fifth0
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };
    typedef Ue_102335Fifth0<EC> Us;
    T m_stg;  //possible storage here
    T& m_stgRef;  //storage ref
    Ui_Ue_102335Fifth0() : m_stg(), m_stgRef(m_stg) { }
    Ui_Ue_102335Fifth0(const T& d) : m_stg(d), m_stgRef(m_stg) {}
    Ui_Ue_102335Fifth0(T& d, bool badass) : m_stg(), m_stgRef(d) {}
    Ui_Ue_102335Fifth0(const Ui_Ue_102335Fifth0<EC>& d) : m_stg(d.m_stg), m_stgRef(m_stg) {}
    ~Ui_Ue_102335Fifth0() {}
    const T read() const { return m_stgRef; }
    void write(const T& v) { m_stgRef = v; }
    BitVector<BPA>& getBits() { return m_stgRef.GetBits(); }
    T& getRef() { return m_stgRef; }
  };
} //MFM
#endif /*Ud_Ui_Ue_102335Fifth0 */

#ifndef Ud_Ui_Uq_10109211EventWindow0
#define Ud_Ui_Uq_10109211EventWindow0
namespace MFM{

  template<class EC, u32 POS> class Uq_10109211EventWindow0;  //forward

  template<class EC>
  struct Ui_Uq_10109211EventWindow0
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef Uq_10109211EventWindow0<EC, 96> Us;
    typedef AtomicParameterType<EC, VD::BITS, 0, 96>  Up_Us;
    T m_stg;  //storage here!
    Ui_Uq_10109211EventWindow0() : m_stg() { }
    Ui_Uq_10109211EventWindow0(const u32 d) { write(d); }
    const u32 read() const { return Up_Us::Read(m_stg.GetBits() ); }
    void write(const u32 v) { Up_Us::Write(m_stg.GetBits(), v); }
    BitVector<BPA>& getBits() { return m_stg.GetBits(); }
    T& getRef() { return m_stg; }
    //CustomArray accessor methods:
    const T readArrayItem(UlamContext<EC>& uc, const u32 index, const u32 unitsize) { return Us::Uf_4aref(uc, m_stg, Ui_Ut_102321i((const s32)index)).read(); }
    void writeArrayItem(UlamContext<EC>& uc, const T v, const u32 index, const u32 unitsize) { Us::Uf_4aset(uc, m_stg, Ui_Ut_102321i((const s32) index), Ui_Ut_102961a<EC>(v)); }
  };
} //MFM
#endif /*Ud_Ui_Uq_10109211EventWindow0 */

#ifndef Ud_Ui_Uq_10109211EventWindow04auto
#define Ud_Ui_Uq_10109211EventWindow04auto
namespace MFM{

  template<class EC>
  struct Ui_Uq_10109211EventWindow04auto : public Ui_Uq_10109211EventWindow0<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    T& m_stgToChange;  //ref to storage here!
    const u32 m_pos;   //pos in atom
    Ui_Uq_10109211EventWindow04auto(T & realStg, u32 idx) : m_stgToChange(realStg), m_pos(idx)
    {
      const u32 val = realStg.GetBits().Read(m_pos + T::ATOM_FIRST_STATE_BIT, 0);
      Ui_Uq_10109211EventWindow0<EC>::write(val);
    }
    ~Ui_Uq_10109211EventWindow04auto()
    {
      m_stgToChange.GetBits().Write(m_pos + T::ATOM_FIRST_STATE_BIT, 0, Ui_Uq_10109211EventWindow0<EC>::read());
    }
  };
} //MFM
#endif /*Ud_Ui_Uq_10109211EventWindow04auto */

#ifndef Ud_Ui_Ue_10105First0
#define Ud_Ui_Ue_10105First0
namespace MFM{

  template<class EC> class Ue_10105First0;  //forward

  template<class EC>
  struct Ui_Ue_10105First0
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };
    typedef Ue_10105First0<EC> Us;
    T m_stg;  //possible storage here
    T& m_stgRef;  //storage ref
    Ui_Ue_10105First0() : m_stg(), m_stgRef(m_stg) { }
    Ui_Ue_10105First0(const T& d) : m_stg(d), m_stgRef(m_stg) {}
    Ui_Ue_10105First0(T& d, bool badass) : m_stg(), m_stgRef(d) {}
    Ui_Ue_10105First0(const Ui_Ue_10105First0<EC>& d) : m_stg(d.m_stg), m_stgRef(m_stg) {}
    ~Ui_Ue_10105First0() {}
    const T read() const { return m_stgRef; }
    void write(const T& v) { m_stgRef = v; }
    BitVector<BPA>& getBits() { return m_stgRef.GetBits(); }
    T& getRef() { return m_stgRef; }
  };
} //MFM
#endif /*Ud_Ui_Ue_10105First0 */

#ifndef Ud_Ui_Ue_10115Five20
#define Ud_Ui_Ue_10115Five20
namespace MFM{

  template<class EC> class Ue_10115Five20;  //forward

  template<class EC>
  struct Ui_Ue_10115Five20
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };
    typedef Ue_10115Five20<EC> Us;
    T m_stg;  //possible storage here
    T& m_stgRef;  //storage ref
    Ui_Ue_10115Five20() : m_stg(), m_stgRef(m_stg) { }
    Ui_Ue_10115Five20(const T& d) : m_stg(d), m_stgRef(m_stg) {}
    Ui_Ue_10115Five20(T& d, bool badass) : m_stg(), m_stgRef(d) {}
    Ui_Ue_10115Five20(const Ui_Ue_10115Five20<EC>& d) : m_stg(d.m_stg), m_stgRef(m_stg) {}
    ~Ui_Ue_10115Five20() {}
    const T read() const { return m_stgRef; }
    void write(const T& v) { m_stgRef = v; }
    BitVector<BPA>& getBits() { return m_stgRef.GetBits(); }
    T& getRef() { return m_stgRef; }
  };
} //MFM
#endif /*Ud_Ui_Ue_10115Five20 */

#ifndef Ud_Ui_Ue_10114Five0
#define Ud_Ui_Ue_10114Five0
namespace MFM{

  template<class EC> class Ue_10114Five0;  //forward

  template<class EC>
  struct Ui_Ue_10114Five0
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };
    typedef Ue_10114Five0<EC> Us;
    T m_stg;  //possible storage here
    T& m_stgRef;  //storage ref
    Ui_Ue_10114Five0() : m_stg(), m_stgRef(m_stg) { }
    Ui_Ue_10114Five0(const T& d) : m_stg(d), m_stgRef(m_stg) {}
    Ui_Ue_10114Five0(T& d, bool badass) : m_stg(), m_stgRef(d) {}
    Ui_Ue_10114Five0(const Ui_Ue_10114Five0<EC>& d) : m_stg(d.m_stg), m_stgRef(m_stg) {}
    ~Ui_Ue_10114Five0() {}
    const T read() const { return m_stgRef; }
    void write(const T& v) { m_stgRef = v; }
    BitVector<BPA>& getBits() { return m_stgRef.GetBits(); }
    T& getRef() { return m_stgRef; }
  };
} //MFM
#endif /*Ud_Ui_Ue_10114Five0 */

#ifndef Ud_Ui_Ue_10104Four0
#define Ud_Ui_Ue_10104Four0
namespace MFM{

  template<class EC> class Ue_10104Four0;  //forward

  template<class EC>
  struct Ui_Ue_10104Four0
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };
    typedef Ue_10104Four0<EC> Us;
    T m_stg;  //possible storage here
    T& m_stgRef;  //storage ref
    Ui_Ue_10104Four0() : m_stg(), m_stgRef(m_stg) { }
    Ui_Ue_10104Four0(const T& d) : m_stg(d), m_stgRef(m_stg) {}
    Ui_Ue_10104Four0(T& d, bool badass) : m_stg(), m_stgRef(d) {}
    Ui_Ue_10104Four0(const Ui_Ue_10104Four0<EC>& d) : m_stg(d.m_stg), m_stgRef(m_stg) {}
    ~Ui_Ue_10104Four0() {}
    const T read() const { return m_stgRef; }
    void write(const T& v) { m_stgRef = v; }
    BitVector<BPA>& getBits() { return m_stgRef.GetBits(); }
    T& getRef() { return m_stgRef; }
  };
} //MFM
#endif /*Ud_Ui_Ue_10104Four0 */

#ifndef Ud_Ui_Ue_10106Second0
#define Ud_Ui_Ue_10106Second0
namespace MFM{

  template<class EC> class Ue_10106Second0;  //forward

  template<class EC>
  struct Ui_Ue_10106Second0
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };
    typedef Ue_10106Second0<EC> Us;
    T m_stg;  //possible storage here
    T& m_stgRef;  //storage ref
    Ui_Ue_10106Second0() : m_stg(), m_stgRef(m_stg) { }
    Ui_Ue_10106Second0(const T& d) : m_stg(d), m_stgRef(m_stg) {}
    Ui_Ue_10106Second0(T& d, bool badass) : m_stg(), m_stgRef(d) {}
    Ui_Ue_10106Second0(const Ui_Ue_10106Second0<EC>& d) : m_stg(d.m_stg), m_stgRef(m_stg) {}
    ~Ui_Ue_10106Second0() {}
    const T read() const { return m_stgRef; }
    void write(const T& v) { m_stgRef = v; }
    BitVector<BPA>& getBits() { return m_stgRef.GetBits(); }
    T& getRef() { return m_stgRef; }
  };
} //MFM
#endif /*Ud_Ui_Ue_10106Second0 */

#ifndef Ud_Ui_Ue_10105Third0
#define Ud_Ui_Ue_10105Third0
namespace MFM{

  template<class EC> class Ue_10105Third0;  //forward

  template<class EC>
  struct Ui_Ue_10105Third0
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };
    typedef Ue_10105Third0<EC> Us;
    T m_stg;  //possible storage here
    T& m_stgRef;  //storage ref
    Ui_Ue_10105Third0() : m_stg(), m_stgRef(m_stg) { }
    Ui_Ue_10105Third0(const T& d) : m_stg(d), m_stgRef(m_stg) {}
    Ui_Ue_10105Third0(T& d, bool badass) : m_stg(), m_stgRef(d) {}
    Ui_Ue_10105Third0(const Ui_Ue_10105Third0<EC>& d) : m_stg(d.m_stg), m_stgRef(m_stg) {}
    ~Ui_Ue_10105Third0() {}
    const T read() const { return m_stgRef; }
    void write(const T& v) { m_stgRef = v; }
    BitVector<BPA>& getBits() { return m_stgRef.GetBits(); }
    T& getRef() { return m_stgRef; }
  };
} //MFM
#endif /*Ud_Ui_Ue_10105Third0 */

#ifndef Ud_Ui_Uq_102323C2D0
#define Ud_Ui_Uq_102323C2D0
namespace MFM{

  template<class EC, u32 POS> class Uq_102323C2D0;  //forward

  template<class EC>
  struct Ui_Uq_102323C2D0
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef Uq_102323C2D0<EC, 64> Us;
    typedef AtomicParameterType<EC, VD::BITS, 32, 64>  Up_Us;
    T m_stg;  //storage here!
    Ui_Uq_102323C2D0() : m_stg() { }
    Ui_Uq_102323C2D0(const u32 d) { write(d); }
    const u32 read() const { return Up_Us::Read(m_stg.GetBits() ); }
    void write(const u32 v) { Up_Us::Write(m_stg.GetBits(), v); }
    BitVector<BPA>& getBits() { return m_stg.GetBits(); }
    T& getRef() { return m_stg; }
  };
} //MFM
#endif /*Ud_Ui_Uq_102323C2D0 */

#ifndef Ud_Ui_Uq_102323C2D04auto
#define Ud_Ui_Uq_102323C2D04auto
namespace MFM{

  template<class EC>
  struct Ui_Uq_102323C2D04auto : public Ui_Uq_102323C2D0<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    T& m_stgToChange;  //ref to storage here!
    const u32 m_pos;   //pos in atom
    Ui_Uq_102323C2D04auto(T & realStg, u32 idx) : m_stgToChange(realStg), m_pos(idx)
    {
      const u32 val = realStg.GetBits().Read(m_pos + T::ATOM_FIRST_STATE_BIT, 32);
      Ui_Uq_102323C2D0<EC>::write(val);
    }
    ~Ui_Uq_102323C2D04auto()
    {
      m_stgToChange.GetBits().Write(m_pos + T::ATOM_FIRST_STATE_BIT, 32, Ui_Uq_102323C2D0<EC>::read());
    }
  };
} //MFM
#endif /*Ud_Ui_Uq_102323C2D04auto */

#ifndef Ud_Ui_Uq_1010919AtomUtils0
#define Ud_Ui_Uq_1010919AtomUtils0
namespace MFM{

  template<class EC, u32 POS> class Uq_1010919AtomUtils0;  //forward

  template<class EC>
  struct Ui_Uq_1010919AtomUtils0
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef Uq_1010919AtomUtils0<EC, 96> Us;
    typedef AtomicParameterType<EC, VD::BITS, 0, 96>  Up_Us;
    T m_stg;  //storage here!
    Ui_Uq_1010919AtomUtils0() : m_stg() { }
    Ui_Uq_1010919AtomUtils0(const u32 d) { write(d); }
    const u32 read() const { return Up_Us::Read(m_stg.GetBits() ); }
    void write(const u32 v) { Up_Us::Write(m_stg.GetBits(), v); }
    BitVector<BPA>& getBits() { return m_stg.GetBits(); }
    T& getRef() { return m_stg; }
  };
} //MFM
#endif /*Ud_Ui_Uq_1010919AtomUtils0 */

#ifndef Ud_Ui_Uq_1010919AtomUtils04auto
#define Ud_Ui_Uq_1010919AtomUtils04auto
namespace MFM{

  template<class EC>
  struct Ui_Uq_1010919AtomUtils04auto : public Ui_Uq_1010919AtomUtils0<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    T& m_stgToChange;  //ref to storage here!
    const u32 m_pos;   //pos in atom
    Ui_Uq_1010919AtomUtils04auto(T & realStg, u32 idx) : m_stgToChange(realStg), m_pos(idx)
    {
      const u32 val = realStg.GetBits().Read(m_pos + T::ATOM_FIRST_STATE_BIT, 0);
      Ui_Uq_1010919AtomUtils0<EC>::write(val);
    }
    ~Ui_Uq_1010919AtomUtils04auto()
    {
      m_stgToChange.GetBits().Write(m_pos + T::ATOM_FIRST_STATE_BIT, 0, Ui_Uq_1010919AtomUtils0<EC>::read());
    }
  };
} //MFM
#endif /*Ud_Ui_Uq_1010919AtomUtils04auto */

#ifndef Ud_Ui_Ue_10105Empty0
#define Ud_Ui_Ue_10105Empty0
namespace MFM{

  template<class EC> class Ue_10105Empty0;  //forward

  template<class EC>
  struct Ui_Ue_10105Empty0
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };
    typedef Ue_10105Empty0<EC> Us;
    T m_stg;  //possible storage here
    T& m_stgRef;  //storage ref
    Ui_Ue_10105Empty0() : m_stg(), m_stgRef(m_stg) { }
    Ui_Ue_10105Empty0(const T& d) : m_stg(d), m_stgRef(m_stg) {}
    Ui_Ue_10105Empty0(T& d, bool badass) : m_stg(), m_stgRef(d) {}
    Ui_Ue_10105Empty0(const Ui_Ue_10105Empty0<EC>& d) : m_stg(d.m_stg), m_stgRef(m_stg) {}
    ~Ui_Ue_10105Empty0() {}
    const T read() const { return m_stgRef; }
    void write(const T& v) { m_stgRef = v; }
    BitVector<BPA>& getBits() { return m_stgRef.GetBits(); }
    T& getRef() { return m_stgRef; }
  };
} //MFM
#endif /*Ud_Ui_Ue_10105Empty0 */

