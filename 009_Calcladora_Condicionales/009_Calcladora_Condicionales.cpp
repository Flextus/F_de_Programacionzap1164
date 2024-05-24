// 009_Calcladora_Condicionales.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>   
#include <chrono>

int main()
	{

bool salida = 0;
short int menu1 = 0, delay = 2;
float num1 = 0, num2 = 0;

	do
	{
		std::cout << "Bienvenido a la Calculadora" << std::endl;
		std::cout << "Selecciona una opcion usando el numero que indica" << std::endl;

		std::cout << "1)Suma\n";
		std::cout << "2)Resta\n";
		std::cout << "3)Producto\n";
		std::cout << "4)Division\n";
		std::cout << "5)Valor Absoluto\n";
		std::cout << "6)Que numero es mas grande?\n";
		std::cin >> menu1;

		std::this_thread::sleep_for(std::chrono::seconds(delay));
		system("cls");

			switch (menu1)
			{
			case 1: std::cout << "1)Suma\n";
					std::cout << "Ingresa el primer numero\n\n";
						std::cin >> num1;
					std::cout << "Ingresa el segundo numero\n";
						std::cin >> num2;

					std::cout << num1 + num2 << std::endl;
					num1 = 0, num2 = 0;

				std::cout << "Para Volver al Menu Principal, Pulsa 1" << std::endl;
				std::cout << "Para Terminar la Ejecucion, Pulsa 0" << std::endl;

				std::cin >> salida;
				break;


			case 2: std::cout << "2)Resta\n";
					std::cout << "Ingresa el primer numero\n";
						std::cin >> num1;
					std::cout << "Ingresa el segundo numero\n";
						std::cin >> num2;

					std::cout << num1 - num2 << std::endl;
					num1 = 0, num2 = 0;

				std::cout << "Para Volver al Menu Principal, Pulsa 1" << std::endl;					std::cout << "Para Terminar la Ejecucion, Pulsa 0" << std::endl;
				std::cout << "Para Terminar la Ejecucion, Pulsa 0" << std::endl;

				std::cin >> salida;
				break;


			case 3: std::cout << "3)Producto\n";
					std::cout << "Ingresa el primer numero\n";
						std::cin >> num1;
					std::cout << "Ingresa el segundo numero\n";
						std::cin >> num2;

					std::cout << num1 * num2 << std::endl;
					num1 = 0, num2 = 0;

				std::cout << "Para Volver al Menu Principal, Pulsa 1" << std::endl;
				std::cout << "Para Terminar la Ejecucion, Pulsa 0" << std::endl;

				std::cin >> salida;
				break;


			case 4: std::cout << "4)Division\n";
					std::cout << "Ingresa el primer numero\n";
						std::cin >> num1;
					std::cout << "Ingresa el segundo numero\n";
						std::cin >> num2;

						if (num2 == 0)
							{
							std::cout << "Ingrese un valor valido\n";
							}
							else
							{ 
								std::cout << num1 / num2 << std::endl;
							}
						
					num1 = 0, num2 = 0;

				std::cout << "Para Volver al Menu Principal, Pulsa 1" << std::endl;
				std::cout << "Para Terminar la Ejecucion, Pulsa 0" << std::endl;

				std::cin >> salida;
				break;


			case 5: std::cout << "5)Valor Absoluto\n";
					std::cout << "Ingresa un numero" << std::endl;
						std::cin >> num1;
					if (num1 < 0)
						{
						num1 = num1 * (-1);
						}
					std::cout << "Su valor absoluto es " << num1 << std::endl;

				std::cout << "Para Volver al Menu Principal, Pulsa 1" << std::endl;
				std::cout << "Para Terminar la Ejecucion, Pulsa 0" << std::endl;

				std::cin >> salida;
				break;


			case 6: std::cout << "6)Que numero es mas grande?\n";
					std::cout << "Ingresa 2 numeros a comparar" << std::endl;
						std::cin >> num1;
						std::cin >> num2;

					if (num1 == num2)
						{
						std::cout << "Los numeros son iguales" << std::endl;
						}
					else
						{
							if (num1 > num2)
								{
								std::cout << num1 << " Es mayor que " << num2 << std::endl;
								}
							else
							{
							std::cout << num2 << " Es mayor que " << num1 << std::endl;
							}
					}

					std::cout << "Para Volver al Menu Principal, Pulsa 1" << std::endl;
					std::cout << "Para Terminar la Ejecucion, Pulsa 0" << std::endl;

					std::cin >> salida;
					break;
			}
	}

		while (salida != 0);
	


}


