//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/contract/IPv4ControlInfo.msg.
//

#ifndef _IPV4CONTROLINFO_M_H_
#define _IPV4CONTROLINFO_M_H_

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
#include "IPv4Address.h"
#include "IPProtocolId_m.h"
#include "MACAddress.h"
// }}

/**
 * Class generated from <tt>networklayer/contract/IPv4ControlInfo.msg:64</tt> by nedtool.
 * <pre>
 * //
 * // Control information for sending/receiving packets over IPv4.
 * //
 * // To send a packet over IPv4, fill in an ~IPv4ControlInfo object,
 * // attach it to the packet with the C++ method setControlInfo(),
 * // the send it to the ~IPv4 module.
 * //
 * // When sending, the following fields are required:
 * // - protocol: a value from ~IPProtocolId
 * // - destAddr
 * //
 * // Optional fields:
 * // - srcAddr: it will be set to the address of the outgoing interface
 * // - typeOfServoce: (default: 0)
 * // - timeToLive: default defined as module parameter
 * // - dontFragment: default: false
 * //
 * // Not supported:
 * // - options: IPv4 Options currently not used
 * // - Identifier is currently always chosen by the IPv4 layer
 * //
 * // When ~IPv4 delivers a packet to higher layers, it also attaches an ~IPv4ControlInfo
 * // to it. It fills in the following fields:
 * //  - srcAddr, destAddr, protocol, TypeOfService: values from the original datagram
 * //  - interfaceId: the interface on which the datagram arrived, or -1 if it was
 * //    created locally
 * //
 * // ~IPv4 also puts the original datagram object into the control info, because
 * // it may be needed by higher layers (for example, by ~ICMP for error reporting).
 * //
 * class IPv4ControlInfo
 * {
 *     @customize(true);
 *     IPv4Address destAddr;   // destination IPv4 address
 *     IPv4Address srcAddr;    // source IPv4 address
 *     int interfaceId = -1; // interface on which the datagram was received, or
 *                           // should be sent (see ~InterfaceTable)
 *     bool multicastLoop;   // if true, sent multicast datagrams will be looped back
 *     short protocol @enum(IPProtocolId);  // encapsulated protocol
 *     unsigned char typeOfService;  // Type of Service byte (low 6 bits: DSCP)
 *     abstract int diffServCodePoint;  // maps to bits 0-5 of trafficClass
 *     abstract int explicitCongestionNotification;  // maps to bits 6-7 of trafficClass
 *     short timeToLive;     // maximum hop count
 *     bool dontFragment;    // "don't fragment" bit
 * 
 *     // The following fields are used in the DSR protocol; TODO revise
 *     IPv4Address nextHopAddr; // next hop address (DSR)
 *     bool moreFragments;    // "more fragments" bit (DSR protocol)
 *     MACAddress macSrc;  // src MAC address (can be left empty when sending)
 *     MACAddress macDest; // dest MAC address
 * }
 * </pre>
 *
 * IPv4ControlInfo_Base is only useful if it gets subclassed, and IPv4ControlInfo is derived from it.
 * The minimum code to be written for IPv4ControlInfo is the following:
 *
 * <pre>
 * class INET_API IPv4ControlInfo : public IPv4ControlInfo_Base
 * {
 *   private:
 *     void copy(const IPv4ControlInfo& other) { ... }

 *   public:
 *     IPv4ControlInfo() : IPv4ControlInfo_Base() {}
 *     IPv4ControlInfo(const IPv4ControlInfo& other) : IPv4ControlInfo_Base(other) {copy(other);}
 *     IPv4ControlInfo& operator=(const IPv4ControlInfo& other) {if (this==&other) return *this; IPv4ControlInfo_Base::operator=(other); copy(other); return *this;}
 *     virtual IPv4ControlInfo *dup() const {return new IPv4ControlInfo(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from IPv4ControlInfo_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(IPv4ControlInfo);
 * </pre>
 */
class INET_API IPv4ControlInfo_Base : public ::cObject
{
  protected:
    IPv4Address destAddr_var;
    IPv4Address srcAddr_var;
    int interfaceId_var;
    bool multicastLoop_var;
    short protocol_var;
    unsigned char typeOfService_var;
    short timeToLive_var;
    bool dontFragment_var;
    IPv4Address nextHopAddr_var;
    bool moreFragments_var;
    MACAddress macSrc_var;
    MACAddress macDest_var;

  private:
    void copy(const IPv4ControlInfo_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv4ControlInfo_Base&);
    // make constructors protected to avoid instantiation
    IPv4ControlInfo_Base();
    IPv4ControlInfo_Base(const IPv4ControlInfo_Base& other);
    // make assignment operator protected to force the user override it
    IPv4ControlInfo_Base& operator=(const IPv4ControlInfo_Base& other);

  public:
    virtual ~IPv4ControlInfo_Base();
    virtual IPv4ControlInfo_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class IPv4ControlInfo");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IPv4Address& getDestAddr();
    virtual const IPv4Address& getDestAddr() const {return const_cast<IPv4ControlInfo_Base*>(this)->getDestAddr();}
    virtual void setDestAddr(const IPv4Address& destAddr);
    virtual IPv4Address& getSrcAddr();
    virtual const IPv4Address& getSrcAddr() const {return const_cast<IPv4ControlInfo_Base*>(this)->getSrcAddr();}
    virtual void setSrcAddr(const IPv4Address& srcAddr);
    virtual int getInterfaceId() const;
    virtual void setInterfaceId(int interfaceId);
    virtual bool getMulticastLoop() const;
    virtual void setMulticastLoop(bool multicastLoop);
    virtual short getProtocol() const;
    virtual void setProtocol(short protocol);
    virtual unsigned char getTypeOfService() const;
    virtual void setTypeOfService(unsigned char typeOfService);
    virtual int getDiffServCodePoint() const = 0;
    virtual void setDiffServCodePoint(int diffServCodePoint) = 0;
    virtual int getExplicitCongestionNotification() const = 0;
    virtual void setExplicitCongestionNotification(int explicitCongestionNotification) = 0;
    virtual short getTimeToLive() const;
    virtual void setTimeToLive(short timeToLive);
    virtual bool getDontFragment() const;
    virtual void setDontFragment(bool dontFragment);
    virtual IPv4Address& getNextHopAddr();
    virtual const IPv4Address& getNextHopAddr() const {return const_cast<IPv4ControlInfo_Base*>(this)->getNextHopAddr();}
    virtual void setNextHopAddr(const IPv4Address& nextHopAddr);
    virtual bool getMoreFragments() const;
    virtual void setMoreFragments(bool moreFragments);
    virtual MACAddress& getMacSrc();
    virtual const MACAddress& getMacSrc() const {return const_cast<IPv4ControlInfo_Base*>(this)->getMacSrc();}
    virtual void setMacSrc(const MACAddress& macSrc);
    virtual MACAddress& getMacDest();
    virtual const MACAddress& getMacDest() const {return const_cast<IPv4ControlInfo_Base*>(this)->getMacDest();}
    virtual void setMacDest(const MACAddress& macDest);
};

/**
 * Class generated from <tt>networklayer/contract/IPv4ControlInfo.msg:94</tt> by nedtool.
 * <pre>
 * //
 * // Control info attached to packets sent from ~IPv4 to ~ARP.
 * //
 * // Next hop address is used on a LAN to determine the MAC destination
 * // address (and it may be used on other multicast networks for similar
 * // addressing purpose).
 * //
 * class IPv4RoutingDecision
 * {
 *     int interfaceId = -1; // interface on which dgram should be sent (see ~InterfaceTable)
 *     IPv4Address nextHopAddr;
 * }
 * </pre>
 */
class INET_API IPv4RoutingDecision : public ::cObject
{
  protected:
    int interfaceId_var;
    IPv4Address nextHopAddr_var;

  private:
    void copy(const IPv4RoutingDecision& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv4RoutingDecision&);

  public:
    IPv4RoutingDecision();
    IPv4RoutingDecision(const IPv4RoutingDecision& other);
    virtual ~IPv4RoutingDecision();
    IPv4RoutingDecision& operator=(const IPv4RoutingDecision& other);
    virtual IPv4RoutingDecision *dup() const {return new IPv4RoutingDecision(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getInterfaceId() const;
    virtual void setInterfaceId(int interfaceId);
    virtual IPv4Address& getNextHopAddr();
    virtual const IPv4Address& getNextHopAddr() const {return const_cast<IPv4RoutingDecision*>(this)->getNextHopAddr();}
    virtual void setNextHopAddr(const IPv4Address& nextHopAddr);
};

inline void doPacking(cCommBuffer *b, IPv4RoutingDecision& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, IPv4RoutingDecision& obj) {obj.parsimUnpack(b);}


#endif // ifndef _IPV4CONTROLINFO_M_H_

