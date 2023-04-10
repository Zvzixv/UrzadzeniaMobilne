#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>
#include "form.h"
using namespace System;

using namespace System::Windows::Forms;

void main()
{

Application::EnableVisualStyles();
Application::SetCompatibleTextRenderingDefault(false);
SklepUrzadzeniaMobilne::form f;
Application::Run(% f);
}

