#include "pch.h"
#include <iostream>
#include <ctime>

using namespace System;
using namespace std;

// int main(array<System::String ^> ^args)
// {
//    return 0;
// }

#include "Form1.h"

using namespace System::Windows::Forms;

[STAThread]
int main()
{
  srand(time(0));

  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Application::Run(gcnew CppCLRWinFormsProject::Form1());
  return 0;
}