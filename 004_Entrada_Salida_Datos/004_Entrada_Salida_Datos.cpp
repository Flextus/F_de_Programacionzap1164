// 004_Entrada_Salida_Datos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <locale>

int main()
{
setlocale(LC_ALL, "es_MX.UTF-8");
std::string NombreApellido = "a", EmpresadeSeguro = "a";
bool alcohol = 0, tabaco = 0, drogas = 0;
short int edad = 0, dedos = 0;
float altura = 0, masa = 0;
char MoF = 'a';



    std::cout << "Bienvenido al Consultorio Virtual del Dr Sepulveda, ¿Seria tan amable de conestar mis preguntas?"<<std::endl;

    std::cout << "¿Cual es su nombre?" << std::endl;
        std::getline(std::cin, NombreApellido);
    std::cout << "Cual es tu Aseguradora?" << std::endl;
        std::getline(std::cin, EmpresadeSeguro);
    std::cout << "Cual es tu genero? Utiliza 1 para Masculino o 0 para Femenino" << std::endl; 
        std::cin >> MoF;
    std::cout << "Ingresa tu estatura en Metros\n";
        std::cin >> altura;
    std::cout << "Ingresa tu peso en Kilogramos\n";
        std::cin >> masa;
    std::cout << "Cuantos años tienes?\n";
        std::cin >> edad;
    std::cout << "Cuantos dedos tienes en las manos?\n";
        std::cin >> dedos;
    std::cout << "Responde las siguientes preguntas con SI o NO, usa un 1 para SI y un 0 para NO" << std::endl;
    std::cout << "Bebes alcohol?\n";
        std::cin >> alcohol;
    std::cout << "Fumas tabaco?\n";
        std::cin >> tabaco;
    std::cout << "Te Drogas? \n";
        std::cin >> drogas;

    std::cout << "Hola"<<NombreApellido<<



    




return 0; //En toda funcion (main) cuyo prefijo sea una variable, se debe retornar el valor a 0 
}

