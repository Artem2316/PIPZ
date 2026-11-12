#pragma once

namespace Lab6_task2 {

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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ відкритиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ inputToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ outputToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox1;





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
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->відкритиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->inputToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->outputToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->файлToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(301, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->відкритиToolStripMenuItem,
					this->saveAsToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// відкритиToolStripMenuItem
			// 
			this->відкритиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->inputToolStripMenuItem,
					this->outputToolStripMenuItem
			});
			this->відкритиToolStripMenuItem->Name = L"відкритиToolStripMenuItem";
			this->відкритиToolStripMenuItem->Size = System::Drawing::Size(211, 22);
			this->відкритиToolStripMenuItem->Text = L"Відкрити";
			// 
			// inputToolStripMenuItem
			// 
			this->inputToolStripMenuItem->Name = L"inputToolStripMenuItem";
			this->inputToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->inputToolStripMenuItem->Text = L"Вхідний";
			this->inputToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::inputToolStripMenuItem_Click);
			// 
			// outputToolStripMenuItem
			// 
			this->outputToolStripMenuItem->Name = L"outputToolStripMenuItem";
			this->outputToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->outputToolStripMenuItem->Text = L"Вихідний";
			this->outputToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::outputToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift)
				| System::Windows::Forms::Keys::S));
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(211, 22);
			this->saveAsToolStripMenuItem->Text = L"Зберегти як";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveAsToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F4));
			this->exitToolStripMenuItem->Size = System::Drawing::Size(211, 22);
			this->exitToolStripMenuItem->Text = L"Вихід";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(0, 27);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(301, 255);
			this->textBox1->TabIndex = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(301, 279);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Location = System::Drawing::Point(100, 200);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Гордієнко Артем ІПЗ-25";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void inputToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Filter = L"Текстові файли (*.txt)|*.txt|Усі файли (*.*)|*.*";

	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		double sum = 0;

		try {
			textBox1->Text = System::IO::File::ReadAllText(openFileDialog->FileName);

			System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(openFileDialog->FileName);
			String^ line;

			while ((line = reader->ReadLine()) != nullptr) {
				array<String^>^ allTexts = line->Split(gcnew array<wchar_t> { ' ', '\t', ',' }, StringSplitOptions::RemoveEmptyEntries);

				for each (String^ text in allTexts) {
					double number = Convert::ToDouble(text);
					sum += number * number;
				}
			}
			reader->Close();

			MessageBox::Show(String::Format(L"Сума квадратів компонент файлу: {0:F2}", sum),
				L"Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ exception) {
			MessageBox::Show(String::Format(L"Помилка! {0}", exception->Message),
				L"Помилка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void outputToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Filter = L"Текстові файли (*.txt)|*.txt|Усі файли (*.*)|*.*";

	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		try {
			textBox1->Text = System::IO::File::ReadAllText(openFileDialog->FileName);
		}
		catch (Exception^ exception) {
			MessageBox::Show(String::Format(L"Помилка читання: {0}", exception->Message),
				L"Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}

private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
	saveFileDialog->Filter = L"Текстові файли (*.txt)|*.txt";

	if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		try {
			System::IO::File::WriteAllText(saveFileDialog->FileName, textBox1->Text);
			MessageBox::Show(L"Файл успішно збережено!", L"Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ exception) {
			MessageBox::Show(String::Format(L"Помилка збереження: {0}", exception->Message), L"Помилка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}

private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}

};
}
