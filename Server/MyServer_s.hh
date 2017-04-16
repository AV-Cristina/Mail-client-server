/*
 * Copyright 2001 Borland Software Corporation, Inc.
 *
 * GENERATED CODE --- DO NOT EDIT
 * 
 */

#ifndef __MyServer_idl___server
#define __MyServer_idl___server
#include "vpre.h"

#include "MyServer_c.hh"

class  POA_Server {
public:

  class  MyServer : public Server::MyServer_ops ,public virtual PortableServer_ServantBase {
   protected:
    MyServer() {}

    virtual ~MyServer() {}

   public:
    static const CORBA::TypeInfo _skel_info;
    virtual const CORBA::TypeInfo *_type_info() const;

    Server::MyServer_ptr _this();

    virtual void *_safe_narrow(const CORBA::TypeInfo& ) const;

    static MyServer * _narrow(PortableServer_ServantBase *_obj);

    // The following operations need to be implemented
    virtual CORBA::Long Entrance(const char* _UserName) = 0;

    virtual void Send_Message(const char* _UserName, const char* _Addressee,
                              const char* _Message) = 0;

    virtual char* View_Message(const char* _UserName) = 0;

    virtual void Del_Message(const char* _UserName, const char* _MSender,
                             const char* _Message) = 0;

    virtual void Exit(const char* _UserName) = 0;

    // Skeleton Operations implemented automatically
    virtual void* _safe_downcast_ops(const VISOps_Info& _info) {
      if (_info == *Server::MyServer_ops::_desc())
        return (void*)(Server::MyServer_ops*)this;
      return (void*)NULL;
    }

    static void _Entrance(void *_obj, CORBA::MarshalInBuffer &_istrm,
                          const char *_oper, VISReplyHandler& handler);

    static void _Send_Message(void *_obj, CORBA::MarshalInBuffer &_istrm,
                              const char *_oper, VISReplyHandler& handler);

    static void _View_Message(void *_obj, CORBA::MarshalInBuffer &_istrm,
                              const char *_oper, VISReplyHandler& handler);

    static void _Del_Message(void *_obj, CORBA::MarshalInBuffer &_istrm,
                             const char *_oper, VISReplyHandler& handler);

    static void _Exit(void *_obj, CORBA::MarshalInBuffer &_istrm,
                      const char *_oper, VISReplyHandler& handler);

  };

};
template <class T> class POA_Server_MyServer_tie : public POA_Server::MyServer {
  private:
   CORBA::Boolean _rel;
   PortableServer::POA_ptr _poa;
   T *_ptr;
   POA_Server_MyServer_tie(const POA_Server_MyServer_tie <T>&) {}
   void operator=(const POA_Server_MyServer_tie <T>&) {}

  public:
   POA_Server_MyServer_tie (T& t): _ptr(&t), _poa(NULL), _rel((CORBA::Boolean)0) {}

 POA_Server_MyServer_tie (T& t, PortableServer::POA_ptr poa): _ptr(&t), 
   _poa(PortableServer_POA::_duplicate(poa)), _rel((CORBA::Boolean)0) {}

 POA_Server_MyServer_tie (T *p, CORBA::Boolean release= 1) : _ptr(p), _poa(NULL), _rel(release) {}

 POA_Server_MyServer_tie (T *p, PortableServer::POA_ptr poa, CORBA::Boolean release =1)
   : _ptr(p), _poa(PortableServer_POA::_duplicate(poa)), _rel(release) {}

 virtual ~POA_Server_MyServer_tie() {
   CORBA::release(_poa);
     if (_rel) {
     delete _ptr;
       }
     }

 T* _tied_object() { return _ptr; }
   void _tied_object(T& t) {
   if (_rel) {
     delete _ptr;
       }
     _ptr = &t;
     _rel = 0;
     }
   void _tied_object(T *p, CORBA::Boolean release=1) {
      if (_rel) { 
        delete _ptr;
      }
      _ptr = p;
      _rel = release;
       }

 CORBA::Boolean _is_owner() { return _rel; }
   void _is_owner(CORBA::Boolean b) { _rel = b; }

  CORBA::Long Entrance(const char* _UserName) {
  return _ptr->Entrance(_UserName);
  }
  void Send_Message(const char* _UserName, const char* _Addressee,
                    const char* _Message) {
  _ptr->Send_Message(_UserName, _Addressee, _Message);
  }
  char* View_Message(const char* _UserName) {
  return _ptr->View_Message(_UserName);
  }
  void Del_Message(const char* _UserName, const char* _MSender,
                   const char* _Message) {
  _ptr->Del_Message(_UserName, _MSender, _Message);
  }
  void Exit(const char* _UserName) {
  _ptr->Exit(_UserName);
  }
  PortableServer::POA_ptr _default_POA() {
    if ( !CORBA::is_nil(_poa) ) {
      return _poa;
    } else {
      return PortableServer_ServantBase::_default_POA();
    }
  }

};

class  _sk_Server {
public:
  class  _sk_MyServer : public POA_Server::MyServer,
                        public PortableServer_RefCountServantBase,
                        public Server::MyServer {
   protected:
    _sk_MyServer (const char *_obj_name = (const char*)NULL) {
      PortableServer_ServantBase::_object_name(_obj_name);
    }
    _sk_MyServer (const char *_service_name, const CORBA::ReferenceData& _data) {
      PortableServer_ServantBase::_service(_service_name, _data);
    }

   public:
    virtual ~_sk_MyServer() {}
    virtual PortableServer_ServantBase *_get_servant() {
      return this;
    }
    virtual CORBA::Object_ptr _backcompat_object() {
      return this;
    }
    Server::MyServer_ptr _this() {
      POA_Server::MyServer *_temp = this;
      return _temp->_this();
    }

    void _release() { _remove_ref(); }
    void _ref() { _add_ref(); }

    const char *_repository_id() const {
      return PortableServer_ServantBase::_repository_id();
    }
  };
};
template <class T>
class Server_tie_MyServer : public POA_Server_MyServer_tie<T>, public virtual CORBA_Object {
 private:
  Server_tie_MyServer (const Server_tie_MyServer <T>&) : POA_Server_MyServer_tie<T>((T *)NULL, (CORBA::Boolean)0) {}
  void operator=(const Server_tie_MyServer <T>&) {}
   public:
  Server_tie_MyServer(T& _t, const char *_obj_name = (char *) NULL, CORBA::Boolean _r_f = 0) 
      : POA_Server_MyServer_tie<T>(&_t, _r_f) {
    PortableServer_ServantBase::_object_name(_obj_name);
  }

  Server_tie_MyServer(T& _t, const char *_serv_name, const CORBA::ReferenceData& _id, CORBA::Boolean _r_f = 0)
      : POA_Server_MyServer_tie<T>(&_t, _r_f) {
    PortableServer_ServantBase::_service(_serv_name, _id);
  }

  CORBA::Boolean rel_flag() { 
    return _is_owner(); 
  }

  void rel_flag(CORBA::Boolean flag) { 
    _is_owner(flag); 
  }

  virtual ~Server_tie_MyServer() {}

  virtual PortableServer_ServantBase *_get_servant() {
    return this;
  }

  const char *repository_id() const {
    return PortableServer_ServantBase::_repository_id();
  }
};

#include "vpost.h"
#endif  // __MyServer_idl___server
