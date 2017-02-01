//
// Generated file, do not edit! Created by nedtool 4.6 from applications/inet_sdn/smartGrid/MeasurementData.msg.
//

#ifndef _MEASUREMENTDATA_M_H_
#define _MEASUREMENTDATA_M_H_

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
 * Class generated from <tt>applications/inet_sdn/smartGrid/MeasurementData.msg:20</tt> by nedtool.
 * <pre>
 * message MeasurementData
 * {
 *     double energyProduction;
 *     string name;
 * }
 * </pre>
 */
class INET_API MeasurementData : public ::cMessage
{
  protected:
    double energyProduction_var;
    opp_string name_var;

  private:
    void copy(const MeasurementData& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const MeasurementData&);

  public:
    MeasurementData(const char *name=NULL, int kind=0);
    MeasurementData(const MeasurementData& other);
    virtual ~MeasurementData();
    MeasurementData& operator=(const MeasurementData& other);
    virtual MeasurementData *dup() const {return new MeasurementData(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual double getEnergyProduction() const;
    virtual void setEnergyProduction(double energyProduction);
    virtual const char * getName() const;
    virtual void setName(const char * name);
};

inline void doPacking(cCommBuffer *b, MeasurementData& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, MeasurementData& obj) {obj.parsimUnpack(b);}


#endif // ifndef _MEASUREMENTDATA_M_H_

