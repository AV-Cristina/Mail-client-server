/*
 * Copyright 2001 Borland Software Corporation, Inc.
 *
 * GENERATED CODE --- DO NOT EDIT
 * 
 */

#ifndef __MyServer_idl___client
#define __MyServer_idl___client
#include "vpre.h"

#ifndef _corba_h_
# include "corba.h"
#endif   // _corba_h_

class  Server {
  public:
  #ifndef Server_MyServer_var_
  #define Server_MyServer_var_

  class  MyServer;

  typedef MyServer* MyServer_ptr;
  typedef MyServer_ptr MyServerRef;
  friend VISistream& operator>>(VISistream&, MyServer_ptr&);
  friend VISostream& operator<<(VISostream&, const MyServer_ptr);
  class  MyServer_out;

  class  MyServer_var : public CORBA::_var {
  friend class MyServer_out;
   private:
    MyServer_ptr _ptr;

   public:
    MyServer_var();
    MyServer_var(MyServer_ptr);
    MyServer_var(const MyServer_var &);
    virtual ~MyServer_var();

    static MyServer_ptr _duplicate(MyServer_ptr);
    static void _release(MyServer_ptr);

    MyServer_var& operator=(const MyServer_var& _var);
    MyServer_var& operator=(MyServer_ptr);

    operator MyServer*() const { return _ptr; }
    MyServer* operator->() const { return _ptr; }

    MyServer_ptr in() const { return _ptr; }
    MyServer_ptr& inout() { return _ptr; }
    MyServer_ptr& out();
    MyServer_ptr _retn();

    friend VISostream& operator<<(VISostream&, const MyServer_var&);
    friend VISistream& operator>>(VISistream&, MyServer_var&);

    friend Istream& operator>>(Istream&, MyServer_var&);
    friend Ostream& operator<<(Ostream&, const MyServer_var&);
  };
  class  MyServer_out {
   private:
    MyServer_ptr& _ptr;
    static MyServer* _nil() { return (MyServer*)NULL; }

    void operator=(const MyServer_out&);
    void operator=(const MyServer_var&);
     public:
    MyServer_out(const MyServer_out& _o) : _ptr(_o._ptr) {}
    MyServer_out(MyServer_ptr& _p) : _ptr(_p) {
      _ptr = _nil();
    }
    MyServer_out(MyServer_var& _v) : _ptr(_v._ptr) {
      _v = _nil();
    }
    MyServer_out& operator=(MyServer* _p) {
      _ptr = _p;
      return *this;
    }
    operator MyServer_ptr&() { return _ptr; }
    MyServer_ptr& ptr() { return _ptr; }
    MyServer* operator->() { return _ptr; }
  };

  #endif // Server_MyServer_var_

  // idl interface: Server::MyServer
  class  MyServer : public virtual CORBA_Object {
   private:
    static const CORBA::TypeInfo _class_info;
    void operator=(const MyServer&) {}

    protected:
    MyServer() {}
    MyServer(const MyServer&) {}

   public:
    virtual ~MyServer() {}
    static  const CORBA::TypeInfo *_desc();
    virtual const CORBA::TypeInfo *_type_info() const;
    virtual void *_safe_narrow(const CORBA::TypeInfo& ) const;
    static CORBA::Object*_factory();
    MyServer_ptr _this();
    static MyServer_ptr _duplicate(MyServer_ptr _obj) {
      if (_obj) _obj->_ref();
      return _obj;
    }
    static MyServer_ptr _nil() { return (MyServer_ptr)NULL; }
    static MyServer_ptr _narrow(CORBA::Object* _obj);
    static MyServer_ptr _clone(MyServer_ptr _obj) {
      CORBA::Object_var _obj_var(CORBA_Object::_clone(_obj));
      #if defined(_HPCC_BUG)
        return _narrow(_obj_var.operator CORBA::Object_ptr());
      #else
        return _narrow(_obj_var);
      #endif  // _HPCC_BUG
    }
    static MyServer_ptr _bind(const char *_object_name = (const char*)NULL,
                              const char *_host_name = (const char*)NULL,
                              const CORBA::BindOptions* _opt = (CORBA::BindOptions*)NULL,
                              CORBA::ORB_ptr _orb = (CORBA::ORB_ptr)NULL);

    static MyServer_ptr _bind(const char *_poa_name,
                              const CORBA::OctetSequence& _id,
                              const char *_host_name = (const char*)NULL,
                              const CORBA::BindOptions* _opt = (CORBA::BindOptions*)NULL,
                              CORBA::ORB_ptr _orb = (CORBA::ORB_ptr)NULL);

    virtual CORBA::Long Entrance(const char* _UserName);
    virtual void Send_Message(const char* _UserName, const char* _Addressee,
                              const char* _Message);
    virtual char* View_Message(const char* _UserName);
    virtual void Del_Message(const char* _UserName, const char* _MSender,
                             const char* _Message);
    virtual void Exit(const char* _UserName);

    friend VISostream& operator<<(VISostream& _strm, const MyServer_ptr _obj);
    friend VISistream& operator>>(VISistream& _strm, MyServer_ptr& _obj);
    friend Ostream& operator<<(Ostream& _strm, const MyServer_ptr _obj);
    friend Istream& operator>>(Istream& _strm, MyServer_ptr& _obj);
  };

  class MyServer_ops;
  typedef MyServer_ops* MyServer_ops_ptr;

  class  MyServer_ops  {
   public:
    MyServer_ops() {}
    virtual ~MyServer_ops () {}

    virtual CORBA::Long Entrance(const char* _UserName) = 0;
    virtual void Send_Message(const char* _UserName, const char* _Addressee,
                              const char* _Message) = 0;
    virtual char* View_Message(const char* _UserName) = 0;
    virtual void Del_Message(const char* _UserName, const char* _MSender,
                             const char* _Message) = 0;
    virtual void Exit(const char* _UserName) = 0;

    static const VISOps_Info *_desc();
    static MyServer_ops_ptr _nil() { return (MyServer_ops_ptr)NULL; }
    static MyServer_ops_ptr _downcast(PortableServer::ServantBase* _servant);
  protected:
    static const VISOps_Info _ops_info;
  };

};

#include "vpost.h"
#endif // __MyServer_idl___client
