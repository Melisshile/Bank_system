//---------------------------------------------------------------------------

#ifndef bank_unitH
#define bank_unitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TBank_Form : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TButton *btnLogin;
	TEdit *edtUserName;
	TEdit *edtPassword;
	TLabel *lblUserName;
	TLabel *lblPassword;
	TLabel *lblCreateAccount;
private:	// User declarations
public:		// User declarations
	__fastcall TBank_Form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TBank_Form *Bank_Form;
//---------------------------------------------------------------------------
#endif
