#pragma once
#include "PayLoanForm1.h"

namespace CppCLR_Winforms1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// PayLoanForm 摘要
	/// </summary>
	public ref class PayLoanForm : public System::Windows::Forms::Form
	{
	public:
		PayLoanForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
			textBox2->PasswordChar = '*';
			textBox2->MaxLength = 10;
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~PayLoanForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label3;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(93, 184);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"登录";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PayLoanForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 15);
			this->label1->TabIndex = 1;
			this->label1->Text = L"卡号";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(37, 131);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 15);
			this->label2->TabIndex = 2;
			this->label2->Text = L"密码";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(110, 73);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 25);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(110, 121);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(121, 25);
			this->textBox2->TabIndex = 4;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(110, 26);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 23);
			this->comboBox1->TabIndex = 5;
			comboBox1->Items->Add("招商银行一卡通");
			comboBox1->Items->Add("牡丹卡");
			//
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(37, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 15);
			this->label3->TabIndex = 6;
			this->label3->Text = L"类别";
			// 
			// WithdrawForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"PayLoanForm";
			this->Text = L"PayLoanForm";
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ constring = "datasource=localhost;port=3306;username=root;password=123456";
			MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

			MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT * FROM bank.new_table where id = '" + this->textBox1->Text + "'and passwd='" + this->textBox2->Text + "';", conDatabase);
			MySqlDataReader^ myReader;
			try {
				conDatabase->Open();

				myReader = cmdDatabase->ExecuteReader();
				int count = 0;
				while (myReader->Read()) {
					count = count + 1;
				}
				if (count == 1) {
					MessageBox::Show("correct");

					PayLoanForm1^ f = gcnew PayLoanForm1();

					//MessageBox::Show(this->textBox1->Text);
					f->setUser(this->textBox1->Text);

					this->Hide();
					f->ShowDialog();

				}
				//else if(count > 1)
				else {
					MessageBox::Show("Not correct");
				}

			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
		}
	};
}
