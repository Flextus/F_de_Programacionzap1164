// 016_Arrays.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <locale>
#include <thread>   
#include <chrono>  

int main()
{
setlocale(LC_ALL, "es_MX.UTF-8");


        std::string Titulo[5];
        short int Year[5], aux = 0, delay = 1;
        std::string Autor[5];

        //Modulo de solicitud de información.
        std::cout << "Registra aquí tu biblioteca de juegos:\n";
        for (int i = 0; i < 5; i++)
        {
            std::cout << "Ingresa el Titulo del Juego " << i << std::endl;
            getline(std::cin, Titulo[i]);
            std::cout << "En que año fue publicado " << Titulo[i]<<" ?" << std::endl;
            std::cin >> Year[i];
            std::cout << "Quien fue el Director de " << Titulo[i] << "?\n";
            std::cin.ignore();
            getline(std::cin, Autor[i]);

                std::this_thread::sleep_for(std::chrono::seconds(delay));
                system("cls");

        }

        //Modulo de muestreo de la información
        for (int j = 0; j < 5; j++)
        {
            //Se imprime la información de los videojuegos

            
            std::cout << Titulo[j] << ", Fue Publicado en " << Year[j] << " por " << Autor[j] << std::endl;


        }
        
}

