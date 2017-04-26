//
// Generated file, do not edit! Created by nedtool 4.6 from ofomnet/openflow/messages/OFP_Echo_Request.msg.
//

#ifndef _OFP_ECHO_REQUEST_M_H_
#define _OFP_ECHO_REQUEST_M_H_

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



// cplusplus {{
    #include "openflow.h"
    #include "Open_Flow_Message_m.h"
// }}

/**
 * Class generated from <tt>ofomnet/openflow/messages/OFP_Echo_Request.msg:12</tt> by nedtool.
 * <pre>
 * packet OFP_Echo_Request extends Open_Flow_Message
 * {
 * }
 * </pre>
 */
class INET_API OFP_Echo_Request : public ::Open_Flow_Message
{
  protected:

  private:
    void copy(const OFP_Echo_Request& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OFP_Echo_Request&);

  public:
    OFP_Echo_Request(const char *name=NULL, int kind=0);
    OFP_Echo_Request(const OFP_Echo_Request& other);
    virtual ~OFP_Echo_Request();
    OFP_Echo_Request& operator=(const OFP_Echo_Request& other);
    virtual OFP_Echo_Request *dup() const {return new OFP_Echo_Request(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, OFP_Echo_Request& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, OFP_Echo_Request& obj) {obj.parsimUnpack(b);}


#endif // ifndef _OFP_ECHO_REQUEST_M_H_
