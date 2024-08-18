#pragma once
#include "func.h"
namespace coursepaper {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class App : public System::Windows::Forms::Form
	{
	public:
		App(void)
		{
			InitializeComponent();
		}

	protected:
		~App()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		int num_dots;
		String^ cur_line;
		System::Windows::Forms::DataVisualization::Charting::Chart^ chart;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;






	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart
			// 
			this->chart->AllowDrop = true;
			this->chart->BackColor = System::Drawing::Color::Transparent;
			this->chart->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->chart->BackSecondaryColor = System::Drawing::Color::White;
			this->chart->BorderlineColor = System::Drawing::Color::Black;
			chartArea1->AxisX->MajorGrid->LineColor = System::Drawing::Color::LightGray;
			chartArea1->AxisX->ScaleView->MinSizeType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Seconds;
			chartArea1->AxisX->ScaleView->SizeType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Seconds;
			chartArea1->AxisX->Title = L"Time , c";
			chartArea1->AxisX->TitleAlignment = System::Drawing::StringAlignment::Far;
			chartArea1->AxisY->MajorGrid->LineColor = System::Drawing::Color::LightGray;
			chartArea1->AxisY->Title = L"Uвых, В";
			chartArea1->AxisY->TitleAlignment = System::Drawing::StringAlignment::Far;
			chartArea1->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea1);
			this->chart->ImeMode = System::Windows::Forms::ImeMode::AlphaFull;
			this->chart->Location = System::Drawing::Point(2, 385);
			this->chart->Name = L"chart";
			this->chart->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			this->chart->PaletteCustomColors = gcnew cli::array< System::Drawing::Color >(1) { System::Drawing::Color::Black };
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->LabelForeColor = System::Drawing::Color::Gray;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart->Series->Add(series1);
			this->chart->Size = System::Drawing::Size(519, 310);
			this->chart->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(594, 118);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 68);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Построить график";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &App::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(740, 118);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 68);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Очистить график";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &App::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(906, 209);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(135, 30);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &App::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(589, 212);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(289, 25);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Введите количество точек";
			// 
			// chart1
			// 
			this->chart1->AllowDrop = true;
			this->chart1->BackColor = System::Drawing::Color::Transparent;
			this->chart1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->chart1->BackSecondaryColor = System::Drawing::Color::White;
			this->chart1->BorderlineColor = System::Drawing::Color::Black;
			chartArea2->AxisX->LabelStyle->Interval = 0;
			chartArea2->AxisX->LabelStyle->IsStaggered = true;
			chartArea2->AxisX->LabelStyle->TruncatedLabels = true;
			chartArea2->AxisX->LineColor = System::Drawing::Color::Silver;
			chartArea2->AxisX->MajorGrid->LineColor = System::Drawing::Color::LightGray;
			chartArea2->AxisX->ScaleBreakStyle->LineColor = System::Drawing::Color::Silver;
			chartArea2->AxisX->ScaleView->MinSizeType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Seconds;
			chartArea2->AxisX->ScaleView->SizeType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Seconds;
			chartArea2->AxisX->Title = L"Time, с";
			chartArea2->AxisX->TitleAlignment = System::Drawing::StringAlignment::Far;
			chartArea2->AxisX2->LineColor = System::Drawing::Color::Silver;
			chartArea2->AxisY->LineColor = System::Drawing::Color::LightGray;
			chartArea2->AxisY->MajorGrid->LineColor = System::Drawing::Color::LightGray;
			chartArea2->AxisY->Title = L"Uвх, В";
			chartArea2->AxisY->TitleAlignment = System::Drawing::StringAlignment::Far;
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			this->chart1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->chart1->Location = System::Drawing::Point(2, 69);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			this->chart1->PaletteCustomColors = gcnew cli::array< System::Drawing::Color >(1) { System::Drawing::Color::Black };
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->LabelForeColor = System::Drawing::Color::Gray;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(519, 310);
			this->chart1->TabIndex = 5;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Location = System::Drawing::Point(892, 118);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 68);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Рассчитать параметр";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &App::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(527, 341);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(243, 25);
			this->label2->TabIndex = 7;
			this->label2->Text = L"№     t   Uвх(t)    Uвых(t)";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(527, 385);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(329, 257);
			this->textBox2->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(245, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(518, 25);
			this->label4->TabIndex = 11;
			this->label4->Text = L" \"Анализ сигнала на выходе электрической цепи\"";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(324, 34);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(408, 25);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Студента гр. ИКВТ-31 Юрьевой Арины ";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(589, 260);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(237, 25);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Введите погрешность";
			// 
			// textBox4
			// 
			this->textBox4->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(906, 260);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(135, 30);
			this->textBox4->TabIndex = 13;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(892, 385);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox3->Size = System::Drawing::Size(308, 257);
			this->textBox3->TabIndex = 15;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->textBox5->Location = System::Drawing::Point(527, 87);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(555, 237);
			this->textBox5->TabIndex = 16;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(887, 347);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(279, 25);
			this->label6->TabIndex = 17;
			this->label6->Text = L"n    Parametr   Pogreshnost\'";
			// 
			// App
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(1212, 940);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart);
			this->Controls->Add(this->textBox5);
			this->ForeColor = System::Drawing::SystemColors::MenuText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"App";
			this->Text = L"Курсовая работа по программированию";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
}
	; }