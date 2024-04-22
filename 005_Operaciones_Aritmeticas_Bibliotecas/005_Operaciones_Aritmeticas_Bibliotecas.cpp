// 005_Operaciones_Aritmeticas_Bibliotecas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>

int main()
{
	float x = 0, y = 0, z = 0;

	std::cout << "Escribe los factores a utilizar (Suma)" << std::endl;
	std::cin >> x;
	std::cin >> y;
	z = (x + y);
	std::cout << z << std::endl;
	x = 0, y = 0;

	std::cout << "Escribe los factores a utilizar (resta)" << std::endl;
	std::cin >> x;
	std::cin >> y;
	z = (x - y);
	std::cout << z << std::endl;
	x = 0, y = 0;

	std::cout << "Escribe los factores a utilizar (producto)" << std::endl;
	std::cin >> x;
	std::cin >> y;
	z = (x * y);
	std::cout << z << std::endl;
	x = 0, y = 0;

	std::cout << "Escribe los factores a utilizar (div)" << std::endl;
	std::cin >> x;
	std::cin >> y;
	z = (x / y);
	std::cout << z << std::endl;
	x = 0, y = 0;

	std::cout << "Escribe los factores a utilizar (potencia)" << std::endl;
	std::cin >> x;
	std::cin >> y;
	z = pow(x, y);
	std::cout << z << std::endl;
	x = 0, y = 0;

	std::cout << "Escribe los factores a utilizar (valor absoluto)" << std::endl;
	std::cin >> x;
	z = abs(x);
	std::cout << z << std::endl;
	x = 0;

	std::cout << "Escribe los factores a utilizar (raiz cuad)" << std::endl;
	std::cin >> x;
	z = sqrt(x);
	std::cout << z << std::endl;
	x = 0;

	std::cout << "Escribe los factores a utilizar (raiz cub)" << std::endl;
	std::cin >> x;
	z = cbrt(x);
	std::cout << z << std::endl;
	x = 0;

	std::cout << "Escribe los factores a utilizar (exp euler)" << std::endl;
	std::cin >> x;
	z = exp(x);
	std::cout << z << std::endl;
	x = 0;

	std::cout << "Escribe los factores a utilizar (log)" << std::endl;
	std::cin >> x;
	z = log(x);
	std::cout << z << std::endl;
	x = 0;

	std::cout << "Escribe los factores a utilizar (log 10)" << std::endl;
	std::cin >> x;
	z = log10(x);
	std::cout << z << std::endl;
	x = 0;

	std::cout << "Escribe los factores a utilizar (log2)" << std::endl;
	std::cin >> x;
	z = log2(x);
	std::cout << z << std::endl;
	x = 0;

	std::cout << "Escribe los factores a utilizar (floor)" << std::endl;//Floor entrega el entero mas grande que es igual o menor que x
	std::cin >> x;
	z = floor(x);
	std::cout << z << std::endl;
	x = 0;

	std::cout << "Escribe los factores a utilizar (ceiling)" << std::endl; //ceil entrega el entero mas grande que es igual o mayor a x
	std::cin >> x;
	z = ceil(x);
	std::cout << z << std::endl;
	x = 0;

	std::cout << "Escribe los factores a utilizar (round)" << std::endl;//redondea
	std::cin >> x;
	z = round(x);
	std::cout << z << std::endl;
	x = 0;

	std::cout << "Escribe los factores a utilizar (sine)" << std::endl;//seno em radianes
	std::cin >> x;
	z = sin(x);
	std::cout << z << std::endl;
	x = 0;

	std::cout << "Escribe los factores a utilizar (cos)" << std::endl;//coseno en radianes
	std::cin >> x;
	z = cos(x);
	std::cout << z << std::endl;
	x = 0;

	std::cout << "Escribe los factores a utilizar (tan)" << std::endl;//tangente en radianes
	std::cin >> x;
	z = tan(x);
	std::cout << z << std::endl;
	x = 0;

	std::cout << "Escribe los factores a utilizar (arcoseno)" << std::endl;//arcoseno en radiantes
	std::cin >> x;
	z = asin(x);
	std::cout << z << std::endl;
	x = 0;

	std::cout << "Escribe los factores a utilizar (arcocoseno)" << std::endl;//arccoseno en radiantes
	std::cin >> x;
	z = acos(x);
	std::cout << z << std::endl;
	x = 0; 
	
	std::cout << "Escribe los factores a utilizar (arcotangente)" << std::endl;//arcotangente en radianes
	std::cin >> x;
	z = atan(x);
	std::cout << z << std::endl;
	x = 0;

	std::cout << "Escribe los factores a utilizar (seno hiperbolico)" << std::endl;
	std::cin >> x;
	z = sinh(x);
	std::cout << z << std::endl;
	x = 0;

	std::cout << "Escribe los factores a utilizar (coseno hiperbolico)" << std::endl;
	std::cin >> x;
	z = cosh(x);
	std::cout << z << std::endl;
	x = 0;

	std::cout << "Escribe los factores a utilizar (tangente hiperbolica)" << std::endl;
	std::cin >> x;
	z = tanh(x);
	std::cout << z << std::endl;
	x = 0;




}


