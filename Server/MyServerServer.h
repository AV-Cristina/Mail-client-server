//---------------------------------------------------------------------------

#ifndef MyServerServerH
#define MyServerServerH
#include "MyServer_s.hh"
//---------------------------------------------------------------------------
class MyServerImpl: public _sk_Server::_sk_MyServer
{
protected:
public:
        MyServerImpl(const char *object_name=NULL); 
        void Send_Message(const char* _UserName, const char* _Addressee,
      const char* _Message);
        char* View_Message(const char* _UserName);
        CORBA::Long Entrance(const char* _UserName);
        void Del_Message(const char* _UserName, const char* _Sender,
      const char* _Message);
        void Exit(const char* _UserName);
};
#endif
