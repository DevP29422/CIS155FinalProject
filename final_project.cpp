/**
Dev Patel 900261799
Professor Kholodov 
CIS 155 Final Project
Submitted May 9th 2022
*/
#include "final_project.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]


//start the program
void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    FinalProject::final_project form;
    Application::Run(% form);
}//close main
