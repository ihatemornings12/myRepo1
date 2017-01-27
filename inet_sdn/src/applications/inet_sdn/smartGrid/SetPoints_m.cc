//
// Generated file, do not edit! Created by nedtool 4.6 from applications/inet_sdn/smartGrid/SetPoints.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "SetPoints_m.h"

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

Register_Class(SetPoints);

SetPoints::SetPoints(const char *name, int kind) : ::cPacket(name,kind)
{
    this->energyGenLimit_var = 0;
    this->powerQualityLimit_var = 0;
}

SetPoints::SetPoints(const SetPoints& other) : ::cPacket(other)
{
    copy(other);
}

SetPoints::~SetPoints()
{
}

SetPoints& SetPoints::operator=(const SetPoints& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void SetPoints::copy(const SetPoints& other)
{
    this->energyGenLimit_var = other.energyGenLimit_var;
    this->powerQualityLimit_var = other.powerQualityLimit_var;
}

void SetPoints::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->energyGenLimit_var);
    doPacking(b,this->powerQualityLimit_var);
}

void SetPoints::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->energyGenLimit_var);
    doUnpacking(b,this->powerQualityLimit_var);
}

double SetPoints::getEnergyGenLimit() const
{
    return energyGenLimit_var;
}

void SetPoints::setEnergyGenLimit(double energyGenLimit)
{
    this->energyGenLimit_var = energyGenLimit;
}

int SetPoints::getPowerQualityLimit() const
{
    return powerQualityLimit_var;
}

void SetPoints::setPowerQualityLimit(int powerQualityLimit)
{
    this->powerQualityLimit_var = powerQualityLimit;
}

class SetPointsDescriptor : public cClassDescriptor
{
  public:
    SetPointsDescriptor();
    virtual ~SetPointsDescriptor();

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

Register_ClassDescriptor(SetPointsDescriptor);

SetPointsDescriptor::SetPointsDescriptor() : cClassDescriptor("SetPoints", "cPacket")
{
}

SetPointsDescriptor::~SetPointsDescriptor()
{
}

bool SetPointsDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SetPoints *>(obj)!=NULL;
}

const char *SetPointsDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SetPointsDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int SetPointsDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *SetPointsDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "energyGenLimit",
        "powerQualityLimit",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int SetPointsDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='e' && strcmp(fieldName, "energyGenLimit")==0) return base+0;
    if (fieldName[0]=='p' && strcmp(fieldName, "powerQualityLimit")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SetPointsDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "double",
        "int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *SetPointsDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SetPointsDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SetPoints *pp = (SetPoints *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SetPointsDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SetPoints *pp = (SetPoints *)object; (void)pp;
    switch (field) {
        case 0: return double2string(pp->getEnergyGenLimit());
        case 1: return long2string(pp->getPowerQualityLimit());
        default: return "";
    }
}

bool SetPointsDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SetPoints *pp = (SetPoints *)object; (void)pp;
    switch (field) {
        case 0: pp->setEnergyGenLimit(string2double(value)); return true;
        case 1: pp->setPowerQualityLimit(string2long(value)); return true;
        default: return false;
    }
}

const char *SetPointsDescriptor::getFieldStructName(void *object, int field) const
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

void *SetPointsDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SetPoints *pp = (SetPoints *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


