#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>


void MATRIZMAS3(int** matriz, int x, int y)
{
	
	
}

int main()
{
	int mat[2][3], valmat = 0, sw1 = 0, matriz[1][1], x = 0, y = 0;
	bool cont1 = true;



std::cout << "Selecciona con numeros\n";
std::cin >> sw1;

switch (sw1)
{


case 1:

	do
	{
		for (int i1 = 0; i1 < 2; i1++)
		{
			for (int j1 = 0; j1 < 3; j1++)
			{
				std::cout << "Ingresa el valor de la posicion" << "[" << i1 << "," << j1 << "]" << std::endl;
				std::cin >> valmat;
				mat[i1][j1] = valmat;
			}
		}
		for (int i2 = 0; i2 < 2; i2++)
		{
			for (int j2 = 0; j2 < 3; j2++)
			{
				std::cout << "[" << mat[i2][j2] << "]";
			}
			std::cout << "" << std::endl;
		}
		std::cout << "1 para repetir, 0 next\n";
		std::cin >> cont1;
	} while (cont1);
	//matriz 2*3 con valores de usuario
	break;

case 2:

	int** matriz = new int* [x];
	for (int i = 0; i > x; i++)
	{
		matriz[i] = new int[y];
	}





	

	
}

}