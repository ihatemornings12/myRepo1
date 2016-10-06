//
// Generated file, do not edit! Created by nedtool 4.6 from ofomnet/openflow/messages/OFP_Flow_Stats_Reply.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "OFP_Flow_Stats_Reply_m.h"

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

Register_Class(OFP_Flow_Stats_Reply);

OFP_Flow_Stats_Reply::OFP_Flow_Stats_Reply(const char *name, int kind) : ::Open_Flow_Message(name,kind)
{
    this->datapath_Id_var = 0;
    flowStatsArray_arraysize = 0;
    this->flowStatsArray_var = 0;
}

OFP_Flow_Stats_Reply::OFP_Flow_Stats_Reply(const OFP_Flow_Stats_Reply& other) : ::Open_Flow_Message(other)
{
    flowStatsArray_arraysize = 0;
    this->flowStatsArray_var = 0;
    copy(other);
}

OFP_Flow_Stats_Reply::~OFP_Flow_Stats_Reply()
{
    delete [] flowStatsArray_var;
}

OFP_Flow_Stats_Reply& OFP_Flow_Stats_Reply::operator=(const OFP_Flow_Stats_Reply& other)
{
    if (this==&other) return *this;
    ::Open_Flow_Message::operator=(other);
    copy(other);
    return *this;
}

void OFP_Flow_Stats_Reply::copy(const OFP_Flow_Stats_Reply& other)
{
    this->datapath_Id_var = other.datapath_Id_var;
    delete [] this->flowStatsArray_var;
    this->flowStatsArray_var = (other.flowStatsArray_arraysize==0) ? NULL : new FlowStatsPtr[other.flowStatsArray_arraysize];
    flowStatsArray_arraysize = other.flowStatsArray_arraysize;
    for (unsigned int i=0; i<flowStatsArray_arraysize; i++)
        this->flowStatsArray_var[i] = other.flowStatsArray_var[i];
}

void OFP_Flow_Stats_Reply::parsimPack(cCommBuffer *b)
{
    ::Open_Flow_Message::parsimPack(b);
    doPacking(b,this->datapath_Id_var);
    b->pack(flowStatsArray_arraysize);
    doPacking(b,this->flowStatsArray_var,flowStatsArray_arraysize);
}

void OFP_Flow_Stats_Reply::parsimUnpack(cCommBuffer *b)
{
    ::Open_Flow_Message::parsimUnpack(b);
    doUnpacking(b,this->datapath_Id_var);
    delete [] this->flowStatsArray_var;
    b->unpack(flowStatsArray_arraysize);
    if (flowStatsArray_arraysize==0) {
        this->flowStatsArray_var = 0;
    } else {
        this->flowStatsArray_var = new FlowStatsPtr[flowStatsArray_arraysize];
        doUnpacking(b,this->flowStatsArray_var,flowStatsArray_arraysize);
    }
}

int OFP_Flow_Stats_Reply::getDatapath_Id() const
{
    return datapath_Id_var;
}

void OFP_Flow_Stats_Reply::setDatapath_Id(int datapath_Id)
{
    this->datapath_Id_var = datapath_Id;
}

void OFP_Flow_Stats_Reply::setFlowStatsArrayArraySize(unsigned int size)
{
    FlowStatsPtr *flowStatsArray_var2 = (size==0) ? NULL : new FlowStatsPtr[size];
    unsigned int sz = flowStatsArray_arraysize < size ? flowStatsArray_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        flowStatsArray_var2[i] = this->flowStatsArray_var[i];
    flowStatsArray_arraysize = size;
    delete [] this->flowStatsArray_var;
    this->flowStatsArray_var = flowStatsArray_var2;
}

unsigned int OFP_Flow_Stats_Reply::getFlowStatsArrayArraySize() const
{
    return flowStatsArray_arraysize;
}

FlowStatsPtr& OFP_Flow_Stats_Reply::getFlowStatsArray(unsigned int k)
{
    if (k>=flowStatsArray_arraysize) throw cRuntimeError("Array of size %d indexed by %d", flowStatsArray_arraysize, k);
    return flowStatsArray_var[k];
}

void OFP_Flow_Stats_Reply::setFlowStatsArray(unsigned int k, const FlowStatsPtr& flowStatsArray)
{
    if (k>=flowStatsArray_arraysize) throw cRuntimeError("Array of size %d indexed by %d", flowStatsArray_arraysize, k);
    this->flowStatsArray_var[k] = flowStatsArray;
}

class OFP_Flow_Stats_ReplyDescriptor : public cClassDescriptor
{
  public:
    OFP_Flow_Stats_ReplyDescriptor();
    virtual ~OFP_Flow_Stats_ReplyDescriptor();

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

Register_ClassDescriptor(OFP_Flow_Stats_ReplyDescriptor);

OFP_Flow_Stats_ReplyDescriptor::OFP_Flow_Stats_ReplyDescriptor() : cClassDescriptor("OFP_Flow_Stats_Reply", "Open_Flow_Message")
{
}

OFP_Flow_Stats_ReplyDescriptor::~OFP_Flow_Stats_ReplyDescriptor()
{
}

bool OFP_Flow_Stats_ReplyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<OFP_Flow_Stats_Reply *>(obj)!=NULL;
}

const char *OFP_Flow_Stats_ReplyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int OFP_Flow_Stats_ReplyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int OFP_Flow_Stats_ReplyDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *OFP_Flow_Stats_ReplyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "datapath_Id",
        "flowStatsArray",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int OFP_Flow_Stats_ReplyDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "datapath_Id")==0) return base+0;
    if (fieldName[0]=='f' && strcmp(fieldName, "flowStatsArray")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *OFP_Flow_Stats_ReplyDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "FlowStatsPtr",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *OFP_Flow_Stats_ReplyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int OFP_Flow_Stats_ReplyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    OFP_Flow_Stats_Reply *pp = (OFP_Flow_Stats_Reply *)object; (void)pp;
    switch (field) {
        case 1: return pp->getFlowStatsArrayArraySize();
        default: return 0;
    }
}

std::string OFP_Flow_Stats_ReplyDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    OFP_Flow_Stats_Reply *pp = (OFP_Flow_Stats_Reply *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getDatapath_Id());
        case 1: {std::stringstream out; out << pp->getFlowStatsArray(i); return out.str();}
        default: return "";
    }
}

bool OFP_Flow_Stats_ReplyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    OFP_Flow_Stats_Reply *pp = (OFP_Flow_Stats_Reply *)object; (void)pp;
    switch (field) {
        case 0: pp->setDatapath_Id(string2long(value)); return true;
        default: return false;
    }
}

const char *OFP_Flow_Stats_ReplyDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(FlowStatsPtr));
        default: return NULL;
    };
}

void *OFP_Flow_Stats_ReplyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    OFP_Flow_Stats_Reply *pp = (OFP_Flow_Stats_Reply *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getFlowStatsArray(i)); break;
        default: return NULL;
    }
}


