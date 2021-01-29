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
	/// AdministratorForm 摘要
	/// </summary>
	public ref class AdministratorForm : public System::Windows::Forms::Form
	{
	public:
		AdministratorForm(void)
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
		~AdministratorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ text_id;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ text_name;
	private: System::Windows::Forms::TextBox^ text_passwd;
	private: System::Windows::Forms::TextBox^ text_sex;
	private: System::Windows::Forms::TextBox^ text_age;
	private: System::Windows::Forms::TextBox^ text_ability;





	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ text_type;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ text_credit;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ text_money;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ text_year;
	private: System::Windows::Forms::TextBox^ text_month;
	private: System::Windows::Forms::TextBox^ text_day;



	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ text_loanclass;
	private: System::Windows::Forms::Label^ label15;


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
			this->text_id = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->text_name = (gcnew System::Windows::Forms::TextBox());
			this->text_passwd = (gcnew System::Windows::Forms::TextBox());
			this->text_sex = (gcnew System::Windows::Forms::TextBox());
			this->text_age = (gcnew System::Windows::Forms::TextBox());
			this->text_ability = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->text_type = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->text_credit = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->text_money = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->text_year = (gcnew System::Windows::Forms::TextBox());
			this->text_month = (gcnew System::Windows::Forms::TextBox());
			this->text_day = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->text_loanclass = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// text_id
			// 
			this->text_id->Location = System::Drawing::Point(117, 66);
			this->text_id->Name = L"text_id";
			this->text_id->Size = System::Drawing::Size(157, 25);
			this->text_id->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(114, 507);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 34);
			this->button1->TabIndex = 1;
			this->button1->Text = L"添加用户";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdministratorForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 15);
			this->label1->TabIndex = 2;
			this->label1->Text = L"卡号（6位）";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 15);
			this->label2->TabIndex = 3;
			this->label2->Text = L"姓名";
			// 
			// text_name
			// 
			this->text_name->Location = System::Drawing::Point(117, 106);
			this->text_name->Name = L"text_name";
			this->text_name->Size = System::Drawing::Size(157, 25);
			this->text_name->TabIndex = 4;
			// 
			// text_passwd
			// 
			this->text_passwd->Location = System::Drawing::Point(117, 152);
			this->text_passwd->Name = L"text_passwd";
			this->text_passwd->Size = System::Drawing::Size(157, 25);
			this->text_passwd->TabIndex = 5;
			// 
			// text_sex
			// 
			this->text_sex->Location = System::Drawing::Point(117, 196);
			this->text_sex->Name = L"text_sex";
			this->text_sex->Size = System::Drawing::Size(157, 25);
			this->text_sex->TabIndex = 6;
			// 
			// text_age
			// 
			this->text_age->Location = System::Drawing::Point(117, 238);
			this->text_age->Name = L"text_age";
			this->text_age->Size = System::Drawing::Size(157, 25);
			this->text_age->TabIndex = 7;
			// 
			// text_ability
			// 
			this->text_ability->Location = System::Drawing::Point(179, 285);
			this->text_ability->Name = L"text_ability";
			this->text_ability->Size = System::Drawing::Size(95, 25);
			this->text_ability->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 155);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 15);
			this->label3->TabIndex = 9;
			this->label3->Text = L"密码";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(21, 199);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 15);
			this->label4->TabIndex = 10;
			this->label4->Text = L"性别（M/F）";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(21, 241);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 15);
			this->label5->TabIndex = 11;
			this->label5->Text = L"年龄";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(21, 288);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(137, 15);
			this->label6->TabIndex = 12;
			this->label6->Text = L"经济能力（0-100）";
			// 
			// text_type
			// 
			this->text_type->Location = System::Drawing::Point(179, 9);
			this->text_type->Name = L"text_type";
			this->text_type->Size = System::Drawing::Size(95, 25);
			this->text_type->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(21, 12);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 15);
			this->label7->TabIndex = 14;
			this->label7->Text = L"卡类别（1或2）";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(21, 334);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(152, 15);
			this->label8->TabIndex = 15;
			this->label8->Text = L"信誉度级别（0-100）";
			// 
			// text_credit
			// 
			this->text_credit->Location = System::Drawing::Point(179, 331);
			this->text_credit->Name = L"text_credit";
			this->text_credit->Size = System::Drawing::Size(95, 25);
			this->text_credit->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(21, 375);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(128, 15);
			this->label9->TabIndex = 17;
			this->label9->Text = L"存款（至少10元）";
			// 
			// text_money
			// 
			this->text_money->Location = System::Drawing::Point(179, 375);
			this->text_money->Name = L"text_money";
			this->text_money->Size = System::Drawing::Size(95, 25);
			this->text_money->TabIndex = 18;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(19, 468);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 15);
			this->label10->TabIndex = 19;
			this->label10->Text = L"开户日期";
			// 
			// text_year
			// 
			this->text_year->Location = System::Drawing::Point(92, 458);
			this->text_year->Name = L"text_year";
			this->text_year->Size = System::Drawing::Size(55, 25);
			this->text_year->TabIndex = 20;
			// 
			// text_month
			// 
			this->text_month->Location = System::Drawing::Point(172, 458);
			this->text_month->Name = L"text_month";
			this->text_month->Size = System::Drawing::Size(35, 25);
			this->text_month->TabIndex = 21;
			// 
			// text_day
			// 
			this->text_day->Location = System::Drawing::Point(241, 458);
			this->text_day->Name = L"text_day";
			this->text_day->Size = System::Drawing::Size(31, 25);
			this->text_day->TabIndex = 22;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(149, 468);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(22, 15);
			this->label11->TabIndex = 23;
			this->label11->Text = L"年";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(213, 468);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(22, 15);
			this->label12->TabIndex = 24;
			this->label12->Text = L"月";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(278, 468);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(22, 15);
			this->label13->TabIndex = 25;
			this->label13->Text = L"日";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(21, 418);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(129, 15);
			this->label14->TabIndex = 26;
			this->label14->Text = L"贷款等级（0-10）";
			// 
			// text_loanclass
			// 
			this->text_loanclass->Location = System::Drawing::Point(179, 417);
			this->text_loanclass->Name = L"text_loanclass";
			this->text_loanclass->Size = System::Drawing::Size(95, 25);
			this->text_loanclass->TabIndex = 27;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(21, 37);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(248, 15);
			this->label15->TabIndex = 28;
			this->label15->Text = L"（1：招商银行一卡通；2：牡丹卡）";
			// 
			// AdministratorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(321, 553);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->text_loanclass);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->text_day);
			this->Controls->Add(this->text_month);
			this->Controls->Add(this->text_year);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->text_money);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->text_credit);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->text_type);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->text_ability);
			this->Controls->Add(this->text_age);
			this->Controls->Add(this->text_sex);
			this->Controls->Add(this->text_passwd);
			this->Controls->Add(this->text_name);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->text_id);
			this->Name = L"AdministratorForm";
			this->Text = L"AdministratorForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "datasource=localhost;port=3306;username=root;password=123456";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

		MySqlCommand^ cmdDatabase1 = gcnew MySqlCommand("SELECT * FROM bank.new_table where id = '" + this->text_id->Text + "';", conDatabase);

		MySqlDataReader^ myReader1;
		try {
			conDatabase->Open();
			
			myReader1 = cmdDatabase1->ExecuteReader();
			int count = 0;
			while (myReader1->Read()) {
				count++;
			}
			if (count == 1)
				MessageBox::Show("卡号重复，请重新输入！");
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		myReader1->Close();

		int l = 0;
		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("insert into bank.new_table (id,name,passwd,money,type,credit,economy_ability,loan,loan_class,loan_year,loan_month,loan_day,sex,age,create_year,create_month,create_day) values ('" + this->text_id->Text + "','" + this->text_name->Text + "','" + this->text_passwd->Text + "','" + this->text_money->Text + "','" + this->text_type->Text + "','" +this->text_credit->Text+"','"+ this->text_ability->Text + "','" + l + "','" + this->text_loanclass->Text + "','" + l + "','" + l + "','" + l + "','" + this->text_sex->Text + "','" + this->text_age->Text + "','" + this->text_year->Text + "','" + this->text_month->Text + "','" + this->text_day->Text + "');", conDatabase);
		MySqlDataReader^ myReader;
		try {
			//conDatabase->Open();

			myReader = cmdDatabase->ExecuteReader();
			if (this->text_id->Text && this->text_name->Text && this->text_passwd->Text && this->text_money->Text && (Convert::ToDouble(this->text_money->Text)>=10) &&this->text_type->Text && this->text_credit->Text && this->text_ability->Text && this->text_loanclass->Text && this->text_sex->Text && this->text_age->Text && this->text_year->Text && this->text_month->Text && this->text_day->Text)

				MessageBox::Show("saved");
			else {
				MessageBox::Show("格式不正确，请重新输入！");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}

};
}
