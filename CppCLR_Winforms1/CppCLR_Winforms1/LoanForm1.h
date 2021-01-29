#pragma once
#include <ctime>  
#include "LoanForm2.h"
namespace CppCLR_Winforms1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO;
	using namespace System::Text;
	

	/// <summary>
	/// LoanForm1 摘要
	/// </summary>
	public ref class LoanForm1 : public System::Windows::Forms::Form
	{
	public:
		String^ user;
		double final_loanmoney;
		int y, m, d;
		int y1, m1, d1;
		int flag;
		int days;
	
		   String^ name;
		LoanForm1(void)
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
		~LoanForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label_final;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label_max;
	private: System::Windows::Forms::TextBox^ year;
	private: System::Windows::Forms::TextBox^ month;
	private: System::Windows::Forms::TextBox^ day;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label11;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label_final = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label_max = (gcnew System::Windows::Forms::Label());
			this->year = (gcnew System::Windows::Forms::TextBox());
			this->month = (gcnew System::Windows::Forms::TextBox());
			this->day = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 15);
			this->label1->TabIndex = 1;
			this->label1->Text = L"还贷时间";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 15);
			this->label2->TabIndex = 2;
			this->label2->Text = L"贷款金额";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(85, 110);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(160, 25);
			this->textBox1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 292);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 30);
			this->button1->TabIndex = 4;
			this->button1->Text = L"计算贷款";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LoanForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(183, 292);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 30);
			this->button2->TabIndex = 5;
			this->button2->Text = L"确认贷款";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &LoanForm1::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 199);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 15);
			this->label3->TabIndex = 6;
			this->label3->Text = L"贷款加利息";
			// 
			// label_final
			// 
			this->label_final->AutoSize = true;
			this->label_final->Location = System::Drawing::Point(150, 199);
			this->label_final->Name = L"label_final";
			this->label_final->Size = System::Drawing::Size(0, 15);
			this->label_final->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 158);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(112, 15);
			this->label5->TabIndex = 8;
			this->label5->Text = L"可贷款最高金额";
			// 
			// label_max
			// 
			this->label_max->AutoSize = true;
			this->label_max->Location = System::Drawing::Point(150, 158);
			this->label_max->Name = L"label_max";
			this->label_max->Size = System::Drawing::Size(0, 15);
			this->label_max->TabIndex = 9;
			// 
			// year
			// 
			this->year->Location = System::Drawing::Point(85, 71);
			this->year->Name = L"year";
			this->year->Size = System::Drawing::Size(43, 25);
			this->year->TabIndex = 10;
			// 
			// month
			// 
			this->month->Location = System::Drawing::Point(166, 71);
			this->month->Name = L"month";
			this->month->Size = System::Drawing::Size(31, 25);
			this->month->TabIndex = 11;
			// 
			// day
			// 
			this->day->Location = System::Drawing::Point(231, 71);
			this->day->Name = L"day";
			this->day->Size = System::Drawing::Size(33, 25);
			this->day->TabIndex = 12;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(134, 74);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(22, 15);
			this->label4->TabIndex = 13;
			this->label4->Text = L"年";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(203, 74);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(22, 15);
			this->label6->TabIndex = 14;
			this->label6->Text = L"月";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(270, 74);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(22, 15);
			this->label7->TabIndex = 15;
			this->label7->Text = L"日";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(270, 30);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(22, 15);
			this->label8->TabIndex = 22;
			this->label8->Text = L"日";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(203, 31);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(22, 15);
			this->label9->TabIndex = 21;
			this->label9->Text = L"月";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(134, 31);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(22, 15);
			this->label10->TabIndex = 20;
			this->label10->Text = L"年";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(231, 27);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(33, 25);
			this->textBox4->TabIndex = 19;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(166, 27);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(31, 25);
			this->textBox3->TabIndex = 18;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(86, 28);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(42, 25);
			this->textBox2->TabIndex = 17;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 31);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(67, 15);
			this->label11->TabIndex = 16;
			this->label11->Text = L"贷款时间";
			// 
			// LoanForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(304, 337);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->day);
			this->Controls->Add(this->month);
			this->Controls->Add(this->year);
			this->Controls->Add(this->label_max);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label_final);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"LoanForm1";
			this->Text = L"LoanForm1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "datasource=localhost;port=3306;username=root;password=123456";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT * FROM bank.new_table where id = '" + user + "';", conDatabase); 
		MySqlDataReader^ myReader;
		int count;
		double loanmoney;
		int max_loanmoney;

		try {
			conDatabase->Open();

			myReader = cmdDatabase->ExecuteReader();

			count = 0;

			while (myReader->Read()) {
				loanmoney = Convert::ToDouble(this->textBox1->Text);
			
				int loan_class = myReader->GetInt32(8);

				max_loanmoney = int(loan_class * loanmoney);

				this->label_max->Text = int(loan_class * loanmoney)+"";

				y = Convert::ToInt32(this->year->Text);
				m = Convert::ToInt32(this->month->Text);
				d = Convert::ToInt32(this->day->Text);
				
				y1 = Convert::ToInt32(this->textBox2->Text);
				m1 = Convert::ToInt32(this->textBox3->Text);
				d1 = Convert::ToInt32(this->textBox4->Text);

				name = myReader->GetString(1);
				
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		myReader->Close();

		struct tm t1 = { 0 };
		struct tm t2 = { 0 };
		double seconds;

		t1.tm_year = y1 - 1900; t1.tm_mon = m1; t1.tm_mday = d1;//现在时间  
		t2.tm_year = y - 1900; t2.tm_mon = m; t2.tm_mday = d;//还贷时间 

		seconds = difftime(mktime(&t2), mktime(&t1));//转换结构体为time_t,利用difftime,计算时间差  
		//MessageBox::Show(seconds/ 86400+"");
		days = seconds / 86400;
		final_loanmoney = days * 0.001 * loanmoney + loanmoney;
		this->label_final->Text = final_loanmoney+"";
		if (final_loanmoney <= max_loanmoney) {
			flag = 1;
			MessageBox::Show("当前贷款金额符合规定，可进行贷款。");
		}
		else
		{
			flag = 0;
			MessageBox::Show("当前贷款金额不符合规定，请重新输入！");
		}
		//cout << seconds / 86400 << endl; 
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "datasource=localhost;port=3306;username=root;password=123456";
	MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
	if (flag == 1) {
		MySqlCommand^ cmdDatabase1 = gcnew MySqlCommand("UPDATE bank.new_table SET loan ='" + final_loanmoney + "',loan_year='" + y + "',loan_month='" + m + "',loan_day='" + d + "' where id = '" + user + "';", conDatabase);
		MySqlDataReader^ myReader1;
		try {
			conDatabase->Open();
			myReader1 = cmdDatabase1->ExecuteReader();

			//MessageBox::Show("update");
		}
		catch (Exception^ ex1) {
			MessageBox::Show(ex1->Message);
		}
		myReader1->Close();
		////
		//////////
		int loanid = 2 * 100000000 + Convert::ToInt32(user) * 100 + 1;
		int count1 = 0;
		MySqlCommand^ cmdDatabase2 = gcnew MySqlCommand("SELECT * from bank.loan_table where id = '" + user + "'and loan_id ='" + loanid + "';", conDatabase);
		MySqlDataReader^ myReader2;
		try {
			myReader2 = cmdDatabase2->ExecuteReader();
			while (myReader2->Read()) {
				count1++;
			}
			//MessageBox::Show("update");
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		myReader2->Close();

		if (count1 == 0) {
			MySqlCommand^ cmdDatabase3 = gcnew MySqlCommand("insert into bank.loan_table (id,loan_id,loan_amount,l_year,l_month,l_day) values ('" + user + "','" + loanid + "','" + final_loanmoney + "','" + y1 + "','" + m1 + "','" + d1+ "');", conDatabase);
			MySqlDataReader^ myReader3;
			try {
				myReader3 = cmdDatabase3->ExecuteReader();
				//MessageBox::Show("update");
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
			myReader3->Close();

		}
		else {
			int loanid1;
			MySqlCommand^ cmdDatabase3 = gcnew MySqlCommand("SELECT MAX(loan_id) FROM bank.loan_table where id = '" + user + "';", conDatabase);
			MySqlDataReader^ myReader3;
			try {
				myReader3 = cmdDatabase3->ExecuteReader();
				while (myReader3->Read()) {
					loanid1 = myReader3->GetInt32(0);
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
			myReader3->Close();

			loanid1 = loanid1 + 1;
			MySqlCommand^ cmdDatabase4 = gcnew MySqlCommand("insert into bank.loan_table (id,loan_id,loan_amount,l_year,l_month,l_day) values ('" + user + "','" + loanid + "','" + final_loanmoney + "','" + y1 + "','" + m1 + "','" + d1 + "');", conDatabase);
			MySqlDataReader^ myReader4;
			try {
				myReader4 = cmdDatabase4->ExecuteReader();
				//MessageBox::Show("update!");
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
			myReader4->Close();


		}

		/////
		StreamWriter^ outfile = gcnew StreamWriter("contract.txt");
		outfile->Write("              贷款合同书\n\n"+"贷款银行：招商银行\n"+"贷款号："+loanid+"\n贷款人："+name+"\n贷款人卡号："+user
			+"\n"+"贷款额："+ final_loanmoney+"元\n"+"开始贷款时间："+y1+"年" + m1 + "月" + d1 + "日\n"+"还贷时间："+y+"年"+m+"月"+d+"日\n"+"贷款总时长："+days+"天\n");
		outfile->Close();
		this->Hide();
		LoanForm2^ f = gcnew LoanForm2();
		
		f->ShowDialog();
	}
	else {
		MessageBox::Show("当前贷款金额不符合规定，请重新输入！");
	}
}

};
}
