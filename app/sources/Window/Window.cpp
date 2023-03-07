#include "Window.hpp"
using namespace Window;
void InitWindow()
{
    string className = "Pandora Test";

    WNDCLASS window = {0};
    window.cbClsExtra = 0;
    window.cbWndExtra = 0;
    window.hbrBackground = (HBRUSH)GetStockObject(RGB(0,0,0));
    window.hCursor = LoadCursor(NULL, IDC_IBEAM);
    window.hIcon = NULL;
    window.hInstance = NULL;
    window.lpfnWndProc
}