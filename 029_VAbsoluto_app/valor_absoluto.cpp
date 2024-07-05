#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, int nCmdShow) {
    MessageBox(NULL,
        TEXT("Every dark, has its souls!\n-John Dark Souls"), // Texto del mensaje
        TEXT("Message"), // Título de la ventana
        MB_OK); // Tipo de botón a mostrar
    return 0;
}
