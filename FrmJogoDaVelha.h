//---------------------------------------------------------------------------

#ifndef FrmJogoDaVelhaH
#define FrmJogoDaVelhaH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Effects.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Graphics.hpp>
#include <FMX.StdCtrls.hpp>
//---------------------------------------------------------------------------
class TfrmPrincipal : public TForm
{
__published:	// IDE-managed Components
	TLayout *Layout1;
	TLayout *LayTop;
	TLayout *LayBottom;
	TLayout *LayGame;
	TRectangle *rectBranco;
	TRectangle *RectBase;
	TShadowEffect *ShadowEffect1;
	TLayout *LayBase;
	TLayout *LayHorizontalTop;
	TLayout *LayHorizontalCenter;
	TLayout *LayHorizontalBottom;
	TImage *Image1;
	TImage *Image2;
	TImage *Image3;
	TImage *Image4;
	TImage *Image5;
	TImage *Image6;
	TImage *Image7;
	TImage *Image8;
	TImage *Image9;
	TRectangle *rectFundo;
	TBrushObject *Brush1;
	TLabel *lblPrincipal;
	TSpeedButton *SpeedButton1;
	TBrushObject *Brush2;
	TLabel *Label10;
	TSpeedButton *SpeedButton2;
	TImage *imgX;
	TImage *imgO;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Image1Click(TObject *Sender);
	void __fastcall Image2Click(TObject *Sender);
	void __fastcall Image3Click(TObject *Sender);
	void __fastcall Image4Click(TObject *Sender);
	void __fastcall Image5Click(TObject *Sender);
	void __fastcall Image6Click(TObject *Sender);
	void __fastcall Image7Click(TObject *Sender);
	void __fastcall Image8Click(TObject *Sender);
	void __fastcall Image9Click(TObject *Sender);
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall SpeedButton2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmPrincipal(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmPrincipal *frmPrincipal;
//---------------------------------------------------------------------------
#endif
