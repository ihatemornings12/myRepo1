//
// Generated file, do not edit! Created by nedtool 4.6 from linklayer/radio/IdealAirFrame.msg.
//

#ifndef _IDEALAIRFRAME_M_H_
#define _IDEALAIRFRAME_M_H_

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
#include "INETDefs.h"

#include "Coord.h"
// }}

/**
 * Class generated from <tt>linklayer/radio/IdealAirFrame.msg:34</tt> by nedtool.
 * <pre>
 * //
 * // AirFrame used with ~IdealRadio and ~IdealChannelModel
 * //
 * packet IdealAirFrame
 * {
 *     simtime_t transmissionDuration;     // Time it takes to transmit the packet, in seconds
 *     Coord transmissionStartPosition;    // position of sender when transmission starts
 *     double transmissionRange;           // max. distance from sender where reception is possible
 * }
 * </pre>
 */
class INET_API IdealAirFrame : public ::cPacket
{
  protected:
    simtime_t transmissionDuration_var;
    Coord transmissionStartPosition_var;
    double transmissionRange_var;

  private:
    void copy(const IdealAirFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IdealAirFrame&);

  public:
    IdealAirFrame(const char *name=NULL, int kind=0);
    IdealAirFrame(const IdealAirFrame& other);
    virtual ~IdealAirFrame();
    IdealAirFrame& operator=(const IdealAirFrame& other);
    virtual IdealAirFrame *dup() const {return new IdealAirFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual simtime_t getTransmissionDuration() const;
    virtual void setTransmissionDuration(simtime_t transmissionDuration);
    virtual Coord& getTransmissionStartPosition();
    virtual const Coord& getTransmissionStartPosition() const {return const_cast<IdealAirFrame*>(this)->getTransmissionStartPosition();}
    virtual void setTransmissionStartPosition(const Coord& transmissionStartPosition);
    virtual double getTransmissionRange() const;
    virtual void setTransmissionRange(double transmissionRange);
};

inline void doPacking(cCommBuffer *b, IdealAirFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, IdealAirFrame& obj) {obj.parsimUnpack(b);}


#endif // ifndef _IDEALAIRFRAME_M_H_

