/*
 * Copyright 2001 Borland Software Corporation, Inc.
 *
 * GENERATED CODE --- DO NOT EDIT
 * 
 */

#include <corbapch.h>
#pragma hdrstop
#include "MyServer_s.hh"

#if defined(__BORLANDC__)
#pragma option push
#pragma warn -8060
#endif

static CORBA::MethodDescription _sk_Server_MyServer_methods[] = {
  {"Entrance", POA_Server::MyServer::_Entrance},
  {"Send_Message", POA_Server::MyServer::_Send_Message},
  {"View_Message", POA_Server::MyServer::_View_Message},
  {"Del_Message", POA_Server::MyServer::_Del_Message},
  {"Exit", POA_Server::MyServer::_Exit}
};

const CORBA::TypeInfo POA_Server::MyServer::_skel_info(
 "Server::MyServer", NULL, (CORBA::ULong) 5,
 _sk_Server_MyServer_methods         , NULL, 0, NULL);
         
const CORBA::TypeInfo *POA_Server::MyServer::_type_info() const {
  return &_skel_info;
}

Server::MyServer_ptr POA_Server::MyServer::_this() {
  return (Server::MyServer *)(PortableServer_ServantBase::_this()->_safe_narrow(*Server::MyServer::_desc()));
}

void *POA_Server::MyServer::_safe_narrow(const CORBA::TypeInfo& _info) const {
  if (_info == _skel_info) {
    return (void *)this;
  }

  if (_info == PortableServer_ServantBase::_skel_info) {
    return (void *)(PortableServer_ServantBase *)this;
  }
  return 0;
}

POA_Server::MyServer * POA_Server::MyServer::_narrow(PortableServer::ServantBase *_obj) {
  if (!_obj) {
    return (POA_Server::MyServer*)NULL;
  } else {
    return (MyServer*)_obj->_safe_narrow(_skel_info);
  }
}

#if defined(__BORLANDC__)
#pragma option push
#pragma warn -8057
#pragma warn -8004
#endif
void POA_Server::MyServer::_Entrance (void *_obj,
                                      CORBA::MarshalInBuffer &_istrm,
                                      const char *_oper,
                                      VISReplyHandler& _handler) {
  VISCLEAR_EXCEP
  VISistream& _vistrm = _istrm;
  POA_Server::MyServer *_impl = (POA_Server::MyServer*)_obj;
  CORBA::String_var _local_UserName;

      _vistrm >> _local_UserName;
  CORBA::Long _ret = _impl->Entrance( _local_UserName.in());
    CORBA::MarshalOutBuffer_var _obuf = _handler.create_reply();
    VISostream& _ostrm = *VISostream::_downcast(_obuf);
    VISIF_EXCEP(return;)
    _ostrm << _ret;
  }

  #if defined(__BORLANDC__)
   #pragma option pop
  #endif
  #if defined(__BORLANDC__)
  #pragma option push
  #pragma warn -8057
  #pragma warn -8004
  #endif
  void POA_Server::MyServer::_Send_Message (void *_obj,
                                            CORBA::MarshalInBuffer &_istrm,
                                            const char *_oper,
                                            VISReplyHandler& _handler) {
    VISCLEAR_EXCEP
    VISistream& _vistrm = _istrm;
    POA_Server::MyServer *_impl = (POA_Server::MyServer*)_obj;
    CORBA::String_var _local_UserName;
    CORBA::String_var _local_Addressee;
    CORBA::String_var _local_Message;

        _vistrm >> _local_UserName;

          _vistrm >> _local_Addressee;

            _vistrm >> _local_Message;
        _impl->Send_Message( _local_UserName.in(),  _local_Addressee.in(),  _local_Message.in());
          CORBA::MarshalOutBuffer_var _obuf = _handler.create_reply();
          VISostream& _ostrm = *VISostream::_downcast(_obuf);
          VISIF_EXCEP(return;)
        }

        #if defined(__BORLANDC__)
         #pragma option pop
        #endif
        #if defined(__BORLANDC__)
        #pragma option push
        #pragma warn -8057
        #pragma warn -8004
        #endif
        void POA_Server::MyServer::_View_Message (void *_obj,
                                                  CORBA::MarshalInBuffer &_istrm,
                                                  const char *_oper,
                                                  VISReplyHandler& _handler) {
          VISCLEAR_EXCEP
          VISistream& _vistrm = _istrm;
          POA_Server::MyServer *_impl = (POA_Server::MyServer*)_obj;
          CORBA::String_var _local_UserName;

              _vistrm >> _local_UserName;
          CORBA::String_var _ret = _impl->View_Message( _local_UserName.in());
            CORBA::MarshalOutBuffer_var _obuf = _handler.create_reply();
            VISostream& _ostrm = *VISostream::_downcast(_obuf);
            VISIF_EXCEP(return;)
            _ostrm << _ret;
          }

          #if defined(__BORLANDC__)
           #pragma option pop
          #endif
          #if defined(__BORLANDC__)
          #pragma option push
          #pragma warn -8057
          #pragma warn -8004
          #endif
          void POA_Server::MyServer::_Del_Message (void *_obj,
                                                   CORBA::MarshalInBuffer &_istrm,
                                                   const char *_oper,
                                                   VISReplyHandler& _handler) {
            VISCLEAR_EXCEP
            VISistream& _vistrm = _istrm;
            POA_Server::MyServer *_impl = (POA_Server::MyServer*)_obj;
            CORBA::String_var _local_UserName;
            CORBA::String_var _local_MSender;
            CORBA::String_var _local_Message;

                _vistrm >> _local_UserName;

                  _vistrm >> _local_MSender;

                    _vistrm >> _local_Message;
                _impl->Del_Message( _local_UserName.in(),  _local_MSender.in(), 
                                    _local_Message.in());
                  CORBA::MarshalOutBuffer_var _obuf = _handler.create_reply();
                  VISostream& _ostrm = *VISostream::_downcast(_obuf);
                  VISIF_EXCEP(return;)
                }

                #if defined(__BORLANDC__)
                 #pragma option pop
                #endif
                #if defined(__BORLANDC__)
                #pragma option push
                #pragma warn -8057
                #pragma warn -8004
                #endif
                void POA_Server::MyServer::_Exit (void *_obj,
                                                  CORBA::MarshalInBuffer &_istrm,
                                                  const char *_oper,
                                                  VISReplyHandler& _handler) {
                  VISCLEAR_EXCEP
                  VISistream& _vistrm = _istrm;
                  POA_Server::MyServer *_impl = (POA_Server::MyServer*)_obj;
                  CORBA::String_var _local_UserName;

                      _vistrm >> _local_UserName;
                  _impl->Exit( _local_UserName.in());
                    CORBA::MarshalOutBuffer_var _obuf = _handler.create_reply();
                    VISostream& _ostrm = *VISostream::_downcast(_obuf);
                    VISIF_EXCEP(return;)
                  }

                  #if defined(__BORLANDC__)
                   #pragma option pop
                  #endif

                  #if defined(__BORLANDC__)
                  #pragma option pop
                  #endif

