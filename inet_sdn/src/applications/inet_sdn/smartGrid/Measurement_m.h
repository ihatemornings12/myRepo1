//
// Generated file, do not edit! Created by nedtool 4.6 from applications/inet_sdn/smartGrid/Measurement.msg.
//

#ifndef _MEASUREMENT_M_H_
#define _MEASUREMENT_M_H_

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
 * Class generated from <tt>applications/inet_sdn/smartGrid/Measurement.msg:21</tt> by nedtool.
 * <pre>
 * // a message sent by the IEDs to the RTU reporting the current measurement
 * message Measurement
 * {
 *     double energyProduction; //measurement 
 *     string name;
 *     int limit; //current max limit
 * }
 * </pre>
 */
class INET_API Measurement : public ::cMessage
{
  protected:
    double energyProduction_var;
    opp_string name_var;
    int limit_var;

  private:
    void copy(const Measurement& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Measurement&);

  public:
    Measurement(const char *name=NULL, int kind=0);
    Measurement(const Measurement& other);
    virtual ~Measurement();
    Measurement& operator=(const Measurement& other);
    virtual Measurement *dup() const {return new Measurement(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual double getEnergyProduction() const;
    virtual void setEnergyProduction(double energyProduction);
    virtual const char * getName() const;
    virtual void setName(const char * name);
    virtual int getLimit() const;
    virtual void setLimit(int limit);
};

inline void doPacking(cCommBuffer *b, Measurement& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Measurement& obj) {obj.parsimUnpack(b);}


#endif // ifndef _MEASUREMENT_M_H_
