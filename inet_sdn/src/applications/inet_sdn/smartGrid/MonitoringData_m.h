//
// Generated file, do not edit! Created by nedtool 4.6 from applications/inet_sdn/smartGrid/MonitoringData.msg.
//

#ifndef _MONITORINGDATA_M_H_
#define _MONITORINGDATA_M_H_

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
// }}

/**
 * Class generated from <tt>applications/inet_sdn/smartGrid/MonitoringData.msg:20</tt> by nedtool.
 * <pre>
 * packet MonitoringData
 * {
 *     double energyGeneration; // value of one reading
 *     double avgEnergyGen; // avg value of many readings
 *     double sumEnergyGen; // sum of many readings
 *     double threshold;
 *     string sender;
 * }
 * </pre>
 */
class INET_API MonitoringData : public ::cPacket
{
  protected:
    double energyGeneration_var;
    double avgEnergyGen_var;
    double sumEnergyGen_var;
    double threshold_var;
    opp_string sender_var;

  private:
    void copy(const MonitoringData& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const MonitoringData&);

  public:
    MonitoringData(const char *name=NULL, int kind=0);
    MonitoringData(const MonitoringData& other);
    virtual ~MonitoringData();
    MonitoringData& operator=(const MonitoringData& other);
    virtual MonitoringData *dup() const {return new MonitoringData(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual double getEnergyGeneration() const;
    virtual void setEnergyGeneration(double energyGeneration);
    virtual double getAvgEnergyGen() const;
    virtual void setAvgEnergyGen(double avgEnergyGen);
    virtual double getSumEnergyGen() const;
    virtual void setSumEnergyGen(double sumEnergyGen);
    virtual double getThreshold() const;
    virtual void setThreshold(double threshold);
    virtual const char * getSender() const;
    virtual void setSender(const char * sender);
};

inline void doPacking(cCommBuffer *b, MonitoringData& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, MonitoringData& obj) {obj.parsimUnpack(b);}


#endif // ifndef _MONITORINGDATA_M_H_

