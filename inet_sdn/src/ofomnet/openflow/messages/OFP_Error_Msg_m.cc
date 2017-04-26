//
// Generated file, do not edit! Created by nedtool 4.6 from ofomnet/openflow/messages/OFP_Error_Msg.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "OFP_Error_Msg_m.h"

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

Register_Class(OFP_Error_Msg);

OFP_Error_Msg::OFP_Error_Msg(const char *name, int kind) : ::Open_Flow_Message(name,kind)
{
    this->type_var = 0;
    this->code_var = 0;
}

OFP_Error_Msg::OFP_Error_Msg(const OFP_Error_Msg& other) : ::Open_Flow_Message(other)
{
    copy(other);
}

OFP_Error_Msg::~OFP_Error_Msg()
{
}

OFP_Error_Msg& OFP_Error_Msg::operator=(const OFP_Error_Msg& other)
{
    if (this==&other) return *this;
    ::Open_Flow_Message::operator=(other);
    copy(other);
    return *this;
}

void OFP_Error_Msg::copy(const OFP_Error_Msg& other)
{
    this->type_var = other.type_var;
    this->code_var = other.code_var;
}

void OFP_Error_Msg::parsimPack(cCommBuffer *b)
{
    ::Open_Flow_Message::parsimPack(b);
    doPacking(b,this->type_var);
    doPacking(b,this->code_var);
}

void OFP_Error_Msg::parsimUnpack(cCommBuffer *b)
{
    ::Open_Flow_Message::parsimUnpack(b);
    doUnpacking(b,this->type_var);
    doUnpacking(b,this->code_var);
}

uint16_t OFP_Error_Msg::getType() const
{
    return type_var;
}

void OFP_Error_Msg::setType(uint16_t type)
{
    this->type_var = type;
}

uint16_t OFP_Error_Msg::getCode() const
{
    return code_var;
}

void OFP_Error_Msg::setCode(uint16_t code)
{
    this->code_var = code;
}

class OFP_Error_MsgDescriptor : public cClassDescriptor
{
  public:
    OFP_Error_MsgDescriptor();
    virtual ~OFP_Error_MsgDescriptor();

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

Register_ClassDescriptor(OFP_Error_MsgDescriptor);

OFP_Error_MsgDescriptor::OFP_Error_MsgDescriptor() : cClassDescriptor("OFP_Error_Msg", "Open_Flow_Message")
{
}

OFP_Error_MsgDescriptor::~OFP_Error_MsgDescriptor()
{
}

bool OFP_Error_MsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<OFP_Error_Msg *>(obj)!=NULL;
}

const char *OFP_Error_MsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int OFP_Error_MsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int OFP_Error_MsgDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *OFP_Error_MsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "type",
        "code",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int OFP_Error_MsgDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "code")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *OFP_Error_MsgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint16_t",
        "uint16_t",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *OFP_Error_MsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int OFP_Error_MsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    OFP_Error_Msg *pp = (OFP_Error_Msg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string OFP_Error_MsgDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    OFP_Error_Msg *pp = (OFP_Error_Msg *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getType());
        case 1: return ulong2string(pp->getCode());
        default: return "";
    }
}

bool OFP_Error_MsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    OFP_Error_Msg *pp = (OFP_Error_Msg *)object; (void)pp;
    switch (field) {
        case 0: pp->setType(string2ulong(value)); return true;
        case 1: pp->setCode(string2ulong(value)); return true;
        default: return false;
    }
}

const char *OFP_Error_MsgDescriptor::getFieldStructName(void *object, int field) const
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

void *OFP_Error_MsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    OFP_Error_Msg *pp = (OFP_Error_Msg *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


