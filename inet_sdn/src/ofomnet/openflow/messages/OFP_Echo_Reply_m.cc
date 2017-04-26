//
// Generated file, do not edit! Created by nedtool 4.6 from ofomnet/openflow/messages/OFP_Echo_Reply.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "OFP_Echo_Reply_m.h"

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

Register_Class(OFP_Echo_Reply);

OFP_Echo_Reply::OFP_Echo_Reply(const char *name, int kind) : ::Open_Flow_Message(name,kind)
{
    this->datapath_id_var = 0;
}

OFP_Echo_Reply::OFP_Echo_Reply(const OFP_Echo_Reply& other) : ::Open_Flow_Message(other)
{
    copy(other);
}

OFP_Echo_Reply::~OFP_Echo_Reply()
{
}

OFP_Echo_Reply& OFP_Echo_Reply::operator=(const OFP_Echo_Reply& other)
{
    if (this==&other) return *this;
    ::Open_Flow_Message::operator=(other);
    copy(other);
    return *this;
}

void OFP_Echo_Reply::copy(const OFP_Echo_Reply& other)
{
    this->datapath_id_var = other.datapath_id_var;
}

void OFP_Echo_Reply::parsimPack(cCommBuffer *b)
{
    ::Open_Flow_Message::parsimPack(b);
    doPacking(b,this->datapath_id_var);
}

void OFP_Echo_Reply::parsimUnpack(cCommBuffer *b)
{
    ::Open_Flow_Message::parsimUnpack(b);
    doUnpacking(b,this->datapath_id_var);
}

int OFP_Echo_Reply::getDatapath_id() const
{
    return datapath_id_var;
}

void OFP_Echo_Reply::setDatapath_id(int datapath_id)
{
    this->datapath_id_var = datapath_id;
}

class OFP_Echo_ReplyDescriptor : public cClassDescriptor
{
  public:
    OFP_Echo_ReplyDescriptor();
    virtual ~OFP_Echo_ReplyDescriptor();

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

Register_ClassDescriptor(OFP_Echo_ReplyDescriptor);

OFP_Echo_ReplyDescriptor::OFP_Echo_ReplyDescriptor() : cClassDescriptor("OFP_Echo_Reply", "Open_Flow_Message")
{
}

OFP_Echo_ReplyDescriptor::~OFP_Echo_ReplyDescriptor()
{
}

bool OFP_Echo_ReplyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<OFP_Echo_Reply *>(obj)!=NULL;
}

const char *OFP_Echo_ReplyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int OFP_Echo_ReplyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int OFP_Echo_ReplyDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *OFP_Echo_ReplyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "datapath_id",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int OFP_Echo_ReplyDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "datapath_id")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *OFP_Echo_ReplyDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *OFP_Echo_ReplyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int OFP_Echo_ReplyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    OFP_Echo_Reply *pp = (OFP_Echo_Reply *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string OFP_Echo_ReplyDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    OFP_Echo_Reply *pp = (OFP_Echo_Reply *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getDatapath_id());
        default: return "";
    }
}

bool OFP_Echo_ReplyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    OFP_Echo_Reply *pp = (OFP_Echo_Reply *)object; (void)pp;
    switch (field) {
        case 0: pp->setDatapath_id(string2long(value)); return true;
        default: return false;
    }
}

const char *OFP_Echo_ReplyDescriptor::getFieldStructName(void *object, int field) const
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

void *OFP_Echo_ReplyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    OFP_Echo_Reply *pp = (OFP_Echo_Reply *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


