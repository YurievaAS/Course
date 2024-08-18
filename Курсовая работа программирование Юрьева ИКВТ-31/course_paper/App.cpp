#include "App.h"
#include "func.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Globalization;
[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	coursepaper::App window;
	Application:: Run(% window);
}

System::Void coursepaper::App::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->chart->Series[0]->Points->Clear();
	this->chart1->Series[0]->Points->Clear();
	try { this->num_dots = Int32::Parse(textBox1->Text); }
	catch (...) {};
	if (this->num_dots > 1) {
		int len = Int32::Parse(textBox1->Text);
		float* time = new float[len];
		float* Uin = new float[len];
		float* Uout = new float[len];
		arr_time(time, len);
		arr_Uin(Uin, time, len);
		arr_Uout(Uout, Uin, len);
		for (int i = 0; i < len; i++) { 
			std::string space = "         ";
			this->chart->Series[0]->Points->AddXY(time[i], Uout[i]);
			this->chart1->Series[0]->Points->AddXY(time[i], Uin[i]);
			std::string value =std::to_string(i + 1) + space + el_1(std::to_string(time[i]), 1)
				+space+ el_1(std::to_string(Uin[i]), 1) +space+ el_1(std::to_string(Uout[i]), 1);
			String^ new_line = "\r\n";
			String^ textValue = gcnew String(value.c_str());
			textBox2->Text += textValue;
			textBox2->Text += new_line;
		}
		this->chart->ChartAreas[0]->AxisX->Minimum = time[0];
		this->chart->ChartAreas[0]->AxisX->Maximum = time[len-1];
		this->chart1->ChartAreas[0]->AxisX->Minimum = time[0];
		this->chart1->ChartAreas[0]->AxisX->Maximum = time[len - 1];
		delete[] time;
		delete[] Uin;
		delete[] Uout;

	}
	else {
		this->chart->Series[0]->Points->Clear();
		this->chart1->Series[0]->Points->Clear();
		this->textBox2->Clear();
	}
	return System::Void();
}

System::Void coursepaper::App::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->chart->Series[0]->Points->Clear();
	this->chart1->Series[0]->Points->Clear();
	this->textBox2->Clear();
	this->textBox3->Clear();
	return System::Void();
}

System::Void coursepaper::App::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void coursepaper::App::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->textBox3->Clear();
	float eps;
	try { eps = (float)Double::Parse(textBox4->Text); }
	catch (...) {};
	if (eps != 0) {
		float p = 1; //текущая погрешность
		float par = 10000000; //текущее значение параметра
		int len = 11;
		while (p > eps) {
			float* time = new float[len];
			float* Uin = new float[len];
			float* Uout = new float[len];
			arr_time(time, len);
			arr_Uin(Uin, time, len);
			arr_Uout(Uout, Uin, len);
			float par_1 = parametr(Uout, len);
			p = fabs(par - par_1) / par_1;
			std::string space = "     ";
			std::string value = std::to_string(len) + space + el_1(std::to_string(par_1), 5) + space + space +
				el_1(std::to_string(p), 5);
			String^ new_line = "\r\n";
			String^ textValue = gcnew String(value.c_str());
			textBox3->Text += textValue;
			textBox3->Text += new_line;
			par = par_1;
			len *= 2;
			delete[] time;
			delete[] Uin;
			delete[] Uout;
		}
	}
	return System::Void();
}
