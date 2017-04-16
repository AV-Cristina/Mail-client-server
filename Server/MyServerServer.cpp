//---------------------------------------------------------------------------

#pragma hdrstop
#include <vcl.h>
#include <corba.h>
#include <string.h>
#include "MyServerServer.h"
#include "Unit1.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)
extern TForm1 *Form1;

TStringList *Users = new TStringList;


MyServerImpl::MyServerImpl(const char *object_name):
        _sk_Server::_sk_MyServer(object_name)                 
{                                   
}


//_________________ Отправка сообщения _____________________________________
void MyServerImpl::Send_Message(const char* _UserName,
  const char* _Addressee, const char* _Message)
{
 AnsiString addressee(_Addressee);
 AnsiString user_name(_UserName);
 AnsiString message(_Message);
 int num = Form1->StringGrid1->RowCount-1;
 Form1->StringGrid1->Cells[0][num] = addressee; // Адресат
 Form1->StringGrid1->Cells[1][num] = user_name; // Отправитель
 Form1->StringGrid1->Cells[2][num] = message;   // Сообщение
 Form1->StringGrid1->RowCount++;
 Form1->Memo1->Lines->Add(user_name + " отправил сообщение " + addressee);
}


//_________________ Просмотр сообщений _____________________________________
char* MyServerImpl::View_Message(const char* _UserName)
{
 AnsiString AllMes;
 AnsiString user_name(_UserName);
 for (int i=1; i<Form1->StringGrid1->RowCount-1; i++)
     {
     if(Form1->StringGrid1->Cells[0][i] == user_name)
       {
        AllMes = AllMes + Form1->StringGrid1->Cells[1][i] + "#";
        AllMes = AllMes + Form1->StringGrid1->Cells[2][i] + "#";
       }
     }
 Form1->Memo1->Lines->Add(user_name + " просмотрел свои сообщения");
 return AllMes.c_str();
}


//_________________ Подключение к серверу __________________________________
CORBA::Long MyServerImpl::Entrance(const char* _UserName)
{
 AnsiString user_name(_UserName);
 for(int i=0; i<Users->Count; i++)
    {
     //если пользователь с этим именем уже он-лайн
     if (Users->Strings[i]==user_name)
        {
         return 0;
        }
     }
    Form1->Memo1->Lines->Add(user_name + " подключился к серверу");
    Users->Add(user_name);
    return 1;
}


//_________________ Удаление сообщения _____________________________________
void MyServerImpl::Del_Message(const char* _UserName, const char* _Sender,
  const char* _Message)
{
 AnsiString user_name(_UserName);
 AnsiString sender(_Sender);
 AnsiString message(_Message);
 for (int i=1; i<Form1->StringGrid1->RowCount-1; i++)
     {
     if((Form1->StringGrid1->Cells[0][i] == user_name)&&(Form1->StringGrid1->Cells[1][i] == sender)&&(Form1->StringGrid1->Cells[2][i] == message))
       {
        Form1->StringGrid1->Cells[0][i] = "";
        Form1->StringGrid1->Cells[1][i] = "";
        Form1->StringGrid1->Cells[2][i] = "";
        Form1->Memo1->Lines->Add(user_name + " удалил сообщение");
        break;
       }
     }
}


//_________________ Отключение от сервера __________________________________
void MyServerImpl::Exit(const char* _UserName)
{
 AnsiString user_name(_UserName);
 for(int i=0; i<Users->Count; i++)
    {
     //если пользователь с этим именем найден в списке пользователей
     if (Users->Strings[i]==user_name)
        {
         Users->Delete(i);
         Form1->Memo1->Lines->Add(user_name + " отключился от сервера");
        }
     }
}