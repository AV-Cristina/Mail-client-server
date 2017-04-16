/*
 * Copyright 2001 Borland Software Corporation, Inc.
 *
 * GENERATED CODE --- DO NOT EDIT
 * 
 */

#include <corbapch.h>
#pragma hdrstop
#include "MyServer_c.hh"

Server::MyServer_ptr Server::MyServer_var::_duplicate(Server::MyServer_ptr _p) {
  return Server::MyServer::_duplicate(_p);
}

void
Server::MyServer_var::_release(Server::MyServer_ptr _p) {
  CORBA::release((CORBA::Object_ptr)_p);
}

Server::MyServer_var::MyServer_var()
  : _ptr(Server::MyServer::_nil()) {}

Server::MyServer_var::MyServer_var(Server::MyServer_ptr _p)
  : _ptr(_p) {}

Server::MyServer_var::MyServer_var(const Server::MyServer_var& _var)
  : _ptr(Server::MyServer::_duplicate((Server::MyServer_ptr) _var)) {}

Server::MyServer_var::~MyServer_var() {
  CORBA::release((CORBA::Object_ptr)_ptr);
}

Server::MyServer_var&
Server::MyServer_var::operator=(const Server::MyServer_var& _var) {
    _release(_ptr);
    _ptr = _duplicate(_var._ptr);
    return *this;
}

Server::MyServer_var&
Server::MyServer_var::operator=(Server::MyServer_ptr _p) {
  CORBA::release((CORBA::Object_ptr)_ptr);
  _ptr = _p;
  return *this;
}

Server::MyServer_ptr& Server::MyServer_var::out() {
  _release(_ptr);
  _ptr = (Server::MyServer_ptr)NULL;
  return _ptr;
}

Server::MyServer_ptr Server::MyServer_var::_retn() {
  Server::MyServer_ptr _tmp_ptr = _ptr;
  _ptr = (Server::MyServer_ptr)NULL;
  return _tmp_ptr;
}

VISistream& operator>>(VISistream& _strm, Server::MyServer_var& _var) {
  _strm >> _var._ptr;
  return _strm;
}

VISostream& operator<<(VISostream& _strm, const Server::MyServer_var& _var) {
  _strm << _var._ptr;
  return _strm;
}

Istream& operator>>(Istream& _strm, Server::MyServer_var& _var) {
  VISistream _istrm(_strm);
  _istrm >> _var._ptr;
  return _strm;
}

Ostream& operator<<(Ostream& _strm, const Server::MyServer_var& _var) {
  _strm << (CORBA::Object_ptr)_var._ptr;
  return _strm;
}

// If dllimport is specified, you might probably want to
// disable these definitions
// disable the const definitions
const VISOps_Info Server::MyServer_ops::_ops_info("Server::MyServer_ops");
const VISOps_Info *Server::MyServer_ops::_desc() { return &_ops_info; }
Server::MyServer_ops_ptr Server::MyServer_ops::_downcast(PortableServer::ServantBase* _servant) {
  if (_servant == (PortableServer::ServantBase*)NULL)
    return Server::MyServer_ops::_nil();
  return (Server::MyServer_ops_ptr)_servant->_safe_downcast_ops(_ops_info);
}
const CORBA::TypeInfo
#ifdef AIXV3
Server::MyServer::_class_info("Server::MyServer", "IDL:Server/MyServer:1.0",
                              NULL, Server::MyServer::_factory, NULL, 0, NULL,
                              0, CORBA::Object::_desc(), 0L);
#else
Server::MyServer::_class_info("Server::MyServer", "IDL:Server/MyServer:1.0",
                              NULL, Server::MyServer::_factory, NULL, 0, NULL,
                              0, CORBA::Object::_desc(), 0L);
#endif

const CORBA::TypeInfo *Server::MyServer::_desc() { return &_class_info; }
const CORBA::TypeInfo *Server::MyServer::_type_info() const {
  return &_class_info;
}

VISistream& operator>>(VISistream& _strm, Server::MyServer_ptr& _obj) {
  CORBA::Object_var _var_obj(_obj);
  _var_obj = CORBA::Object::_read(_strm, Server::MyServer::_desc());
  _obj = Server::MyServer::_narrow(_var_obj);
  return _strm;
}

VISostream& operator<<(VISostream& _strm, const Server::MyServer_ptr _obj) {
  _strm << (CORBA::Object_ptr)_obj;
  return _strm;
}
void* Server::MyServer::_safe_narrow(const CORBA::TypeInfo& _info) const {
  if (_info == _class_info)
    return (void *)this;
  return CORBA_Object::_safe_narrow(_info);
}

CORBA::Object *Server::MyServer::_factory() {
  return new Server::MyServer;
}

Server::MyServer_ptr Server::MyServer::_this() {
  return Server::MyServer::_duplicate(this);
}

Server::MyServer_ptr Server::MyServer::_narrow(CORBA::Object * _obj) {
  if (_obj == Server::MyServer::_nil())
    return Server::MyServer::_nil();
  else
    return Server::MyServer::_duplicate((Server::MyServer_ptr)_obj->_safe_narrow(_class_info));
}

Ostream& operator<<(Ostream& _strm, const Server::MyServer_ptr _obj) {
  _strm << (CORBA::Object_ptr) _obj;
  return _strm;
}
Istream& operator>>(Istream& _strm, Server::MyServer_ptr& _obj) {
  VISistream _istrm(_strm);
  _istrm >> _obj;
  return _strm;
}

Server::MyServer *Server::MyServer::_bind(const char *_object_name,
                                          const char *_host_name,
                                          const CORBA::BindOptions *_opt,
                                          CORBA::ORB_ptr _orb)
{
  VISCLEAR_EXCEP
  CORBA::Object_var _obj = CORBA::Object::_bind_to_object(
          "IDL:Server/MyServer:1.0", _object_name, _host_name, _opt, _orb);
  return MyServer::_narrow(_obj);
}

Server::MyServer *Server::MyServer::_bind(const char *_poa_name,
                                          const CORBA::OctetSequence& _id,
                                          const char *_host_name,
                                          const CORBA::BindOptions *_opt,
                                          CORBA::ORB_ptr _orb)
{
  VISCLEAR_EXCEP
  CORBA::Object_var _obj = CORBA::Object::_bind_to_object(
   "IDL:Server/MyServer:1.0", _poa_name, _id, _host_name, _opt, _orb);
  return MyServer::_narrow(_obj);
}
#if defined(__BORLANDC__)
#pragma option push
#pragma warn -8057
#pragma warn -8004
#endif
CORBA::Long Server::MyServer::Entrance(const char* _arg_UserName ) {
  CORBA::Long _ret = (CORBA::Long) 0;
  CORBA_MarshalInBuffer_var _ibuf;

  while (1) {
    VISCLEAR_EXCEP 

    if (_is_local()) {
      PortableServer::ServantBase_ptr _servant;
      VISTRY {
        _servant = _preinvoke("Entrance");
      }
      VISCATCH(VISRemarshal, _vis_except) { continue; } 
      VISEND_CATCH

      Server::MyServer_ops*  _myserver = Server::MyServer_ops::_downcast(_servant);
      if (!_myserver) {
        if ((PortableServer::ServantBase*)_servant)
          _postinvoke(_servant, "Entrance");
        VISTHROW(CORBA::BAD_OPERATION());
#if defined(_VIS_NOEXCEPTIONS)
        VISRETURN(return _ret;)
#endif
      }

      VISTRY {
         _ret = _myserver->Entrance(_arg_UserName );
      }
      VISCATCH_ALL{
        _postinvoke(_servant, "Entrance"); 
        VISTHROW_LAST;
#if defined(_VIS_NOEXCEPTIONS)
        VISRETURN(return _ret;)
#endif
      }
      VISEND_CATCH
      _postinvoke(_servant, "Entrance");
      return _ret;
    }

    CORBA::MarshalOutBuffer_var _obuf;
    _obuf = _request("Entrance", 1);
    VISIF_EXCEP(return _ret;)
    VISostream& _ostrm = *VISostream::_downcast(_obuf);
    _ostrm << _arg_UserName;

    VISTRY {
      _ibuf = _invoke(_obuf);
      VISIFNOT_EXCEP
      break;
      VISEND_IFNOT_EXCEP
    } VISCATCH(VISRemarshal, _vis_except) { continue; } 
    VISEND_CATCH
#if defined(_VIS_NOEXCEPTIONS)
    VISRETURN(return _ret;)
#endif
  }

  VISistream& _istrm = *VISistream::_downcast(_ibuf);
  _istrm >> _ret;
  return _ret;
}

#if defined(__BORLANDC__)
 #pragma option pop
#endif
#if defined(__BORLANDC__)
#pragma option push
#pragma warn -8057
#pragma warn -8004
#endif
void Server::MyServer::Send_Message(const char* _arg_UserName ,
                                    const char* _arg_Addressee ,
                                    const char* _arg_Message ) {
  CORBA_MarshalInBuffer_var _ibuf;

  while (1) {
    VISCLEAR_EXCEP 

    if (_is_local()) {
      PortableServer::ServantBase_ptr _servant;
      VISTRY {
        _servant = _preinvoke("Send_Message");
      }
      VISCATCH(VISRemarshal, _vis_except) { continue; } 
      VISEND_CATCH

      Server::MyServer_ops*  _myserver = Server::MyServer_ops::_downcast(_servant);
      if (!_myserver) {
        if ((PortableServer::ServantBase*)_servant)
          _postinvoke(_servant, "Send_Message");
        VISTHROW(CORBA::BAD_OPERATION());
#if defined(_VIS_NOEXCEPTIONS)
        VISRETURN(return;)
#endif
      }

      VISTRY {
        _myserver->Send_Message(_arg_UserName , _arg_Addressee , _arg_Message );
      }
      VISCATCH_ALL{
        _postinvoke(_servant, "Send_Message"); 
        VISTHROW_LAST;
#if defined(_VIS_NOEXCEPTIONS)
        VISRETURN(return;)
#endif
      }
      VISEND_CATCH
      _postinvoke(_servant, "Send_Message");
      return;
    }

    CORBA::MarshalOutBuffer_var _obuf;
    _obuf = _request("Send_Message", 1);
    VISIF_EXCEP(return;)
    VISostream& _ostrm = *VISostream::_downcast(_obuf);
    _ostrm << _arg_UserName;
    _ostrm << _arg_Addressee;
    _ostrm << _arg_Message;

    VISTRY {
      _ibuf = _invoke(_obuf);
      VISIFNOT_EXCEP
      break;
      VISEND_IFNOT_EXCEP
    } VISCATCH(VISRemarshal, _vis_except) { continue; } 
    VISEND_CATCH
#if defined(_VIS_NOEXCEPTIONS)
    VISRETURN(return;)
#endif
  }

}

#if defined(__BORLANDC__)
 #pragma option pop
#endif
#if defined(__BORLANDC__)
#pragma option push
#pragma warn -8057
#pragma warn -8004
#endif
char* Server::MyServer::View_Message(const char* _arg_UserName ) {
  char* _ret = (char*) 0;
  CORBA_MarshalInBuffer_var _ibuf;

  while (1) {
    VISCLEAR_EXCEP 

    if (_is_local()) {
      PortableServer::ServantBase_ptr _servant;
      VISTRY {
        _servant = _preinvoke("View_Message");
      }
      VISCATCH(VISRemarshal, _vis_except) { continue; } 
      VISEND_CATCH

      Server::MyServer_ops*  _myserver = Server::MyServer_ops::_downcast(_servant);
      if (!_myserver) {
        if ((PortableServer::ServantBase*)_servant)
          _postinvoke(_servant, "View_Message");
        VISTHROW(CORBA::BAD_OPERATION());
#if defined(_VIS_NOEXCEPTIONS)
        VISRETURN(return _ret;)
#endif
      }

      VISTRY {
         _ret = _myserver->View_Message(_arg_UserName );
      }
      VISCATCH_ALL{
        _postinvoke(_servant, "View_Message"); 
        VISTHROW_LAST;
#if defined(_VIS_NOEXCEPTIONS)
        VISRETURN(return _ret;)
#endif
      }
      VISEND_CATCH
      _postinvoke(_servant, "View_Message");
      return _ret;
    }

    CORBA::MarshalOutBuffer_var _obuf;
    _obuf = _request("View_Message", 1);
    VISIF_EXCEP(return _ret;)
    VISostream& _ostrm = *VISostream::_downcast(_obuf);
    _ostrm << _arg_UserName;

    VISTRY {
      _ibuf = _invoke(_obuf);
      VISIFNOT_EXCEP
      break;
      VISEND_IFNOT_EXCEP
    } VISCATCH(VISRemarshal, _vis_except) { continue; } 
    VISEND_CATCH
#if defined(_VIS_NOEXCEPTIONS)
    VISRETURN(return _ret;)
#endif
  }

  VISistream& _istrm = *VISistream::_downcast(_ibuf);
  _istrm >> _ret;
  return _ret;
}

#if defined(__BORLANDC__)
 #pragma option pop
#endif
#if defined(__BORLANDC__)
#pragma option push
#pragma warn -8057
#pragma warn -8004
#endif
void Server::MyServer::Del_Message(const char* _arg_UserName ,
                                   const char* _arg_MSender ,
                                   const char* _arg_Message ) {
  CORBA_MarshalInBuffer_var _ibuf;

  while (1) {
    VISCLEAR_EXCEP 

    if (_is_local()) {
      PortableServer::ServantBase_ptr _servant;
      VISTRY {
        _servant = _preinvoke("Del_Message");
      }
      VISCATCH(VISRemarshal, _vis_except) { continue; } 
      VISEND_CATCH

      Server::MyServer_ops*  _myserver = Server::MyServer_ops::_downcast(_servant);
      if (!_myserver) {
        if ((PortableServer::ServantBase*)_servant)
          _postinvoke(_servant, "Del_Message");
        VISTHROW(CORBA::BAD_OPERATION());
#if defined(_VIS_NOEXCEPTIONS)
        VISRETURN(return;)
#endif
      }

      VISTRY {
        _myserver->Del_Message(_arg_UserName , _arg_MSender , _arg_Message );
      }
      VISCATCH_ALL{
        _postinvoke(_servant, "Del_Message"); 
        VISTHROW_LAST;
#if defined(_VIS_NOEXCEPTIONS)
        VISRETURN(return;)
#endif
      }
      VISEND_CATCH
      _postinvoke(_servant, "Del_Message");
      return;
    }

    CORBA::MarshalOutBuffer_var _obuf;
    _obuf = _request("Del_Message", 1);
    VISIF_EXCEP(return;)
    VISostream& _ostrm = *VISostream::_downcast(_obuf);
    _ostrm << _arg_UserName;
    _ostrm << _arg_MSender;
    _ostrm << _arg_Message;

    VISTRY {
      _ibuf = _invoke(_obuf);
      VISIFNOT_EXCEP
      break;
      VISEND_IFNOT_EXCEP
    } VISCATCH(VISRemarshal, _vis_except) { continue; } 
    VISEND_CATCH
#if defined(_VIS_NOEXCEPTIONS)
    VISRETURN(return;)
#endif
  }

}

#if defined(__BORLANDC__)
 #pragma option pop
#endif
#if defined(__BORLANDC__)
#pragma option push
#pragma warn -8057
#pragma warn -8004
#endif
void Server::MyServer::Exit(const char* _arg_UserName ) {
  CORBA_MarshalInBuffer_var _ibuf;

  while (1) {
    VISCLEAR_EXCEP 

    if (_is_local()) {
      PortableServer::ServantBase_ptr _servant;
      VISTRY {
        _servant = _preinvoke("Exit");
      }
      VISCATCH(VISRemarshal, _vis_except) { continue; } 
      VISEND_CATCH

      Server::MyServer_ops*  _myserver = Server::MyServer_ops::_downcast(_servant);
      if (!_myserver) {
        if ((PortableServer::ServantBase*)_servant)
          _postinvoke(_servant, "Exit");
        VISTHROW(CORBA::BAD_OPERATION());
#if defined(_VIS_NOEXCEPTIONS)
        VISRETURN(return;)
#endif
      }

      VISTRY {
        _myserver->Exit(_arg_UserName );
      }
      VISCATCH_ALL{
        _postinvoke(_servant, "Exit"); 
        VISTHROW_LAST;
#if defined(_VIS_NOEXCEPTIONS)
        VISRETURN(return;)
#endif
      }
      VISEND_CATCH
      _postinvoke(_servant, "Exit");
      return;
    }

    CORBA::MarshalOutBuffer_var _obuf;
    _obuf = _request("Exit", 1);
    VISIF_EXCEP(return;)
    VISostream& _ostrm = *VISostream::_downcast(_obuf);
    _ostrm << _arg_UserName;

    VISTRY {
      _ibuf = _invoke(_obuf);
      VISIFNOT_EXCEP
      break;
      VISEND_IFNOT_EXCEP
    } VISCATCH(VISRemarshal, _vis_except) { continue; } 
    VISEND_CATCH
#if defined(_VIS_NOEXCEPTIONS)
    VISRETURN(return;)
#endif
  }

}

#if defined(__BORLANDC__)
 #pragma option pop
#endif

