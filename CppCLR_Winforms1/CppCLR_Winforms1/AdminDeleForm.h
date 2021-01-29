#pragma once
#include <ctime>  
namespace CppCLR_Winforms1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// AdminDeleForm 摘要
	/// </summary>
	public ref class AdminDeleForm : public System::Windows::Forms::Form
	{
	public:
		double final_money;
		AdminDeleForm(void)
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
		~AdminDeleForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label_money;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label_money = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(181, 184);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"销户";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminDeleForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(119, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(159, 25);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 15);
			this->label1->TabIndex = 2;
			this->label1->Text = L"卡号（6位）";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 15);
			this->label2->TabIndex = 3;
			this->label2->Text = L"存款（及利息）";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(26, 184);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(94, 39);
			this->button2->TabIndex = 4;
			this->button2->Text = L"结算存款";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdminDeleForm::button2_Click);
			// 
			// label_money
			// 
			this->label_money->AutoSize = true;
			this->label_money->Location = System::Drawing::Point(150, 121);
			this->label_money->Name = L"label_money";
			this->label_money->Size = System::Drawing::Size(0, 15);
			this->label_money->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(96, 63);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(63, 25);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(194, 63);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(27, 25);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(249, 63);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(29, 25);
			this->textBox4->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 66);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 15);
			this->label4->TabIndex = 9;
			this->label4->Text = L"销户日期";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(165, 66);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(22, 15);
			this->label5->TabIndex = 10;
			this->label5->Text = L"年";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(221, 66);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(22, 15);
			this->label6->TabIndex = 11;
			this->label6->Text = L"月";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(284, 66);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(22, 15);
			this->label7->TabIndex = 12;
			this->label7->Text = L"日";
			// 
			// AdminDeleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(317, 237);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label_money);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"AdminDeleForm";
			this->Text = L"AdminDeleForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ constring = "datasource=localhost;port=3306;username=root;password=123456";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT * FROM bank.new_table where id = '" + this->textBox1->Text + "';", conDatabase); 
		MySqlDataReader^ myReader;
	
		double money;
		int y, m, d;
		int y1, m1, d1;
		int flag = 0;
		try {
			conDatabase->Open();

			myReader = cmdDatabase->ExecuteReader();

			y1 = Convert::ToInt32(this->textBox2->Text);
			m1 = Convert::ToInt32(this->textBox3->Text);
			d1 = Convert::ToInt32(this->textBox4->Text);
		
			while (myReader->Read()) {
				money = myReader->GetInt32(3);
				y = myReader->GetInt32(9);
				m = myReader->GetInt32(10);
				d = myReader->GetInt32(11);
				flag = 1;
			}
		}
		catch (Exception^ ex) {
			flag = 0;
			MessageBox::Show("用户不存在，错误！");
			MessageBox::Show(ex->Message);
		}
		myReader->Close();

		struct tm t1 = { 0 };
		struct tm t2 = { 0 };
		double seconds;

		t1.tm_year = y - 1900; t1.tm_mon = m; t1.tm_mday = d;//  开户时间 
		t2.tm_year = y1 - 1900; t2.tm_mon = m1; t2.tm_mday = d1;//销户时间

		seconds = difftime(mktime(&t2), mktime(&t1));//转换结构体为time_t,利用difftime,计算时间差  
		//MessageBox::Show(seconds/ 86400+"");

		int days = seconds / 86400;

		final_money = days * 0.00005 * money + money;
		if (flag == 1) {
			this->label_money->Text = final_money + "";

			MessageBox::Show("存款及利息已结算，用户可取出！");
		}
	} 
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "datasource=localhost;port=3306;username=root;password=123456";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("DELETE FROM bank.new_table where id = '" + this->textBox1->Text + "';", conDatabase);
		MySqlDataReader^ myReader;

		try {
			conDatabase->Open();

			myReader = cmdDatabase->ExecuteReader();
			MessageBox::Show("销户成功！");

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

    }
};
}
