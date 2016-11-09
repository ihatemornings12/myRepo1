//
// Generated file, do not edit! Created by nedtool 4.6 from ofomnet/openflow/messages/OFP_Flow_Stats_Request.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "OFP_Flow_Stats_Request_m.h"

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

Register_Class(OFP_Flow_Stats_Request);

OFP_Flow_Stats_Request::OFP_Flow_Stats_Request(const char *name, int kind) : ::Open_Flow_Message(name,kind)
{
    this->datapath_id_var = 0;
    this->table_id_var = 0;
    this->out_port_var = 0;
}

OFP_Flow_Stats_Request::OFP_Flow_Stats_Request(const OFP_Flow_Stats_Request& other) : ::Open_Flow_Message(other)
{
    copy(other);
}

OFP_Flow_Stats_Request::~OFP_Flow_Stats_Request()
{
}

OFP_Flow_Stats_Request& OFP_Flow_Stats_Request::operator=(const OFP_Flow_Stats_Request& other)
{
    if (this==&other) return *this;
    ::Open_Flow_Message::operator=(other);
    copy(other);
    return *this;
}

void OFP_Flow_Stats_Request::copy(const OFP_Flow_Stats_Request& other)
{
    this->match_var = other.match_var;
    this->datapath_id_var = other.datapath_id_var;
    this->table_id_var = other.table_id_var;
    this->out_port_var = other.out_port_var;
}

void OFP_Flow_Stats_Request::parsimPack(cCommBuffer *b)
{
    ::Open_Flow_Message::parsimPack(b);
    doPacking(b,this->match_var);
    doPacking(b,this->datapath_id_var);
    doPacking(b,this->table_id_var);
    doPacking(b,this->out_port_var);
}

void OFP_Flow_Stats_Request::parsimUnpack(cCommBuffer *b)
{
    ::Open_Flow_Message::parsimUnpack(b);
    doUnpacking(b,this->match_var);
    doUnpacking(b,this->datapath_id_var);
    doUnpacking(b,this->table_id_var);
    doUnpacking(b,this->out_port_var);
}

oxm_basic_match& OFP_Flow_Stats_Request::getMatch()
{
    return match_var;
}

void OFP_Flow_Stats_Request::setMatch(const oxm_basic_match& match)
{
    this->match_var = match;
}

int OFP_Flow_Stats_Request::getDatapath_id() const
{
    return datapath_id_var;
}

void OFP_Flow_Stats_Request::setDatapath_id(int datapath_id)
{
    this->datapath_id_var = datapath_id;
}

uint8_t OFP_Flow_Stats_Request::getTable_id() const
{
    return table_id_var;
}

void OFP_Flow_Stats_Request::setTable_id(uint8_t table_id)
{
    this->table_id_var = table_id;
}

uint32_t OFP_Flow_Stats_Request::getOut_port() const
{
    return out_port_var;
}

void OFP_Flow_Stats_Request::setOut_port(uint32_t out_port)
{
    this->out_port_var = out_port;
}

class OFP_Flow_Stats_RequestDescriptor : public cClassDescriptor
{
  public:
    OFP_Flow_Stats_RequestDescriptor();
    virtual ~OFP_Flow_Stats_RequestDescriptor();

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

Register_ClassDescriptor(OFP_Flow_Stats_RequestDescriptor);

OFP_Flow_Stats_RequestDescriptor::OFP_Flow_Stats_RequestDescriptor() : cClassDescriptor("OFP_Flow_Stats_Request", "Open_Flow_Message")
{
}

OFP_Flow_Stats_RequestDescriptor::~OFP_Flow_Stats_RequestDescriptor()
{
}

bool OFP_Flow_Stats_RequestDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<OFP_Flow_Stats_Request *>(obj)!=NULL;
}

const char *OFP_Flow_Stats_RequestDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int OFP_Flow_Stats_RequestDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int OFP_Flow_Stats_RequestDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *OFP_Flow_Stats_RequestDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "match",
        "datapath_id",
        "table_id",
        "out_port",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int OFP_Flow_Stats_RequestDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='m' && strcmp(fieldName, "match")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "datapath_id")==0) return base+1;
    if (fieldName[0]=='t' && strcmp(fieldName, "table_id")==0) return base+2;
    if (fieldName[0]=='o' && strcmp(fieldName, "out_port")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *OFP_Flow_Stats_RequestDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "oxm_basic_match",
        "int",
        "uint8_t",
        "uint32_t",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *OFP_Flow_Stats_RequestDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int OFP_Flow_Stats_RequestDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    OFP_Flow_Stats_Request *pp = (OFP_Flow_Stats_Request *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string OFP_Flow_Stats_RequestDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    OFP_Flow_Stats_Request *pp = (OFP_Flow_Stats_Request *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getMatch(); return out.str();}
        case 1: return long2string(pp->getDatapath_id());
        case 2: return ulong2string(pp->getTable_id());
        case 3: return ulong2string(pp->getOut_port());
        default: return "";
    }
}

bool OFP_Flow_Stats_RequestDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    OFP_Flow_Stats_Request *pp = (OFP_Flow_Stats_Request *)object; (void)pp;
    switch (field) {
        case 1: pp->setDatapath_id(string2long(value)); return true;
        case 2: pp->setTable_id(string2ulong(value)); return true;
        case 3: pp->setOut_port(string2ulong(value)); return true;
        default: return false;
    }
}

const char *OFP_Flow_Stats_RequestDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(oxm_basic_match));
        default: return NULL;
    };
}

void *OFP_Flow_Stats_RequestDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    OFP_Flow_Stats_Request *pp = (OFP_Flow_Stats_Request *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getMatch()); break;
        default: return NULL;
    }
}


