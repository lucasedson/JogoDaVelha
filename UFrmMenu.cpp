//---------------------------------------------------------------------------
#include "FrmJogoDaVelha.h"
#include <fmx.h>
#pragma hdrstop

#include "UFrmMenu.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TfrmMenu *frmMenu;


//---------------------------------------------------------------------------
__fastcall TfrmMenu::TfrmMenu(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmMenu::SpeedButton1Click(TObject *Sender)
{
frmPrincipal->Show();
//ok
}
//---------------------------------------------------------------------------
void __fastcall TfrmMenu::FormCreate(TObject *Sender)
{
//BannerAd1->AdUnitID = "ca-app-pub-3940256099942544/1033173712";
}
//---------------------------------------------------------------------------
void __fastcall TfrmMenu::SpeedButton2Click(TObject *Sender)
{
/*BannerAd1->LoadAd();
BannerAd1->Show();*/
}
//---------------------------------------------------------------------------
void __fastcall TfrmMenu::FormShow(TObject *Sender)
{
//BannerAd1->OnDidLoad;
}
//---------------------------------------------------------------------------
