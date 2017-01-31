//
// Generated file, do not edit! Created by nedtool 4.6 from applications/inet_sdn/smartGrid/MonitoringData.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "MonitoringData_m.h"

USING_NAMESPACE


// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




// Template rule for outputting std::vector<T> types
template<typename T, typename A>
inline std::ostream& operator<<(std::ostream& out, const std::vector<T,A>& vec)
{
    out.put('{');
    for(typename std::vector<T,A>::const_iterator it = vec.begin(); it != vec.end(); ++it)
    {
        if (it != vec.begin()) {
            out.put(','); out.put(' ');
        }
        out << *it;
    }
    out.put('}');
    
    char buf[32];
    sprintf(buf, " (size=%u)", (unsigned int)vec.size());
    out.write(buf, strlen(buf));
    return out;
}

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
inline std::ostream& operator<<(std::ostream& out,const T&) {return out;}

Register_Class(MonitoringData);

MonitoringData::MonitoringData(const char *name, int kind) : ::cPacket(name,kind)
{
    this->energyGeneration_var = 0;
    this->avgEnergyGen_var = 0;
    this->sumEnergyGen_var = 0;
    this->threshold_var = 0;
    this->sender_var = 0;
}

MonitoringData::MonitoringData(const MonitoringData& other) : ::cPacket(other)
{
    copy(other);
}

MonitoringData::~MonitoringData()
{
}

MonitoringData& MonitoringData::operator=(const MonitoringData& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void MonitoringData::copy(const MonitoringData& other)
{
    this->energyGeneration_var = other.energyGeneration_var;
    this->avgEnergyGen_var = other.avgEnergyGen_var;
    this->sumEnergyGen_var = other.sumEnergyGen_var;
    this->threshold_var = other.threshold_var;
    this->sender_var = other.sender_var;
}

void MonitoringData::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->energyGeneration_var);
    doPacking(b,this->avgEnergyGen_var);
    doPacking(b,this->sumEnergyGen_var);
    doPacking(b,this->threshold_var);
    doPacking(b,this->sender_var);
}

void MonitoringData::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->energyGeneration_var);
    doUnpacking(b,this->avgEnergyGen_var);
    doUnpacking(b,this->sumEnergyGen_var);
    doUnpacking(b,this->threshold_var);
    doUnpacking(b,this->sender_var);
}

double MonitoringData::getEnergyGeneration() const
{
    return energyGeneration_var;
}

void MonitoringData::setEnergyGeneration(double energyGeneration)
{
    this->energyGeneration_var = energyGeneration;
}

double MonitoringData::getAvgEnergyGen() const
{
    return avgEnergyGen_var;
}

void MonitoringData::setAvgEnergyGen(double avgEnergyGen)
{
    this->avgEnergyGen_var = avgEnergyGen;
}

double MonitoringData::getSumEnergyGen() const
{
    return sumEnergyGen_var;
}

void MonitoringData::setSumEnergyGen(double sumEnergyGen)
{
    this->sumEnergyGen_var = sumEnergyGen;
}

double MonitoringData::getThreshold() const
{
    return threshold_var;
}

void MonitoringData::setThreshold(double threshold)
{
    this->threshold_var = threshold;
}

const char * MonitoringData::getSender() const
{
    return sender_var.c_str();
}

void MonitoringData::setSender(const char * sender)
{
    this->sender_var = sender;
}

class MonitoringDataDescriptor : public cClassDescriptor
{
  public:
    MonitoringDataDescriptor();
    virtual ~MonitoringDataDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(MonitoringDataDescriptor);

MonitoringDataDescriptor::MonitoringDataDescriptor() : cClassDescriptor("MonitoringData", "cPacket")
{
}

MonitoringDataDescriptor::~MonitoringDataDescriptor()
{
}

bool MonitoringDataDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<MonitoringData *>(obj)!=NULL;
}

const char *MonitoringDataDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int MonitoringDataDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int MonitoringDataDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<5) ? fieldTypeFlags[field] : 0;
}

const char *MonitoringDataDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "energyGeneration",
        "avgEnergyGen",
        "sumEnergyGen",
        "threshold",
        "sender",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int MonitoringDataDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='e' && strcmp(fieldName, "energyGeneration")==0) return base+0;
    if (fieldName[0]=='a' && strcmp(fieldName, "avgEnergyGen")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "sumEnergyGen")==0) return base+2;
    if (fieldName[0]=='t' && strcmp(fieldName, "threshold")==0) return base+3;
    if (fieldName[0]=='s' && strcmp(fieldName, "sender")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *MonitoringDataDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "double",
        "double",
        "double",
        "double",
        "string",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *MonitoringDataDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int MonitoringDataDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    MonitoringData *pp = (MonitoringData *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string MonitoringDataDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    MonitoringData *pp = (MonitoringData *)object; (void)pp;
    switch (field) {
        case 0: return double2string(pp->getEnergyGeneration());
        case 1: return double2string(pp->getAvgEnergyGen());
        case 2: return double2string(pp->getSumEnergyGen());
        case 3: return double2string(pp->getThreshold());
        case 4: return oppstring2string(pp->getSender());
        default: return "";
    }
}

bool MonitoringDataDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    MonitoringData *pp = (MonitoringData *)object; (void)pp;
    switch (field) {
        case 0: pp->setEnergyGeneration(string2double(value)); return true;
        case 1: pp->setAvgEnergyGen(string2double(value)); return true;
        case 2: pp->setSumEnergyGen(string2double(value)); return true;
        case 3: pp->setThreshold(string2double(value)); return true;
        case 4: pp->setSender((value)); return true;
        default: return false;
    }
}

const char *MonitoringDataDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    };
}

void *MonitoringDataDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    MonitoringData *pp = (MonitoringData *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


