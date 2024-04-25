// 006_Repaso_Entrada_In_Out_Control.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <locale>

int main()
{
std::string email, pass;
setlocale(LC_ALL, "es_MX.UTF-8");

    std::cout << "Bienvenido a Albion Online 2: Electric Boogalo" << std::endl;
    std::cout << "Inicie Sesion para Continuar" << std::endl;
    std::cout << "\t";
    std::cout << "\t";
    std::cout << "\t";
    std::cout << "Inicie sesion usando el correo y contraseña que le fueron proporcionados previamente" << std::endl;
    std::cout << "Ingrese el email" << std::endl;
        std::cin >> email;
    std::cout<<"Ingrese la contraseña" << std::endl;
        std::cin >> pass;
    if (email=="albiondemobeta@hotmail.com")
    {
    }
    else
        {
        std::cout << "Email invalido" << std::endl;
        
        }


/*std::cin >> email;
if (email=="albiontest@hotmail.com")
{
    std::cout << "Ok" << std::endl;

}
else
{
    std::cout << "Pito, puto";
    */
}
}

