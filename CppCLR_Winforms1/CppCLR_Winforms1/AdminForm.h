#pragma once
#include "AdministratorForm.h"
#include "AdminDeleForm.h"
#include "AdminSearchForm.h"
#include "AdminSearchForm1.h"

namespace CppCLR_Winforms1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// AdminForm 摘要
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
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
		~AdminForm()
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(57, 41);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"开户";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(201, 41);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 34);
			this->button2->TabIndex = 1;
			this->button2->Text = L"销户";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdminForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(57, 146);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(83, 34);
			this->button3->TabIndex = 2;
			this->button3->Text = L"查询存款";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AdminForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(201, 146);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(83, 34);
			this->button4->TabIndex = 3;
			this->button4->Text = L"查询贷款";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &AdminForm::button4_Click);
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(350, 249);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"AdminForm";
			this->Text = L"AdminForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		AdministratorForm^ f = gcnew AdministratorForm ();
		f->ShowDialog();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		AdminDeleForm^ f = gcnew AdminDeleForm();
		f->ShowDialog();
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	AdminSearchForm^ f = gcnew AdminSearchForm();
	f->ShowDialog();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	AdminSearchForm1^ f = gcnew AdminSearchForm1();
	f->ShowDialog();
}
};
}
