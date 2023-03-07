#pragma once
#include <Windows.h>
#include <thread>
#include <string>
#include <iostream>
using namespace std;
namespace Window
{
    void InitMainThreadWindow();

    int InitWindow();

    void WaitForExit();
}