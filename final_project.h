namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for final_project
	/// FINAL PROJECT FOR CIS 155, Although not programmed as directed
	/// This program instead showing the missing word, asks the user to pick/fill in the blank with provided
	/// 
	/// 
	/// 
	/// </summary>
	public ref class final_project : public System::Windows::Forms::Form
	{
	public:
		final_project(void)
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
		~final_project()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ devName;
	private: System::Windows::Forms::Label^ info;



	private: System::Windows::Forms::Label^ profName;
	private: System::Windows::Forms::Label^ gameText;
	private: System::Windows::Forms::Button^ optOne;
	private: System::Windows::Forms::Button^ optTwo;
	private: System::Windows::Forms::Button^ optThree;
	private: System::Windows::Forms::Button^ exitButton;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->devName = (gcnew System::Windows::Forms::Label());
			this->info = (gcnew System::Windows::Forms::Label());
			this->profName = (gcnew System::Windows::Forms::Label());
			this->gameText = (gcnew System::Windows::Forms::Label());
			this->optOne = (gcnew System::Windows::Forms::Button());
			this->optTwo = (gcnew System::Windows::Forms::Button());
			this->optThree = (gcnew System::Windows::Forms::Button());
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Location = System::Drawing::Point(239, 196);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"BEGAN";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &final_project::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::SpringGreen;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(158, 132);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(271, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"CIS 155 FINAL PROJECT ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// devName
			// 
			this->devName->AutoSize = true;
			this->devName->Location = System::Drawing::Point(267, 272);
			this->devName->Name = L"devName";
			this->devName->Size = System::Drawing::Size(69, 17);
			this->devName->TabIndex = 2;
			this->devName->Text = L"Dev Patel";
			this->devName->Click += gcnew System::EventHandler(this, &final_project::devName_Click);
			// 
			// info
			// 
			this->info->AutoSize = true;
			this->info->Location = System::Drawing::Point(9, 18);
			this->info->Name = L"info";
			this->info->Size = System::Drawing::Size(547, 17);
			this->info->TabIndex = 4;
			this->info->Text = L"Guess the correct word! If the answer is correct, the program will automatically "
				L"go next";
			this->info->Visible = false;
			this->info->Click += gcnew System::EventHandler(this, &final_project::info_Click);
			// 
			// profName
			// 
			this->profName->AutoSize = true;
			this->profName->Location = System::Drawing::Point(236, 289);
			this->profName->Name = L"profName";
			this->profName->Size = System::Drawing::Size(132, 17);
			this->profName->TabIndex = 5;
			this->profName->Text = L"Professor Kholodov";
			// 
			// gameText
			// 
			this->gameText->AutoSize = true;
			this->gameText->BackColor = System::Drawing::Color::SpringGreen;
			this->gameText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gameText->Location = System::Drawing::Point(20, 68);
			this->gameText->Name = L"gameText";
			this->gameText->Size = System::Drawing::Size(574, 29);
			this->gameText->TabIndex = 6;
			this->gameText->Text = L"An _______ is a fruit that can be red, green, or yellow";
			this->gameText->Visible = false;
			this->gameText->Click += gcnew System::EventHandler(this, &final_project::gameText_Click);
			// 
			// optOne
			// 
			this->optOne->BackColor = System::Drawing::Color::Tan;
			this->optOne->ForeColor = System::Drawing::SystemColors::WindowText;
			this->optOne->Location = System::Drawing::Point(51, 365);
			this->optOne->Name = L"optOne";
			this->optOne->Size = System::Drawing::Size(111, 40);
			this->optOne->TabIndex = 7;
			this->optOne->Text = L"Apple";
			this->optOne->UseVisualStyleBackColor = false;
			this->optOne->Visible = false;
			this->optOne->Click += gcnew System::EventHandler(this, &final_project::optOne_Click);
			// 
			// optTwo
			// 
			this->optTwo->BackColor = System::Drawing::Color::Tan;
			this->optTwo->ForeColor = System::Drawing::SystemColors::WindowText;
			this->optTwo->Location = System::Drawing::Point(239, 365);
			this->optTwo->Name = L"optTwo";
			this->optTwo->Size = System::Drawing::Size(111, 40);
			this->optTwo->TabIndex = 8;
			this->optTwo->Text = L"Banana";
			this->optTwo->UseVisualStyleBackColor = false;
			this->optTwo->Visible = false;
			this->optTwo->Click += gcnew System::EventHandler(this, &final_project::optTwo_Click);
			// 
			// optThree
			// 
			this->optThree->BackColor = System::Drawing::Color::Tan;
			this->optThree->ForeColor = System::Drawing::SystemColors::WindowText;
			this->optThree->Location = System::Drawing::Point(429, 365);
			this->optThree->Name = L"optThree";
			this->optThree->Size = System::Drawing::Size(111, 40);
			this->optThree->TabIndex = 9;
			this->optThree->Text = L"Pear";
			this->optThree->UseVisualStyleBackColor = false;
			this->optThree->Visible = false;
			this->optThree->Click += gcnew System::EventHandler(this, &final_project::optThree_Click);
			// 
			// exitButton
			// 
			this->exitButton->BackColor = System::Drawing::Color::Salmon;
			this->exitButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->exitButton->Location = System::Drawing::Point(513, 450);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(90, 35);
			this->exitButton->TabIndex = 10;
			this->exitButton->Text = L"EXIT";
			this->exitButton->UseVisualStyleBackColor = false;
			this->exitButton->Click += gcnew System::EventHandler(this, &final_project::exitButton_Click);
			// 
			// final_project
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(606, 486);
			this->Controls->Add(this->exitButton);
			this->Controls->Add(this->optThree);
			this->Controls->Add(this->optTwo);
			this->Controls->Add(this->optOne);
			this->Controls->Add(this->gameText);
			this->Controls->Add(this->profName);
			this->Controls->Add(this->info);
			this->Controls->Add(this->devName);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->Name = L"final_project";
			this->Text = L"CIS 122 FINAL PROJECT";
			this->Load += gcnew System::EventHandler(this, &final_project::final_project_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//THIS BUTTON STARTS EVERYTHING THE GOAL WOULD BE TO CLEAR EVERYTHING
		this->label1->Hide();
		this->devName->Hide();
		this->profName->Hide();
		this->button1->Hide();
		this->exitButton->Hide();
		//show slide one
		this->gameText->Show();
		this->info->Show();
		this->optOne->Show();
		this->optTwo->Show();
		this->optThree->Show();
	

	}
	private: System::Void final_project_Load(System::Object^ sender, System::EventArgs^ e) {


		}//close load
	//Button to validate answer for the first slide:
		   //this program does not validate both the question and answer, since we were give a words already
		   //the program checks the answer for the slide
	private: System::Void optOne_Click(System::Object^ sender, System::EventArgs^ e) {
		//for the first slide the text is about fruit so, we already know the answer is apple
		if (this->optOne->Text == "Apple") {
			//formality to change layout upon correct guess
			this->label1->Hide();
			this->gameText->Text = L"Dont go outside until it _______ raining";
			this->optOne->Text = L"Starts";
			this->optTwo->Text = L"Sings";
			this->optThree->Text = L"Stops";
		}
		else {
			//show the user the message is incorrect
			this->label1->Text = L"INCORRECT";
			this->label1->BackColor = System::Drawing::Color::Red;
			this->label1->Show();
		}

	}//closeoption1
private: System::Void gameText_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void info_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void devName_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void optTwo_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->optTwo->Text == "Drive") {
		//here we have the last slide because the question is how to drive
		//the formality to end the game
		this->label1->BackColor = System::Drawing::Color::SpringGreen;
		this->label1->Text = L"GAME OVER";
		this->optOne->Hide();
		this->optTwo->Hide();
		this->optThree->Hide();
		this->gameText->Hide();
		this->label1->Show();
		this->exitButton->Show();
	}
	else {
		//incorrect
		this->label1->Text = L"INCORRECT";
		this->label1->BackColor = System::Drawing::Color::Red;
		this->label1->Show();
	}


}//close OPTION TWO
private: System::Void optThree_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->optThree->Text == "Stops") {
		this->label1->Hide();
		this->gameText->Text = L"I am learning how to ______ a car   ";
		this->optOne->Text = L"Swim";
		this->optTwo->Text = L"Drive";
		this->optThree->Text = L"Fly";
	}
	//SHOW THE INCORRECT KESSAGE
	else {
		this->label1->Text = L"INCORRECT";
		this->label1->BackColor = System::Drawing::Color::Red;
		this->label1->Show();
	}//close else

}//CLOSE OPTION THREE
private: System::Void exitButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
};
}