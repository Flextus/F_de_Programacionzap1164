// 010_login_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include <cctype>
#include <limits>

bool esCadenaValida(const std::string& cadena) {
    for (char c : cadena) {
        if (std::isdigit(c)) {
            return false; // Si encontramos un dígito, la cadena no es válida
        }
    }
    return true;
}

int main() 
{
    do 
    {

    // Password = holaclave, num acceso = 2785
    std::string pass;
    int pin = 0;
    bool checkchar = false, checknum = false;

    // Validación de la contraseña
    do {
        std::cout << "Hola, ingresa tu clave de Acceso: ";
        std::getline(std::cin, pass);

        if (esCadenaValida(pass)) {
            checkchar = true;
        }
        else {
            std::cout << "Entrada no valida. Por favor, Usa solo letras " << std::endl;
        }
    } while (!checkchar);

    // Validación del PIN
    do {
        std::cout << "Hola, ingresa tu PIN de Acceso: ";
        std::cin >> pin;

        if (std::cin.fail()) {
            std::cin.clear(); // Limpiar el estado de error
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignorar la entrada incorrecta
            std::cout << "Entrada no valida. Por favor, usa solo numeros" << std::endl;
        }
        else {
            checknum = true;
        }
    } while (!checknum);

    // Verificación de las credenciales
    if (pass == "holaclave" && pin == 2785) {
        std::cout << "Login exitoso\n";
    }
    else {
        std::cout << "Login fallido\n";
    }

    return 0;
    } while (true);
}






