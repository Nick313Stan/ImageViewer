#pragma once

namespace ImageViewer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ picBox;
	protected:

	private: System::Windows::Forms::Button^ btnOpen;
	private: System::Windows::Forms::OpenFileDialog^ openWIN;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Button^ btnDefault;
	private: System::Windows::Forms::Button^ btnZoomIn;
	private: System::Windows::Forms::Button^ btnZoomOut;
	private: System::Windows::Forms::Button^ btnEmpty;
	private: System::Windows::Forms::Button^ btnNext;

	private: System::Windows::Forms::Button^ btnPrev;
	private: System::Windows::Forms::Button^ btnReset;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->picBox = (gcnew System::Windows::Forms::PictureBox());
			this->btnOpen = (gcnew System::Windows::Forms::Button());
			this->openWIN = (gcnew System::Windows::Forms::OpenFileDialog());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnDefault = (gcnew System::Windows::Forms::Button());
			this->btnZoomIn = (gcnew System::Windows::Forms::Button());
			this->btnZoomOut = (gcnew System::Windows::Forms::Button());
			this->btnEmpty = (gcnew System::Windows::Forms::Button());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->btnPrev = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBox))->BeginInit();
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// picBox
			// 
			this->picBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->picBox->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->picBox->Location = System::Drawing::Point(12, 28);
			this->picBox->Name = L"picBox";
			this->picBox->Size = System::Drawing::Size(565, 338);
			this->picBox->TabIndex = 1;
			this->picBox->TabStop = false;
			// 
			// btnOpen
			// 
			this->btnOpen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->btnOpen->Location = System::Drawing::Point(512, 3);
			this->btnOpen->Name = L"btnOpen";
			this->btnOpen->Size = System::Drawing::Size(74, 71);
			this->btnOpen->TabIndex = 2;
			this->btnOpen->Text = L"Open";
			this->btnOpen->UseVisualStyleBackColor = true;
			this->btnOpen->Click += gcnew System::EventHandler(this, &MyForm::btnOpen_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(57)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->flowLayoutPanel1->Controls->Add(this->btnOpen);
			this->flowLayoutPanel1->Controls->Add(this->btnClose);
			this->flowLayoutPanel1->Controls->Add(this->btnDefault);
			this->flowLayoutPanel1->Controls->Add(this->btnZoomIn);
			this->flowLayoutPanel1->Controls->Add(this->btnZoomOut);
			this->flowLayoutPanel1->Controls->Add(this->btnEmpty);
			this->flowLayoutPanel1->Controls->Add(this->btnNext);
			this->flowLayoutPanel1->Controls->Add(this->btnPrev);
			this->flowLayoutPanel1->Controls->Add(this->btnReset);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 384);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(589, 74);
			this->flowLayoutPanel1->TabIndex = 3;
			// 
			// btnClose
			// 
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->btnClose->Location = System::Drawing::Point(435, 3);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(71, 71);
			this->btnClose->TabIndex = 3;
			this->btnClose->Text = L"Close";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// btnDefault
			// 
			this->btnDefault->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->btnDefault->Location = System::Drawing::Point(389, 3);
			this->btnDefault->Name = L"btnDefault";
			this->btnDefault->Size = System::Drawing::Size(40, 71);
			this->btnDefault->TabIndex = 4;
			this->btnDefault->Text = L"=";
			this->btnDefault->UseVisualStyleBackColor = true;
			this->btnDefault->Click += gcnew System::EventHandler(this, &MyForm::btnDefault_Click);
			// 
			// btnZoomIn
			// 
			this->btnZoomIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->btnZoomIn->Location = System::Drawing::Point(343, 3);
			this->btnZoomIn->Name = L"btnZoomIn";
			this->btnZoomIn->Size = System::Drawing::Size(40, 71);
			this->btnZoomIn->TabIndex = 5;
			this->btnZoomIn->Text = L"+";
			this->btnZoomIn->UseVisualStyleBackColor = true;
			this->btnZoomIn->Click += gcnew System::EventHandler(this, &MyForm::btnZoomIn_Click);
			// 
			// btnZoomOut
			// 
			this->btnZoomOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->btnZoomOut->Location = System::Drawing::Point(297, 3);
			this->btnZoomOut->Name = L"btnZoomOut";
			this->btnZoomOut->Size = System::Drawing::Size(40, 71);
			this->btnZoomOut->TabIndex = 6;
			this->btnZoomOut->Text = L"-";
			this->btnZoomOut->UseVisualStyleBackColor = true;
			this->btnZoomOut->Click += gcnew System::EventHandler(this, &MyForm::btnZoomOut_Click);
			// 
			// btnEmpty
			// 
			this->btnEmpty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->btnEmpty->Location = System::Drawing::Point(251, 3);
			this->btnEmpty->Name = L"btnEmpty";
			this->btnEmpty->Size = System::Drawing::Size(40, 71);
			this->btnEmpty->TabIndex = 7;
			this->btnEmpty->UseVisualStyleBackColor = true;
			// 
			// btnNext
			// 
			this->btnNext->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->btnNext->Location = System::Drawing::Point(205, 3);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(40, 71);
			this->btnNext->TabIndex = 8;
			this->btnNext->Text = L">";
			this->btnNext->UseVisualStyleBackColor = true;
			this->btnNext->Click += gcnew System::EventHandler(this, &MyForm::btnNext_Click);
			// 
			// btnPrev
			// 
			this->btnPrev->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->btnPrev->Location = System::Drawing::Point(159, 3);
			this->btnPrev->Name = L"btnPrev";
			this->btnPrev->Size = System::Drawing::Size(40, 71);
			this->btnPrev->TabIndex = 9;
			this->btnPrev->Text = L"<";
			this->btnPrev->UseVisualStyleBackColor = true;
			this->btnPrev->Click += gcnew System::EventHandler(this, &MyForm::btnPrev_Click);
			// 
			// btnReset
			// 
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->btnReset->Location = System::Drawing::Point(9, 3);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(144, 71);
			this->btnReset->TabIndex = 10;
			this->btnReset->Text = L"Reset All";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(589, 458);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->picBox);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBox))->EndInit();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

		array<String^>^ files;
		String^ path;
		int currentIndex;
		const int zoomLevel = 100;
		int Zooms = 0;

	private: System::Void btnOpen_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (openWIN->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			picBox->ImageLocation = openWIN->FileName;
			path = System::IO::Path::GetDirectoryName(openWIN->FileName);
			files = System::IO::Directory::GetFiles(path);

			for (int i = 0; i < files->Length; i++)
			{
				if (files[i] == openWIN->FileName)
				{
					currentIndex = i;
					break;
				}
			}
		}
	}

	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Application::Restart();
	}
private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e)
{
	picBox->ImageLocation = "";
}

private: System::Void btnNext_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (currentIndex != files->Length - 1)
	{
		currentIndex++;
	}
	picBox->ImageLocation = files[currentIndex];
}

private: System::Void btnPrev_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (currentIndex != 0)
	{
		currentIndex--;
	}
	picBox->ImageLocation = files[currentIndex];
}

private: System::Void btnZoomIn_Click(System::Object^ sender, System::EventArgs^ e)
{
	picBox->Top -= zoomLevel / 2;
	picBox->Left -= zoomLevel / 2;
	picBox->Height += zoomLevel;
	picBox->Width += zoomLevel;
	Zooms++;
}

private: System::Void btnZoomOut_Click(System::Object^ sender, System::EventArgs^ e)
{
	picBox->Top += zoomLevel / 2;
	picBox->Left += zoomLevel / 2;
	picBox->Height -= zoomLevel;
	picBox->Width -= zoomLevel;
	Zooms++;
}

private: System::Void btnDefault_Click(System::Object^ sender, System::EventArgs^ e)
{
	int newZoom = Zooms;
	if (Zooms > 0)
	{
		for (int i = 0; i < newZoom; i++)
		{
			btnZoomOut->PerformClick();
		}
	}

	if (Zooms < 0)
	{
		for (int i = 0; i > newZoom; i--)
		{
			btnZoomIn->PerformClick();
		}
	}
	
	Zooms = 0;
}

};
}
