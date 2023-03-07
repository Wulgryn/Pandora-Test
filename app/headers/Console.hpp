#pragma once
#include <Windows.h>
#include <string>
#include <iostream>
using namespace std;
namespace Console
{
    void NewConsole();
    void NewConsole(string title);
    void INIT_UNICODE();
    void pause();
}
