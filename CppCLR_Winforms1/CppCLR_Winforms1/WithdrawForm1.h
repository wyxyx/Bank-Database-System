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
	public ref class WithdrawForm1 : public System::Windows::Forms::Form
	{
	public:
		String^ user;
		WithdrawForm1(void)
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
		~WithdrawForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
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
			this->label1->Text = L"取款金额";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(98, 157);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 31);
			this->button1->TabIndex = 2;
			this->button1->Text = L"ok";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &WithdrawForm1::button1_Click);
			// 
			// WithdrawForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"WithdrawForm1";
			this->Text = L"WithdrawForm1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ constring = "datasource=localhost;port=3306;username=root;password=123456";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT * FROM bank.new_table where id = '" + user + "';", conDatabase); //("SELECT money FROM bank.new_table where id = " + user+ ";", conDatabase);
		MySqlDataReader^ myReader;
		int type,credit,economy_ability, count;
		double i, money;
		int flag;
		try {
			conDatabase->Open();

			myReader = cmdDatabase->ExecuteReader();
			count = 0;
			while (myReader->Read()) {
				count = count + 1;
				i = Convert::ToDouble(this->textBox1->Text);
				money = myReader->GetDouble(3);
				type = myReader->GetInt32(4);
				credit = myReader->GetInt32(5);
				economy_ability = myReader->GetInt32(6);

				if (type == 2) {
					if (money < 0 && credit < 60)
					{
						//MessageBox::Show("refuse!!!!");
					}

					if (money < 0 && credit >= 60)
					{
						credit = credit - 5;
					}
				}

			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		myReader->Close();

		if (i <= money) {

			MySqlCommand^ cmdDatabase1 = gcnew MySqlCommand("UPDATE bank.new_table SET money ='" + (money - i) + "' where id = '" + user + "';", conDatabase);
			MySqlDataReader^ myReader1;
			try {
				myReader1 = cmdDatabase1->ExecuteReader();
				MessageBox::Show("取款成功！");
			}
			catch (Exception^ ex1) {
				MessageBox::Show(ex1->Message);
			}
		}
		else {
			if (type == 2) {
				if (credit >= 60) {
					int touzhimoney = (credit * 0.5 + economy_ability * 0.5) * 10;
					double mm;
					if (i - money <= touzhimoney) {
						mm = money - i;
					}
					//MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT * FROM bank.new_table where id = '" + this->textBox1->Text + "'and passwd='" + this->textBox2->Text + "';", conDatabase);


					MySqlCommand^ cmdDatabase1 = gcnew MySqlCommand("UPDATE bank.new_table SET money ='" + mm + "',credit='" + credit + "' where id = '" + user + "';", conDatabase);
					MySqlDataReader^ myReader1;
					try {
						myReader1 = cmdDatabase1->ExecuteReader();
						MessageBox::Show("取款成功！");
					}
					catch (Exception^ ex1) {
						MessageBox::Show(ex1->Message);
					}
				}
				else {
					MySqlCommand^ cmdDatabase1 = gcnew MySqlCommand("UPDATE bank.new_table SET money ='" + money + "',credit='" + credit + "' where id = '" + user + "';", conDatabase);
					MySqlDataReader^ myReader1;
					try {
						myReader1 = cmdDatabase1->ExecuteReader();
						MessageBox::Show("refuse!!!!");
					}
					catch (Exception^ ex1) {
						MessageBox::Show(ex1->Message);
					}
					
				}
			}
		}



	}
	};
}
