#pragma once
#include <iostream>
#include <ctime>

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ sqrX_label;
	private: System::Windows::Forms::Label^ x_label;
	private: System::Windows::Forms::Label^ const_label;
	private: System::Windows::Forms::TextBox^ sqrX_box;
	private: System::Windows::Forms::TextBox^ xBox;
	private: System::Windows::Forms::TextBox^ const_box;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ chartButton;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ sx1Box;
	private: System::Windows::Forms::TextBox^ sx2Box;
	private: System::Windows::Forms::TextBox^ sx3Box;
	private: System::Windows::Forms::TextBox^ sy3Box;





	private: System::Windows::Forms::TextBox^ sy2Box;

	private: System::Windows::Forms::TextBox^ sy1Box;

	private: System::Windows::Forms::Button^ button1;









	protected:



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->sqrX_label = (gcnew System::Windows::Forms::Label());
			this->x_label = (gcnew System::Windows::Forms::Label());
			this->const_label = (gcnew System::Windows::Forms::Label());
			this->sqrX_box = (gcnew System::Windows::Forms::TextBox());
			this->xBox = (gcnew System::Windows::Forms::TextBox());
			this->const_box = (gcnew System::Windows::Forms::TextBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chartButton = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->sx1Box = (gcnew System::Windows::Forms::TextBox());
			this->sx2Box = (gcnew System::Windows::Forms::TextBox());
			this->sx3Box = (gcnew System::Windows::Forms::TextBox());
			this->sy3Box = (gcnew System::Windows::Forms::TextBox());
			this->sy2Box = (gcnew System::Windows::Forms::TextBox());
			this->sy1Box = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(56, 44);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(589, 420);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(673, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Input your function:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(660, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"F(x) = ";
			// 
			// sqrX_label
			// 
			this->sqrX_label->AutoSize = true;
			this->sqrX_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sqrX_label->Location = System::Drawing::Point(772, 100);
			this->sqrX_label->Name = L"sqrX_label";
			this->sqrX_label->Size = System::Drawing::Size(43, 18);
			this->sqrX_label->TabIndex = 3;
			this->sqrX_label->Text = L"x^2 +";
			// 
			// x_label
			// 
			this->x_label->AutoSize = true;
			this->x_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->x_label->Location = System::Drawing::Point(772, 135);
			this->x_label->Name = L"x_label";
			this->x_label->Size = System::Drawing::Size(28, 18);
			this->x_label->TabIndex = 4;
			this->x_label->Text = L"x +";
			// 
			// const_label
			// 
			this->const_label->AutoSize = true;
			this->const_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->const_label->Location = System::Drawing::Point(772, 168);
			this->const_label->Name = L"const_label";
			this->const_label->Size = System::Drawing::Size(45, 18);
			this->const_label->TabIndex = 5;
			this->const_label->Text = L"const";
			// 
			// sqrX_box
			// 
			this->sqrX_box->Location = System::Drawing::Point(717, 100);
			this->sqrX_box->Name = L"sqrX_box";
			this->sqrX_box->Size = System::Drawing::Size(49, 20);
			this->sqrX_box->TabIndex = 6;
			// 
			// xBox
			// 
			this->xBox->Location = System::Drawing::Point(717, 133);
			this->xBox->Name = L"xBox";
			this->xBox->Size = System::Drawing::Size(49, 20);
			this->xBox->TabIndex = 7;
			// 
			// const_box
			// 
			this->const_box->Location = System::Drawing::Point(717, 166);
			this->const_box->Name = L"const_box";
			this->const_box->Size = System::Drawing::Size(49, 20);
			this->const_box->TabIndex = 8;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(56, 44);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::Navy;
			series1->IsVisibleInLegend = false;
			series1->Legend = L"Legend1";
			series1->Name = L"function";
			series2->BorderWidth = 3;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series2->Legend = L"Legend1";
			series2->Name = L"simplex";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(589, 420);
			this->chart1->TabIndex = 9;
			this->chart1->Text = L"chart1";
			// 
			// chartButton
			// 
			this->chartButton->Location = System::Drawing::Point(821, 208);
			this->chartButton->Name = L"chartButton";
			this->chartButton->Size = System::Drawing::Size(75, 23);
			this->chartButton->TabIndex = 10;
			this->chartButton->Text = L"OK";
			this->chartButton->UseVisualStyleBackColor = true;
			this->chartButton->Click += gcnew System::EventHandler(this, &Form1::chartButton_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(673, 267);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(153, 20);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Initialize the simplex:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(674, 287);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 15);
			this->label4->TabIndex = 12;
			this->label4->Text = L"(use LMB)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(709, 321);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 18);
			this->label5->TabIndex = 13;
			this->label5->Text = L"point 1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(772, 321);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 18);
			this->label6->TabIndex = 14;
			this->label6->Text = L"point 2";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(835, 321);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 18);
			this->label7->TabIndex = 15;
			this->label7->Text = L"point 3";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(673, 354);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(16, 20);
			this->label8->TabIndex = 16;
			this->label8->Text = L"x";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(673, 393);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(16, 20);
			this->label9->TabIndex = 17;
			this->label9->Text = L"y";
			// 
			// sx1Box
			// 
			this->sx1Box->Location = System::Drawing::Point(713, 356);
			this->sx1Box->Name = L"sx1Box";
			this->sx1Box->Size = System::Drawing::Size(44, 20);
			this->sx1Box->TabIndex = 18;
			// 
			// sx2Box
			// 
			this->sx2Box->Location = System::Drawing::Point(776, 356);
			this->sx2Box->Name = L"sx2Box";
			this->sx2Box->Size = System::Drawing::Size(44, 20);
			this->sx2Box->TabIndex = 19;
			// 
			// sx3Box
			// 
			this->sx3Box->Location = System::Drawing::Point(838, 356);
			this->sx3Box->Name = L"sx3Box";
			this->sx3Box->Size = System::Drawing::Size(44, 20);
			this->sx3Box->TabIndex = 20;
			// 
			// sy3Box
			// 
			this->sy3Box->Location = System::Drawing::Point(838, 395);
			this->sy3Box->Name = L"sy3Box";
			this->sy3Box->Size = System::Drawing::Size(44, 20);
			this->sy3Box->TabIndex = 23;
			// 
			// sy2Box
			// 
			this->sy2Box->Location = System::Drawing::Point(776, 395);
			this->sy2Box->Name = L"sy2Box";
			this->sy2Box->Size = System::Drawing::Size(44, 20);
			this->sy2Box->TabIndex = 22;
			// 
			// sy1Box
			// 
			this->sy1Box->Location = System::Drawing::Point(713, 395);
			this->sy1Box->Name = L"sy1Box";
			this->sy1Box->Size = System::Drawing::Size(44, 20);
			this->sy1Box->TabIndex = 21;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(821, 441);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 24;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1005, 596);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->sy3Box);
			this->Controls->Add(this->sy2Box);
			this->Controls->Add(this->sy1Box);
			this->Controls->Add(this->sx3Box);
			this->Controls->Add(this->sx2Box);
			this->Controls->Add(this->sx1Box);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->chartButton);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->const_box);
			this->Controls->Add(this->xBox);
			this->Controls->Add(this->sqrX_box);
			this->Controls->Add(this->const_label);
			this->Controls->Add(this->x_label);
			this->Controls->Add(this->sqrX_label);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void chartButton_Click(System::Object^ sender, System::EventArgs^ e);
private: void defaultParamsFunc();
private: void defaultParamsSimplex();
private: double getRandomFunctionValue(double x);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

};
}
