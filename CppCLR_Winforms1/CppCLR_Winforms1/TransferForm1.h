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
	/// TransferForm1 摘要
	/// </summary>
	public ref class TransferForm1 : public System::Windows::Forms::Form
	{
	public:
		String^ user;
		String^ transfer_user;
		int flag;
		double transfer_user_money;
		double transfer_money;
		double money;
		int type1;
		int type2;
		double fee;
		TransferForm1(void)
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
		~TransferForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(89, 50);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(160, 25);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(89, 125);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(160, 25);
			this->textBox2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 15);
			this->label1->TabIndex = 2;
			this->label1->Text = L"对方卡号";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 15);
			this->label2->TabIndex = 3;
			this->label2->Text = L"转账金额";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 193);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 31);
			this->button1->TabIndex = 4;
			this->button1->Text = L"验证卡号";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TransferForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(157, 193);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 31);
			this->button2->TabIndex = 5;
			this->button2->Text = L"确认转账";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &TransferForm1::button2_Click);
			// 
			// TransferForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"TransferForm1";
			this->Text = L"TransferForm1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "datasource=localhost;port=3306;username=root;password=123456";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT * FROM bank.new_table where id = '" + this->textBox1->Text + "';", conDatabase);
		MySqlDataReader^ myReader;
		try {
			int count = 0;
			conDatabase->Open();
			myReader = cmdDatabase->ExecuteReader();
			while (myReader->Read()) {
				count++;
				
				MessageBox::Show("该卡存在，可以转账！");
				if (count>0)
				{
					transfer_user = this->textBox1->Text;
					transfer_money = Convert::ToDouble(this->textBox2->Text);

					transfer_user_money = myReader->GetDouble(3);
					type2 = myReader->GetInt32(4);
					flag = 1;
				}
				else {
					flag = 0;
				}
			}
		}
		catch (Exception^ ex) {
			flag = 0;
			MessageBox::Show(ex->Message);

		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (flag == 1) {

		MessageBox::Show(this->textBox1->Text);

		String^ constring = "datasource=localhost;port=3306;username=root;password=123456";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT * FROM bank.new_table where id = '" + user + "';", conDatabase);
		MySqlDataReader^ myReader;
		try {
			conDatabase->Open();
			myReader = cmdDatabase->ExecuteReader();
			while (myReader->Read()) {
				money = myReader->GetDouble(3);
				type1 = myReader->GetInt32(4);

			}
			if (type1 == type2) {
				fee = 0.02 * transfer_money;
			}
			else {
				fee = 0.05 * transfer_money;
			}

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);

		}
		myReader->Close();

		if (money >= fee + transfer_money)
		{
			money -= fee + transfer_money;
			flag = 2;
		}
		if (flag == 2) {
			MySqlCommand^ cmdDatabase1 = gcnew MySqlCommand("UPDATE bank.new_table SET money ='" + money + "' where id = '" + user + "';", conDatabase);
			MySqlDataReader^ myReader1;
			try {
				myReader1 = cmdDatabase1->ExecuteReader();
				MessageBox::Show("转账成功！"+money);
			}
			catch (Exception^ ex1) {
				MessageBox::Show(ex1->Message);
			}
			myReader1->Close();

			transfer_user_money += transfer_money;

			MySqlCommand^ cmdDatabase2 = gcnew MySqlCommand("UPDATE bank.new_table SET money ='" + transfer_user_money + "' where id = '" + transfer_user + "';", conDatabase);
			MySqlDataReader^ myReader2;
			try {
				myReader2 = cmdDatabase2->ExecuteReader();
				MessageBox::Show("转账成功！"+ transfer_user_money);
			}
			catch (Exception^ ex1) {
				MessageBox::Show(ex1->Message);
			}
			myReader2->Close();
		}

	}
}
};
}
