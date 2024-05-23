// P09_Calculadora_Condicionales.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <thread>   
#include <chrono>

int main()
{
float num1 = 0, num2 = 0;
short int menu1 = 0, delay = 2, salida = 0;

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
	do
	{

		switch (menu1)
		{
		case 1: std::cout << "1)Suma\n";
				std::cout << "Ingresa el primer numero";
					std::cin >> num1;
				std::cout << "Ingresa el segundo numero";
					std::cin >> num2;
				
				std::cout << num1 + num2;
			num1 = 0, num2 = 0;

			std::cout << "Para Volver al Menu Principal, Pulsa 0" << std::endl;
			std::cin >> salida;
			break;


		case 2: std::cout << "2)Resta\n";
			std::cout << "Ingresa el primer numero";
			std::cin >> num1;
			std::cout << "Ingresa el segundo numero";
			std::cin >> num2;
			num1 = 0, num2 = 0;
		case 3: std::cout << "3)Producto\n";
			std::cout << "Ingresa el primer numero";
			std::cin >> num1;
			std::cout << "Ingresa el segundo numero";
			std::cin >> num2;
			num1 = 0, num2 = 0;
		case 4: std::cout << "4)Division\n";
			std::cout << "Ingresa el primer numero";
			std::cin >> num1;
			std::cout << "Ingresa el segundo numero";
			std::cin >> num2;
			num1 = 0, num2 = 0;
		case 5: std::cout << "5)Valor Absoluto\n";
	
		case 6: std::cout << "6)Que numero es mas grande?\n";
	
		}
	}

	while (salida != 0);
}


