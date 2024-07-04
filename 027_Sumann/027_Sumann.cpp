#include <iostream>

int suma(int a) 
{
    int b;
    std::cout << "Ingrese un numero (0 para terminar): ";
    std::cin >> b;

    if (b == 0) 
    {
        return a;
    }else {return suma(a + b);}
}

int main() 
{
    int resultado = suma(0);
    std::cout << "La suma total es: " << resultado << std::endl;
    return 0;
}
