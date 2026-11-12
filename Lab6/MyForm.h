#pragma once

namespace Lab6 {

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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;

	private: System::Windows::Forms::TextBox^ P1textBoxU;

	private: System::Windows::Forms::TextBox^ P1textBoxS;
	private: System::Windows::Forms::Button^ P1buttonCalculate;
	private: System::Windows::Forms::Label^ P1labelResult;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ P2dataGridViewMatrix;
	private: System::Windows::Forms::Button^ P2buttonCalculateMatrix;


	private: System::Windows::Forms::TextBox^ P2textBoxNumbers;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ P3panel1;

	private: System::Windows::Forms::Button^ P3buttonOpen;
	private: System::Windows::Forms::PictureBox^ P3pictureBox1;
	private: System::Windows::Forms::Button^ P3buttonSave;
	private: System::Windows::Forms::DataGridView^ P1dataGridView;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->P1dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->P1labelResult = (gcnew System::Windows::Forms::Label());
			this->P1buttonCalculate = (gcnew System::Windows::Forms::Button());
			this->P1textBoxU = (gcnew System::Windows::Forms::TextBox());
			this->P1textBoxS = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->P2dataGridViewMatrix = (gcnew System::Windows::Forms::DataGridView());
			this->P2buttonCalculateMatrix = (gcnew System::Windows::Forms::Button());
			this->P2textBoxNumbers = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->P3panel1 = (gcnew System::Windows::Forms::Panel());
			this->P3buttonSave = (gcnew System::Windows::Forms::Button());
			this->P3buttonOpen = (gcnew System::Windows::Forms::Button());
			this->P3pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P1dataGridView))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P2dataGridViewMatrix))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->P3panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P3pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(-2, -1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(384, 359);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->P1dataGridView);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->P1labelResult);
			this->tabPage1->Controls->Add(this->P1buttonCalculate);
			this->tabPage1->Controls->Add(this->P1textBoxU);
			this->tabPage1->Controls->Add(this->P1textBoxS);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(376, 333);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Одновимірний масив";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// P1dataGridView
			// 
			this->P1dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->P1dataGridView->Location = System::Drawing::Point(21, 157);
			this->P1dataGridView->Name = L"P1dataGridView";
			this->P1dataGridView->Size = System::Drawing::Size(345, 167);
			this->P1dataGridView->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Напруга (U):";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Потужність (S):";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(18, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(256, 15);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Обчисліть струм короткого замикання I_кз";
			// 
			// P1labelResult
			// 
			this->P1labelResult->AutoSize = true;
			this->P1labelResult->Location = System::Drawing::Point(108, 183);
			this->P1labelResult->Name = L"P1labelResult";
			this->P1labelResult->Size = System::Drawing::Size(0, 13);
			this->P1labelResult->TabIndex = 3;
			// 
			// P1buttonCalculate
			// 
			this->P1buttonCalculate->Location = System::Drawing::Point(21, 128);
			this->P1buttonCalculate->Name = L"P1buttonCalculate";
			this->P1buttonCalculate->Size = System::Drawing::Size(253, 23);
			this->P1buttonCalculate->TabIndex = 2;
			this->P1buttonCalculate->Text = L"Обчислити";
			this->P1buttonCalculate->UseVisualStyleBackColor = true;
			this->P1buttonCalculate->Click += gcnew System::EventHandler(this, &MyForm::P1buttonCalculate_Click);
			// 
			// P1textBoxU
			// 
			this->P1textBoxU->Location = System::Drawing::Point(104, 92);
			this->P1textBoxU->Multiline = true;
			this->P1textBoxU->Name = L"P1textBoxU";
			this->P1textBoxU->Size = System::Drawing::Size(170, 20);
			this->P1textBoxU->TabIndex = 1;
			// 
			// P1textBoxS
			// 
			this->P1textBoxS->Location = System::Drawing::Point(104, 57);
			this->P1textBoxS->Name = L"P1textBoxS";
			this->P1textBoxS->Size = System::Drawing::Size(170, 20);
			this->P1textBoxS->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->P2dataGridViewMatrix);
			this->tabPage2->Controls->Add(this->P2buttonCalculateMatrix);
			this->tabPage2->Controls->Add(this->P2textBoxNumbers);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(376, 333);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Матриця";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 7);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(255, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Задайте числа x1, ..... xn (через кому або пробіл) ";
			// 
			// P2dataGridViewMatrix
			// 
			this->P2dataGridViewMatrix->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->P2dataGridViewMatrix->Location = System::Drawing::Point(0, 78);
			this->P2dataGridViewMatrix->Name = L"P2dataGridViewMatrix";
			this->P2dataGridViewMatrix->Size = System::Drawing::Size(366, 246);
			this->P2dataGridViewMatrix->TabIndex = 3;
			// 
			// P2buttonCalculateMatrix
			// 
			this->P2buttonCalculateMatrix->Location = System::Drawing::Point(0, 49);
			this->P2buttonCalculateMatrix->Name = L"P2buttonCalculateMatrix";
			this->P2buttonCalculateMatrix->Size = System::Drawing::Size(297, 23);
			this->P2buttonCalculateMatrix->TabIndex = 2;
			this->P2buttonCalculateMatrix->Text = L"Обчислити";
			this->P2buttonCalculateMatrix->UseVisualStyleBackColor = true;
			this->P2buttonCalculateMatrix->Click += gcnew System::EventHandler(this, &MyForm::P2buttonCalculateMatrix_Click);
			// 
			// P2textBoxNumbers
			// 
			this->P2textBoxNumbers->Location = System::Drawing::Point(0, 23);
			this->P2textBoxNumbers->Name = L"P2textBoxNumbers";
			this->P2textBoxNumbers->Size = System::Drawing::Size(297, 20);
			this->P2textBoxNumbers->TabIndex = 1;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->P3panel1);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(376, 333);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Зображення";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// P3panel1
			// 
			this->P3panel1->AutoScroll = true;
			this->P3panel1->Controls->Add(this->P3buttonSave);
			this->P3panel1->Controls->Add(this->P3buttonOpen);
			this->P3panel1->Controls->Add(this->P3pictureBox1);
			this->P3panel1->Location = System::Drawing::Point(0, 0);
			this->P3panel1->Name = L"P3panel1";
			this->P3panel1->Size = System::Drawing::Size(373, 330);
			this->P3panel1->TabIndex = 0;
			// 
			// P3buttonSave
			// 
			this->P3buttonSave->Location = System::Drawing::Point(3, 32);
			this->P3buttonSave->Name = L"P3buttonSave";
			this->P3buttonSave->Size = System::Drawing::Size(293, 23);
			this->P3buttonSave->TabIndex = 2;
			this->P3buttonSave->Text = L"Зберегти зображення";
			this->P3buttonSave->UseVisualStyleBackColor = true;
			this->P3buttonSave->Click += gcnew System::EventHandler(this, &MyForm::P3buttonSave_Click_1);
			// 
			// P3buttonOpen
			// 
			this->P3buttonOpen->Location = System::Drawing::Point(3, 3);
			this->P3buttonOpen->Name = L"P3buttonOpen";
			this->P3buttonOpen->Size = System::Drawing::Size(293, 23);
			this->P3buttonOpen->TabIndex = 1;
			this->P3buttonOpen->Text = L"Відкрити графічний файл";
			this->P3buttonOpen->UseVisualStyleBackColor = true;
			this->P3buttonOpen->Click += gcnew System::EventHandler(this, &MyForm::P3buttonOpen_Click);
			// 
			// P3pictureBox1
			// 
			this->P3pictureBox1->Location = System::Drawing::Point(3, 61);
			this->P3pictureBox1->Name = L"P3pictureBox1";
			this->P3pictureBox1->Size = System::Drawing::Size(293, 192);
			this->P3pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->P3pictureBox1->TabIndex = 0;
			this->P3pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(380, 357);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Location = System::Drawing::Point(100, 200);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Гордієнко Артем ІПЗ-25";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P1dataGridView))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P2dataGridViewMatrix))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->P3panel1->ResumeLayout(false);
			this->P3panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->P3pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void P1buttonCalculate_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		double S = Convert::ToDouble(P1textBoxS->Text);

		array<String^>^ uParts = P1textBoxU->Text->Split(gcnew array<wchar_t> { ' ', ',' }, StringSplitOptions::RemoveEmptyEntries);

		if (uParts->Length == 0) {
			MessageBox::Show(L"Введіть хоча б одне значення напруги U!", L"Помилка введення",
				MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			return;
		}

		P1dataGridView->Rows->Clear();
		P1dataGridView->Columns->Clear();
		P1dataGridView->Columns->Add(L"ColS", L"Потужність S");
		P1dataGridView->Columns->Add(L"ColU", L"Напруга U");
		P1dataGridView->Columns->Add(L"ColIkz", L"Струм I_кз(А)");

		for (int i = 0; i < uParts->Length; i++) {
			double U = Convert::ToDouble(uParts[i]);

			if (U <= 0) {
				MessageBox::Show(String::Format(L"Значення напруги під номером {0} має бути більше за 0!", i + 1),
					L"Помилка обчислень", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			double Ikz = S / (Math::Sqrt(3) * U);

			P1dataGridView->Rows->Add(S.ToString("F2"), U.ToString("F2"), Ikz.ToString("F2"));
		}
	}
	catch (Exception^ exception) {
		MessageBox::Show(String::Format(L"Перевірте правильність введених даних!\nДеталі: {0}", exception->Message),
			L"Помилка введення", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void P2buttonCalculateMatrix_Click(System::Object^ sender, System::EventArgs^ e) {
	array<String^>^ parts = P2textBoxNumbers->Text->Split(gcnew array<wchar_t> { ' ', ',' }, StringSplitOptions::RemoveEmptyEntries);

	int n = parts->Length;

	if (n <= 0) {
		MessageBox::Show(L"Поле пусте!", L"Помилка введення",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return;
	}

	array<double>^ x = gcnew array<double>(n);

	try {
		for (int i = 0; i < n; i++) {
			x[i] = Convert::ToDouble(parts[i]);
		}
	}
	catch (FormatException^) {
		MessageBox::Show(L"Помилка у форматі введених чисел!", L"Помилка введення",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return;
	}

	array<double, 2>^ matrix = gcnew array<double, 2>(n, n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			matrix[i, j] = Math::Pow(x[j], i + 1);
		}
	}

	P2dataGridViewMatrix->Rows->Clear();
	P2dataGridViewMatrix->Columns->Clear();

	for (int j = 0; j < n; j++) {
		P2dataGridViewMatrix->Columns->Add(L"Col" + j, L"x" + (j + 1));
	}

	for (int i = 0; i < n; i++) {
		array<String^>^ rowData = gcnew array<String^>(n);
		for (int j = 0; j < n; j++) {
			rowData[j] = matrix[i, j].ToString("F1");
		}
		P2dataGridViewMatrix->Rows->Add(rowData);
	}
}
private: System::Void P3buttonOpen_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
	openFileDialog1->Filter = L"Файли зображень|*.bmp;*.jpg;*.jpeg;*.png;*.gif";

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		P3pictureBox1->Image = Image::FromFile(openFileDialog1->FileName);
	}
}

private: System::Void P3buttonSave_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (P3pictureBox1->Image == nullptr) {
		MessageBox::Show(L"Немає зображення для збереження!", L"Попередження", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
	saveFileDialog->Filter = L"Зображення JPeg (*.jpg)|*.jpg|Зображення Bitmap (*.bmp)|*.bmp|Зображення Gif (*.gif)|*.gif";
	saveFileDialog->Title = L"Зберегти файл зображення";

	if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		System::IO::FileStream^ fs = safe_cast<System::IO::FileStream^>(saveFileDialog->OpenFile());

		switch (saveFileDialog->FilterIndex) {
		case 1:
			P3pictureBox1->Image->Save(fs, System::Drawing::Imaging::ImageFormat::Jpeg);
			break;
		case 2:
			P3pictureBox1->Image->Save(fs, System::Drawing::Imaging::ImageFormat::Bmp);
			break;
		case 3:
			P3pictureBox1->Image->Save(fs, System::Drawing::Imaging::ImageFormat::Gif);
			break;
		}
		fs->Close();
	}
}
};
}
