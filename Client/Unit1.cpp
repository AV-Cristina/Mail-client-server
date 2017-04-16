//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
AnsiString UserName;


Server::MyServer_ptr __fastcall TForm1::GetS(void){
 if (FS == NULL)
    {
    FS = Server::MyServer::_bind("MyServerObject");
    }
 return FS;
}


void __fastcall TForm1::SetS(Server::MyServer_ptr _ptr)
{
 FS = _ptr;
}


//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
 StringGrid->Cells[0][0] = "Отправитель";
 StringGrid->Cells[1][0] = "Сообщение";
 N5->Enabled = false;
 N6->Enabled = false;
 N7->Enabled = false;
}
//---------------------------------------------------------------------------


//_________________ Вход в систему _________________________________________
void __fastcall TForm1::Button1Click(TObject *Sender)
{
  if (Form1->Edit1->Text == "")
     {MessageBox(NULL,"Не введено имя пользователя!","Ошибка", MB_OK);}
  else
     {
     UserName = Form1->Edit1->Text;
     if (S->Entrance(UserName.c_str()) == 1)
        {
        Caption = "Почтовый клиент - " + UserName;
        Form1->Panel1->Visible = false;
        Form1->Panel2->Visible = true;
        Form1->N5->Enabled = true;
        Form1->N6->Enabled = true;
        Form1->N7->Enabled = true;
        MessageBox(NULL,"Вход в систему успешно осуществлен","", MB_OK);
        }
     else {MessageBox(NULL,"Пользователь с этим именем уже в системе","Ошибка", MB_OK);}
     }
}


//_________________ Отправить сообщение ____________________________________
void __fastcall TForm1::N5Click(TObject *Sender)
{
 Panel3->Visible = false;
 Panel2->Visible = true;
}

void __fastcall TForm1::Button2Click(TObject *Sender)
{
 if (Edit2->Text == "")
    {MessageBox(NULL,"Не введено имя адресата!","Ошибка", MB_OK);}
 if (Memo1->Lines->CommaText == "")
    {MessageBox(NULL,"Не введено сообщение!","Ошибка", MB_OK);}
 if (Edit2->Text != "" && Memo1->Lines->CommaText != "")
    {
    AnsiString Addressee = Edit2->Text;
    AnsiString Message = Memo1->Lines->CommaText;
    // вызов фун-и отправки сообщения
    S->Send_Message(UserName.c_str(), Addressee.c_str(), Message.c_str());
    Edit2->Text = "";
    Memo1->Clear();
    }
}


//_________________ Просмотр сообщений _____________________________________
void __fastcall TForm1::N6Click(TObject *Sender)
{
 if(Panel2->Visible == true) {Panel2->Visible = false;}
 if(Panel3->Visible == false){Panel3->Visible = true;}
// очистка сетки от старых сообщений
 for (int i=1; i<StringGrid->RowCount-1; i++)
     {
     StringGrid->Cells[0][i] = "";
     StringGrid->Cells[1][i] = "";
     }
 // вызов функции получения сообщений
 AnsiString Message (S->View_Message(UserName.c_str()));
 // вывод сообщений в сетку
 int num = 1; // индекс строки
 while( Message.Pos('#')!=0)
      {
      StringGrid->Cells[0][num] = Message.SubString(1, Message.Pos('#')-1);  // Отправитель
      Message.Delete(1, Message.Pos('#'));
      StringGrid->Cells[1][num] = Message.SubString(1, Message.Pos('#')-1);  // Сообщение
      Message.Delete(1, Message.Pos('#'));
      StringGrid->RowCount++;
      num++;
      }
}


//_________________ Удаление сообщения _____________________________________
void __fastcall TForm1::N7Click(TObject *Sender)
{
 if(Panel2->Visible == true) {Panel2->Visible = false;}
 if(Panel3->Visible == false) {Panel3->Visible = true;}
}


void __fastcall TForm1::Button3Click(TObject *Sender)
{
 // определение выделенной строки
 int num = StringGrid->Row;
 AnsiString MSender = StringGrid->Cells[0][num];
 AnsiString Message = StringGrid->Cells[1][num];
 // сообщение удаляется на сервере
 S->Del_Message(UserName.c_str(), MSender.c_str(), Message.c_str());
 // сообщения удаляются на клиенте
 StringGrid->Cells[0][num] = "";
 StringGrid->Cells[1][num] = "";
}


//_________________ При закрыти формы (выход из системы)____________________
void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
 S->Exit(UserName.c_str()); // выход пользователя из системы
}


//_________________ Руководство пользователя _______________________________
void __fastcall TForm1::N9Click(TObject *Sender)
{
 AnsiString s = GetCurrentDir()+"Doc\\ReadMe.odt";
 char* str = new char[(GetCurrentDir().Length())];
 strcpy(str, s.c_str());
 ShellExecute(Form1->Handle, "open", str, NULL, NULL, SW_SHOWNORMAL);
}


//_________________ Отчет __________________________________________________
void __fastcall TForm1::N10Click(TObject *Sender)
{
 AnsiString s = GetCurrentDir()+"\\Doc\\Report.odt";
 char* str = new char[(GetCurrentDir().Length())];
 strcpy(str, s.c_str());
 ShellExecute(Form1->Handle, "open", str, NULL, NULL, SW_SHOWNORMAL);
}


//_________________ О программе ____________________________________________
void __fastcall TForm1::N11Click(TObject *Sender)
{
 MessageBox(NULL,"Выполнила Афанасьева К.В.","О программе", MB_OK);
}