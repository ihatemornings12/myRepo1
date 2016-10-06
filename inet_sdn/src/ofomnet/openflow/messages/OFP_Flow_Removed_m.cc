//
// Generated file, do not edit! Created by nedtool 4.6 from ofomnet/openflow/messages/OFP_Flow_Removed.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "OFP_Flow_Removed_m.h"

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

Register_Class(OFP_Flow_Removed);

OFP_Flow_Removed::OFP_Flow_Removed(const char *name, int kind) : ::Open_Flow_Message(name,kind)
{
    this->datapath_id_var = 0;
    this->reason_var = 0;
    this->packet_count_var = 0;
    this->idle_timeout_var = 0;
    this->hard_timeout_var = 0;
    this->priority_var = 0;
}

OFP_Flow_Removed::OFP_Flow_Removed(const OFP_Flow_Removed& other) : ::Open_Flow_Message(other)
{
    copy(other);
}

OFP_Flow_Removed::~OFP_Flow_Removed()
{
}

OFP_Flow_Removed& OFP_Flow_Removed::operator=(const OFP_Flow_Removed& other)
{
    if (this==&other) return *this;
    ::Open_Flow_Message::operator=(other);
    copy(other);
    return *this;
}

void OFP_Flow_Removed::copy(const OFP_Flow_Removed& other)
{
    this->datapath_id_var = other.datapath_id_var;
    this->reason_var = other.reason_var;
    this->packet_count_var = other.packet_count_var;
    this->match_var = other.match_var;
    this->idle_timeout_var = other.idle_timeout_var;
    this->hard_timeout_var = other.hard_timeout_var;
    this->priority_var = other.priority_var;
}

void OFP_Flow_Removed::parsimPack(cCommBuffer *b)
{
    ::Open_Flow_Message::parsimPack(b);
    doPacking(b,this->datapath_id_var);
    doPacking(b,this->reason_var);
    doPacking(b,this->packet_count_var);
    doPacking(b,this->match_var);
    doPacking(b,this->idle_timeout_var);
    doPacking(b,this->hard_timeout_var);
    doPacking(b,this->priority_var);
}

void OFP_Flow_Removed::parsimUnpack(cCommBuffer *b)
{
    ::Open_Flow_Message::parsimUnpack(b);
    doUnpacking(b,this->datapath_id_var);
    doUnpacking(b,this->reason_var);
    doUnpacking(b,this->packet_count_var);
    doUnpacking(b,this->match_var);
    doUnpacking(b,this->idle_timeout_var);
    doUnpacking(b,this->hard_timeout_var);
    doUnpacking(b,this->priority_var);
}

int OFP_Flow_Removed::getDatapath_id() const
{
    return datapath_id_var;
}

void OFP_Flow_Removed::setDatapath_id(int datapath_id)
{
    this->datapath_id_var = datapath_id;
}

uint8_t OFP_Flow_Removed::getReason() const
{
    return reason_var;
}

void OFP_Flow_Removed::setReason(uint8_t reason)
{
    this->reason_var = reason;
}

uint32_t OFP_Flow_Removed::getPacket_count() const
{
    return packet_count_var;
}

void OFP_Flow_Removed::setPacket_count(uint32_t packet_count)
{
    this->packet_count_var = packet_count;
}

oxm_basic_match& OFP_Flow_Removed::getMatch()
{
    return match_var;
}

void OFP_Flow_Removed::setMatch(const oxm_basic_match& match)
{
    this->match_var = match;
}

uint16_t OFP_Flow_Removed::getIdle_timeout() const
{
    return idle_timeout_var;
}

void OFP_Flow_Removed::setIdle_timeout(uint16_t idle_timeout)
{
    this->idle_timeout_var = idle_timeout;
}

uint16_t OFP_Flow_Removed::getHard_timeout() const
{
    return hard_timeout_var;
}

void OFP_Flow_Removed::setHard_timeout(uint16_t hard_timeout)
{
    this->hard_timeout_var = hard_timeout;
}

uint16_t OFP_Flow_Removed::getPriority() const
{
    return priority_var;
}

void OFP_Flow_Removed::setPriority(uint16_t priority)
{
    this->priority_var = priority;
}

class OFP_Flow_RemovedDescriptor : public cClassDescriptor
{
  public:
    OFP_Flow_RemovedDescriptor();
    virtual ~OFP_Flow_RemovedDescriptor();

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

Register_ClassDescriptor(OFP_Flow_RemovedDescriptor);

OFP_Flow_RemovedDescriptor::OFP_Flow_RemovedDescriptor() : cClassDescriptor("OFP_Flow_Removed", "Open_Flow_Message")
{
}

OFP_Flow_RemovedDescriptor::~OFP_Flow_RemovedDescriptor()
{
}

bool OFP_Flow_RemovedDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<OFP_Flow_Removed *>(obj)!=NULL;
}

const char *OFP_Flow_RemovedDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int OFP_Flow_RemovedDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 7+basedesc->getFieldCount(object) : 7;
}

unsigned int OFP_Flow_RemovedDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<7) ? fieldTypeFlags[field] : 0;
}

const char *OFP_Flow_RemovedDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "datapath_id",
        "reason",
        "packet_count",
        "match",
        "idle_timeout",
        "hard_timeout",
        "priority",
    };
    return (field>=0 && field<7) ? fieldNames[field] : NULL;
}

int OFP_Flow_RemovedDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "datapath_id")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "reason")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "packet_count")==0) return base+2;
    if (fieldName[0]=='m' && strcmp(fieldName, "match")==0) return base+3;
    if (fieldName[0]=='i' && strcmp(fieldName, "idle_timeout")==0) return base+4;
    if (fieldName[0]=='h' && strcmp(fieldName, "hard_timeout")==0) return base+5;
    if (fieldName[0]=='p' && strcmp(fieldName, "priority")==0) return base+6;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *OFP_Flow_RemovedDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "uint8_t",
        "uint32_t",
        "oxm_basic_match",
        "uint16_t",
        "uint16_t",
        "uint16_t",
    };
    return (field>=0 && field<7) ? fieldTypeStrings[field] : NULL;
}

const char *OFP_Flow_RemovedDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int OFP_Flow_RemovedDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    OFP_Flow_Removed *pp = (OFP_Flow_Removed *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string OFP_Flow_RemovedDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    OFP_Flow_Removed *pp = (OFP_Flow_Removed *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getDatapath_id());
        case 1: return ulong2string(pp->getReason());
        case 2: return ulong2string(pp->getPacket_count());
        case 3: {std::stringstream out; out << pp->getMatch(); return out.str();}
        case 4: return ulong2string(pp->getIdle_timeout());
        case 5: return ulong2string(pp->getHard_timeout());
        case 6: return ulong2string(pp->getPriority());
        default: return "";
    }
}

bool OFP_Flow_RemovedDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    OFP_Flow_Removed *pp = (OFP_Flow_Removed *)object; (void)pp;
    switch (field) {
        case 0: pp->setDatapath_id(string2long(value)); return true;
        case 1: pp->setReason(string2ulong(value)); return true;
        case 2: pp->setPacket_count(string2ulong(value)); return true;
        case 4: pp->setIdle_timeout(string2ulong(value)); return true;
        case 5: pp->setHard_timeout(string2ulong(value)); return true;
        case 6: pp->setPriority(string2ulong(value)); return true;
        default: return false;
    }
}

const char *OFP_Flow_RemovedDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 3: return opp_typename(typeid(oxm_basic_match));
        default: return NULL;
    };
}

void *OFP_Flow_RemovedDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    OFP_Flow_Removed *pp = (OFP_Flow_Removed *)object; (void)pp;
    switch (field) {
        case 3: return (void *)(&pp->getMatch()); break;
        default: return NULL;
    }
}


