// 007_Decisiones.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>   
#include <chrono>  
#include <math.h>

int main()
{
float pla = 0, king = 0, dir = 0, torn = 0; 
short int calc = 0, delay = 2;


	std::cout << "Ingrese el numero de Combatientes\n";
	std::cout << "Nota: Solo pueden participar combatientes enteros, lisiados o miembros no contaran para el calculo\n";
	std::cin >> pla;
	std::cout << "El numero de Combatientes es " << floor(pla) << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(delay));
		system("cls");


	std::cout << "Selecciona una opcion utilizando los numeros presentados\n";

	std::cout << "1.-Royal Rumble\n";
	std::cout << "2.-Combate Directo\n";
	std::cout << "3.-Torneo\n";

	
	std::cin.ignore();
	std::cin >> calc;

	switch (calc)
	{
	case 1:
		king = floor(pla) - 1;
		std::cout << "En Royal Rumble se necesitan " << king << " combates\n";
		break;

	case 2:
		dir = floor(pla) - 1;
		std::cout << "En Combate Directo se necesitan " << dir << " combates \n";
		break;

	case 3:
		torn = 2 *( (floor(pla)) - 1);
		std::cout << "En Torneo se necesitan " << torn << " combates \n";
		break;

		
	default:
		std::cout << "Por favor ingresa una opcion valida\n";
	//	goto selec;
		break;

	break;
		
	}




}

