//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/manetrouting/dymo_fau/DYMO_Timeout.msg.
//

#ifndef _DYMO_TIMEOUT_M_H_
#define _DYMO_TIMEOUT_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// dll export symbol
#ifndef INET_API
#  if defined(INET_EXPORT)
#    define INET_API  OPP_DLLEXPORT
#  elif defined(INET_IMPORT)
#    define INET_API  OPP_DLLIMPORT
#  else
#    define INET_API
#  endif
#endif



/**
 * Class generated from <tt>networklayer/manetrouting/dymo_fau/DYMO_Timeout.msg:23</tt> by nedtool.
 * <pre>
 * //
 * // Signals some kind of timeout.
 * //
 * message DYMO_Timeout
 * {
 * }
 * </pre>
 */
class INET_API DYMO_Timeout : public ::cMessage
{
  protected:

  private:
    void copy(const DYMO_Timeout& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const DYMO_Timeout&);

  public:
    DYMO_Timeout(const char *name=NULL, int kind=0);
    DYMO_Timeout(const DYMO_Timeout& other);
    virtual ~DYMO_Timeout();
    DYMO_Timeout& operator=(const DYMO_Timeout& other);
    virtual DYMO_Timeout *dup() const {return new DYMO_Timeout(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, DYMO_Timeout& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, DYMO_Timeout& obj) {obj.parsimUnpack(b);}


#endif // ifndef _DYMO_TIMEOUT_M_H_

