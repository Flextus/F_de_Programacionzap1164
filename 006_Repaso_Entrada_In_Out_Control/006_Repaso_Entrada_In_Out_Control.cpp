// 006_Repaso_Entrada_In_Out_Control.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <locale>

int main()
{
std::string email, pass;
short int menu = 0; 
setlocale(LC_ALL, "es_MX.UTF-8");

    std::cout << "Bienvenido a Albion Online 2: Electric Boogalo" << std::endl;
    std::cout << "Inicie Sesión para Continuar" << std::endl;
    std::cout << "\t";
    std::cout << "\t";
    std::cout << "\t";
    std::cout << "Inicie sesión usando el correo y contraseña que le fueron proporcionados previamente" << std::endl;
    std::cout << "Ingrese el email" << std::endl;
        std::cin >> email;
    std::cout<<"Ingrese la contraseña" << std::endl;
        std::cin >> pass;
    if (email=="albiondemobeta@hotmail.com")
    {   if (pass=="demo123")
        {
        std::cout << "Cargando..." << std::endl;
        std::cout << "...";
        std::cout << "\t";
        std::cout << "Seleccione una opción para continuar";
        std::cout << "\t";
            switch (menu)
            {
                case 1://Iniciar partida
                    std::cout << "Albion online es un MMORPG no lineal donde escribes tu propia historia..." << std::endl;

                case 2://Configuración
                case 3://Changelog
                case 4://Feedback & FAQ
            

            default:
            break;

            }

        }
    }
    else
        {
        std::cout << "Informacion de inicio de sesion incorrecta" << std::endl;
        
        }



}

