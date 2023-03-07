#include "main.hpp"
#include "Window.hpp"
#include <iostream>
#include <string>
using namespace std;

#include "Console.hpp"
//@param argc count of arguments
//@param argv array of arguments
int main(int argc, char** argv)
{
    Console::INIT_UNICODE();
    Console::NewConsole();
    cout << "a" << endl;
    Window::InitWindow();
    Console::pause();
}