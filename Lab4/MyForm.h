#pragma once
#include <cmath>

namespace Lab4 {

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
	private: System::Windows::Forms::TextBox^ textBoxZ;
	private: System::Windows::Forms::TextBox^ textBoxQ;
	private: System::Windows::Forms::Button^ buttonCalculate;
	private: System::Windows::Forms::PictureBox^ pictureBoxFunction;
	private: System::Windows::Forms::DataGridView^ dataGridViewResults;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartResults;
	private: System::Windows::Forms::Label^ labelZ;
	private: System::Windows::Forms::Label^ labelQ;
	private: System::Windows::Forms::Label^ labelFunction;
	private: System::Windows::Forms::Label^ labelResults;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;




	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ розрахунокToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clearMenuStripToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ calculateMenuStripToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitMenuStripToolStripMenuItem;



	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ clearToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ calculateToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem1;


	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ clearToolStriptoolStripButton1;
	private: System::Windows::Forms::ToolStripButton^ CalculateToolStriptoolStripButton2;
	private: System::Windows::Forms::ToolStripButton^ exitToolStriptoolStripButton3;














	private: System::ComponentModel::IContainer^ components;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->textBoxZ = (gcnew System::Windows::Forms::TextBox());
			this->textBoxQ = (gcnew System::Windows::Forms::TextBox());
			this->buttonCalculate = (gcnew System::Windows::Forms::Button());
			this->pictureBoxFunction = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridViewResults = (gcnew System::Windows::Forms::DataGridView());
			this->chartResults = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->labelZ = (gcnew System::Windows::Forms::Label());
			this->labelQ = (gcnew System::Windows::Forms::Label());
			this->labelFunction = (gcnew System::Windows::Forms::Label());
			this->labelResults = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->clearToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->calculateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->розрахунокToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearMenuStripToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->calculateMenuStripToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitMenuStripToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->clearToolStriptoolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->CalculateToolStriptoolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->exitToolStriptoolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxFunction))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewResults))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartResults))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBoxZ
			// 
			this->textBoxZ->Location = System::Drawing::Point(84, 56);
			this->textBoxZ->Name = L"textBoxZ";
			this->textBoxZ->Size = System::Drawing::Size(100, 20);
			this->textBoxZ->TabIndex = 0;
			// 
			// textBoxQ
			// 
			this->textBoxQ->Location = System::Drawing::Point(84, 82);
			this->textBoxQ->Name = L"textBoxQ";
			this->textBoxQ->Size = System::Drawing::Size(100, 20);
			this->textBoxQ->TabIndex = 1;
			// 
			// buttonCalculate
			// 
			this->buttonCalculate->Location = System::Drawing::Point(200, 56);
			this->buttonCalculate->Name = L"buttonCalculate";
			this->buttonCalculate->Size = System::Drawing::Size(127, 46);
			this->buttonCalculate->TabIndex = 2;
			this->buttonCalculate->Text = L"Розрахувати";
			this->buttonCalculate->UseVisualStyleBackColor = true;
			this->buttonCalculate->Click += gcnew System::EventHandler(this, &MyForm::buttonCalculate_Click);
			// 
			// pictureBoxFunction
			// 
			this->pictureBoxFunction->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxFunction.Image")));
			this->pictureBoxFunction->Location = System::Drawing::Point(345, 56);
			this->pictureBoxFunction->Name = L"pictureBoxFunction";
			this->pictureBoxFunction->Size = System::Drawing::Size(218, 46);
			this->pictureBoxFunction->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxFunction->TabIndex = 3;
			this->pictureBoxFunction->TabStop = false;
			// 
			// dataGridViewResults
			// 
			this->dataGridViewResults->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewResults->Location = System::Drawing::Point(12, 144);
			this->dataGridViewResults->Name = L"dataGridViewResults";
			this->dataGridViewResults->Size = System::Drawing::Size(267, 220);
			this->dataGridViewResults->TabIndex = 4;
			// 
			// chartResults
			// 
			chartArea1->Name = L"ChartArea1";
			this->chartResults->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chartResults->Legends->Add(legend1);
			this->chartResults->Location = System::Drawing::Point(285, 144);
			this->chartResults->Name = L"chartResults";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series1->Legend = L"Legend1";
			series1->Name = L"Значення функції";
			this->chartResults->Series->Add(series1);
			this->chartResults->Size = System::Drawing::Size(401, 220);
			this->chartResults->TabIndex = 5;
			this->chartResults->Text = L"chart1";
			// 
			// labelZ
			// 
			this->labelZ->AutoSize = true;
			this->labelZ->Location = System::Drawing::Point(12, 59);
			this->labelZ->Name = L"labelZ";
			this->labelZ->Size = System::Drawing::Size(66, 13);
			this->labelZ->TabIndex = 6;
			this->labelZ->Text = L"Значення z:";
			// 
			// labelQ
			// 
			this->labelQ->AutoSize = true;
			this->labelQ->Location = System::Drawing::Point(9, 85);
			this->labelQ->Name = L"labelQ";
			this->labelQ->Size = System::Drawing::Size(69, 13);
			this->labelQ->TabIndex = 7;
			this->labelQ->Text = L"Значення Q:";
			// 
			// labelFunction
			// 
			this->labelFunction->AutoSize = true;
			this->labelFunction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelFunction->Location = System::Drawing::Point(424, 7);
			this->labelFunction->Name = L"labelFunction";
			this->labelFunction->Size = System::Drawing::Size(60, 15);
			this->labelFunction->TabIndex = 8;
			this->labelFunction->Text = L"Функція";
			// 
			// labelResults
			// 
			this->labelResults->AutoSize = true;
			this->labelResults->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelResults->Location = System::Drawing::Point(218, 118);
			this->labelResults->Name = L"labelResults";
			this->labelResults->Size = System::Drawing::Size(85, 15);
			this->labelResults->TabIndex = 9;
			this->labelResults->Text = L"Результати";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(587, 56);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(103, 46);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->clearToolStripMenuItem,
					this->calculateToolStripMenuItem, this->exitToolStripMenuItem1
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(208, 70);
			// 
			// clearToolStripMenuItem
			// 
			this->clearToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clearToolStripMenuItem.Image")));
			this->clearToolStripMenuItem->Name = L"clearToolStripMenuItem";
			this->clearToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::O));
			this->clearToolStripMenuItem->Size = System::Drawing::Size(207, 22);
			this->clearToolStripMenuItem->Text = L"Очистити";
			this->clearToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::clearToolStripMenuItem_Click);
			// 
			// calculateToolStripMenuItem
			// 
			this->calculateToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"calculateToolStripMenuItem.Image")));
			this->calculateToolStripMenuItem->Name = L"calculateToolStripMenuItem";
			this->calculateToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Alt)
				| System::Windows::Forms::Keys::C));
			this->calculateToolStripMenuItem->Size = System::Drawing::Size(207, 22);
			this->calculateToolStripMenuItem->Text = L"Розрахувати";
			this->calculateToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::calculateToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem1
			// 
			this->exitToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exitToolStripMenuItem1.Image")));
			this->exitToolStripMenuItem1->Name = L"exitToolStripMenuItem1";
			this->exitToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F4));
			this->exitToolStripMenuItem1->Size = System::Drawing::Size(207, 22);
			this->exitToolStripMenuItem1->Text = L"Вихід";
			this->exitToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->розрахунокToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(697, 24);
			this->menuStrip1->TabIndex = 14;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// розрахунокToolStripMenuItem
			// 
			this->розрахунокToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->clearMenuStripToolStripMenuItem,
					this->calculateMenuStripToolStripMenuItem, this->toolStripSeparator1, this->exitMenuStripToolStripMenuItem
			});
			this->розрахунокToolStripMenuItem->Name = L"розрахунокToolStripMenuItem";
			this->розрахунокToolStripMenuItem->Size = System::Drawing::Size(83, 20);
			this->розрахунокToolStripMenuItem->Text = L"Розрахунок";
			// 
			// clearMenuStripToolStripMenuItem
			// 
			this->clearMenuStripToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clearMenuStripToolStripMenuItem.Image")));
			this->clearMenuStripToolStripMenuItem->Name = L"clearMenuStripToolStripMenuItem";
			this->clearMenuStripToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::O));
			this->clearMenuStripToolStripMenuItem->Size = System::Drawing::Size(207, 22);
			this->clearMenuStripToolStripMenuItem->Text = L"Очистити";
			this->clearMenuStripToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::clearMenuStripToolStripMenuItem_Click);
			// 
			// calculateMenuStripToolStripMenuItem
			// 
			this->calculateMenuStripToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"calculateMenuStripToolStripMenuItem.Image")));
			this->calculateMenuStripToolStripMenuItem->Name = L"calculateMenuStripToolStripMenuItem";
			this->calculateMenuStripToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Alt)
				| System::Windows::Forms::Keys::C));
			this->calculateMenuStripToolStripMenuItem->Size = System::Drawing::Size(207, 22);
			this->calculateMenuStripToolStripMenuItem->Text = L"Розрахувати";
			this->calculateMenuStripToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::calculateMenuStripToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(204, 6);
			// 
			// exitMenuStripToolStripMenuItem
			// 
			this->exitMenuStripToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exitMenuStripToolStripMenuItem.Image")));
			this->exitMenuStripToolStripMenuItem->Name = L"exitMenuStripToolStripMenuItem";
			this->exitMenuStripToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F4));
			this->exitMenuStripToolStripMenuItem->Size = System::Drawing::Size(207, 22);
			this->exitMenuStripToolStripMenuItem->Text = L"Вихід";
			this->exitMenuStripToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitMenuStripToolStripMenuItem_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->clearToolStriptoolStripButton1,
					this->CalculateToolStriptoolStripButton2, this->exitToolStriptoolStripButton3
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(697, 25);
			this->toolStrip1->TabIndex = 15;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// clearToolStriptoolStripButton1
			// 
			this->clearToolStriptoolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clearToolStriptoolStripButton1.Image")));
			this->clearToolStriptoolStripButton1->Name = L"clearToolStriptoolStripButton1";
			this->clearToolStriptoolStripButton1->Size = System::Drawing::Size(80, 22);
			this->clearToolStriptoolStripButton1->Text = L"Очистити";
			this->clearToolStriptoolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::clearToolStriptoolStripButton1_Click);
			// 
			// CalculateToolStriptoolStripButton2
			// 
			this->CalculateToolStriptoolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CalculateToolStriptoolStripButton2.Image")));
			this->CalculateToolStriptoolStripButton2->Name = L"CalculateToolStriptoolStripButton2";
			this->CalculateToolStriptoolStripButton2->Size = System::Drawing::Size(95, 22);
			this->CalculateToolStriptoolStripButton2->Text = L"Розрахувати";
			this->CalculateToolStriptoolStripButton2->Click += gcnew System::EventHandler(this, &MyForm::CalculateToolStriptoolStripButton2_Click);
			// 
			// exitToolStriptoolStripButton3
			// 
			this->exitToolStriptoolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exitToolStriptoolStripButton3.Image")));
			this->exitToolStriptoolStripButton3->Name = L"exitToolStriptoolStripButton3";
			this->exitToolStriptoolStripButton3->Size = System::Drawing::Size(56, 22);
			this->exitToolStriptoolStripButton3->Text = L"Вихід";
			this->exitToolStriptoolStripButton3->Click += gcnew System::EventHandler(this, &MyForm::exitToolStriptoolStripButton3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(697, 376);
			this->ContextMenuStrip = this->contextMenuStrip1;
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->labelResults);
			this->Controls->Add(this->labelFunction);
			this->Controls->Add(this->labelQ);
			this->Controls->Add(this->labelZ);
			this->Controls->Add(this->chartResults);
			this->Controls->Add(this->dataGridViewResults);
			this->Controls->Add(this->pictureBoxFunction);
			this->Controls->Add(this->buttonCalculate);
			this->Controls->Add(this->textBoxQ);
			this->Controls->Add(this->textBoxZ);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Гордієнко Артем ІПЗ-25";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxFunction))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewResults))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartResults))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	void Calculate() {
		double parameterZ, parameterQ;

		try {
			parameterZ = Convert::ToDouble(textBoxZ->Text);
			parameterQ = Convert::ToDouble(textBoxQ->Text);
		}
		catch (FormatException^) {
			MessageBox::Show("Введіть коректні числові значення для z та Q", "Помилка введення",
				MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			return;
		}

		if (parameterZ <= 0) {
			MessageBox::Show("Параметр z повинен бути більшим за 0", "Помилка обчислень",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		dataGridViewResults->Rows->Clear();
		dataGridViewResults->Columns->Clear();
		dataGridViewResults->Columns->Add("X", "X");
		dataGridViewResults->Columns->Add("Y", "Y");
		chartResults->Series["Значення функції"]->Points->Clear();

		const int totalSteps = 75;

		for (int i = 0; i <= totalSteps; i++) {
			double variableX = -0.5 + (i * 0.02);

			double variableY;
			if (variableX > parameterQ) {
				variableY = std::exp(variableX) + std::exp(parameterZ);
			}
			else {
				variableY = 0.5 * std::atan(std::log(parameterZ));
			}

			dataGridViewResults->Rows->Add(variableX.ToString("F2"), variableY.ToString("F4"));
			chartResults->Series["Значення функції"]->Points->AddXY(variableX, variableY);
		}
	}

	void Clear() {
		textBoxZ->Clear();
		textBoxQ->Clear();
		dataGridViewResults->Rows->Clear();
		dataGridViewResults->Columns->Clear();
		chartResults->Series["Значення функції"]->Points->Clear();
	}

	void Exit() {
		Application::Exit();
	}

	private: System::Void buttonCalculate_Click(System::Object^ sender, System::EventArgs^ e) { Calculate(); }
	private: System::Void clearMenuStripToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { Clear(); }
	private: System::Void calculateMenuStripToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { Calculate(); }
	private: System::Void exitMenuStripToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { Exit(); }
	private: System::Void clearToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { Clear(); }
	private: System::Void calculateToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { Calculate(); }
	private: System::Void exitToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) { Exit(); }
	private: System::Void clearToolStriptoolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) { Clear(); }
	private: System::Void CalculateToolStriptoolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) { Calculate(); }
	private: System::Void exitToolStriptoolStripButton3_Click(System::Object^ sender, System::EventArgs^ e) { Exit(); }
};
}
