#include "TableArticleForm.h"

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
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{

	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}





	private: System::Windows::Forms::BindingSource^ bindingSource1;


	private: System::Windows::Forms::PictureBox^ imgArticle;
	private: System::Windows::Forms::TextBox^ txtNomArticle;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::RichTextBox^ txtDescriptionArticle;
	private: System::Windows::Forms::Button^ btnimgArticle;




	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Label^ labelNom;

	private: System::Windows::Forms::Label^ labelDescription;
	private: System::Windows::Forms::Label^ labelStock;
	private: System::Windows::Forms::NumericUpDown^ nbStock;
	private: System::Windows::Forms::NumericUpDown^ nbPrixUHT;
	private: System::Windows::Forms::Label^ labelPrixUHT;
	private: System::Windows::Forms::Button^ btnNouvelArticle;
	private: System::Windows::Forms::Button^ btnViewProduct;



	private: System::ComponentModel::IContainer^ components;

	protected:

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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->imgArticle = (gcnew System::Windows::Forms::PictureBox());
			this->txtNomArticle = (gcnew System::Windows::Forms::TextBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->txtDescriptionArticle = (gcnew System::Windows::Forms::RichTextBox());
			this->btnimgArticle = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->labelNom = (gcnew System::Windows::Forms::Label());
			this->labelDescription = (gcnew System::Windows::Forms::Label());
			this->labelStock = (gcnew System::Windows::Forms::Label());
			this->nbStock = (gcnew System::Windows::Forms::NumericUpDown());
			this->nbPrixUHT = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelPrixUHT = (gcnew System::Windows::Forms::Label());
			this->btnNouvelArticle = (gcnew System::Windows::Forms::Button());
			this->btnViewProduct = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgArticle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nbStock))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nbPrixUHT))->BeginInit();
			this->SuspendLayout();
			// 
			// imgArticle
			// 
			this->imgArticle->Location = System::Drawing::Point(13, 28);
			this->imgArticle->Margin = System::Windows::Forms::Padding(4);
			this->imgArticle->Name = L"imgArticle";
			this->imgArticle->Size = System::Drawing::Size(168, 198);
			this->imgArticle->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->imgArticle->TabIndex = 7;
			this->imgArticle->TabStop = false;
			// 
			// txtNomArticle
			// 
			this->txtNomArticle->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->txtNomArticle->Location = System::Drawing::Point(195, 59);
			this->txtNomArticle->Margin = System::Windows::Forms::Padding(4);
			this->txtNomArticle->Name = L"txtNomArticle";
			this->txtNomArticle->Size = System::Drawing::Size(524, 28);
			this->txtNomArticle->TabIndex = 8;
			// 
			// txtDescriptionArticle
			// 
			this->txtDescriptionArticle->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->txtDescriptionArticle->Location = System::Drawing::Point(195, 138);
			this->txtDescriptionArticle->Margin = System::Windows::Forms::Padding(4);
			this->txtDescriptionArticle->Name = L"txtDescriptionArticle";
			this->txtDescriptionArticle->Size = System::Drawing::Size(521, 138);
			this->txtDescriptionArticle->TabIndex = 9;
			this->txtDescriptionArticle->Text = L"";
			// 
			// btnimgArticle
			// 
			this->btnimgArticle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnimgArticle->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->btnimgArticle->Location = System::Drawing::Point(13, 237);
			this->btnimgArticle->Margin = System::Windows::Forms::Padding(4);
			this->btnimgArticle->Name = L"btnimgArticle";
			this->btnimgArticle->Size = System::Drawing::Size(168, 39);
			this->btnimgArticle->TabIndex = 10;
			this->btnimgArticle->Text = L"Ajouter une image";
			this->btnimgArticle->UseVisualStyleBackColor = true;
			this->btnimgArticle->Click += gcnew System::EventHandler(this, &MyForm1::btnAddImage_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// labelNom
			// 
			this->labelNom->AutoSize = true;
			this->labelNom->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelNom->Location = System::Drawing::Point(193, 32);
			this->labelNom->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelNom->Name = L"labelNom";
			this->labelNom->Size = System::Drawing::Size(119, 21);
			this->labelNom->TabIndex = 12;
			this->labelNom->Text = L"Nom de l\'article";
			// 
			// labelDescription
			// 
			this->labelDescription->AutoSize = true;
			this->labelDescription->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelDescription->Location = System::Drawing::Point(193, 114);
			this->labelDescription->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelDescription->Name = L"labelDescription";
			this->labelDescription->Size = System::Drawing::Size(163, 21);
			this->labelDescription->TabIndex = 13;
			this->labelDescription->Text = L"Description de l\'article";
			// 
			// labelStock
			// 
			this->labelStock->AutoSize = true;
			this->labelStock->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelStock->Location = System::Drawing::Point(10, 305);
			this->labelStock->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelStock->Name = L"labelStock";
			this->labelStock->Size = System::Drawing::Size(195, 21);
			this->labelStock->TabIndex = 14;
			this->labelStock->Text = L"Nombre d\'articles en stock";
			// 
			// nbStock
			// 
			this->nbStock->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->nbStock->Location = System::Drawing::Point(13, 330);
			this->nbStock->Margin = System::Windows::Forms::Padding(4);
			this->nbStock->Name = L"nbStock";
			this->nbStock->Size = System::Drawing::Size(135, 28);
			this->nbStock->TabIndex = 15;
			// 
			// nbPrixUHT
			// 
			this->nbPrixUHT->DecimalPlaces = 2;
			this->nbPrixUHT->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->nbPrixUHT->Location = System::Drawing::Point(13, 401);
			this->nbPrixUHT->Margin = System::Windows::Forms::Padding(4);
			this->nbPrixUHT->Name = L"nbPrixUHT";
			this->nbPrixUHT->Size = System::Drawing::Size(135, 28);
			this->nbPrixUHT->TabIndex = 17;
			// 
			// labelPrixUHT
			// 
			this->labelPrixUHT->AutoSize = true;
			this->labelPrixUHT->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->labelPrixUHT->Location = System::Drawing::Point(10, 376);
			this->labelPrixUHT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPrixUHT->Name = L"labelPrixUHT";
			this->labelPrixUHT->Size = System::Drawing::Size(169, 21);
			this->labelPrixUHT->TabIndex = 16;
			this->labelPrixUHT->Text = L"Prix unitaire de l\'article";
			// 
			// btnNouvelArticle
			// 
			this->btnNouvelArticle->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->btnNouvelArticle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnNouvelArticle->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnNouvelArticle->Location = System::Drawing::Point(444, 330);
			this->btnNouvelArticle->Margin = System::Windows::Forms::Padding(4);
			this->btnNouvelArticle->Name = L"btnNouvelArticle";
			this->btnNouvelArticle->Size = System::Drawing::Size(275, 54);
			this->btnNouvelArticle->TabIndex = 18;
			this->btnNouvelArticle->Text = L"NOUVEL ARTICLE";
			this->btnNouvelArticle->UseVisualStyleBackColor = false;
			this->btnNouvelArticle->Click += gcnew System::EventHandler(this, &MyForm1::btnNouvelArticle_Click);
			// 
			// btnViewProduct
			// 
			this->btnViewProduct->BackColor = System::Drawing::Color::Snow;
			this->btnViewProduct->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnViewProduct->Font = (gcnew System::Drawing::Font(L"Calibri Light", 10));
			this->btnViewProduct->Location = System::Drawing::Point(444, 401);
			this->btnViewProduct->Margin = System::Windows::Forms::Padding(4);
			this->btnViewProduct->Name = L"btnViewProduct";
			this->btnViewProduct->Size = System::Drawing::Size(275, 48);
			this->btnViewProduct->TabIndex = 19;
			this->btnViewProduct->Text = L"VOIR LES ARTICLES";
			this->btnViewProduct->UseVisualStyleBackColor = false;
			this->btnViewProduct->Click += gcnew System::EventHandler(this, &MyForm1::btnViewProduct_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(738, 457);
			this->Controls->Add(this->btnViewProduct);
			this->Controls->Add(this->btnNouvelArticle);
			this->Controls->Add(this->nbPrixUHT);
			this->Controls->Add(this->labelPrixUHT);
			this->Controls->Add(this->nbStock);
			this->Controls->Add(this->labelStock);
			this->Controls->Add(this->labelDescription);
			this->Controls->Add(this->labelNom);
			this->Controls->Add(this->btnimgArticle);
			this->Controls->Add(this->txtDescriptionArticle);
			this->Controls->Add(this->txtNomArticle);
			this->Controls->Add(this->imgArticle);
			this->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm1";
			this->Text = L"Ajout d\'un article";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgArticle))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nbStock))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nbPrixUHT))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	String^ connString = "Server=localhost;port=3306;database=dbshop;uid=root;password=root";
	MySqlConnection^ conn = gcnew MySqlConnection(connString);

	void clearFields() {
		imgArticle->ImageLocation = "";
		txtNomArticle->Text = "";
		txtDescriptionArticle->Text = "";
		nbStock->Value = 0;
		nbPrixUHT->Value = 0;
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


	private: System::Void btnNouvelArticle_Click(System::Object^ sender, System::EventArgs^ e) {

		/*int result = System::Convert::ToInt16(textBox1->Text) + System::Convert::ToInt16(textBox2->Text);
		textBox3->Text = System::Convert::ToString(result);*/

		String^ nomArticle = txtNomArticle->Text;
		String^ descriptionArticle = txtDescriptionArticle->Text;
		int stockArticle = Convert::ToInt32(nbStock->Value);
		double prixArticle = Convert::ToDouble(nbPrixUHT->Value);

		array<unsigned char>^ imageArticle;

		String^ fileLocation = imgArticle->ImageLocation;
		
		try {
			FileStream^ fs = gcnew FileStream(fileLocation, FileMode::Open, FileAccess::Read);
			BinaryReader^ br = gcnew BinaryReader(fs);
			imageArticle = br->ReadBytes(fs->Length);
		}
		catch (Exception^ e) {

		}
		


		bool isValid = true;

		if (nomArticle->Trim()->Length <= 2) {
			MessageBox::Show("Entrer un nom");
			isValid = false;
		}
		if (prixArticle <= 0) {
			MessageBox::Show("Entrer un prix");
			isValid = false;
		}

		if (isValid) {
			// INSERT DATA

			conn->Open();

			String^ cmdString = "INSERT INTO tblarticles (nomArticle,descriptionArticle,stockArticle,prixArticle,imageArticle) VALUES (@nomArticle,@descriptionArticle,@stockArticle,@prixArticle,@imageArticle)";
			MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);

			cmd->Parameters->AddWithValue("@nomArticle", nomArticle);
			cmd->Parameters->AddWithValue("@descriptionArticle", descriptionArticle);
			cmd->Parameters->AddWithValue("@stockArticle", stockArticle);
			cmd->Parameters->AddWithValue("@prixArticle", prixArticle);
			cmd->Parameters->AddWithValue("@imageArticle", imageArticle);


			try
			{
				cmd->ExecuteNonQuery();
				MessageBox::Show("L'article : " + nomArticle + " a été rajouté correctement.");
				conn->Close();
				clearFields();
			}
			catch (Exception^ e)
			{
				MessageBox::Show("Erreur lors de l'ajout");
			}

		}


	}
	private: System::Void btnAddImage_Click(System::Object^ sender, System::EventArgs^ e) {

		OpenFileDialog^ ofd = gcnew OpenFileDialog();
		ofd->Filter = "PNG Files *.png|*.png|JPG Files *.jpg|*.jpg|All files *.*|*.*";
		
		
		if (ofd->ShowDialog() == Windows::Forms::DialogResult::OK) {
			imgArticle->ImageLocation = ofd->FileName;
		}

	}
private: System::Void btnViewProduct_Click(System::Object^ sender, System::EventArgs^ e) {
	MyFormTableArticle^ ta = gcnew MyFormTableArticle();
	ta->Visible = true;
	Hide();

}

};
}
