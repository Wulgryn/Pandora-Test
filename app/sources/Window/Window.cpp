#include "Window.hpp"
using namespace Window;
jthread window_thread;
LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
int Window::InitWindow()
{
    
    cout << "Window Init" << endl;
    string className = "Pandora Test";

    WNDCLASS window = {0};
    window.cbClsExtra = 0;
    window.cbWndExtra = 0;
    window.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
    window.hCursor = LoadCursor(NULL, IDC_ARROW);
    window.hIcon = NULL;
    window.hInstance = NULL;
    window.lpfnWndProc = WndProc;
    window.lpszClassName = className.c_str();
    window.lpszMenuName = NULL;
    window.style = CS_HREDRAW | CS_VREDRAW;

    if(!RegisterClass(&window))cout << "Failed to register window" << endl;

    HWND hwnd = CreateWindow(
        className.c_str(),
        "Pandora Test", //Title
        WS_OVERLAPPEDWINDOW,
        0,0, //x,y
        500,500, //width,height
        NULL,
        NULL,
        NULL,
        NULL
    );
    ShowWindow(hwnd, SW_RESTORE);
    MSG msg;
    while(GetMessage(&msg, NULL, 0, 0)>0)
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    return msg.wParam;
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam)
{
    switch(msg)
    {
        case WM_DESTROY:
            PostQuitMessage(0);
            break;
        default:
            break;
    }
    return DefWindowProc(hwnd, msg, wparam, lparam);
}