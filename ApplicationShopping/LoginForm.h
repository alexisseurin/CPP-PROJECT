#pragma once

#include "ArticleForm.h"

namespace ProjectCLRCorbeille {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO;
	using namespace System::Xml;


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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnInscription;

	private: System::Windows::Forms::DateTimePicker^ dateNaissance;
	private: System::Windows::Forms::TextBox^ txtNom;


	private: System::Windows::Forms::TextBox^ txtPrenom;







	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ prenomLogin;

	private: System::Windows::Forms::TextBox^ nomLogin;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtMdp;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ mdpLogin;


	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnInscription = (gcnew System::Windows::Forms::Button());
			this->dateNaissance = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtNom = (gcnew System::Windows::Forms::TextBox());
			this->txtPrenom = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->prenomLogin = (gcnew System::Windows::Forms::TextBox());
			this->nomLogin = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtMdp = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->mdpLogin = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(386, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"BIENVENUE SUR VOTRE APPLICATION";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(17, 244);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 29);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Se connecter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btnInscription
			// 
			this->btnInscription->Location = System::Drawing::Point(17, 470);
			this->btnInscription->Name = L"btnInscription";
			this->btnInscription->Size = System::Drawing::Size(116, 29);
			this->btnInscription->TabIndex = 2;
			this->btnInscription->Text = L"S\'inscrire";
			this->btnInscription->UseVisualStyleBackColor = true;
			this->btnInscription->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// dateNaissance
			// 
			this->dateNaissance->CustomFormat = L"yyyy/MM/dd";
			this->dateNaissance->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateNaissance->Location = System::Drawing::Point(274, 366);
			this->dateNaissance->Name = L"dateNaissance";
			this->dateNaissance->Size = System::Drawing::Size(200, 22);
			this->dateNaissance->TabIndex = 3;
			this->dateNaissance->Value = System::DateTime(2020, 12, 4, 9, 15, 9, 0);
			// 
			// txtNom
			// 
			this->txtNom->Location = System::Drawing::Point(17, 366);
			this->txtNom->Name = L"txtNom";
			this->txtNom->Size = System::Drawing::Size(200, 22);
			this->txtNom->TabIndex = 4;
			// 
			// txtPrenom
			// 
			this->txtPrenom->Location = System::Drawing::Point(17, 421);
			this->txtPrenom->Name = L"txtPrenom";
			this->txtPrenom->Size = System::Drawing::Size(200, 22);
			this->txtPrenom->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 346);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 17);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Nom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(14, 401);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 17);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Prénom";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(272, 346);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(126, 17);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Date de naissance";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(14, 183);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(57, 17);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Prénom";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(14, 128);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(37, 17);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Nom";
			// 
			// prenomLogin
			// 
			this->prenomLogin->Location = System::Drawing::Point(17, 203);
			this->prenomLogin->Name = L"prenomLogin";
			this->prenomLogin->Size = System::Drawing::Size(200, 22);
			this->prenomLogin->TabIndex = 14;
			// 
			// nomLogin
			// 
			this->nomLogin->Location = System::Drawing::Point(17, 148);
			this->nomLogin->Name = L"nomLogin";
			this->nomLogin->Size = System::Drawing::Size(200, 22);
			this->nomLogin->TabIndex = 13;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(272, 401);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(93, 17);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Mot de passe";
			// 
			// txtMdp
			// 
			this->txtMdp->Location = System::Drawing::Point(274, 421);
			this->txtMdp->Name = L"txtMdp";
			this->txtMdp->Size = System::Drawing::Size(306, 22);
			this->txtMdp->TabIndex = 17;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(271, 183);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(93, 17);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Mot de passe";
			// 
			// mdpLogin
			// 
			this->mdpLogin->Location = System::Drawing::Point(274, 203);
			this->mdpLogin->Name = L"mdpLogin";
			this->mdpLogin->Size = System::Drawing::Size(306, 22);
			this->mdpLogin->TabIndex = 20;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(631, 508);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->mdpLogin);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtMdp);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->prenomLogin);
			this->Controls->Add(this->nomLogin);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtPrenom);
			this->Controls->Add(this->txtNom);
			this->Controls->Add(this->dateNaissance);
			this->Controls->Add(this->btnInscription);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	String^ connString = "Server=localhost;port=3306;database=dbshop;uid=root;password=root";
	MySqlConnection^ conn = gcnew MySqlConnection(connString);

	void clearFields() {
		txtNom->Text = "";
		txtPrenom->Text = "";
		dateNaissance->Text = "";
		txtMdp->Text = "";
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	// if (je suis admin ou utilisateur) REDIRECTION SI L'UN OU L'AUTRE

		/*String^ nomLogin = txtNom->Text;
		String^ prenomLogin = txtPrenom->Text;
		String^ MdpLogin = txtMdp->Text;

		String^ cmdString = "SELECT * FROM admin WHERE admin = 1";
		MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);*/
		
		MyForm1^ ta = gcnew MyForm1();
		ta->Visible = true;
		Hide();

		/*try
		{
			cmd->ExecuteNonQuery();

				MessageBox::Show("Inscription réussie");
				conn->Close();
				clearFields();
				MyForm1^ ta = gcnew MyForm1();
				ta->Visible = true;
				Hide();
			
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Erreur lors de l'inscription");
		}*/

	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ nom = txtNom->Text;
		String^ prenom = txtPrenom->Text;
		String^ dateNaissanceInscription = dateNaissance->Text;
		String^ MdpInscription = txtMdp->Text;


			conn->Open();

			String^ cmdString = "INSERT INTO clientele (nom,prenom,dateNaissance,Motdepasse) VALUES (@nom,@prenom,@dateNaissance,@motDePasse)";
			MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);

			cmd->Parameters->AddWithValue("@nom", nom);
		    cmd->Parameters->AddWithValue("@prenom", prenom);
		    cmd->Parameters->AddWithValue("@dateNaissance", dateNaissanceInscription);
		    cmd->Parameters->AddWithValue("@motDePasse", MdpInscription);


			try
			{
				cmd->ExecuteNonQuery();
				MessageBox::Show("Inscription réussie");
				conn->Close();
				clearFields();
			}
			catch (Exception^ e)
			{
				MessageBox::Show("Erreur lors de l'inscription");
			}
			
	}
	
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	try {
		conn->Open();
		MessageBox::Show("Connexion à la base de données validée");
		conn->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show("Erreur de connexion");
	}


}
};
}
