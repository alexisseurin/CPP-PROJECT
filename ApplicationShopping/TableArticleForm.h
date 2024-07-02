#pragma once

namespace ProjectCLRCorbeille {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO;


	/// <summary>
	/// Summary for MyFormTableArticle
	/// </summary>
	public ref class MyFormTableArticle : public System::Windows::Forms::Form
	{
	public:
		MyFormTableArticle(void)
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
		~MyFormTableArticle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ tblArticles;
	private: System::Windows::Forms::PictureBox^ imgArticleImage;
	private: System::Windows::Forms::RichTextBox^ txtArticleDescription;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ ModificationArticle;
	private: System::Windows::Forms::TabPage^ SuppressionArticle;
	private: System::Windows::Forms::Label^ labelDescription;
	private: System::Windows::Forms::Label^ labelNom;
	private: System::Windows::Forms::RichTextBox^ txtDescription;
	private: System::Windows::Forms::TextBox^ txtNom;


	private: System::Windows::Forms::NumericUpDown^ nbPrixUHT;
	private: System::Windows::Forms::Label^ labelPrixUHT;
	private: System::Windows::Forms::NumericUpDown^ nbStock;
	private: System::Windows::Forms::Label^ labelStock;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnChangerImage;

	private: System::Windows::Forms::Button^ btnDeleteItem;

	protected:

	protected:

	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormTableArticle::typeid));
			this->tblArticles = (gcnew System::Windows::Forms::DataGridView());
			this->imgArticleImage = (gcnew System::Windows::Forms::PictureBox());
			this->txtArticleDescription = (gcnew System::Windows::Forms::RichTextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->ModificationArticle = (gcnew System::Windows::Forms::TabPage());
			this->btnChangerImage = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->nbPrixUHT = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelDescription = (gcnew System::Windows::Forms::Label());
			this->labelPrixUHT = (gcnew System::Windows::Forms::Label());
			this->nbStock = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelNom = (gcnew System::Windows::Forms::Label());
			this->labelStock = (gcnew System::Windows::Forms::Label());
			this->txtDescription = (gcnew System::Windows::Forms::RichTextBox());
			this->txtNom = (gcnew System::Windows::Forms::TextBox());
			this->SuppressionArticle = (gcnew System::Windows::Forms::TabPage());
			this->btnDeleteItem = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblArticles))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgArticleImage))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->ModificationArticle->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nbPrixUHT))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nbStock))->BeginInit();
			this->SuppressionArticle->SuspendLayout();
			this->SuspendLayout();
			// 
			// tblArticles
			// 
			this->tblArticles->AllowUserToAddRows = false;
			this->tblArticles->AllowUserToDeleteRows = false;
			this->tblArticles->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->tblArticles->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->tblArticles->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tblArticles->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->tblArticles->Location = System::Drawing::Point(488, 12);
			this->tblArticles->MultiSelect = false;
			this->tblArticles->Name = L"tblArticles";
			this->tblArticles->ReadOnly = true;
			this->tblArticles->RowHeadersWidth = 51;
			this->tblArticles->RowTemplate->Height = 24;
			this->tblArticles->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->tblArticles->Size = System::Drawing::Size(406, 557);
			this->tblArticles->TabIndex = 1;
			this->tblArticles->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormTableArticle::tblArticles_CellClick);
			// 
			// imgArticleImage
			// 
			this->imgArticleImage->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->imgArticleImage->Location = System::Drawing::Point(12, 12);
			this->imgArticleImage->Name = L"imgArticleImage";
			this->imgArticleImage->Size = System::Drawing::Size(150, 150);
			this->imgArticleImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgArticleImage->TabIndex = 2;
			this->imgArticleImage->TabStop = false;
			// 
			// txtArticleDescription
			// 
			this->txtArticleDescription->Location = System::Drawing::Point(168, 12);
			this->txtArticleDescription->Name = L"txtArticleDescription";
			this->txtArticleDescription->ReadOnly = true;
			this->txtArticleDescription->Size = System::Drawing::Size(314, 150);
			this->txtArticleDescription->TabIndex = 3;
			this->txtArticleDescription->Text = L"";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->ModificationArticle);
			this->tabControl1->Controls->Add(this->SuppressionArticle);
			this->tabControl1->Location = System::Drawing::Point(12, 168);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(470, 401);
			this->tabControl1->TabIndex = 4;
			// 
			// ModificationArticle
			// 
			this->ModificationArticle->Controls->Add(this->btnChangerImage);
			this->ModificationArticle->Controls->Add(this->btnUpdate);
			this->ModificationArticle->Controls->Add(this->nbPrixUHT);
			this->ModificationArticle->Controls->Add(this->labelDescription);
			this->ModificationArticle->Controls->Add(this->labelPrixUHT);
			this->ModificationArticle->Controls->Add(this->nbStock);
			this->ModificationArticle->Controls->Add(this->labelNom);
			this->ModificationArticle->Controls->Add(this->labelStock);
			this->ModificationArticle->Controls->Add(this->txtDescription);
			this->ModificationArticle->Controls->Add(this->txtNom);
			this->ModificationArticle->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ModificationArticle->Location = System::Drawing::Point(4, 30);
			this->ModificationArticle->Name = L"ModificationArticle";
			this->ModificationArticle->Padding = System::Windows::Forms::Padding(3);
			this->ModificationArticle->Size = System::Drawing::Size(462, 367);
			this->ModificationArticle->TabIndex = 0;
			this->ModificationArticle->Text = L"Modification Article";
			this->ModificationArticle->UseVisualStyleBackColor = true;
			// 
			// btnChangerImage
			// 
			this->btnChangerImage->BackColor = System::Drawing::Color::DarkOliveGreen;
			this->btnChangerImage->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Italic));
			this->btnChangerImage->ForeColor = System::Drawing::Color::White;
			this->btnChangerImage->Location = System::Drawing::Point(263, 260);
			this->btnChangerImage->Name = L"btnChangerImage";
			this->btnChangerImage->Size = System::Drawing::Size(193, 54);
			this->btnChangerImage->TabIndex = 23;
			this->btnChangerImage->Text = L"Changer l\'image";
			this->btnChangerImage->UseVisualStyleBackColor = false;
			this->btnChangerImage->Click += gcnew System::EventHandler(this, &MyFormTableArticle::btnChangerImage_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->BackColor = System::Drawing::Color::PapayaWhip;
			this->btnUpdate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->ForeColor = System::Drawing::Color::DarkRed;
			this->btnUpdate->Location = System::Drawing::Point(9, 320);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(447, 41);
			this->btnUpdate->TabIndex = 22;
			this->btnUpdate->Text = L"Mise à jour de l\'article";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &MyFormTableArticle::btnUpdate_Click);
			// 
			// nbPrixUHT
			// 
			this->nbPrixUHT->DecimalPlaces = 2;
			this->nbPrixUHT->Font = (gcnew System::Drawing::Font(L"Calibri Light", 10));
			this->nbPrixUHT->Location = System::Drawing::Point(229, 226);
			this->nbPrixUHT->Name = L"nbPrixUHT";
			this->nbPrixUHT->Size = System::Drawing::Size(120, 28);
			this->nbPrixUHT->TabIndex = 21;
			// 
			// labelDescription
			// 
			this->labelDescription->AutoSize = true;
			this->labelDescription->Font = (gcnew System::Drawing::Font(L"Calibri Light", 10));
			this->labelDescription->Location = System::Drawing::Point(6, 65);
			this->labelDescription->Name = L"labelDescription";
			this->labelDescription->Size = System::Drawing::Size(163, 21);
			this->labelDescription->TabIndex = 17;
			this->labelDescription->Text = L"Description de l\'article";
			// 
			// labelPrixUHT
			// 
			this->labelPrixUHT->AutoSize = true;
			this->labelPrixUHT->Font = (gcnew System::Drawing::Font(L"Calibri Light", 10));
			this->labelPrixUHT->Location = System::Drawing::Point(225, 202);
			this->labelPrixUHT->Name = L"labelPrixUHT";
			this->labelPrixUHT->Size = System::Drawing::Size(169, 21);
			this->labelPrixUHT->TabIndex = 20;
			this->labelPrixUHT->Text = L"Prix unitaire de l\'article";
			// 
			// nbStock
			// 
			this->nbStock->Font = (gcnew System::Drawing::Font(L"Calibri Light", 10));
			this->nbStock->Location = System::Drawing::Point(9, 226);
			this->nbStock->Name = L"nbStock";
			this->nbStock->Size = System::Drawing::Size(120, 28);
			this->nbStock->TabIndex = 19;
			// 
			// labelNom
			// 
			this->labelNom->AutoSize = true;
			this->labelNom->Font = (gcnew System::Drawing::Font(L"Calibri Light", 10));
			this->labelNom->Location = System::Drawing::Point(6, 4);
			this->labelNom->Name = L"labelNom";
			this->labelNom->Size = System::Drawing::Size(118, 21);
			this->labelNom->TabIndex = 16;
			this->labelNom->Text = L"Nom de l\'article";
			// 
			// labelStock
			// 
			this->labelStock->AutoSize = true;
			this->labelStock->Font = (gcnew System::Drawing::Font(L"Calibri Light", 10));
			this->labelStock->Location = System::Drawing::Point(5, 202);
			this->labelStock->Name = L"labelStock";
			this->labelStock->Size = System::Drawing::Size(194, 21);
			this->labelStock->TabIndex = 18;
			this->labelStock->Text = L"Nombre d\'articles en stock";
			// 
			// txtDescription
			// 
			this->txtDescription->Font = (gcnew System::Drawing::Font(L"Calibri Light", 10));
			this->txtDescription->Location = System::Drawing::Point(12, 89);
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(447, 104);
			this->txtDescription->TabIndex = 15;
			this->txtDescription->Text = L"";
			// 
			// txtNom
			// 
			this->txtNom->Font = (gcnew System::Drawing::Font(L"Calibri Light", 10));
			this->txtNom->Location = System::Drawing::Point(9, 28);
			this->txtNom->Name = L"txtNom";
			this->txtNom->Size = System::Drawing::Size(447, 28);
			this->txtNom->TabIndex = 14;
			// 
			// SuppressionArticle
			// 
			this->SuppressionArticle->Controls->Add(this->btnDeleteItem);
			this->SuppressionArticle->Location = System::Drawing::Point(4, 30);
			this->SuppressionArticle->Name = L"SuppressionArticle";
			this->SuppressionArticle->Padding = System::Windows::Forms::Padding(3);
			this->SuppressionArticle->Size = System::Drawing::Size(462, 367);
			this->SuppressionArticle->TabIndex = 1;
			this->SuppressionArticle->Text = L"Suppression Article";
			this->SuppressionArticle->UseVisualStyleBackColor = true;
			// 
			// btnDeleteItem
			// 
			this->btnDeleteItem->BackColor = System::Drawing::Color::Tomato;
			this->btnDeleteItem->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDeleteItem->ForeColor = System::Drawing::Color::Black;
			this->btnDeleteItem->Location = System::Drawing::Point(175, 305);
			this->btnDeleteItem->Name = L"btnDeleteItem";
			this->btnDeleteItem->Size = System::Drawing::Size(281, 56);
			this->btnDeleteItem->TabIndex = 0;
			this->btnDeleteItem->Text = L"Suppression de l\'article";
			this->btnDeleteItem->UseVisualStyleBackColor = false;
			this->btnDeleteItem->Click += gcnew System::EventHandler(this, &MyFormTableArticle::btnDeleteItem_Click);
			// 
			// MyFormTableArticle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSlateGray;
			this->ClientSize = System::Drawing::Size(906, 581);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->txtArticleDescription);
			this->Controls->Add(this->imgArticleImage);
			this->Controls->Add(this->tblArticles);
			this->Font = (gcnew System::Drawing::Font(L"Calibri Light", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyFormTableArticle";
			this->Text = L"Voir les articles";
			this->Load += gcnew System::EventHandler(this, &MyFormTableArticle::MyFormTableArticle_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblArticles))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgArticleImage))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->ModificationArticle->ResumeLayout(false);
			this->ModificationArticle->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nbPrixUHT))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nbStock))->EndInit();
			this->SuppressionArticle->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	String^ connString = "Server=localhost;port=3306;database=dbshop;uid=root;password=root";
	MySqlConnection^ conn = gcnew MySqlConnection(connString);

	void populateTable() {
		try {
			conn->Open();
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT id,nomArticle,stockArticle,prixArticle FROM tblarticles", conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			tblArticles->DataSource = dt;
			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show("Impossible de lire les données");
		}
	}

	private: System::Void MyFormTableArticle_Load(System::Object^ sender, System::EventArgs^ e) {

		populateTable();
	}

	private: System::Void tblArticles_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		
		String^ currentID = tblArticles->Rows[tblArticles->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

		try {
			conn->Open();

			imgArticleImage->Image = nullptr;
			txtArticleDescription->Text = "";
			txtNom->Text = "";
			txtDescription->Text = "";
			nbPrixUHT->Value = 0;
			nbStock->Value = 0;


			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT imageArticle, descriptionArticle FROM tblarticles WHERE id = " + currentID, conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);

			String^ articleDescription = dt->Rows[0]->ItemArray[1]->ToString();
			txtArticleDescription->Text = articleDescription;

			txtDescription->Text = articleDescription;
			txtNom->Text = tblArticles->Rows[tblArticles->CurrentCell->RowIndex]->Cells[1]->Value->ToString();

			nbStock->Value = Convert::ToInt32(tblArticles->Rows[tblArticles->CurrentCell->RowIndex]->Cells[2]->Value);

			nbPrixUHT->Value = Convert::ToDecimal(tblArticles->Rows[tblArticles->CurrentCell->RowIndex]->Cells[3]->Value);

			array<unsigned char>^ articleImage = (array<unsigned char>^)dt->Rows[0]->ItemArray[0];
			MemoryStream^ ms = gcnew MemoryStream(articleImage);
			imgArticleImage->Image = Image::FromStream(ms);

			conn->Close();
		}
		catch (Exception^ e) {
			//MessageBox::Show("Erreur lors de la lecture des données.");
			conn->Close();
		}

	}

	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ currentID = tblArticles->Rows[tblArticles->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

		String^ nomArticle = txtNom->Text;
		String^ descriptionArticle = txtDescription->Text;
		int stockArticle = Convert::ToInt32(nbStock->Value);
		double prixArticle = Convert::ToDouble(nbPrixUHT->Value);

		array<unsigned char>^ imageArticle;

		try {
			MemoryStream^ ms = gcnew MemoryStream();

			if (imgArticleImage->Image != nullptr) {
				imgArticleImage->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
				imageArticle = ms->ToArray();
			}
		}
		catch (Exception^ e){

		}

		try {
			conn->Open();

			MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE tblarticles SET nomArticle=@nomArticle,descriptionArticle=@descriptionArticle,stockArticle=@stockArticle,prixArticle=@prixArticle,imageArticle=@imageArticle WHERE id = " + currentID, conn);

			cmd->Parameters->AddWithValue("@nomArticle", nomArticle);
			cmd->Parameters->AddWithValue("@descriptionArticle", descriptionArticle);
			cmd->Parameters->AddWithValue("@stockArticle", stockArticle);
			cmd->Parameters->AddWithValue("@prixArticle", prixArticle);
			cmd->Parameters->AddWithValue("@imageArticle", imageArticle);

			cmd->ExecuteNonQuery();

			MessageBox::Show(nomArticle + " a correctement été mis à jour.");
			
			conn->Close();
			populateTable();
		}
		catch (Exception^ e) {
			MessageBox::Show(nomArticle + "Erreur de mise à jour");
		}

	}
private: System::Void btnChangerImage_Click(System::Object^ sender, System::EventArgs^ e) {

	OpenFileDialog^ ofd = gcnew OpenFileDialog();
	ofd->Filter = "PNG Files *.png|*.png|JPG Files *.jpg|*.jpg|All files *.*|*.*";


	if (ofd->ShowDialog() == Windows::Forms::DialogResult::OK) {
		imgArticleImage->ImageLocation = ofd->FileName;
	}
}
private: System::Void btnDeleteItem_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentID = tblArticles->Rows[tblArticles->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	try {
		conn->Open();
		MySqlCommand^ cmd = gcnew MySqlCommand("DELETE FROM tblarticles WHERE id =" + currentID, conn);
		cmd->ExecuteNonQuery();
		conn->Close();

		MessageBox::Show("Article correctement supprimé");
		populateTable();
	}
	catch (Exception^ e) {
		MessageBox::Show("Erreur de suppression");
	}

}
};
}
