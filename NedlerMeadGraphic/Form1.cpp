#include "pch.h"
#include "Form1.h"


System::Void CppCLRWinFormsProject::Form1::chartButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->chart1->Series[0]->Points->Clear();
	this->chart1->Series[1]->Points->Clear();
	
	if (this->sqrX_box->Text->Length == 0 ||
		this->xBox->Text->Length == 0 ||
		this->const_box->Text->Length == 0) {
		CppCLRWinFormsProject::Form1::defaultParamsFunc();
	}

	int sqrX_value = Convert::ToInt32(sqrX_box->Text);
	int x_value = Convert::ToInt32(xBox->Text);
	int const_value = Convert::ToInt32(const_box->Text);

	int x = -3;
	double func = 0;

	while (x <= 3) {
		func = sqrX_value * (x*x) + x_value * x + const_value;
		this->chart1->Series[0]->Points->AddXY(x, func);
		x++;
	}

}


void CppCLRWinFormsProject::Form1::defaultParamsFunc()
{
	if (this->sqrX_box->Text->Length == 0) {
		int sqrX_value = 1;
		this->sqrX_box->Text = Convert::ToString(sqrX_value);
	}

	if (this->xBox->Text->Length == 0) {
		int x_value = 1;
		this->xBox->Text = Convert::ToString(x_value);
	}

	if (this->const_box->Text->Length == 0) {
		int const_value = 1;
		this->const_box->Text = Convert::ToString(const_value);
	}
		
}


void CppCLRWinFormsProject::Form1::defaultParamsSimplex()
{
	int sx1_value = -3 + rand() % 7;
	int sx2_value = 0;
	int sx3_value = 0;

	if (this->sx1Box->Text->Length == 0) {
		this->sx1Box->Text = Convert::ToString(sx1_value);
	}

	do {
		int sx2_value = -3 + rand() % 4; //4
	} while (sx2_value == sx1_value);

	if (this->sx2Box->Text->Length == 0) {
		this->sx2Box->Text = Convert::ToString(sx2_value);
	}

	sx3_value = -3 + rand() % 6; //6

	if (this->sx3Box->Text->Length == 0) {
		this->sx3Box->Text = Convert::ToString(sx3_value);
	}

	if (this->sy1Box->Text->Length == 0) {
		int sy1_value = CppCLRWinFormsProject::Form1::getRandomFunctionValue(sx1_value);
		this->sy1Box->Text = Convert::ToString(sy1_value);
	}

	int sy2_value = 0 + rand() % 8;

	if (this->sy2Box->Text->Length == 0) {
		this->sy2Box->Text = Convert::ToString(sy2_value);
	}

	int sy3_value = 0;
	do {
		int sy3_value = 0 + rand() % 4; //4
	} while (sy3_value == sy2_value);

	if (this->sy3Box->Text->Length == 0) {
		this->sy3Box->Text = Convert::ToString(sy3_value);
	}
}

double CppCLRWinFormsProject::Form1::getRandomFunctionValue(double x)
{
	int sqrX_value = Convert::ToInt32(sqrX_box->Text);
	int x_value = Convert::ToInt32(xBox->Text);
	int const_value = Convert::ToInt32(const_box->Text);

	double func = 0;

	func = sqrX_value * (x * x) + x_value * x + const_value;

	return func;
}

System::Void CppCLRWinFormsProject::Form1::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->chart1->Series[1]->Points->Clear();

	if (this->sx1Box->Text->Length == 0 ||
		this->sx2Box->Text->Length == 0 ||
		this->sx3Box->Text->Length == 0 ||
		this->sy1Box->Text->Length == 0 ||
		this->sy2Box->Text->Length == 0 ||
		this->sy3Box->Text->Length == 0) {
		CppCLRWinFormsProject::Form1::defaultParamsSimplex();
	}

	int sx1_value = Convert::ToInt32(sx1Box->Text);
	int sx2_value = Convert::ToInt32(sx2Box->Text);
	int sx3_value = Convert::ToInt32(sx3Box->Text);
	int sy1_value = Convert::ToInt32(sy1Box->Text);
	int sy2_value = Convert::ToInt32(sy2Box->Text);
	int sy3_value = Convert::ToInt32(sy3Box->Text);

	this->chart1->Series[1]->Points->AddXY(sx1_value, sy1_value);
	this->chart1->Series[1]->Points->AddXY(sx2_value, sy2_value);
	this->chart1->Series[1]->Points->AddXY(sx3_value, sy3_value);
	this->chart1->Series[1]->Points->AddXY(sx1_value, sy1_value);
}
