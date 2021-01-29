#pragma once

namespace CppCLR_Winforms1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// SearchForm4 摘要
	/// </summary>
	public ref class SearchForm4 : public System::Windows::Forms::Form
	{
	public:
		String^ user;
		SearchForm4(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}
		void setUser(String^ s1) {
			user = s1;
		}
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~SearchForm4()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 15);
			this->label1->TabIndex = 1;
			this->label1->Text = L"贷款金额";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(80, 143);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 42);
			this->button1->TabIndex = 2;
			this->button1->Text = L"显示贷款金额";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SearchForm4::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(121, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 15);
			this->label2->TabIndex = 3;
			// 
			// SearchForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"SearchForm4";
			this->Text = L"SearchForm4";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "datasource=localhost;port=3306;username=root;password=123456";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT loan FROM bank.new_table where id = '" + user + "';", conDatabase);
		MySqlDataReader^ myReader;
		try {
			conDatabase->Open();
			myReader = cmdDatabase->ExecuteReader();
			while (myReader->Read()) {
				this->label2->Text = (myReader->GetDouble(0)) +"";
				MessageBox::Show(this->label2->Text);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);

		}
	}
	};
}
