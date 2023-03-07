#pragma once
#include <Windows.h>
#include <thread>
#include <string>
using namespace std;
namespace Window
{
    jthread thread;

    void InitWindow();

    void WaitForExit();
}