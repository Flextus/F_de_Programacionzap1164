#include <iostream>
#include <thread>   
#include <chrono>  

int potencia(int num, int exp)
{
	if (exp == 0)
	{
		return 1;
	}
	return num * potencia(num, exp - 1);
}

int main()
{
    int a = 0, b = 0, delay = 2;
    bool ch1 = false, ch2 = false;

do
{
        std::this_thread::sleep_for(std::chrono::seconds(delay));
        system("cls");
        do
        {
            std::cout << "Introduce el numero base: ";
            std::cin >> a;

            std::cout << "Introduce el exponente: ";
            std::cin >> b;

             if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cerr << "Por favor ingrese valor valido\n";
                ch1 = false;
            }
            else
            {
                ch1 = true;
            }
        } while (ch1 == false);

        int ans = potencia(a, b);
        std::cout << a << " elevado a " << b << " es igual a " << ans << std::endl;
std::cout << "Ingresa 1 para repetir y 0 para terminar la ejecucion" << std::endl;
std::cin >> ch2;
}while (ch2);
}