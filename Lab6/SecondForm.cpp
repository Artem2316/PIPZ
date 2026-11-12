#include "SecondForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Lab6::SecondForm form; // Project1 - ім’я вашого проекту
	Application::Run(% form);
}