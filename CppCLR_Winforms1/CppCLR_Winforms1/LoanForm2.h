#pragma once

namespace CppCLR_Winforms1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;
	using namespace System::IO;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// LoanForm2 摘要
	/// </summary>
	public ref class LoanForm2 : public System::Windows::Forms::Form
	{
	public:

		LoanForm2(void)
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
		~LoanForm2()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
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
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(27, 47);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 41);
			this->button1->TabIndex = 1;
			this->button1->Text = L"查看贷款合同书";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LoanForm2::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(185, 47);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(126, 41);
			this->button2->TabIndex = 2;
			this->button2->Text = L"确认合同并贷款";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &LoanForm2::button2_Click);
			// 
			// LoanForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(339, 142);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"LoanForm2";
			this->Text = L"LoanForm2";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("请选择合同书并查看内容（命名为contract.txt）");
		Stream^ myStream;
		OpenFileDialog^ openFile1 = gcnew OpenFileDialog;
		if (openFile1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			if ((myStream = openFile1->OpenFile()) != nullptr) {
				String^ strfilename = openFile1->InitialDirectory+openFile1->FileName;
				String^ Readfile = File::ReadAllText(strfilename);
				MessageBox::Show(Readfile);
				myStream->Close();
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("贷款成功");
	}
};
}
