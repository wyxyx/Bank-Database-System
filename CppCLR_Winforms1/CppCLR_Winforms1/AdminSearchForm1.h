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
	/// AdminSearchForm1 摘要
	/// </summary>
	public ref class AdminSearchForm1 : public System::Windows::Forms::Form
	{
	public:
		AdminSearchForm1(void)
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
		~AdminSearchForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_2;
	protected:
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label_1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			this->label_2 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label_1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label_2
			// 
			this->label_2->AutoSize = true;
			this->label_2->Location = System::Drawing::Point(96, 311);
			this->label_2->Name = L"label_2";
			this->label_2->Size = System::Drawing::Size(0, 15);
			this->label_2->TabIndex = 33;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(23, 311);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 15);
			this->label10->TabIndex = 32;
			this->label10->Text = L"贷款金额";
			// 
			// label_1
			// 
			this->label_1->AutoSize = true;
			this->label_1->Location = System::Drawing::Point(98, 140);
			this->label_1->Name = L"label_1";
			this->label_1->Size = System::Drawing::Size(0, 15);
			this->label_1->TabIndex = 31;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(23, 140);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(67, 15);
			this->label8->TabIndex = 30;
			this->label8->Text = L"贷款金额";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(23, 273);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 15);
			this->label7->TabIndex = 29;
			this->label7->Text = L"姓氏";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(99, 263);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(62, 25);
			this->textBox4->TabIndex = 28;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(248, 54);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(22, 15);
			this->label6->TabIndex = 27;
			this->label6->Text = L"月";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(175, 54);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(22, 15);
			this->label5->TabIndex = 26;
			this->label5->Text = L"年";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(99, 88);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(62, 25);
			this->textBox3->TabIndex = 25;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(203, 51);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(39, 25);
			this->textBox2->TabIndex = 24;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(107, 51);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(62, 25);
			this->textBox1->TabIndex = 23;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(101, 347);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 36);
			this->button2->TabIndex = 22;
			this->button2->Text = L"模糊查询";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdminSearchForm1::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(101, 173);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 34);
			this->button1->TabIndex = 21;
			this->button1->Text = L"组合查询";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminSearchForm1::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 98);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 15);
			this->label4->TabIndex = 20;
			this->label4->Text = L"贷款号";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(4, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 15);
			this->label3->TabIndex = 19;
			this->label3->Text = L"开始贷款年月";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 219);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 15);
			this->label2->TabIndex = 18;
			this->label2->Text = L"模糊查询：";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 15);
			this->label1->TabIndex = 17;
			this->label1->Text = L"组合查询：";
			// 
			// AdminSearchForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 394);
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
			this->Name = L"AdminSearchForm1";
			this->Text = L"AdminSearchForm1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "datasource=localhost;port=3306;username=root;password=123456";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT loan_amount FROM bank.loan_table where l_year = '" + this->textBox1->Text + "'and l_month ='" + this->textBox2->Text + "'and loan_id = '" + this->textBox3->Text + "' ;", conDatabase);
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

	MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT loan_amount FROM bank.new_table as ba, bank.loan_table as bb where ba.id = bb.id and ba.name like '" + this->textBox4->Text + "'\"%\" ;", conDatabase);
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
