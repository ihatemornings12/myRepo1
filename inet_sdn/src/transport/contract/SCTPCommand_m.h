//
// Generated file, do not edit! Created by nedtool 4.6 from transport/contract/SCTPCommand.msg.
//

#ifndef _SCTPCOMMAND_M_H_
#define _SCTPCOMMAND_M_H_

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
#include <vector>

#include "IPvXAddress.h"
#include "SCTPCommand.h"

typedef std::vector<IPvXAddress> AddressVector;
// }}

/**
 * Enum generated from <tt>transport/contract/SCTPCommand.msg:38</tt> by nedtool.
 * <pre>
 * //
 * // Currently not in use.
 * //
 * enum SCTPErrorCode
 * {
 * 
 * }
 * </pre>
 */
enum SCTPErrorCode {
};

/**
 * Class generated from <tt>transport/contract/SCTPCommand.msg:56</tt> by nedtool.
 * <pre>
 * //
 * // Control info for SCTP connections. This class is to be set as control info
 * // (see cMessage::setControlInfo()) on all messages exchanged between ~SCTP and
 * // application, in both directions. Some commands and indications
 * // (SCTP_C_OPEN_xxx, SCTP_I_STATUS) use subclasses.
 * //
 * // connId identifies the connection locally within the application (internally,
 * // ~SCTP uses the (app gate index, connId) pair to identify the socket).
 * // connId is to be chosen by the application in the open command.
 * //
 * // @see ~TcpCommandCode, ~TcpStatusInd, ~SCTPOpenCommand, ~SCTPStatusInfo, SCTPMain
 * //
 * class SCTPCommand extends cPacket
 * {
 *     int assocId = -1;   // identifies the socket within the application
 *     int sid = -1;
 *     int numMsgs = 1;
 *     int ssn = -1;
 *     unsigned short sendUnordered = false;
 *     double prValue = 0;
 *     IPvXAddress localAddr = IPvXAddress("0.0.0.0");
 *     IPvXAddress remoteAddr = IPvXAddress("0.0.0.0");
 *     int localPort;
 *     int remotePort;
 *     int gate = -1;
 * }
 * </pre>
 */
class INET_API SCTPCommand : public ::cPacket
{
  protected:
    int assocId_var;
    int sid_var;
    int numMsgs_var;
    int ssn_var;
    unsigned short sendUnordered_var;
    double prValue_var;
    IPvXAddress localAddr_var;
    IPvXAddress remoteAddr_var;
    int localPort_var;
    int remotePort_var;
    int gate_var;

  private:
    void copy(const SCTPCommand& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SCTPCommand&);

  public:
    SCTPCommand(const char *name=NULL);
    SCTPCommand(const SCTPCommand& other);
    virtual ~SCTPCommand();
    SCTPCommand& operator=(const SCTPCommand& other);
    virtual SCTPCommand *dup() const {return new SCTPCommand(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getAssocId() const;
    virtual void setAssocId(int assocId);
    virtual int getSid() const;
    virtual void setSid(int sid);
    virtual int getNumMsgs() const;
    virtual void setNumMsgs(int numMsgs);
    virtual int getSsn() const;
    virtual void setSsn(int ssn);
    virtual unsigned short getSendUnordered() const;
    virtual void setSendUnordered(unsigned short sendUnordered);
    virtual double getPrValue() const;
    virtual void setPrValue(double prValue);
    virtual IPvXAddress& getLocalAddr();
    virtual const IPvXAddress& getLocalAddr() const {return const_cast<SCTPCommand*>(this)->getLocalAddr();}
    virtual void setLocalAddr(const IPvXAddress& localAddr);
    virtual IPvXAddress& getRemoteAddr();
    virtual const IPvXAddress& getRemoteAddr() const {return const_cast<SCTPCommand*>(this)->getRemoteAddr();}
    virtual void setRemoteAddr(const IPvXAddress& remoteAddr);
    virtual int getLocalPort() const;
    virtual void setLocalPort(int localPort);
    virtual int getRemotePort() const;
    virtual void setRemotePort(int remotePort);
    virtual int getGate() const;
    virtual void setGate(int gate);
};

inline void doPacking(cCommBuffer *b, SCTPCommand& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, SCTPCommand& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>transport/contract/SCTPCommand.msg:74</tt> by nedtool.
 * <pre>
 * //
 * // Currently not in use.
 * //
 * class SCTPErrorInfo extends SCTPCommand
 * {
 *     int errorCode @enum(SCTPErrorCode);
 *     string messageText;
 * }
 * </pre>
 */
class INET_API SCTPErrorInfo : public ::SCTPCommand
{
  protected:
    int errorCode_var;
    opp_string messageText_var;

  private:
    void copy(const SCTPErrorInfo& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SCTPErrorInfo&);

  public:
    SCTPErrorInfo(const char *name=NULL);
    SCTPErrorInfo(const SCTPErrorInfo& other);
    virtual ~SCTPErrorInfo();
    SCTPErrorInfo& operator=(const SCTPErrorInfo& other);
    virtual SCTPErrorInfo *dup() const {return new SCTPErrorInfo(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getErrorCode() const;
    virtual void setErrorCode(int errorCode);
    virtual const char * getMessageText() const;
    virtual void setMessageText(const char * messageText);
};

inline void doPacking(cCommBuffer *b, SCTPErrorInfo& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, SCTPErrorInfo& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>transport/contract/SCTPCommand.msg:106</tt> by nedtool.
 * <pre>
 * //
 * // Control info to be used for active or passive ~SCTP open.
 * //
 * // localAddr, remoteAddr, localPort, remotePort should be self-explanatory.
 * // localAddr is optional because ~SCTP can learn it from IP when a packet
 * // is received from the peer; localPort is optional because ~SCTP supports
 * // ephemeral ports.
 * //
 * // The sendQueueClass, receiveQueueClass and sctpAlgorithmClass fields
 * // allow per-connection ~SCTP configuration. These fields may contain
 * // names of classes subclassed from SCTPSendQueue, SCTPReceiveQueue
 * // and SCTPAlgorithm, respectively. If not set, module parameters with
 * // similar names are used.
 * //
 * // The fork parameter is used with passive open, and controls what happens
 * // when an incoming connection is received. With fork=true, it emulates
 * // the Unix accept(2) syscall semantics: a new connection structure
 * // is created for the connection (with a new connId, see in ~SCTPCommand),
 * // and the connection structure with the old connId remains listening.
 * // With fork=false, all the above does not happen: the first connection
 * // is accepted (with the original connId), and further incoming connections
 * // will be refused by ~SCTP by sending an RST segment.
 * //
 * // @see ~TcpCommandCode, ~SCTP
 * //
 * class SCTPOpenCommand extends SCTPCommand
 * {
 *     AddressVector localAddresses;
 *     IPvXAddress remoteAddr;            // required for active open
 *     AddressVector remoteAddresses;
 *     bool fork = false;               // used only for passive open
 *     string queueClass = "SCTPQueue"; // may be left empty
 *     string sctpAlgorithmClass;       // may be left empty
 *     uint32 inboundStreams;
 *     uint32 outboundStreams;
 *     bool streamReset;
 *     int prMethod;
 *     uint32 numRequests;
 *     uint32 messagesToPush;
 * }
 * </pre>
 */
class INET_API SCTPOpenCommand : public ::SCTPCommand
{
  protected:
    AddressVector localAddresses_var;
    IPvXAddress remoteAddr_var;
    AddressVector remoteAddresses_var;
    bool fork_var;
    opp_string queueClass_var;
    opp_string sctpAlgorithmClass_var;
    uint32 inboundStreams_var;
    uint32 outboundStreams_var;
    bool streamReset_var;
    int prMethod_var;
    uint32 numRequests_var;
    uint32 messagesToPush_var;

  private:
    void copy(const SCTPOpenCommand& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SCTPOpenCommand&);

  public:
    SCTPOpenCommand(const char *name=NULL);
    SCTPOpenCommand(const SCTPOpenCommand& other);
    virtual ~SCTPOpenCommand();
    SCTPOpenCommand& operator=(const SCTPOpenCommand& other);
    virtual SCTPOpenCommand *dup() const {return new SCTPOpenCommand(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual AddressVector& getLocalAddresses();
    virtual const AddressVector& getLocalAddresses() const {return const_cast<SCTPOpenCommand*>(this)->getLocalAddresses();}
    virtual void setLocalAddresses(const AddressVector& localAddresses);
    virtual IPvXAddress& getRemoteAddr();
    virtual const IPvXAddress& getRemoteAddr() const {return const_cast<SCTPOpenCommand*>(this)->getRemoteAddr();}
    virtual void setRemoteAddr(const IPvXAddress& remoteAddr);
    virtual AddressVector& getRemoteAddresses();
    virtual const AddressVector& getRemoteAddresses() const {return const_cast<SCTPOpenCommand*>(this)->getRemoteAddresses();}
    virtual void setRemoteAddresses(const AddressVector& remoteAddresses);
    virtual bool getFork() const;
    virtual void setFork(bool fork);
    virtual const char * getQueueClass() const;
    virtual void setQueueClass(const char * queueClass);
    virtual const char * getSctpAlgorithmClass() const;
    virtual void setSctpAlgorithmClass(const char * sctpAlgorithmClass);
    virtual uint32 getInboundStreams() const;
    virtual void setInboundStreams(uint32 inboundStreams);
    virtual uint32 getOutboundStreams() const;
    virtual void setOutboundStreams(uint32 outboundStreams);
    virtual bool getStreamReset() const;
    virtual void setStreamReset(bool streamReset);
    virtual int getPrMethod() const;
    virtual void setPrMethod(int prMethod);
    virtual uint32 getNumRequests() const;
    virtual void setNumRequests(uint32 numRequests);
    virtual uint32 getMessagesToPush() const;
    virtual void setMessagesToPush(uint32 messagesToPush);
};

inline void doPacking(cCommBuffer *b, SCTPOpenCommand& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, SCTPOpenCommand& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>transport/contract/SCTPCommand.msg:128</tt> by nedtool.
 * <pre>
 * //
 * // Control info to be used with the SEND command.
 * //
 * // @see ~TcpCommandCode, ~SCTP
 * //
 * class SCTPSendCommand extends SCTPCommand
 * {
 *     unsigned int prMethod;
 *     bool last;
 *     unsigned int ppid = 0;
 *     bool primary = true;
 *     bool sackNow = false;
 * }
 * </pre>
 */
class INET_API SCTPSendCommand : public ::SCTPCommand
{
  protected:
    unsigned int prMethod_var;
    bool last_var;
    unsigned int ppid_var;
    bool primary_var;
    bool sackNow_var;

  private:
    void copy(const SCTPSendCommand& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SCTPSendCommand&);

  public:
    SCTPSendCommand(const char *name=NULL);
    SCTPSendCommand(const SCTPSendCommand& other);
    virtual ~SCTPSendCommand();
    SCTPSendCommand& operator=(const SCTPSendCommand& other);
    virtual SCTPSendCommand *dup() const {return new SCTPSendCommand(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getPrMethod() const;
    virtual void setPrMethod(unsigned int prMethod);
    virtual bool getLast() const;
    virtual void setLast(bool last);
    virtual unsigned int getPpid() const;
    virtual void setPpid(unsigned int ppid);
    virtual bool getPrimary() const;
    virtual void setPrimary(bool primary);
    virtual bool getSackNow() const;
    virtual void setSackNow(bool sackNow);
};

inline void doPacking(cCommBuffer *b, SCTPSendCommand& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, SCTPSendCommand& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>transport/contract/SCTPCommand.msg:144</tt> by nedtool.
 * <pre>
 * //
 * // Sent with message kind SCTP_I_ESTABLISHED, to let the app know
 * // about the local and remote IP address and port.
 * //
 * // @see ~TcpCommandCode, ~SCTP
 * //
 * class SCTPConnectInfo extends SCTPCommand
 * {
 *     AddressVector remoteAddresses;
 *     int status;
 *     int inboundStreams;
 *     int outboundStreams;
 * }
 * </pre>
 */
class INET_API SCTPConnectInfo : public ::SCTPCommand
{
  protected:
    AddressVector remoteAddresses_var;
    int status_var;
    int inboundStreams_var;
    int outboundStreams_var;

  private:
    void copy(const SCTPConnectInfo& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SCTPConnectInfo&);

  public:
    SCTPConnectInfo(const char *name=NULL);
    SCTPConnectInfo(const SCTPConnectInfo& other);
    virtual ~SCTPConnectInfo();
    SCTPConnectInfo& operator=(const SCTPConnectInfo& other);
    virtual SCTPConnectInfo *dup() const {return new SCTPConnectInfo(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual AddressVector& getRemoteAddresses();
    virtual const AddressVector& getRemoteAddresses() const {return const_cast<SCTPConnectInfo*>(this)->getRemoteAddresses();}
    virtual void setRemoteAddresses(const AddressVector& remoteAddresses);
    virtual int getStatus() const;
    virtual void setStatus(int status);
    virtual int getInboundStreams() const;
    virtual void setInboundStreams(int inboundStreams);
    virtual int getOutboundStreams() const;
    virtual void setOutboundStreams(int outboundStreams);
};

inline void doPacking(cCommBuffer *b, SCTPConnectInfo& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, SCTPConnectInfo& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>transport/contract/SCTPCommand.msg:160</tt> by nedtool.
 * <pre>
 * //
 * // Sent with message kind SCTP_I_STATUS, in response to command SCTP_C_STATUS.
 * // For explanation of variables, see RFC 793 or SCTPStateVariables in
 * // SCTPConnection.h.
 * //
 * // @see ~TcpStatusInd, ~TcpCommandCode, ~SCTP
 * //
 * class SCTPStatusInfo extends SCTPCommand
 * {
 *     int state;
 *     string stateName;
 *     IPvXAddress pathId;
 *     bool active;
 * }
 * </pre>
 */
class INET_API SCTPStatusInfo : public ::SCTPCommand
{
  protected:
    int state_var;
    opp_string stateName_var;
    IPvXAddress pathId_var;
    bool active_var;

  private:
    void copy(const SCTPStatusInfo& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SCTPStatusInfo&);

  public:
    SCTPStatusInfo(const char *name=NULL);
    SCTPStatusInfo(const SCTPStatusInfo& other);
    virtual ~SCTPStatusInfo();
    SCTPStatusInfo& operator=(const SCTPStatusInfo& other);
    virtual SCTPStatusInfo *dup() const {return new SCTPStatusInfo(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getState() const;
    virtual void setState(int state);
    virtual const char * getStateName() const;
    virtual void setStateName(const char * stateName);
    virtual IPvXAddress& getPathId();
    virtual const IPvXAddress& getPathId() const {return const_cast<SCTPStatusInfo*>(this)->getPathId();}
    virtual void setPathId(const IPvXAddress& pathId);
    virtual bool getActive() const;
    virtual void setActive(bool active);
};

inline void doPacking(cCommBuffer *b, SCTPStatusInfo& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, SCTPStatusInfo& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>transport/contract/SCTPCommand.msg:168</tt> by nedtool.
 * <pre>
 * class SCTPPathInfo extends SCTPCommand
 * {
 *     IPvXAddress remoteAddress;
 * }
 * </pre>
 */
class INET_API SCTPPathInfo : public ::SCTPCommand
{
  protected:
    IPvXAddress remoteAddress_var;

  private:
    void copy(const SCTPPathInfo& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SCTPPathInfo&);

  public:
    SCTPPathInfo(const char *name=NULL);
    SCTPPathInfo(const SCTPPathInfo& other);
    virtual ~SCTPPathInfo();
    SCTPPathInfo& operator=(const SCTPPathInfo& other);
    virtual SCTPPathInfo *dup() const {return new SCTPPathInfo(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IPvXAddress& getRemoteAddress();
    virtual const IPvXAddress& getRemoteAddress() const {return const_cast<SCTPPathInfo*>(this)->getRemoteAddress();}
    virtual void setRemoteAddress(const IPvXAddress& remoteAddress);
};

inline void doPacking(cCommBuffer *b, SCTPPathInfo& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, SCTPPathInfo& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>transport/contract/SCTPCommand.msg:173</tt> by nedtool.
 * <pre>
 * class SCTPResetInfo extends SCTPCommand
 * {
 *     IPvXAddress remoteAddr;
 *     unsigned short requestType = 0;
 *     char streams[];
 * }
 * </pre>
 */
class INET_API SCTPResetInfo : public ::SCTPCommand
{
  protected:
    IPvXAddress remoteAddr_var;
    unsigned short requestType_var;
    char *streams_var; // array ptr
    unsigned int streams_arraysize;

  private:
    void copy(const SCTPResetInfo& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SCTPResetInfo&);

  public:
    SCTPResetInfo(const char *name=NULL);
    SCTPResetInfo(const SCTPResetInfo& other);
    virtual ~SCTPResetInfo();
    SCTPResetInfo& operator=(const SCTPResetInfo& other);
    virtual SCTPResetInfo *dup() const {return new SCTPResetInfo(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IPvXAddress& getRemoteAddr();
    virtual const IPvXAddress& getRemoteAddr() const {return const_cast<SCTPResetInfo*>(this)->getRemoteAddr();}
    virtual void setRemoteAddr(const IPvXAddress& remoteAddr);
    virtual unsigned short getRequestType() const;
    virtual void setRequestType(unsigned short requestType);
    virtual void setStreamsArraySize(unsigned int size);
    virtual unsigned int getStreamsArraySize() const;
    virtual char getStreams(unsigned int k) const;
    virtual void setStreams(unsigned int k, char streams);
};

inline void doPacking(cCommBuffer *b, SCTPResetInfo& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, SCTPResetInfo& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>transport/contract/SCTPCommand.msg:180</tt> by nedtool.
 * <pre>
 * class SCTPInfo extends SCTPCommand
 * {
 *     int text = 0;
 * }
 * </pre>
 */
class INET_API SCTPInfo : public ::SCTPCommand
{
  protected:
    int text_var;

  private:
    void copy(const SCTPInfo& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SCTPInfo&);

  public:
    SCTPInfo(const char *name=NULL);
    SCTPInfo(const SCTPInfo& other);
    virtual ~SCTPInfo();
    SCTPInfo& operator=(const SCTPInfo& other);
    virtual SCTPInfo *dup() const {return new SCTPInfo(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getText() const;
    virtual void setText(int text);
};

inline void doPacking(cCommBuffer *b, SCTPInfo& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, SCTPInfo& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>transport/contract/SCTPCommand.msg:185</tt> by nedtool.
 * <pre>
 * class SCTPRcvCommand extends SCTPCommand
 * {
 *     uint32 ppid;
 *     uint32 tsn;
 *     uint32 cumTsn;
 * }
 * </pre>
 */
class INET_API SCTPRcvCommand : public ::SCTPCommand
{
  protected:
    uint32 ppid_var;
    uint32 tsn_var;
    uint32 cumTsn_var;

  private:
    void copy(const SCTPRcvCommand& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SCTPRcvCommand&);

  public:
    SCTPRcvCommand(const char *name=NULL);
    SCTPRcvCommand(const SCTPRcvCommand& other);
    virtual ~SCTPRcvCommand();
    SCTPRcvCommand& operator=(const SCTPRcvCommand& other);
    virtual SCTPRcvCommand *dup() const {return new SCTPRcvCommand(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual uint32 getPpid() const;
    virtual void setPpid(uint32 ppid);
    virtual uint32 getTsn() const;
    virtual void setTsn(uint32 tsn);
    virtual uint32 getCumTsn() const;
    virtual void setCumTsn(uint32 cumTsn);
};

inline void doPacking(cCommBuffer *b, SCTPRcvCommand& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, SCTPRcvCommand& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>transport/contract/SCTPCommand.msg:192</tt> by nedtool.
 * <pre>
 * class SCTPSendQueueAbated extends SCTPCommand
 * {
 *     uint64 bytesAvailable;
 *     uint64 bytesQueued;
 *     uint64 bytesLimit;
 *     uint64 queuedForStream[];
 * }
 * </pre>
 */
class INET_API SCTPSendQueueAbated : public ::SCTPCommand
{
  protected:
    uint64 bytesAvailable_var;
    uint64 bytesQueued_var;
    uint64 bytesLimit_var;
    uint64 *queuedForStream_var; // array ptr
    unsigned int queuedForStream_arraysize;

  private:
    void copy(const SCTPSendQueueAbated& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SCTPSendQueueAbated&);

  public:
    SCTPSendQueueAbated(const char *name=NULL);
    SCTPSendQueueAbated(const SCTPSendQueueAbated& other);
    virtual ~SCTPSendQueueAbated();
    SCTPSendQueueAbated& operator=(const SCTPSendQueueAbated& other);
    virtual SCTPSendQueueAbated *dup() const {return new SCTPSendQueueAbated(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual uint64 getBytesAvailable() const;
    virtual void setBytesAvailable(uint64 bytesAvailable);
    virtual uint64 getBytesQueued() const;
    virtual void setBytesQueued(uint64 bytesQueued);
    virtual uint64 getBytesLimit() const;
    virtual void setBytesLimit(uint64 bytesLimit);
    virtual void setQueuedForStreamArraySize(unsigned int size);
    virtual unsigned int getQueuedForStreamArraySize() const;
    virtual uint64 getQueuedForStream(unsigned int k) const;
    virtual void setQueuedForStream(unsigned int k, uint64 queuedForStream);
};

inline void doPacking(cCommBuffer *b, SCTPSendQueueAbated& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, SCTPSendQueueAbated& obj) {obj.parsimUnpack(b);}


#endif // ifndef _SCTPCOMMAND_M_H_

