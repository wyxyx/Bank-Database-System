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
	/// WithdrawForm1 摘要
	/// </summary>
	public ref class DepositForm1 : public System::Windows::Forms::Form
	{
	public:
		String^ user;
		DepositForm1(void)
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
		~DepositForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(98, 66);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(144, 25);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 15);
			this->label1->TabIndex = 1;
			this->label1->Text = L"存款金额";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(98, 157);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 31);
			this->button1->TabIndex = 2;
			this->button1->Text = L"ok";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DepositForm1::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 15);
			this->label2->TabIndex = 3;
			this->label2->Text = L"存款时间";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(98, 28);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(48, 25);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(176, 27);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(35, 25);
			this->textBox3->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(238, 27);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(30, 25);
			this->textBox4->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(148, 31);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(22, 15);
			this->label3->TabIndex = 7;
			this->label3->Text = L"年";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(213, 31);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(22, 15);
			this->label4->TabIndex = 8;
			this->label4->Text = L"月";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(274, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(22, 15);
			this->label5->TabIndex = 9;
			this->label5->Text = L"日";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(248, 69);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(22, 15);
			this->label6->TabIndex = 10;
			this->label6->Text = L"元";
			// 
			// DepositForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(309, 200);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"DepositForm1";
			this->Text = L"DepositForm1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		int y, m, d;
	
		String^ constring = "datasource=localhost;port=3306;username=root;password=123456";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT * FROM bank.new_table where id = '" + user + "';", conDatabase); //("SELECT money FROM bank.new_table where id = " + user+ ";", conDatabase);
		MySqlDataReader^ myReader;
		int credit,count;
		double money,i;
		try {
			conDatabase->Open();

			myReader = cmdDatabase->ExecuteReader();
		    count = 0;
			while (myReader->Read()) {
				count = count + 1;
				i = Convert::ToDouble(this->textBox1->Text);

				y = Convert::ToInt32(this->textBox2->Text);
				m = Convert::ToInt32(this->textBox3->Text);
				d = Convert::ToInt32(this->textBox4->Text);

				money = myReader->GetDouble(3);
				credit = myReader->GetInt32(5);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		myReader->Close();
		
		
		if (money < 0)
		{
			if (money + i > 0 && credit < 60)
			{
				credit = credit + 10;
				money = money + i;
			}
			
		}
		else
		{
			money = money + i;
		}
			MySqlCommand^ cmdDatabase1 = gcnew MySqlCommand("UPDATE bank.new_table SET money ='" + money + "',credit='" + credit + "' where id = '" + user + "';", conDatabase);
			MySqlDataReader^ myReader1;
			try {
				myReader1 = cmdDatabase1->ExecuteReader();
			//	MessageBox::Show("update");
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
			myReader1->Close();
			//////////
			int moneyid = 1*100000000 + Convert::ToInt32(user) * 100 + 1;
			int count1 = 0;
			MySqlCommand^ cmdDatabase2 = gcnew MySqlCommand("SELECT * from bank.money_table where id = '" + user + "'and money_id ='" + moneyid +  "';", conDatabase);
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
				MySqlCommand^ cmdDatabase3 = gcnew MySqlCommand("insert into bank.money_table (id,money_id,amount,m_year,m_month,m_day) values ('" + user + "','" + moneyid + "','"+i+"','" + y + "','" + m + "','" + d + "');", conDatabase);
				MySqlDataReader^ myReader3;
				try {
					myReader3 = cmdDatabase3->ExecuteReader();
				//	MessageBox::Show("update");
				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->Message);
				}
				myReader3->Close();

			}
			else {
				int moneyid1;
				MySqlCommand^ cmdDatabase3 = gcnew MySqlCommand("SELECT MAX(money_id) FROM bank.money_table where id = '"+ user+ "';", conDatabase);
				MySqlDataReader^ myReader3;
				try {
					myReader3 = cmdDatabase3->ExecuteReader();
					while (myReader3->Read()) {
						moneyid1 = myReader3->GetInt32(0) ;
					}
				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->Message);
				}
				myReader3->Close();

				moneyid1 = moneyid1 + 1;
				MySqlCommand^ cmdDatabase4 = gcnew MySqlCommand("insert into bank.money_table (id,money_id,amount,m_year,m_month,m_day) values ('" + user + "','" + moneyid1 + "','" + i + "','" + y + "','" + m + "','" + d + "');", conDatabase);
				MySqlDataReader^ myReader4;
				try {
					myReader4 = cmdDatabase4->ExecuteReader();
					MessageBox::Show("存款成功!\n"+"存款"+i+"元\n存款号："+ moneyid1+"\n");
				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->Message);
				}
				myReader4->Close();


			}
	}
	};
}
