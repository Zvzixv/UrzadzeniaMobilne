#include "form.h"

using namespace System;

using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
Application::EnableVisualStyles();
Application::SetCompatibleTextRenderingDefault(false);
SklepUrzadzeniaMobilne::form f;
Application::Run(% f);
}

