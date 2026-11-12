#pragma once
#include <cmath>

namespace Lab3 {

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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxFunction))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewResults))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartResults))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBoxZ
			// 
			this->textBoxZ->Location = System::Drawing::Point(88, 25);
			this->textBoxZ->Name = L"textBoxZ";
			this->textBoxZ->Size = System::Drawing::Size(100, 20);
			this->textBoxZ->TabIndex = 0;
			// 
			// textBoxQ
			// 
			this->textBoxQ->Location = System::Drawing::Point(88, 51);
			this->textBoxQ->Name = L"textBoxQ";
			this->textBoxQ->Size = System::Drawing::Size(100, 20);
			this->textBoxQ->TabIndex = 1;
			// 
			// buttonCalculate
			// 
			this->buttonCalculate->Location = System::Drawing::Point(204, 25);
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
			this->pictureBoxFunction->Location = System::Drawing::Point(349, 25);
			this->pictureBoxFunction->Name = L"pictureBoxFunction";
			this->pictureBoxFunction->Size = System::Drawing::Size(218, 46);
			this->pictureBoxFunction->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxFunction->TabIndex = 3;
			this->pictureBoxFunction->TabStop = false;
			// 
			// dataGridViewResults
			// 
			this->dataGridViewResults->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewResults->Location = System::Drawing::Point(16, 113);
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
			this->chartResults->Location = System::Drawing::Point(289, 113);
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
			this->labelZ->Location = System::Drawing::Point(16, 28);
			this->labelZ->Name = L"labelZ";
			this->labelZ->Size = System::Drawing::Size(66, 13);
			this->labelZ->TabIndex = 6;
			this->labelZ->Text = L"Значення z:";
			// 
			// labelQ
			// 
			this->labelQ->AutoSize = true;
			this->labelQ->Location = System::Drawing::Point(13, 54);
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
			this->labelResults->Location = System::Drawing::Point(222, 87);
			this->labelResults->Name = L"labelResults";
			this->labelResults->Size = System::Drawing::Size(85, 15);
			this->labelResults->TabIndex = 9;
			this->labelResults->Text = L"Результати";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(591, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(103, 46);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(706, 346);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonCalculate_Click(System::Object^ sender, System::EventArgs^ e) {
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
};
}
