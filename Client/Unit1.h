//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <Menus.hpp>
#include "..\Server\MyServer_c.hh"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TPanel *Panel1;
        TPanel *Panel2;
        TPanel *Panel3;
        TGroupBox *GroupBox1;
        TButton *Button1;
        TEdit *Edit1;
        TLabel *Label1;
        TMainMenu *MainMenu1;
        TMenuItem *N4;
        TMenuItem *N5;
        TMenuItem *N6;
        TMenuItem *N7;
        TMenuItem *N8;
        TMenuItem *N9;
        TMenuItem *N10;
        TMenuItem *N11;
        TMemo *Memo1;
        TGroupBox *GroupBox2;
        TLabel *Label2;
        TEdit *Edit2;
        TButton *Button2;
        TStringGrid *StringGrid;
        TButton *Button3;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall N5Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender,TCloseAction &Action);
        void __fastcall N6Click(TObject *Sender);
        void __fastcall N9Click(TObject *Sender);
        void __fastcall N10Click(TObject *Sender);
        void __fastcall N11Click(TObject *Sender);
        void __fastcall N7Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
        Server::MyServer_ptr __fastcall GetS();
        Server::MyServer_var FS;
        void __fastcall SetS(Server::MyServer_ptr _ptr); 
public:		// User declarations
        __property Server::MyServer_ptr S = {read = GetS, write = SetS};
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
