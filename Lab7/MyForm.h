#pragma once
#include "Film.h"

namespace Lab7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

			dataGridViewFilms->ColumnCount = 3;
			dataGridViewFilms->Columns[0]->Name = L"Жанр";
			dataGridViewFilms->Columns[1]->Name = L"Рік виходу";
			dataGridViewFilms->Columns[2]->Name = L"Бюджет";
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
	private:
		List<Film^>^ filmList = gcnew List<Film^>();

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ відкритиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ зберегтиДаніToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вихідToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBoxGenre;
	private: System::Windows::Forms::TextBox^ textBoxYear;
	private: System::Windows::Forms::TextBox^ textBoxBudget;









	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem1;

	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem1;
	private: System::Windows::Forms::RadioButton^ radioButtonAscending;
	private: System::Windows::Forms::RadioButton^ radioButtonDescending;
	private: System::Windows::Forms::Button^ buttonAdd;
	private: System::Windows::Forms::Button^ buttonSearch;
	private: System::Windows::Forms::Button^ buttonEdit;
	private: System::Windows::Forms::DataGridView^ dataGridViewFilms;
	private: System::Windows::Forms::Button^ buttonSort;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;




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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->textBoxGenre = (gcnew System::Windows::Forms::TextBox());
			this->textBoxYear = (gcnew System::Windows::Forms::TextBox());
			this->textBoxBudget = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->radioButtonAscending = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonDescending = (gcnew System::Windows::Forms::RadioButton());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonSearch = (gcnew System::Windows::Forms::Button());
			this->buttonEdit = (gcnew System::Windows::Forms::Button());
			this->dataGridViewFilms = (gcnew System::Windows::Forms::DataGridView());
			this->buttonSort = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->menuStrip2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewFilms))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Location = System::Drawing::Point(0, 24);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(480, 24);
			this->menuStrip1->TabIndex = 12;
			// 
			// textBoxGenre
			// 
			this->textBoxGenre->Location = System::Drawing::Point(11, 57);
			this->textBoxGenre->Name = L"textBoxGenre";
			this->textBoxGenre->Size = System::Drawing::Size(108, 20);
			this->textBoxGenre->TabIndex = 9;
			// 
			// textBoxYear
			// 
			this->textBoxYear->Location = System::Drawing::Point(125, 57);
			this->textBoxYear->Name = L"textBoxYear";
			this->textBoxYear->Size = System::Drawing::Size(108, 20);
			this->textBoxYear->TabIndex = 8;
			// 
			// textBoxBudget
			// 
			this->textBoxBudget->Location = System::Drawing::Point(239, 57);
			this->textBoxBudget->Name = L"textBoxBudget";
			this->textBoxBudget->Size = System::Drawing::Size(108, 20);
			this->textBoxBudget->TabIndex = 7;
			// 
			// menuStrip2
			// 
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem1 });
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(480, 24);
			this->menuStrip2->TabIndex = 13;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// fileToolStripMenuItem1
			// 
			this->fileToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->openToolStripMenuItem1,
					this->saveToolStripMenuItem1, this->exitToolStripMenuItem1
			});
			this->fileToolStripMenuItem1->Name = L"fileToolStripMenuItem1";
			this->fileToolStripMenuItem1->Size = System::Drawing::Size(48, 20);
			this->fileToolStripMenuItem1->Text = L"Файл";
			// 
			// openToolStripMenuItem1
			// 
			this->openToolStripMenuItem1->Name = L"openToolStripMenuItem1";
			this->openToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->openToolStripMenuItem1->Text = L"Відкрити";
			this->openToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem1_Click);
			// 
			// saveToolStripMenuItem1
			// 
			this->saveToolStripMenuItem1->Name = L"saveToolStripMenuItem1";
			this->saveToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->saveToolStripMenuItem1->Text = L"Зберегти дані";
			this->saveToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem1_Click);
			// 
			// exitToolStripMenuItem1
			// 
			this->exitToolStripMenuItem1->Name = L"exitToolStripMenuItem1";
			this->exitToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->exitToolStripMenuItem1->Text = L"Вихід";
			this->exitToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem1_Click);
			// 
			// radioButtonAscending
			// 
			this->radioButtonAscending->Checked = true;
			this->radioButtonAscending->Location = System::Drawing::Point(353, 31);
			this->radioButtonAscending->Name = L"radioButtonAscending";
			this->radioButtonAscending->Size = System::Drawing::Size(114, 20);
			this->radioButtonAscending->TabIndex = 5;
			this->radioButtonAscending->TabStop = true;
			this->radioButtonAscending->Text = L"За зростанням";
			// 
			// radioButtonDescending
			// 
			this->radioButtonDescending->Location = System::Drawing::Point(353, 57);
			this->radioButtonDescending->Name = L"radioButtonDescending";
			this->radioButtonDescending->Size = System::Drawing::Size(114, 20);
			this->radioButtonDescending->TabIndex = 4;
			this->radioButtonDescending->Text = L"За спаданням";
			// 
			// buttonAdd
			// 
			this->buttonAdd->Location = System::Drawing::Point(11, 83);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(108, 32);
			this->buttonAdd->TabIndex = 3;
			this->buttonAdd->Text = L"Додати запис";
			this->buttonAdd->Click += gcnew System::EventHandler(this, &MyForm::buttonAdd_Click);
			// 
			// buttonSearch
			// 
			this->buttonSearch->Location = System::Drawing::Point(125, 83);
			this->buttonSearch->Name = L"buttonSearch";
			this->buttonSearch->Size = System::Drawing::Size(108, 32);
			this->buttonSearch->TabIndex = 2;
			this->buttonSearch->Text = L"Пошук";
			this->buttonSearch->Click += gcnew System::EventHandler(this, &MyForm::buttonSearch_Click);
			// 
			// buttonEdit
			// 
			this->buttonEdit->Location = System::Drawing::Point(239, 83);
			this->buttonEdit->Name = L"buttonEdit";
			this->buttonEdit->Size = System::Drawing::Size(108, 32);
			this->buttonEdit->TabIndex = 1;
			this->buttonEdit->Text = L"Редагувати";
			this->buttonEdit->Click += gcnew System::EventHandler(this, &MyForm::buttonEdit_Click);
			// 
			// dataGridViewFilms
			// 
			this->dataGridViewFilms->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridViewFilms->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewFilms->Location = System::Drawing::Point(11, 121);
			this->dataGridViewFilms->Name = L"dataGridViewFilms";
			this->dataGridViewFilms->Size = System::Drawing::Size(456, 287);
			this->dataGridViewFilms->TabIndex = 5;
			// 
			// buttonSort
			// 
			this->buttonSort->Location = System::Drawing::Point(353, 83);
			this->buttonSort->Name = L"buttonSort";
			this->buttonSort->Size = System::Drawing::Size(114, 32);
			this->buttonSort->TabIndex = 0;
			this->buttonSort->Text = L"Сортувати";
			this->buttonSort->Click += gcnew System::EventHandler(this, &MyForm::buttonSort_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(47, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 13);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Жанр";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(151, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Рік виходу";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(247, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Бюджет фильму";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(480, 417);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonSort);
			this->Controls->Add(this->buttonEdit);
			this->Controls->Add(this->buttonSearch);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->radioButtonDescending);
			this->Controls->Add(this->radioButtonAscending);
			this->Controls->Add(this->dataGridViewFilms);
			this->Controls->Add(this->textBoxBudget);
			this->Controls->Add(this->textBoxYear);
			this->Controls->Add(this->textBoxGenre);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->menuStrip2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Location = System::Drawing::Point(100, 200);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Гордієнко Артем ІПЗ-25";
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewFilms))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
void RefreshGrid() {
	dataGridViewFilms->Rows->Clear();
	for each (Film^ film in filmList) {
		dataGridViewFilms->Rows->Add(film->genre, film->year.ToString(), film->budget.ToString("F2"));
	}
}

private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		Film^ newFilm = gcnew Film();
		newFilm->genre = textBoxGenre->Text;

		if (String::IsNullOrWhiteSpace(newFilm->genre)) {
			MessageBox::Show(L"Введіть жанр фільму!", L"Попередження", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		newFilm->year = Convert::ToInt32(textBoxYear->Text);
		newFilm->budget = Convert::ToDouble(textBoxBudget->Text);

		filmList->Add(newFilm);
		RefreshGrid();

		textBoxGenre->Clear();
		textBoxYear->Clear();
		textBoxBudget->Clear();
	}
	catch (Exception^ exception) {
		MessageBox::Show(L"Помилка формату даних!", L"Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void buttonSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ searchGenre = textBoxGenre->Text;
	if (String::IsNullOrWhiteSpace(searchGenre)) {
		MessageBox::Show(L"Введіть жанр для пошуку!", L"Попередження", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	bool found = false;
	dataGridViewFilms->ClearSelection();

	for (int i = 0; i < dataGridViewFilms->Rows->Count; i++) {
		if (dataGridViewFilms->Rows[i]->Cells[0]->Value != nullptr &&
			dataGridViewFilms->Rows[i]->Cells[0]->Value->ToString()->Equals(searchGenre, StringComparison::InvariantCultureIgnoreCase)) {
			dataGridViewFilms->Rows[i]->Selected = true;
			found = true;
		}
	}

	if (!found) {
		MessageBox::Show(L"Фільм не знайдено!", L"Результат пошуку", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}

private: System::Void buttonEdit_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridViewFilms->SelectedRows->Count > 0) {
		int index = dataGridViewFilms->SelectedRows[0]->Index;
		if (index < filmList->Count) {
			try {
				filmList[index]->genre = textBoxGenre->Text;
				filmList[index]->year = Convert::ToInt32(textBoxYear->Text);
				filmList[index]->budget = Convert::ToDouble(textBoxBudget->Text);

				RefreshGrid();
				MessageBox::Show(L"Запис успішно оновлено!", L"Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			catch (Exception^ ex) {
				MessageBox::Show(L"Помилка при редагуванні! Перевірте введені дані.", L"Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	else {
		MessageBox::Show(L"Виберіть рядок у таблиці для редагування!", L"Увага", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
private: System::Void buttonSort_Click(System::Object^ sender, System::EventArgs^ e) {
	if (filmList->Count < 2) return;

	bool ascending = radioButtonAscending->Checked;

	for (int i = 0; i < filmList->Count - 1; i++) {
		for (int j = 0; j < filmList->Count - i - 1; j++) {
			int compare = String::Compare(filmList[j]->genre, filmList[j + 1]->genre);
			bool condition = ascending ? (compare > 0) : (compare < 0);

			if (condition) {
				Film^ temp = filmList[j];
				filmList[j] = filmList[j + 1];
				filmList[j + 1] = temp;
			}
		}
	}
	RefreshGrid();
}
private: System::Void openToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
	openFileDialog1->Filter = L"Текстові файли (*.txt)|*.txt|Усі файли (*.*)|*.*";

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		try {
			array<String^>^ lines = File::ReadAllLines(openFileDialog1->FileName);
			filmList->Clear();

			for (int i = 0; i < lines->Length; i += 3) {
				if (i + 2 < lines->Length) {
					Film^ film = gcnew Film();
					film->genre = lines[i];
					film->year = Convert::ToInt32(lines[i + 1]);
					film->budget = Convert::ToDouble(lines[i + 2]);
					filmList->Add(film);
				}
			}
			RefreshGrid();
			MessageBox::Show(L"Дані завантажено з файлу!", L"Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ exception) {
			MessageBox::Show(L"Помилка читання файлу! " + exception->Message, L"Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void saveToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
	saveFileDialog1->Filter = L"Текстові файли (*.txt)|*.txt|Усі файли (*.*)|*.*";

	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		try {
			System::IO::StreamWriter^ streamWriter = gcnew System::IO::StreamWriter(saveFileDialog1->FileName);
			for each (Film ^ film in filmList) {
				streamWriter->WriteLine(film->genre);
				streamWriter->WriteLine(film->year);
				streamWriter->WriteLine(film->budget);
			}
			streamWriter->Close();
			MessageBox::Show(L"Дані збережено у файл!", L"Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ exceptiton) {
			MessageBox::Show(L"Помилка збереження файлу! " + exceptiton->Message, L"Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void exitToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
