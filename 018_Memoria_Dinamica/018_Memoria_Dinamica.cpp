#include <iostream>
#include <random>
#include<time.h>

int main()
{
	int mat1[2][3], inus1 = 0;
	srand(time(NULL));

	for (int i1 = 0; i1 < 2; i1++)
	{
		for (int j1 = 0; j1 < 3; j1++)
		{
			std::cout << "Ingresa el valor de la posicion" << "[" << i1 << "," << j1 << "]" << std::endl;
			std::cin >> inus1;
			mat1[i1][j1] = inus1;
		}
	}
	for (int i1 = 0; i1 < 2; i1++)
	{
		for (int j1 = 0; j1 < 3; j1++)
		{
			std::cout << "[" << mat1[i1][j1] << "]";
		}
		std::cout << "" << std::endl;
	}

	//Memoria Dinamica

	int x1 = 0, y1 = 0, inus2;
	int* x1 = NULL;
	int* y1 = NULL;

	std::cout << "Ingresa la primer dimesion de la matriz" << std::endl;
	std::cin >> x1;


	std::cout << "Ingresa la segunda dimesion de la matriz" << std::endl;
	std::cin >> y1;



	int mat2[*x1][*y1];

	for (int i2 = 0; i2 < x1; i2++)
	{
		for (int j2 = 0; j2 < y2; j2++)
		{

			if (x1 > 3 || y1 > 3)
			{
				mat2[i2][j2] = rand() % 9;
			}
			else
			{
				std::cout << "Ingresa el valor de la posicion" << "[" << i1 << "," << j1 << "]" << std::endl;
				std::cin >> inus2;
				mat1[i1][j1] = inus2;
			}

		}
	}
	for (int i2 = 0; i2 < x1; i2++)
	{
		for (int j2 = 0; j2 < y1; j2++)
		{
			std::cout << "[" << mat1[i2][j2] << "]";
		}
		std::cout << "" << std::endl;
	}




}

