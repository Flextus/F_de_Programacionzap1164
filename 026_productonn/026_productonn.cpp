#include <iostream>


int multi(int a, int b)
{
	if (b == 0 || a == 0)
	{
		return 0;
	}
	return a + multi(a, b - 1);
}

int main()
{
int a = 0, b = 0;
bool ch1 = false;

do
{
	std::cout << "Ingresa el primer numero\n";
    std::cin >> a;
	std::cout << "Ingresa el segundo numero\n";
	std::cin >> b;

    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cerr << "Por favor ingrese un valor valido\n";
        ch1 = false;
    }
    else
    {
        ch1 = true;
    }
} while (ch1 = false);

    bool negativo = false;
    if (a < 0 && b < 0) 
    {
        a = -a;
        b = -b;
    } else if (a < 0) 
    {
        a = -a;
        negativo = true;
    } else if (b < 0) 
    {
        b = -b;
        negativo = true;
    }
    int resultado = multi(a, b);
    if (negativo) 
    {
        resultado = -resultado;
    }
 std::cout << "El producto es " << resultado << std::endl;
            

}