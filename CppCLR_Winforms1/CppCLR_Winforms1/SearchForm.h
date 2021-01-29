#pragma once
#include "SearchForm3.h"
#include "SearchForm1.h"

namespace CppCLR_Winforms1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// SearchForm 摘要
	/// </summary>
	public ref class SearchForm : public System::Windows::Forms::Form
	{
	public:
		SearchForm(void)
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
		~SearchForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	protected:

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(85, 52);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(163, 23);
			this->comboBox1->TabIndex = 5;
			comboBox1->Items->Add("招商银行一卡通");
			comboBox1->Items->Add("牡丹卡");
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(85, 118);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(65, 26);
			this->button1->TabIndex = 1;
			this->button1->Text = L"存款";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SearchForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(184, 118);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(64, 26);
			this->button2->TabIndex = 2;
			this->button2->Text = L"贷款";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SearchForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 15);
			this->label1->TabIndex = 3;
			this->label1->Text = L"卡类别";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 15);
			this->label2->TabIndex = 4;
			this->label2->Text = L"查询类别";
			// 
			// SearchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"SearchForm";
			this->Text = L"SearchForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		SearchForm1^ f = gcnew SearchForm1();

		MessageBox::Show("success");
		//f->setUser(this->textBox1->Text);

		this->Hide();
		f->ShowDialog();
	}
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		SearchForm3^ f = gcnew SearchForm3();

		//MessageBox::Show("success");
	//	f->setUser(this->textBox1->Text);

		this->Hide();
		f->ShowDialog();
    }

};
}
