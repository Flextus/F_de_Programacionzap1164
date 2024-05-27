// 015_Pokemon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>   
#include <chrono>  

int main()
{
	int poke = 0, machamp = 100, bidoof = 100, pelea = 0;
	int	ataque = 0, bidoofenem = 100, delay = 1, delay3 = 3;

	std::cout << "Bienvenido a la beta de Showdown 2" << std::endl;
	std::cout << "Selecciona tu Pokemon usando los numeros de las opciones" << std::endl;
	std::cout << "1)Machamp\n";
	std::cout << "Tipo: Lucha\t HP: 100\n";
	std::cout << "\n";
	std::cout << "2)Bidoof\n";
	std::cout << "Tipo: Normal\t HP:100\n";
	std::cout << "\n";
	std::cin >> poke;
	std::this_thread::sleep_for(std::chrono::seconds(delay));
	system("cls");

	switch (poke)
	{

	case 1:
		std::cout << "Machamp, ya veo\n";
		std::cout << "Ha aparecido un Bidoof Salvaje\n";
		do
		{
			std::cout << "Que deseas hacer? (Usa los numeros para seleccionar)\n";
			std::cout << "1)Pelear\n";
			std::cout << "2)Huir\n";
			std::cin >> pelea;
			switch (pelea)
			{
			case 1:
				std::cout << "Selecciona un ataque usando los numeros \n";
				std::cout << "1)Onda Certera\n";
				std::cout << "2)Proteccion\n";
				std::cin >> ataque;
				switch (ataque)
				{
				case 1:
					bidoofenem = bidoofenem - 30;
					std::cout << "Es super Efectivo!!\n";
					std::cout << "El Bidoof Salvaje tiene " << bidoofenem << " puntos de vida restantes\n",
						machamp = machamp - 15;
					std::cout << "Tu Machamp tiene  " << machamp << " puntos de vida restantes\n";
						std::this_thread::sleep_for(std::chrono::seconds(delay3));
						system("cls");
					break;

				case 2:
					std::cout << "Te has protegido!\n";
					std::cout << "El Bidoof Salvaje tiene " << bidoofenem << " puntos de vida restantes\n";
					std::cout << "Tu Machamp tiene " << machamp << " puntos de vida restantes\n";
					std::this_thread::sleep_for(std::chrono::seconds(delay3));
					system("cls");
					break;

				default:
					std::cout << "Por favor Selecciona una Opcion Valida\n";
					break;
					break;
				}
				break;
			case 2:
				std::cout << "Haz huido exitosamente\n";
				break;
			default:
				std::cout << "Por favor Selecciona una Opcion Valida\n";
				break;
				break;
			}

		} while (bidoofenem >= 0 && machamp >= 0 && pelea == 1);

		break;



	case 2:
		std::cout << "Bidoof, ya veo\n";
		do
		{
			std::cout << "Que deseas hacer? (Usa los numeros para seleccionar)\n";
			std::cout << "1)Pelear\n";
			std::cout << "2)Huir\n";
			std::cin >> pelea;
			switch (pelea)
			{
			case 1:
				std::cout << "Selecciona un ataque usando los numeros \n";
				std::cout << "1)Placaje\n";
				std::cout << "2)Proteccion\n";
				std::cin >> ataque;
				switch (ataque)
				{
				case 1:
					bidoofenem = bidoofenem - 15;
					std::cout << "El Bidoof Salvaje tiene " << bidoofenem << " puntos de vida restantes\n",
						bidoof = bidoof - 15;
					std::cout << "Tu Bidoof tiene  " << bidoof << " puntos de vida restantes\n";
					std::this_thread::sleep_for(std::chrono::seconds(delay3));
					system("cls");
					break;

				case 2:
					std::cout << "Te has protegido!\n";
					std::cout << "El Bidoof Salvaje tiene " << bidoofenem << " puntos de vida restantes\n";
					std::cout << "Tu Bidoof tiene " << bidoof << " puntos de vida restantes\n";
					std::this_thread::sleep_for(std::chrono::seconds(delay3));
					system("cls");
					break;

				default:
					std::cout << "Por favor Selecciona una Opcion Valida\n";
					break;
					break;
				}
				break;
			case 2:
				std::cout << "Haz huido exitosamente\n";
				break;
			default:
				std::cout << "Por favor Selecciona una Opcion Valida\n";
				break;
				break;
			}

		} while (bidoofenem >= 0 && bidoof >= 0 && pelea == 1);
		break;

	default:
		std::cout << "Por favor elige una opción Valida\n";
		break;

		break;


	}
	if (bidoofenem <= 0)
	{
		std::cout << "Haz Ganado!!\n";
	}
	else
	{
		std::cout << "Haz perdido\n";
	}
	/*
	*/


}

