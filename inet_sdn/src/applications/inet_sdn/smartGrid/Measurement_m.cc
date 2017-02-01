//
// Generated file, do not edit! Created by nedtool 4.6 from applications/inet_sdn/smartGrid/Measurement.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "Measurement_m.h"

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

Register_Class(Measurement);

Measurement::Measurement(const char *name, int kind) : ::cMessage(name,kind)
{
    this->energyProduction_var = 0;
    this->name_var = 0;
    this->limit_var = 0;
}

Measurement::Measurement(const Measurement& other) : ::cMessage(other)
{
    copy(other);
}

Measurement::~Measurement()
{
}

Measurement& Measurement::operator=(const Measurement& other)
{
    if (this==&other) return *this;
    ::cMessage::operator=(other);
    copy(other);
    return *this;
}

void Measurement::copy(const Measurement& other)
{
    this->energyProduction_var = other.energyProduction_var;
    this->name_var = other.name_var;
    this->limit_var = other.limit_var;
}

void Measurement::parsimPack(cCommBuffer *b)
{
    ::cMessage::parsimPack(b);
    doPacking(b,this->energyProduction_var);
    doPacking(b,this->name_var);
    doPacking(b,this->limit_var);
}

void Measurement::parsimUnpack(cCommBuffer *b)
{
    ::cMessage::parsimUnpack(b);
    doUnpacking(b,this->energyProduction_var);
    doUnpacking(b,this->name_var);
    doUnpacking(b,this->limit_var);
}

double Measurement::getEnergyProduction() const
{
    return energyProduction_var;
}

void Measurement::setEnergyProduction(double energyProduction)
{
    this->energyProduction_var = energyProduction;
}

const char * Measurement::getName() const
{
    return name_var.c_str();
}

void Measurement::setName(const char * name)
{
    this->name_var = name;
}

int Measurement::getLimit() const
{
    return limit_var;
}

void Measurement::setLimit(int limit)
{
    this->limit_var = limit;
}

class MeasurementDescriptor : public cClassDescriptor
{
  public:
    MeasurementDescriptor();
    virtual ~MeasurementDescriptor();

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

Register_ClassDescriptor(MeasurementDescriptor);

MeasurementDescriptor::MeasurementDescriptor() : cClassDescriptor("Measurement", "cMessage")
{
}

MeasurementDescriptor::~MeasurementDescriptor()
{
}

bool MeasurementDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Measurement *>(obj)!=NULL;
}

const char *MeasurementDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int MeasurementDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int MeasurementDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *MeasurementDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "energyProduction",
        "name",
        "limit",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int MeasurementDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='e' && strcmp(fieldName, "energyProduction")==0) return base+0;
    if (fieldName[0]=='n' && strcmp(fieldName, "name")==0) return base+1;
    if (fieldName[0]=='l' && strcmp(fieldName, "limit")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *MeasurementDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "double",
        "string",
        "int",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *MeasurementDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int MeasurementDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Measurement *pp = (Measurement *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string MeasurementDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Measurement *pp = (Measurement *)object; (void)pp;
    switch (field) {
        case 0: return double2string(pp->getEnergyProduction());
        case 1: return oppstring2string(pp->getName());
        case 2: return long2string(pp->getLimit());
        default: return "";
    }
}

bool MeasurementDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Measurement *pp = (Measurement *)object; (void)pp;
    switch (field) {
        case 0: pp->setEnergyProduction(string2double(value)); return true;
        case 1: pp->setName((value)); return true;
        case 2: pp->setLimit(string2long(value)); return true;
        default: return false;
    }
}

const char *MeasurementDescriptor::getFieldStructName(void *object, int field) const
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

void *MeasurementDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Measurement *pp = (Measurement *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


