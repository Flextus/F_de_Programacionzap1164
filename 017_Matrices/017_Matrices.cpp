// 007_P07_Matrices.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <random>
#include<time.h>

int main()
{
	srand(time(NULL));
	
	/*
	int edades[3][2] = { (1,2),(9,8),(14,21) };

	int filas = (sizeof(edades) / sizeof(edades[0])); //sizeof nos permite saber el valor de una variable en bytes

	std::cout << (sizeof(edades)) << std::endl;       //tambien podemos calcular cuanto  cada elemento de la columna o fila
	std::cout << (sizeof(edades[0])) << std::endl;
	std::cout << "a/b" << std::endl;
	std::cout << filas << std::endl;


	//El segundo indice nos indica que etamos solicitando el valor almacenado en el [2]
	int columnas = (sizeof(edades) / sizeof(edades[0][0]));
	std::cout << (sizeof(edades)) << std::endl;
	std::cout << (sizeof(edades[0][0])) << std::endl;
	std::cout << columnas;
	//std::cout << mat1;     // esto imprime donde se almacena la matriz
	*/
	int matin = 0, lloop = 0;
	

	do
	{
		std::cout << "Selecciona la matriz" << std::endl;
		std::cout << "1) 3*3" << std::endl;
		std::cout << "2) 5*5" << std::endl;
		std::cout << "3) 10*10" << std::endl;
		std::cin >> matin;
		switch (matin)
		{
		case 1://3*3
			int mat1[3][3];

			for (int i1 = 0; i1 < 3; i1++)
			{
				for (int j1 = 0; j1 < 3; j1++)
				{
					mat1[i1][j1] = rand() % 9;
					std::cout << "pos: [" << i1 <<","<<j1<< "]= "<< mat1[i1][j1] << std::endl;
				}
			}

			for (int i1 = 0; i1 < 3; i1++)
			{
				for (int j1 = 0; j1 < 3; j1++)
				{
					std::cout << "[" << mat1[i1][j1] << "]";
				}
				std::cout << "" << std::endl;
			}
			std::cout << "Pulsa 0 para terminar la ejecucuion y cualquier otro numero para regresar al menu" << std::endl;
			std::cin >> lloop;

			break;

		case 2://5*5
			int mat2[5][5];

			for (int i2 = 0; i2 < 5; i2++)
			{
				for (int j2 = 0; j2 < 5; j2++)
				{
					mat2[i2][j2] = rand() % 9;
					std::cout << "pos: [" << i2 << "," << j2 << "]= " << mat2[i2][j2] << std::endl;
				}
			}

			for (int i2 = 0; i2 < 5; i2++)
			{
				for (int j2 = 0; j2 < 5; j2++)
				{
					std::cout << "[" << mat2[i2][j2] << "]";
				}
				std::cout << "" << std::endl;
			}
			std::cout << "Pulsa 0 para terminar la ejecucuion y cualquier otro numero para regresar al menu" << std::endl;
			std::cin >> lloop;

			break;

		case 3:	//10*10
			int mat3[10][10];

			for (int i3 = 0; i3 < 10; i3++)
			{
				for (int j3 = 0; j3 < 10; j3++)
				{
					mat3[i3][j3] = rand() % 9;
					std::cout << "pos: [" << i3 << "," << j3 << "]= " << mat3[i3][j3] << std::endl;
				}
			}

			for (int i3 = 0; i3 < 10; i3++)
			{
				for (int j3 = 0; j3 < 10; j3++)
				{
					std::cout << "[" << mat3[i3][j3] << "]";
				}
				std::cout << "" << std::endl;
			}
			std::cout << "Pulsa 0 para terminar la ejecucuion y cualquier otro numero para regresar al menu" << std::endl;
			std::cin >> lloop;

			break;


		default: 			
			std::cout << "Por favor Ingresa un valor valido" << std::endl;
			std::cout << "Pulsa 0 para terminar la ejecucuion y cualquier otro numero para regresar al menu" << std::endl;
			std::cin >> lloop;

			break;
		}

	} while (lloop != 0);
}

