// 012_Vidas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int vidas = 3;
	bool yesno = 1;
	do
	{
		if (vidas > 0)
		{

		std::cout << vidas;
		std::cout << "\n";
		vidas = vidas - 1;
		std::cout << "Una Vida perdida, Quieres Continuar?\n";
		std::cout << "1)Si/0)No\n";
		std::cin >> yesno;

		}

	} while (yesno == 1 && vidas>0);


	int cont1 = 1;

	std::cout << "No tienes mas vidas\n";
	

		for (cont1; cont1 <= 100; cont1++)
		{
			std::cout << cont1 << std::endl;
		}

}



