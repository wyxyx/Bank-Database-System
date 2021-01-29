#pragma once
#include "DepositForm.h"
#include "LoanForm.h"
#include "TransferForm.h"
#include "WithdrawForm.h"
#include "PayLoanForm.h"
#include "SearchForm.h"
namespace CppCLR_Winforms1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// UserForm 摘要
	/// </summary>
	public ref class UserForm : public System::Windows::Forms::Form
	{
	public:
		UserForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~UserForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(79, 28);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 37);
			this->button1->TabIndex = 0;
			this->button1->Text = L"存款";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UserForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(79, 91);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(161, 37);
			this->button2->TabIndex = 1;
			this->button2->Text = L"取款";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &UserForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(79, 149);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(161, 37);
			this->button3->TabIndex = 2;
			this->button3->Text = L"贷款";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &UserForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(79, 211);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(161, 37);
			this->button4->TabIndex = 3;
			this->button4->Text = L"转帐";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &UserForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(79, 271);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(161, 37);
			this->button5->TabIndex = 4;
			this->button5->Text = L"还贷";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &UserForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(79, 333);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(161, 40);
			this->button6->TabIndex = 5;
			this->button6->Text = L"查询存/贷款金额";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &UserForm::button6_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(310, 408);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"UserForm";
			this->Text = L"UserForm";
			this->ResumeLayout(false);
		}
#pragma endregion
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ constring = "datasource=localhost;port=3306;username=root;password=123456";
			MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

			MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT * FROM bank.new_table;", conDatabase);
			MySqlDataReader^ myReader;
			try {
				conDatabase->Open();
				myReader = cmdDatabase->ExecuteReader();

				this->Hide();
				DepositForm^ f = gcnew DepositForm();
				f->ShowDialog();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
		}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "datasource=localhost;port=3306;username=root;password=123456";
	MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

	MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT * FROM bank.new_table;", conDatabase);
	MySqlDataReader^ myReader;
	try {
		conDatabase->Open();
		myReader = cmdDatabase->ExecuteReader();

		this->Hide();
		WithdrawForm^ f = gcnew WithdrawForm();
		f->ShowDialog();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "datasource=localhost;port=3306;username=root;password=123456";
	MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

	MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT * FROM bank.new_table;", conDatabase);
	MySqlDataReader^ myReader;
	try {
		conDatabase->Open();
		myReader = cmdDatabase->ExecuteReader();
		//DateTimePicker^ dtp = gcnew DateTimePicker();
		this->Hide();
		LoanForm^ f = gcnew LoanForm();
		f->ShowDialog();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "datasource=localhost;port=3306;username=root;password=123456";
	MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

	MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT * FROM bank.new_table;", conDatabase);
	MySqlDataReader^ myReader;
	try {
		conDatabase->Open();
		myReader = cmdDatabase->ExecuteReader();

		this->Hide();
		TransferForm^ f = gcnew TransferForm();
		f->ShowDialog();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "datasource=localhost;port=3306;username=root;password=123456";
	MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

	MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT * FROM bank.new_table;", conDatabase);
	MySqlDataReader^ myReader;
	try {
		conDatabase->Open();
		myReader = cmdDatabase->ExecuteReader();

		this->Hide();
		PayLoanForm^ f = gcnew PayLoanForm();
		f->ShowDialog();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "datasource=localhost;port=3306;username=root;password=123456";
	MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

	MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT * FROM bank.new_table;", conDatabase);
	MySqlDataReader^ myReader;
	try {
		conDatabase->Open();
		myReader = cmdDatabase->ExecuteReader();

		this->Hide();
		SearchForm^ f = gcnew SearchForm();
		f->ShowDialog();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
	};
}
