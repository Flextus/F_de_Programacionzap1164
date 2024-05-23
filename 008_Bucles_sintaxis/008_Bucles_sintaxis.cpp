// 008_Bucles_sintaxis.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <thread>   
#include <chrono>

int main()
{
short int delay = 1, delay2 = 2;
	
	bool nameg = true, namef = true;

	std::cout << "Lets try the while" << std::endl;
		while (nameg)
		{
			std::cout << "Your name is Geovanni Georgio?" << std::endl;
			std::cout << "Usa 1 para si y 0 para No" << std::endl;
			std::cin >> nameg;

		}

	std::this_thread::sleep_for(std::chrono::seconds(delay2));
	system("cls");

	std::cout << "then do while" << std::endl;
	short int abc = 0;
	
		do 
		{
			abc = abc++;
			std::cout << abc << std::endl;
				std::this_thread::sleep_for(std::chrono::seconds(delay));
		} 
		while (abc<=24);
	std::this_thread::sleep_for(std::chrono::seconds(delay2));
	system("cls");

	
	std::cout << "Now, for" << std::endl;
	short int xyz = 100;

	for (xyz; xyz>= 50; xyz--) //Cuando una variable se define dentro del "for", esta se resetea al valor inicializado siempre
	{                          //Caso contrario, declararla fuera de este hace que el cambio de valor sea permanente
		std::cout << xyz << std::endl;
	}

}
