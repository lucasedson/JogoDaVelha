//---------------------------------------------------------------------------

#ifndef UFrmMenuH
#define UFrmMenuH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.Objects.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>

//---------------------------------------------------------------------------
class TfrmMenu : public TForm
{
__published:	// IDE-managed Components
	TLayout *Layout1;
	TRectangle *Rectangle1;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton2;
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall SpeedButton2Click(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TfrmMenu(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmMenu *frmMenu;
//---------------------------------------------------------------------------
#endif
