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
	/// PayLoanForm1 摘要
	/// </summary>
	public ref class PayLoanForm1 : public System::Windows::Forms::Form
	{
	public:
		String^ user;
		double loan_money;
		double money;
		int flag;
		PayLoanForm1(void)
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
		~PayLoanForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"贷款金额";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(29, 172);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 25);
			this->button1->TabIndex = 4;
			this->button1->Text = L"显示贷款";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PayLoanForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(147, 172);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 25);
			this->button2->TabIndex = 5;
			this->button2->Text = L"确认还贷";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &PayLoanForm1::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(122, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 15);
			this->label2->TabIndex = 6;
			// 
			// PayLoanForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"PayLoanForm1";
			this->Text = L"PayLoanForm1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "datasource=localhost;port=3306;username=root;password=123456";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT * FROM bank.new_table where id = '" + user + "';", conDatabase);
		MySqlDataReader^ myReader;

		try {
			conDatabase->Open();
			myReader = cmdDatabase->ExecuteReader();
			while (myReader->Read()) {
				money = myReader->GetDouble(3);
				loan_money = myReader->GetDouble(7);
				this->label2->Text = (myReader->GetDouble(7))+""; 
				MessageBox::Show(this->label2->Text);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		if (money >= loan_money) {
			flag = 1;
			MessageBox::Show("当前余额可还款。");
		}
		else {
			flag = 0;
			MessageBox::Show("当前余额不可还款。");
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "datasource=localhost;port=3306;username=root;password=123456";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		if (flag == 1) {
			int l = 0;
			double mm = money - loan_money;
			MySqlCommand^ cmdDatabase1 = gcnew MySqlCommand("UPDATE bank.new_table SET money = '"+ mm +"',loan ='" + l + "',loan_year='" + l + "',loan_month='" + l + "',loan_day='" + l + "' where id = '" + user + "';", conDatabase);
			MySqlDataReader^ myReader1;
			try {
				conDatabase->Open();
				myReader1 = cmdDatabase1->ExecuteReader();
				MessageBox::Show("还贷成功！");
			}
			catch (Exception^ ex1) {
				MessageBox::Show(ex1->Message);
			}
		}
		else {
			MessageBox::Show("当前余额不可还款。");
		}
	}
};
}
