#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

//String^ word = gcnew String; // ^ ������� ������ // gc -  ������� ���������
[STAThreadAttribute]
int main(array <String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	OKNO::MyForm form;
	Application::Run(% form);




}