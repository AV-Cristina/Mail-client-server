//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
#include "MyServerServer.h"

#include <corba.h>
USEFORM("Unit1.cpp", Form1);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 // Initialize the ORB and BOA
                 CORBA::ORB_var orb = CORBA::ORB_init(__argc, __argv);
                 CORBA::BOA_var boa = orb->BOA_init(__argc, __argv);
                 MyServerImpl myServer_MyServerObject("MyServerObject");
                 boa->obj_is_ready(&myServer_MyServerObject);
                 Application->Title = "Server";
                 Application->CreateForm(__classid(TForm1), &Form1);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
