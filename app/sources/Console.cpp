#include "Console.hpp"

void Console::NewConsole()
{
    FreeConsole();
    AllocConsole();
    freopen("CONIN$", "r", stdin);
    freopen("CONOUT$", "w", stdout);
    freopen("CONOUT$", "w", stderr);
}

void Console::NewConsole(string title)
{
    FreeConsole();
    AllocConsole();
    freopen("CONIN$", "r", stdin);
    freopen("CONOUT$", "w", stdout);
    freopen("CONOUT$", "w", stderr);
    SetConsoleTitle(title.c_str());
}

void Console::INIT_UNICODE()
{
    SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, "");
}

void Console::pause()
{
    system("pause");
}