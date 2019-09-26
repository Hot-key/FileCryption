#pragma once
#include <Windows.h>
#include <shellapi.h>
#include "Cryptopp_.h"

namespace FileCryption
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// MyForm에 대한 요약입니다.
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:

	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  titleName;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel4;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton5;




	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton2;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Panel^  panel6;





	private: System::Windows::Forms::Button^  set_3;
	private: System::Windows::Forms::TextBox^  File_save_Pos;



	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  set_2;
	private: System::Windows::Forms::TextBox^  CryptionKey_pos;






	private: System::Windows::Forms::TextBox^  SettingFile_Pos;


	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  label6;







	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->titleName = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->bunifuFlatButton5 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuFlatButton2 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuFlatButton1 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->set_3 = (gcnew System::Windows::Forms::Button());
			this->File_save_Pos = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->set_2 = (gcnew System::Windows::Forms::Button());
			this->CryptionKey_pos = (gcnew System::Windows::Forms::TextBox());
			this->SettingFile_Pos = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->titleName);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(875, 28);
			this->panel1->TabIndex = 0;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel1_MouseUp);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox3->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.ErrorImage")));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(770, 0);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(31, 28);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			this->pictureBox3->MouseEnter += gcnew System::EventHandler(this, &MyForm::pictureBox3_MouseEnter);
			this->pictureBox3->MouseLeave += gcnew System::EventHandler(this, &MyForm::pictureBox3_MouseLeave);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(806, 0);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(31, 28);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			this->pictureBox2->MouseEnter += gcnew System::EventHandler(this, &MyForm::pictureBox2_MouseEnter);
			this->pictureBox2->MouseLeave += gcnew System::EventHandler(this, &MyForm::pictureBox2_MouseLeave);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(842, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(31, 28);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			this->pictureBox1->MouseEnter += gcnew System::EventHandler(this, &MyForm::pictureBox1_MouseEnter);
			this->pictureBox1->MouseLeave += gcnew System::EventHandler(this, &MyForm::pictureBox1_MouseLeave);
			// 
			// titleName
			// 
			this->titleName->AutoSize = true;
			this->titleName->ForeColor = System::Drawing::Color::White;
			this->titleName->Location = System::Drawing::Point(10, 7);
			this->titleName->Name = L"titleName";
			this->titleName->Size = System::Drawing::Size(156, 12);
			this->titleName->TabIndex = 2;
			this->titleName->Text = L"FileCryption - GSM Edition";
			this->titleName->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel1_MouseDown);
			this->titleName->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel1_MouseMove);
			this->titleName->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel1_MouseUp);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->panel2->Controls->Add(this->bunifuFlatButton5);
			this->panel2->Controls->Add(this->bunifuFlatButton2);
			this->panel2->Controls->Add(this->bunifuFlatButton1);
			this->panel2->Location = System::Drawing::Point(0, 28);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(219, 400);
			this->panel2->TabIndex = 1;
			// 
			// bunifuFlatButton5
			// 
			this->bunifuFlatButton5->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton5->BorderRadius = 0;
			this->bunifuFlatButton5->ButtonText = L"설정";
			this->bunifuFlatButton5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton5->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton5->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton5->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton5.Iconimage")));
			this->bunifuFlatButton5->Iconimage_right = nullptr;
			this->bunifuFlatButton5->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton5->Iconimage_Selected = nullptr;
			this->bunifuFlatButton5->IconMarginLeft = 0;
			this->bunifuFlatButton5->IconMarginRight = 0;
			this->bunifuFlatButton5->IconRightVisible = true;
			this->bunifuFlatButton5->IconRightZoom = 0;
			this->bunifuFlatButton5->IconVisible = true;
			this->bunifuFlatButton5->IconZoom = 90;
			this->bunifuFlatButton5->IsTab = false;
			this->bunifuFlatButton5->Location = System::Drawing::Point(0, 339);
			this->bunifuFlatButton5->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->bunifuFlatButton5->Name = L"bunifuFlatButton5";
			this->bunifuFlatButton5->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton5->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bunifuFlatButton5->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton5->selected = false;
			this->bunifuFlatButton5->Size = System::Drawing::Size(219, 44);
			this->bunifuFlatButton5->TabIndex = 4;
			this->bunifuFlatButton5->Text = L"설정";
			this->bunifuFlatButton5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuFlatButton5->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton5->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F));
			this->bunifuFlatButton5->Click += gcnew System::EventHandler(this, &MyForm::bunifuFlatButton5_Click);
			// 
			// bunifuFlatButton2
			// 
			this->bunifuFlatButton2->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton2->BorderRadius = 0;
			this->bunifuFlatButton2->ButtonText = L"파일 복호화";
			this->bunifuFlatButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton2->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton2->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton2->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton2.Iconimage")));
			this->bunifuFlatButton2->Iconimage_right = nullptr;
			this->bunifuFlatButton2->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton2->Iconimage_Selected = nullptr;
			this->bunifuFlatButton2->IconMarginLeft = 0;
			this->bunifuFlatButton2->IconMarginRight = 0;
			this->bunifuFlatButton2->IconRightVisible = true;
			this->bunifuFlatButton2->IconRightZoom = 0;
			this->bunifuFlatButton2->IconVisible = true;
			this->bunifuFlatButton2->IconZoom = 90;
			this->bunifuFlatButton2->IsTab = false;
			this->bunifuFlatButton2->Location = System::Drawing::Point(0, 49);
			this->bunifuFlatButton2->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->bunifuFlatButton2->Name = L"bunifuFlatButton2";
			this->bunifuFlatButton2->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton2->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bunifuFlatButton2->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton2->selected = false;
			this->bunifuFlatButton2->Size = System::Drawing::Size(219, 44);
			this->bunifuFlatButton2->TabIndex = 1;
			this->bunifuFlatButton2->Text = L"파일 복호화";
			this->bunifuFlatButton2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuFlatButton2->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton2->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F));
			this->bunifuFlatButton2->Click += gcnew System::EventHandler(this, &MyForm::bunifuFlatButton2_Click);
			// 
			// bunifuFlatButton1
			// 
			this->bunifuFlatButton1->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton1->BorderRadius = 0;
			this->bunifuFlatButton1->ButtonText = L"파일 암호화";
			this->bunifuFlatButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton1->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton1->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton1->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton1.Iconimage")));
			this->bunifuFlatButton1->Iconimage_right = nullptr;
			this->bunifuFlatButton1->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton1->Iconimage_Selected = nullptr;
			this->bunifuFlatButton1->IconMarginLeft = 0;
			this->bunifuFlatButton1->IconMarginRight = 0;
			this->bunifuFlatButton1->IconRightVisible = true;
			this->bunifuFlatButton1->IconRightZoom = 0;
			this->bunifuFlatButton1->IconVisible = true;
			this->bunifuFlatButton1->IconZoom = 90;
			this->bunifuFlatButton1->IsTab = false;
			this->bunifuFlatButton1->Location = System::Drawing::Point(0, 0);
			this->bunifuFlatButton1->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->bunifuFlatButton1->Name = L"bunifuFlatButton1";
			this->bunifuFlatButton1->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton1->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bunifuFlatButton1->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton1->selected = false;
			this->bunifuFlatButton1->Size = System::Drawing::Size(219, 44);
			this->bunifuFlatButton1->TabIndex = 0;
			this->bunifuFlatButton1->Text = L"파일 암호화";
			this->bunifuFlatButton1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuFlatButton1->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton1->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuFlatButton1->Click += gcnew System::EventHandler(this, &MyForm::bunifuFlatButton1_Click);
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(10, 772);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(656, 400);
			this->panel3->TabIndex = 2;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::Control;
			this->panel4->Controls->Add(this->button4);
			this->panel4->Controls->Add(this->button3);
			this->panel4->Controls->Add(this->comboBox3);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->textBox3);
			this->panel4->Controls->Add(this->checkBox3);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->comboBox2);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->checkBox2);
			this->panel4->Controls->Add(this->button2);
			this->panel4->Controls->Add(this->textBox2);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->label1);
			this->panel4->Controls->Add(this->comboBox1);
			this->panel4->Controls->Add(this->checkBox1);
			this->panel4->Controls->Add(this->button1);
			this->panel4->Controls->Add(this->textBox1);
			this->panel4->Location = System::Drawing::Point(219, 28);
			this->panel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(656, 400);
			this->panel4->TabIndex = 2;
			this->panel4->Visible = false;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(472, 308);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(174, 75);
			this->button4->TabIndex = 20;
			this->button4->Text = L"암호화";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(527, 55);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(119, 20);
			this->button3->TabIndex = 19;
			this->button3->Text = L"암호화 키 만들기";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->Enabled = false;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"mt19937", L"mt19937_64 ", L"WELL1024" });
			this->comboBox3->Location = System::Drawing::Point(150, 126);
			this->comboBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(126, 20);
			this->comboBox3->TabIndex = 18;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox3_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(42, 129);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 12);
			this->label5->TabIndex = 16;
			this->label5->Text = L"난수 생성기";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(368, 102);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(279, 96);
			this->textBox3->TabIndex = 15;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(284, 80);
			this->checkBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(100, 16);
			this->checkBox3->TabIndex = 14;
			this->checkBox3->Text = L"암호화키 지정";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::checkBox3_MouseClick);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(304, 104);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 12);
			this->label4->TabIndex = 13;
			this->label4->Text = L"암호화키";
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1 - 낮음", L"2", L"3 - 보통", L"4", L"5 - 최상" });
			this->comboBox2->Location = System::Drawing::Point(150, 178);
			this->comboBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(126, 20);
			this->comboBox2->TabIndex = 12;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(42, 180);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 12);
			this->label3->TabIndex = 11;
			this->label3->Text = L"암호화 강도";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Location = System::Drawing::Point(7, 154);
			this->checkBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(116, 16);
			this->checkBox2->TabIndex = 10;
			this->checkBox2->Text = L"일반 모드 활성화";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::checkBox2_MouseClick);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(527, 30);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(119, 20);
			this->button2->TabIndex = 9;
			this->button2->Text = L"암호화 키 저장";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(150, 102);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(126, 21);
			this->textBox2->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 12);
			this->label2->TabIndex = 7;
			this->label2->Text = L"암호화 횟수";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(42, 81);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 12);
			this->label1->TabIndex = 6;
			this->label1->Text = L"암호화 알고리즘";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Enabled = false;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"AES_128 ", L"AES_128 2회", L"AES_256", L"AES_128 3회",
					L"AES_256 2회"
			});
			this->comboBox1->Location = System::Drawing::Point(150, 78);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(126, 20);
			this->comboBox1->TabIndex = 4;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(7, 58);
			this->checkBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(116, 16);
			this->checkBox1->TabIndex = 3;
			this->checkBox1->Text = L"고급 기능 활성화";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::checkBox1_MouseClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(527, 5);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 21);
			this->button1->TabIndex = 1;
			this->button1->Text = L"파일 선택";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(7, 6);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(515, 46);
			this->textBox1->TabIndex = 0;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->button8);
			this->panel5->Controls->Add(this->textBox4);
			this->panel5->Controls->Add(this->checkBox4);
			this->panel5->Controls->Add(this->label7);
			this->panel5->Controls->Add(this->button6);
			this->panel5->Controls->Add(this->button7);
			this->panel5->Controls->Add(this->textBox6);
			this->panel5->Location = System::Drawing::Point(219, 28);
			this->panel5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(656, 400);
			this->panel5->TabIndex = 21;
			this->panel5->Visible = false;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(472, 308);
			this->button8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(174, 75);
			this->button8->TabIndex = 37;
			this->button8->Text = L"복호화";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(103, 74);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(545, 66);
			this->textBox4->TabIndex = 33;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(9, 57);
			this->checkBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(100, 16);
			this->checkBox4->TabIndex = 32;
			this->checkBox4->Text = L"암호화키 지정";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(39, 74);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 12);
			this->label7->TabIndex = 31;
			this->label7->Text = L"암호화키";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(514, 32);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(134, 20);
			this->button6->TabIndex = 27;
			this->button6->Text = L"암호화 키 가져오기";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(514, 6);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(134, 21);
			this->button7->TabIndex = 21;
			this->button7->Text = L"파일 선택";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(9, 7);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(500, 46);
			this->textBox6->TabIndex = 20;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->set_3);
			this->panel6->Controls->Add(this->File_save_Pos);
			this->panel6->Controls->Add(this->label9);
			this->panel6->Controls->Add(this->set_2);
			this->panel6->Controls->Add(this->CryptionKey_pos);
			this->panel6->Controls->Add(this->SettingFile_Pos);
			this->panel6->Controls->Add(this->label8);
			this->panel6->Controls->Add(this->button9);
			this->panel6->Controls->Add(this->label6);
			this->panel6->Location = System::Drawing::Point(219, 28);
			this->panel6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(656, 400);
			this->panel6->TabIndex = 3;
			this->panel6->Visible = false;
			// 
			// set_3
			// 
			this->set_3->Location = System::Drawing::Point(536, 54);
			this->set_3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->set_3->Name = L"set_3";
			this->set_3->Size = System::Drawing::Size(110, 21);
			this->set_3->TabIndex = 46;
			this->set_3->Text = L"설정";
			this->set_3->UseVisualStyleBackColor = true;
			this->set_3->Click += gcnew System::EventHandler(this, &MyForm::set_3_Click);
			// 
			// File_save_Pos
			// 
			this->File_save_Pos->Location = System::Drawing::Point(138, 54);
			this->File_save_Pos->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->File_save_Pos->Name = L"File_save_Pos";
			this->File_save_Pos->ReadOnly = true;
			this->File_save_Pos->Size = System::Drawing::Size(392, 21);
			this->File_save_Pos->TabIndex = 45;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(9, 58);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(81, 12);
			this->label9->TabIndex = 44;
			this->label9->Text = L"파일 저장위치";
			// 
			// set_2
			// 
			this->set_2->Location = System::Drawing::Point(536, 29);
			this->set_2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->set_2->Name = L"set_2";
			this->set_2->Size = System::Drawing::Size(110, 21);
			this->set_2->TabIndex = 43;
			this->set_2->Text = L"설정";
			this->set_2->UseVisualStyleBackColor = true;
			this->set_2->Click += gcnew System::EventHandler(this, &MyForm::set_2_Click);
			// 
			// CryptionKey_pos
			// 
			this->CryptionKey_pos->Location = System::Drawing::Point(138, 30);
			this->CryptionKey_pos->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->CryptionKey_pos->Name = L"CryptionKey_pos";
			this->CryptionKey_pos->ReadOnly = true;
			this->CryptionKey_pos->Size = System::Drawing::Size(392, 21);
			this->CryptionKey_pos->TabIndex = 42;
			// 
			// SettingFile_Pos
			// 
			this->SettingFile_Pos->Location = System::Drawing::Point(138, 5);
			this->SettingFile_Pos->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->SettingFile_Pos->Name = L"SettingFile_Pos";
			this->SettingFile_Pos->ReadOnly = true;
			this->SettingFile_Pos->Size = System::Drawing::Size(508, 21);
			this->SettingFile_Pos->TabIndex = 40;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(9, 33);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(113, 12);
			this->label8->TabIndex = 39;
			this->label8->Text = L"기본 암호화 키 위치";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(472, 308);
			this->button9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(174, 75);
			this->button9->TabIndex = 38;
			this->button9->Text = L"저장";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 7);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 12);
			this->label6->TabIndex = 1;
			this->label6->Text = L"설정 파일 위치";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(875, 428);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: bool isMove = false;
	private: int count = 0;
	private: Point titlePoint;
	private: Cryptopp_ CryptoEngine;
	private: array<String^>^ password_AES_Key = gcnew array<String^>(3);
	private: array<String^>^ password_AES_IV = gcnew array<String^>(3);
	private: String ^ fileDir;
	private: array<String^>^ password_AES_Key_ = gcnew array<String^>(3);
	private: array<String^>^ password_AES_IV_ = gcnew array<String^>(3);
	private: String ^ fileDir_;
	private: array<String^>^ Setting_ = gcnew array<String^>(2);
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
		this->titleName->Text = L"FileCryption - GSM Edition";
		if (System::IO::File::Exists(".\\set.data"))
		{
			Setting_ = System::IO::File::ReadAllLines(".\\set.data");
			if (Setting_ != nullptr)
			{
				if (Setting_->Length >= 2)
				{
					CryptionKey_pos->Text = Setting_[0];
					File_save_Pos->Text = Setting_[1];
				}
			}
		}
		else
		{
			System::IO::File::AppendText(".\\set.data");
		}
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		String^ message = "정말 종료하시겠습니까?";
		String^ caption = "종료";
		MessageBoxButtons buttons = MessageBoxButtons::YesNo;
		System::Windows::Forms::DialogResult result;

		// Displays the MessageBox.
		result = MessageBox::Show(this, message, caption, buttons);
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			while (this->Opacity > 0)
			{
				this->Opacity -= 0.03;
				Sleep(10);
			}
			this->Close();
		}
	}
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (this->WindowState == FormWindowState::Maximized)
		{
			this->WindowState = FormWindowState::Normal;
		}
		else
		{
			this->WindowState = FormWindowState::Maximized;
		}
	}
	private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void pictureBox1_MouseEnter(System::Object^  sender, System::EventArgs^  e)
	{
		pictureBox1->BackColor = Color::OrangeRed;
	}
	private: System::Void pictureBox2_MouseEnter(System::Object^  sender, System::EventArgs^  e)
	{
		pictureBox2->BackColor = Color::DarkGray;
	}
	private: System::Void pictureBox3_MouseEnter(System::Object^  sender, System::EventArgs^  e)
	{
		pictureBox3->BackColor = Color::DarkGray;
	}
	private: System::Void pictureBox1_MouseLeave(System::Object^  sender, System::EventArgs^  e)
	{
		pictureBox1->BackColor = Color::FromArgb(32, 34, 37);
	}
	private: System::Void pictureBox2_MouseLeave(System::Object^  sender, System::EventArgs^  e)
	{
		pictureBox2->BackColor = Color::FromArgb(32, 34, 37);
	}
	private: System::Void pictureBox3_MouseLeave(System::Object^  sender, System::EventArgs^  e)
	{
		pictureBox3->BackColor = Color::FromArgb(32, 34, 37);
	}
	private: System::Void panel1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		isMove = true;
		titlePoint = Point(e->X, e->Y);
	}
	private: System::Void panel1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		isMove = false;
	}
	private: System::Void panel1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		if (isMove && (e->Button & System::Windows::Forms::MouseButtons::Left) == System::Windows::Forms::MouseButtons::Left)
		{
			Point currentScreenPos = PointToScreen(e->Location);
			Location = Point(currentScreenPos.X - titlePoint.X, currentScreenPos.Y - titlePoint.Y);
		}
	}
	private: System::Void bunifuFlatButton1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		panel4->Show();
		panel5->Hide();
		panel6->Hide();
	}
	private: System::Void bunifuFlatButton2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		panel4->Hide();
		panel5->Show();
		panel6->Hide();
	}
	private: System::Void bunifuFlatButton5_Click(System::Object^  sender, System::EventArgs^  e)
	{
		panel4->Hide();
		panel5->Hide();
		panel6->Show();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		OpenFileDialog^ fd = gcnew OpenFileDialog();
		System::Windows::Forms::DialogResult dr = fd->ShowDialog();

		//OK버튼 클릭시
		if (dr == System::Windows::Forms::DialogResult::OK)
		{
			String^ fileFullName = fd->FileName;
			String^ fileName = fd->SafeFileName;
			String^ pathName = fileFullName->Substring(0, (fileFullName->Length - fileName->Length));

			fileDir = pathName;
			textBox1->Text = fileFullName;
		}
		else if (dr == System::Windows::Forms::DialogResult::Cancel)
		{

		}
		else
		{
			System::Windows::Forms::MessageBox::Show("파일 선택 오류!");
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (password_AES_Key == nullptr)
		{
			System::Windows::Forms::MessageBox::Show("암호화 키가 없습니다.");
		}
		else
		{
			SaveFileDialog^ fd = gcnew SaveFileDialog();
			fd->Filter = "암호화 키 파일|.FCGSM.data";
			System::Windows::Forms::DialogResult dr = fd->ShowDialog();
			if (dr == System::Windows::Forms::DialogResult::OK)
			{
				switch (comboBox1->SelectedIndex)
				{
				case 0: //1
					System::IO::File::AppendAllText(fd->FileName, comboBox1->SelectedIndex + "\r\n" + password_AES_Key[0] + "\r\n" + password_AES_IV[0]);
					break;
				case 1: //2
					System::IO::File::AppendAllText(fd->FileName, comboBox1->SelectedIndex + "\r\n" + password_AES_Key[0] + "\r\n" + password_AES_IV[0] + password_AES_Key[1] + "\r\n" + password_AES_IV[1] + "\r\n");
					break;
				case 2: //1
					System::IO::File::AppendAllText(fd->FileName, comboBox1->SelectedIndex + "\r\n" + password_AES_Key[0] + "\r\n" + password_AES_IV[0]);
					break;
				case 3: //3
					System::IO::File::AppendAllText(fd->FileName, comboBox1->SelectedIndex + "\r\n" + password_AES_Key[0] + "\r\n" + password_AES_IV[0] + password_AES_Key[1] + "\r\n" + password_AES_IV[1] + "\r\n" + password_AES_Key[2] + "\r\n" + password_AES_IV[2] + "\r\n");
					break;
				case 4: //2
					System::IO::File::AppendAllText(fd->FileName, comboBox1->SelectedIndex + "\r\n" + password_AES_Key[0] + "\r\n" + password_AES_IV[0] + "\r\n" + password_AES_Key[1] + "\r\n" + password_AES_IV[1] + "\r\n");
					break;
				default:
					break;
				}
			}
			else if (dr == System::Windows::Forms::DialogResult::Cancel)
			{

			}
			else
			{
				System::Windows::Forms::MessageBox::Show("파일 선택 오류!");
			}
		}
	}
	private: System::Void checkBox2_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		if (checkBox1->Checked)
		{
			checkBox1->Checked = false;
			comboBox1->Enabled = false;
			comboBox3->Enabled = false;
			textBox2->ReadOnly = true;
		}
		checkBox2->Checked = true;
		comboBox2->Enabled = true;
	}
	private: System::Void checkBox1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		if (checkBox2->Checked)
		{
			checkBox2->Checked = false;
			comboBox2->Enabled = false;
		}
		checkBox1->Checked = true;
		comboBox1->Enabled = true;
		comboBox3->Enabled = true;
		textBox2->ReadOnly = false;
	}
	private: System::Void checkBox3_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		if (checkBox3->Checked)
		{
			textBox3->ReadOnly = false;
		}
		else
		{
			textBox3->ReadOnly = true;
		}
	}
	private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
	{

	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
	{

		if (comboBox1->SelectedIndex == -1)
		{
			comboBox1->SelectedIndex = 0;
		}
		if (comboBox3->SelectedIndex == -1)
		{
			comboBox3->SelectedIndex = 0;
		}

		switch (comboBox1->SelectedIndex)
		{
		case 0: // 128
			password_AES_Key[0] = CryptoEngine.GetRandomString(comboBox3->SelectedIndex, 16);
			password_AES_IV[0] = CryptoEngine.GetRandomString(comboBox3->SelectedIndex, 16);
			textBox3->Text = "Key :" + password_AES_Key[0] + "\r\nIV : " + password_AES_IV[0];
			break;
		case 1: // 128 2
			password_AES_Key[0] = CryptoEngine.GetRandomString(comboBox3->SelectedIndex, 16);
			password_AES_IV[0] = CryptoEngine.GetRandomString(comboBox3->SelectedIndex, 16);
			password_AES_Key[1] = CryptoEngine.GetRandomString(comboBox3->SelectedIndex, 16);
			password_AES_IV[1] = CryptoEngine.GetRandomString(comboBox3->SelectedIndex, 16);
			textBox3->Text = "Key :" + password_AES_Key[0] + "\r\nIV : " + password_AES_IV[0] + "\r\nKey :" + password_AES_Key[1] + "\r\nIV : " + password_AES_IV[1];
			break;
		case 2: // 256
			password_AES_Key[0] = CryptoEngine.GetRandomString(comboBox3->SelectedIndex, 32);
			password_AES_IV[0] = CryptoEngine.GetRandomString(comboBox3->SelectedIndex, 16);
			textBox3->Text = "Key :" + password_AES_Key[0] + "\r\nIV : " + password_AES_IV[0];
			break;
		case 3: // 128 3
			password_AES_Key[0] = CryptoEngine.GetRandomString(comboBox3->SelectedIndex, 16);
			password_AES_IV[0] = CryptoEngine.GetRandomString(comboBox3->SelectedIndex, 16);
			password_AES_Key[1] = CryptoEngine.GetRandomString(comboBox3->SelectedIndex, 16);
			password_AES_IV[1] = CryptoEngine.GetRandomString(comboBox3->SelectedIndex, 16);
			password_AES_Key[2] = CryptoEngine.GetRandomString(comboBox3->SelectedIndex, 16);
			password_AES_IV[2] = CryptoEngine.GetRandomString(comboBox3->SelectedIndex, 16);
			textBox3->Text = "Key :" + password_AES_Key[0] + "\r\nIV : " + password_AES_IV[0] + "\r\nKey :" + password_AES_Key[1] + "\r\nIV : " + password_AES_IV[1] + "\r\nKey :" + password_AES_Key[2] + "\r\nIV : " + password_AES_IV[2];
			break;
		case 4: //256 2
			password_AES_Key[0] = CryptoEngine.GetRandomString(comboBox3->SelectedIndex, 32);
			password_AES_IV[0] = CryptoEngine.GetRandomString(comboBox3->SelectedIndex, 16);
			password_AES_Key[1] = CryptoEngine.GetRandomString(comboBox3->SelectedIndex, 32);
			password_AES_IV[1] = CryptoEngine.GetRandomString(comboBox3->SelectedIndex, 16);
			textBox3->Text = "Key :" + password_AES_Key[0] + "\r\nIV : " + password_AES_IV[0] + "\r\nKey :" + password_AES_Key[1] + "\r\nIV : " + password_AES_IV[1];
			break;
		default:
			break;
		}
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (!(textBox1->Text->Length > 0))
		{
			System::Windows::Forms::MessageBox::Show("파일 선택 오류!");
		}
		if (!(password_AES_Key->Length > 0))
		{
			button3->PerformClick();
		}
		else
		{
			int count_ = 0;
			switch (comboBox1->SelectedIndex)
			{
			case 0: // 128
				count_ = CryptoEngine.EncryptoFile_AES_128(password_AES_Key, password_AES_IV, textBox1->Text);
				break;
			case 1: // 128 2
				count_ = CryptoEngine.EncryptoFile_AES_128_2(password_AES_Key, password_AES_IV, textBox1->Text);
				break;
			case 2: // 256
				count_ = CryptoEngine.EncryptoFile_AES_256(password_AES_Key, password_AES_IV, textBox1->Text);
				break;
			case 3: // 128 3
				count_ = CryptoEngine.EncryptoFile_AES_128_3(password_AES_Key, password_AES_IV, textBox1->Text);
				break;
			case 4: //256 2
				count_ = CryptoEngine.EncryptoFile_AES_256_2(password_AES_Key, password_AES_IV, textBox1->Text);
				break;
			default:
				break;
			}
			if (count_ != 0)
			{
				System::Windows::Forms::MessageBox::Show("암호화 완료");
			}
			else
			{
				System::Windows::Forms::MessageBox::Show("암호화 실패");
			}
		}
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e)
	{
		OpenFileDialog^ fd = gcnew OpenFileDialog();
		System::Windows::Forms::DialogResult dr = fd->ShowDialog();

		//OK버튼 클릭시
		if (dr == System::Windows::Forms::DialogResult::OK)
		{
			String^ fileFullName = fd->FileName;
			String^ fileName = fd->SafeFileName;
			String^ pathName = fileFullName->Substring(0, (fileFullName->Length - fileName->Length));

			textBox6->Text = fileFullName;
		}
		else if (dr == System::Windows::Forms::DialogResult::Cancel)
		{

		}
		else
		{
			System::Windows::Forms::MessageBox::Show("파일 선택 오류!");
		}
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e)
	{
		OpenFileDialog^ fd = gcnew OpenFileDialog();
		System::Windows::Forms::DialogResult dr = fd->ShowDialog();

		//OK버튼 클릭시
		if (dr == System::Windows::Forms::DialogResult::OK)
		{
			String^ fileFullName = fd->FileName;

			array<String^>^ pw = System::IO::File::ReadAllLines(fileFullName);
			switch (Convert::ToInt32(pw[0]))
			{
			case 0: //1
				if (pw->Length != 3)
				{
					System::Windows::Forms::MessageBox::Show("손상되었거나 올바르지 않은 암호화 키 입니다.");
					return;
				}
				count = 1;
				password_AES_Key_[0] = pw[1];
				password_AES_IV_[0] = pw[2];
				textBox4->Text = "Key :" + password_AES_Key_[0] + "\r\nIV : " + password_AES_IV_[0];
				break;
			case 1: //2
				if (pw->Length != 5)
				{
					System::Windows::Forms::MessageBox::Show("손상되었거나 올바르지 않은 암호화 키 입니다.");
					return;
				}
				count = 2;
				password_AES_Key_[0] = pw[1];
				password_AES_IV_[0] = pw[2];
				password_AES_Key_[1] = pw[3];
				password_AES_IV_[1] = pw[4];
				textBox4->Text = "Key :" + password_AES_Key_[0] + "\r\nIV : " + password_AES_IV_[0] + "\r\nKey : " + password_AES_Key_[1] + "\r\nIV : " + password_AES_IV_[1];
				break;
			case 2: //1
				if (pw->Length != 3)
				{
					System::Windows::Forms::MessageBox::Show("손상되었거나 올바르지 않은 암호화 키 입니다.");
					return;
				}
				count = 1;
				password_AES_Key_[0] = pw[1];
				password_AES_IV_[0] = pw[2];
				textBox4->Text = "Key :" + password_AES_Key_[0] + "\r\nIV : " + password_AES_IV_[0];
				break;
			case 3: //3
				if (pw->Length != 7)
				{
					System::Windows::Forms::MessageBox::Show("손상되었거나 올바르지 않은 암호화 키 입니다.");
					return;
				}
				count = 3;
				password_AES_Key_[0] = pw[1];
				password_AES_IV_[0] = pw[2];
				password_AES_Key_[1] = pw[3];
				password_AES_IV_[1] = pw[4];
				password_AES_Key_[2] = pw[5];
				password_AES_IV_[2] = pw[6];
				textBox4->Text = "Key :" + password_AES_Key_[0] + "\r\nIV : " + password_AES_IV_[0] + "\r\nKey : " + password_AES_Key_[1] + "\r\nIV : " + password_AES_IV_[1] + "\r\nKey : " + password_AES_Key_[2] + "\r\nIV : " + password_AES_IV_[2];
				break;
			case 4: //2
				if (pw->Length != 5)
				{
					System::Windows::Forms::MessageBox::Show("손상되었거나 올바르지 않은 암호화 키 입니다.");
					return;
				}
				count = 2;
				password_AES_Key_[0] = pw[1];
				password_AES_IV_[0] = pw[2];
				password_AES_Key_[1] = pw[3];
				password_AES_IV_[1] = pw[4];
				textBox4->Text = "Key :" + password_AES_Key_[0] + "\r\nIV : " + password_AES_IV_[0] + "\r\nKey : " + password_AES_Key_[1] + "\r\nIV : " + password_AES_IV_[1];
				break;
			default:
				System::Windows::Forms::MessageBox::Show("손상되었거나 올바르지 않은 암호화 키 입니다.");
				return;
			}

		}
		else if (dr == System::Windows::Forms::DialogResult::Cancel)
		{

		}
		else
		{
			System::Windows::Forms::MessageBox::Show("파일 선택 오류!");
		}
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e)
	{

		if (CryptoEngine.DecryptoFile_AES(password_AES_Key_, password_AES_IV_, textBox6->Text, count) == 1)
		{
			System::Windows::Forms::MessageBox::Show("복호화 완료");
		}
		else
		{
			System::Windows::Forms::MessageBox::Show("복호화 실패");
		}
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		Setting_[0] = CryptionKey_pos->Text;
		Setting_[1] = File_save_Pos->Text;
		System::IO::File::AppendAllLines(".\\set.data", Setting_);
	}
	private: System::Void set_2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		OpenFileDialog^ fd = gcnew OpenFileDialog();
		System::Windows::Forms::DialogResult dr = fd->ShowDialog();

		//OK버튼 클릭시
		if (dr == System::Windows::Forms::DialogResult::OK)
		{
			CryptionKey_pos->Text = fd->FileName;
		}
		else if (dr == System::Windows::Forms::DialogResult::Cancel)
		{

		}
		else
		{
			System::Windows::Forms::MessageBox::Show("파일 선택 오류!");
		}
	}
	private: System::Void set_3_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		OpenFileDialog^ fd = gcnew OpenFileDialog();
		System::Windows::Forms::DialogResult dr = fd->ShowDialog();

		//OK버튼 클릭시
		if (dr == System::Windows::Forms::DialogResult::OK)
		{
			File_save_Pos->Text = fd->FileName;
		}
		else if (dr == System::Windows::Forms::DialogResult::Cancel)
		{

		}
		else
		{
			System::Windows::Forms::MessageBox::Show("파일 선택 오류!");
		}
	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		switch (comboBox2->SelectedIndex)
		{
		case 0:
			comboBox1->SelectedIndex = 0;
			comboBox3->SelectedIndex = 2;
			break;
		case 1:
			comboBox1->SelectedIndex = 1;
			comboBox3->SelectedIndex = 2;
			break;
		case 2:
			comboBox1->SelectedIndex = 2;
			comboBox3->SelectedIndex = 2;
			break;
		case 3:
			comboBox1->SelectedIndex = 3;
			comboBox3->SelectedIndex = 2;
			break;
		case 4:
			comboBox1->SelectedIndex = 4;
			comboBox3->SelectedIndex = 2;
			break;
		default:
			break;
		}
	}
};
}