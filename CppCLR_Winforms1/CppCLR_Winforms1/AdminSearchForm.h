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
	/// AdminSearchForm 摘要
	/// </summary>
	public ref class AdminSearchForm : public System::Windows::Forms::Form
	{
	public:
		AdminSearchForm(void)
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
		~AdminSearchForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label_1;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label_2;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label_1 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label_2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"组合查询：";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 219);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"模糊查询：";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 15);
			this->label3->TabIndex = 2;
			this->label3->Text = L"存款年月";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 98);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 15);
			this->label4->TabIndex = 3;
			this->label4->Text = L"存款号";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(94, 173);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 34);
			this->button1->TabIndex = 4;
			this->button1->Text = L"组合查询";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminSearchForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(94, 347);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 36);
			this->button2->TabIndex = 5;
			this->button2->Text = L"模糊查询";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdminSearchForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(92, 51);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(62, 25);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(186, 51);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(39, 25);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(92, 88);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(62, 25);
			this->textBox3->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(158, 54);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(22, 15);
			this->label5->TabIndex = 9;
			this->label5->Text = L"年";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(231, 54);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(22, 15);
			this->label6->TabIndex = 10;
			this->label6->Text = L"月";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(92, 263);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(62, 25);
			this->textBox4->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(16, 273);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 15);
			this->label7->TabIndex = 12;
			this->label7->Text = L"姓氏";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(16, 140);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(67, 15);
			this->label8->TabIndex = 13;
			this->label8->Text = L"存款金额";
			// 
			// label_1
			// 
			this->label_1->AutoSize = true;
			this->label_1->Location = System::Drawing::Point(91, 140);
			this->label_1->Name = L"label_1";
			this->label_1->Size = System::Drawing::Size(0, 15);
			this->label_1->TabIndex = 14;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(16, 311);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 15);
			this->label10->TabIndex = 15;
			this->label10->Text = L"存款金额";
			// 
			// label_2
			// 
			this->label_2->AutoSize = true;
			this->label_2->Location = System::Drawing::Point(89, 311);
			this->label_2->Name = L"label_2";
			this->label_2->Size = System::Drawing::Size(0, 15);
			this->label_2->TabIndex = 16;
			// 
			// AdminSearchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(296, 395);
			this->Controls->Add(this->label_2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label_1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AdminSearchForm";
			this->Text = L"AdminSearchForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "datasource=localhost;port=3306;username=root;password=123456";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT amount FROM bank.money_table where m_year = '" + this->textBox1->Text + "'and m_month ='"+ this->textBox2->Text+"'and money_id = '"+this->textBox3->Text+"' ;", conDatabase);
		MySqlDataReader^ myReader;

		try {
			conDatabase->Open();

			myReader = cmdDatabase->ExecuteReader();
			while (myReader->Read()) {
				this->label_1->Text = (myReader->GetDouble(0)) + "";
				MessageBox::Show("成功！");
			}

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "datasource=localhost;port=3306;username=root;password=123456";
	MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

	MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT amount FROM bank.new_table as ba, bank.money_table as bb where ba.id = bb.id and ba.name like '" + this->textBox4->Text + "'\"%\" ;", conDatabase);
	MySqlDataReader^ myReader;

	try {
		conDatabase->Open();

		myReader = cmdDatabase->ExecuteReader();
		while (myReader->Read()) {
			this->label_2->Text = (myReader->GetDouble(0)) + "";
			MessageBox::Show("成功！");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
};
}
