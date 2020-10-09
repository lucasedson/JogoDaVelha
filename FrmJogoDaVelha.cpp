//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "FrmJogoDaVelha.h"
#include "UFrmMenu.h"
#include "PRJJogoDaVelha.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.XLgXhdpiTb.fmx", _PLAT_ANDROID)
#pragma resource ("*.LgXhdpiPh.fmx", _PLAT_ANDROID)
#pragma resource ("*.SmXhdpiPh.fmx", _PLAT_ANDROID)
#pragma resource ("*.Surface.fmx", _PLAT_MSWINDOWS)
String imagem1 = "1.png";
String imagem2 = "C:\\Projetos C\\Jogo da Velha\\Images\\2.png";
TfrmPrincipal *frmPrincipal;
int matriz[3][3] = {0};
int valor;
bool alternador = True;

void zerar_matriz(){
matriz[0][0] = 0;
matriz[0][1] = 0;
matriz[0][2] = 0;
matriz[1][0] = 0;
matriz[1][1] = 0;
matriz[1][2] = 0;
matriz[2][0] = 0;
matriz[2][1] = 0;
matriz[2][2] = 0;


}

void verificar_resultado(){
	if (matriz[0][0]+matriz[1][0]+matriz[2][0]== 3) {
		frmPrincipal->Label10->Text = "X ganhou";   }
	else if(matriz[0][0]+matriz[1][0]+matriz[2][0]== -3){
		frmPrincipal->Label10->Text = "O ganhou";   }


	if (matriz[0][1]+matriz[1][1]+matriz[2][1]== 3) {
		frmPrincipal->Label10->Text = "X ganhou";   }
	else if(matriz[0][1]+matriz[1][1]+matriz[2][1]== -3){
		frmPrincipal->Label10->Text = "O ganhou";   }


	if (matriz[0][2]+matriz[1][2]+matriz[2][2]== 3) {
		frmPrincipal->Label10->Text = "X ganhou";   }
	else if(matriz[0][2]+matriz[1][2]+matriz[2][2]== -3){
		frmPrincipal->Label10->Text = "O ganhou";   }

	if (matriz[0][0]+matriz[0][1]+matriz[0][2]== 3) {
		frmPrincipal->Label10->Text = "X ganhou";   }
	else if(matriz[0][0]+matriz[0][1]+matriz[0][2]== -3){
		frmPrincipal->Label10->Text = "O ganhou"; }

	if (matriz[1][0]+matriz[1][1]+matriz[1][2]== 3) {
		frmPrincipal->Label10->Text = "X ganhou";   }
	else if(matriz[1][0]+matriz[1][1]+matriz[1][2]== -3){
		frmPrincipal->Label10->Text = "O ganhou"; }

	if (matriz[2][0]+matriz[2][1]+matriz[2][2]== 3) {
		frmPrincipal->Label10->Text = "X ganhou";   }
	else if(matriz[2][0]+matriz[2][1]+matriz[2][2]== -3){
		frmPrincipal->Label10->Text = "O ganhou"; }


	if (matriz[0][0]+matriz[1][1]+matriz[2][2]== 3) {
		frmPrincipal->Label10->Text = "X ganhou";   }
	else if(matriz[0][0]+matriz[1][1]+matriz[2][2]== -3){
		frmPrincipal->Label10->Text = "O ganhou"; }

	if (matriz[2][0]+matriz[1][1]+matriz[0][2]== 3) {
		frmPrincipal->Label10->Text = "X ganhou";   }
	else if(matriz[2][0]+matriz[1][1]+matriz[0][2]== -3){
		frmPrincipal->Label10->Text = "O ganhou"; }

	}


void limpar_tudo(){
frmPrincipal->Image1->MultiResBitmap->Clear();
frmPrincipal->Image2->MultiResBitmap->Clear();
frmPrincipal->Image3->MultiResBitmap->Clear();
frmPrincipal->Image4->MultiResBitmap->Clear();
frmPrincipal->Image5->MultiResBitmap->Clear();
frmPrincipal->Image6->MultiResBitmap->Clear();
frmPrincipal->Image7->MultiResBitmap->Clear();
frmPrincipal->Image8->MultiResBitmap->Clear();
frmPrincipal->Image9->MultiResBitmap->Clear();
}
//---------------------------------------------------------------------------
__fastcall TfrmPrincipal::TfrmPrincipal(TComponent* Owner)
	: TForm(Owner)
{


}
//---------------------------------------------------------------------------



void __fastcall TfrmPrincipal::FormCreate(TObject *Sender)
{
limpar_tudo();
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::Image1Click(TObject *Sender)
{
	if (alternador == True && Image1->Bitmap->IsEmpty()) {
		Image1->Bitmap = imgX->Bitmap;
		valor = matriz[0][0] += 1;
		alternador = False;}

	else if (alternador == False && Image1->Bitmap->IsEmpty()){
		Image1->Bitmap = imgO->Bitmap;
		valor = matriz[0][0] -= 1;
		alternador = True;}

	verificar_resultado();
	}


//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::Image2Click(TObject *Sender)
{
	if (alternador == True && Image2->Bitmap->IsEmpty()) {
		Image2->Bitmap = imgX->Bitmap;
		valor = matriz[1][0] += 1;
		alternador = False;}

	else if (alternador == False && Image2->Bitmap->IsEmpty()){
		Image2->Bitmap = imgO->Bitmap;
		valor = matriz[1][0] -= 1;
		alternador = True;}

	verificar_resultado();
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::Image3Click(TObject *Sender)
{
	if (alternador == True && Image3->Bitmap->IsEmpty()) {
		Image3->Bitmap = imgX->Bitmap;
		valor = matriz[2][0] += 1;
		alternador = False;}

	else if (alternador == False && Image3->Bitmap->IsEmpty()){
		Image3->Bitmap = imgO->Bitmap;
		valor = matriz[2][0] -= 1;
		alternador = True;}

	verificar_resultado();
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::Image4Click(TObject *Sender)
{
	if (alternador == True && Image4->Bitmap->IsEmpty()) {
		Image4->Bitmap = imgX->Bitmap;
		valor = matriz[0][1] += 1;
		alternador = False;}

	else if (alternador == False && Image4->Bitmap->IsEmpty()){
		Image4->Bitmap = imgO->Bitmap;
		valor = matriz[0][1] -= 1;
		alternador = True;}

	verificar_resultado();
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::Image5Click(TObject *Sender)
{
	if (alternador == True && Image5->Bitmap->IsEmpty()) {
		Image5->Bitmap = imgX->Bitmap;
		valor = matriz[1][1] += 1;
		alternador = False;}

	else if (alternador == False && Image5->Bitmap->IsEmpty()){
		Image5->Bitmap = imgO->Bitmap;
		valor = matriz[1][1] -= 1;
		alternador = True;}

	verificar_resultado();
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::Image6Click(TObject *Sender)
{
	if (alternador == True && Image6->Bitmap->IsEmpty()) {
		Image6->Bitmap = imgX->Bitmap;
		valor = matriz[2][1] += 1;
		alternador = False;}

	else if (alternador == False && Image6->Bitmap->IsEmpty()){
		Image6->Bitmap = imgO->Bitmap;
		valor = matriz[2][1] -= 1;
		alternador = True;}

	verificar_resultado();
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::Image7Click(TObject *Sender)
{
	if (alternador == True && Image7->Bitmap->IsEmpty()) {
		Image7->Bitmap = imgX->Bitmap;
		valor = matriz[0][2] += 1;
		alternador = False;}

	else if (alternador == False && Image7->Bitmap->IsEmpty()){
		Image7->Bitmap = imgO->Bitmap;
		valor = matriz[0][2] -= 1;
		alternador = True;}

	verificar_resultado();
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::Image8Click(TObject *Sender)
{
	if (alternador == True && Image8->Bitmap->IsEmpty()) {
		Image8->Bitmap = imgX->Bitmap;
		valor = matriz[1][2] += 1;
		alternador = False;}

	else if (alternador == False && Image8->Bitmap->IsEmpty()){
		Image8->Bitmap = imgO->Bitmap;
		valor = matriz[1][2] -= 1;
		alternador = True;}

	verificar_resultado();
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::Image9Click(TObject *Sender)
{
	if (alternador == True && Image9->Bitmap->IsEmpty()) {
		Image9->Bitmap = imgX->Bitmap;
		valor = matriz[2][2] += 1;
		alternador = False;}

	else if (alternador == False && Image9->Bitmap->IsEmpty()){
		Image9->Bitmap = imgO->Bitmap;
		valor = matriz[2][2] -= 1;
		alternador = True;}

	verificar_resultado();
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::SpeedButton1Click(TObject *Sender)
{
limpar_tudo();
zerar_matriz();
}
//---------------------------------------------------------------------------


void __fastcall TfrmPrincipal::SpeedButton2Click(TObject *Sender)
{
frmMenu->Show();
}
//--------------------------------------------------
