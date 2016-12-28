//
// Generated file, do not edit! Created by nedtool 4.6 from ofomnet/openflow/messages/OFP_Port_Status.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "OFP_Port_Status_m.h"

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

Register_Class(OFP_Port_Status);

OFP_Port_Status::OFP_Port_Status(const char *name, int kind) : ::Open_Flow_Message(name,kind)
{
    this->reason_var = 0;
    this->datapath_Id_var = 0;
}

OFP_Port_Status::OFP_Port_Status(const OFP_Port_Status& other) : ::Open_Flow_Message(other)
{
    copy(other);
}

OFP_Port_Status::~OFP_Port_Status()
{
}

OFP_Port_Status& OFP_Port_Status::operator=(const OFP_Port_Status& other)
{
    if (this==&other) return *this;
    ::Open_Flow_Message::operator=(other);
    copy(other);
    return *this;
}

void OFP_Port_Status::copy(const OFP_Port_Status& other)
{
    this->port_status_var = other.port_status_var;
    this->reason_var = other.reason_var;
    this->datapath_Id_var = other.datapath_Id_var;
}

void OFP_Port_Status::parsimPack(cCommBuffer *b)
{
    ::Open_Flow_Message::parsimPack(b);
    doPacking(b,this->port_status_var);
    doPacking(b,this->reason_var);
    doPacking(b,this->datapath_Id_var);
}

void OFP_Port_Status::parsimUnpack(cCommBuffer *b)
{
    ::Open_Flow_Message::parsimUnpack(b);
    doUnpacking(b,this->port_status_var);
    doUnpacking(b,this->reason_var);
    doUnpacking(b,this->datapath_Id_var);
}

ofp_port_status& OFP_Port_Status::getPort_status()
{
    return port_status_var;
}

void OFP_Port_Status::setPort_status(const ofp_port_status& port_status)
{
    this->port_status_var = port_status;
}

uint8_t OFP_Port_Status::getReason() const
{
    return reason_var;
}

void OFP_Port_Status::setReason(uint8_t reason)
{
    this->reason_var = reason;
}

int OFP_Port_Status::getDatapath_Id() const
{
    return datapath_Id_var;
}

void OFP_Port_Status::setDatapath_Id(int datapath_Id)
{
    this->datapath_Id_var = datapath_Id;
}

class OFP_Port_StatusDescriptor : public cClassDescriptor
{
  public:
    OFP_Port_StatusDescriptor();
    virtual ~OFP_Port_StatusDescriptor();

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

Register_ClassDescriptor(OFP_Port_StatusDescriptor);

OFP_Port_StatusDescriptor::OFP_Port_StatusDescriptor() : cClassDescriptor("OFP_Port_Status", "Open_Flow_Message")
{
}

OFP_Port_StatusDescriptor::~OFP_Port_StatusDescriptor()
{
}

bool OFP_Port_StatusDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<OFP_Port_Status *>(obj)!=NULL;
}

const char *OFP_Port_StatusDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int OFP_Port_StatusDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int OFP_Port_StatusDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *OFP_Port_StatusDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "port_status",
        "reason",
        "datapath_Id",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int OFP_Port_StatusDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "port_status")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "reason")==0) return base+1;
    if (fieldName[0]=='d' && strcmp(fieldName, "datapath_Id")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *OFP_Port_StatusDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "ofp_port_status",
        "uint8_t",
        "int",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *OFP_Port_StatusDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int OFP_Port_StatusDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    OFP_Port_Status *pp = (OFP_Port_Status *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string OFP_Port_StatusDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    OFP_Port_Status *pp = (OFP_Port_Status *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getPort_status(); return out.str();}
        case 1: return ulong2string(pp->getReason());
        case 2: return long2string(pp->getDatapath_Id());
        default: return "";
    }
}

bool OFP_Port_StatusDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    OFP_Port_Status *pp = (OFP_Port_Status *)object; (void)pp;
    switch (field) {
        case 1: pp->setReason(string2ulong(value)); return true;
        case 2: pp->setDatapath_Id(string2long(value)); return true;
        default: return false;
    }
}

const char *OFP_Port_StatusDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(ofp_port_status));
        default: return NULL;
    };
}

void *OFP_Port_StatusDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    OFP_Port_Status *pp = (OFP_Port_Status *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getPort_status()); break;
        default: return NULL;
    }
}


