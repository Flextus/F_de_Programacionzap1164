#include <iostream>
#include <thread>   
#include <chrono>  


int maxcd(int a, int b) 
{
    if (b == 0) 
    {
        return a; 
    }else 
    {
        return maxcd(b, a % b); 
    }
}

int main() 
{
    int num1, num2, delay = 2;
    bool ch1 = false, ch2 = false;

do
{
    std::this_thread::sleep_for(std::chrono::seconds(delay));
    system("cls");
do
{
    std::cout << "Introduce el primer numero: ";
    std::cin >> num1;

    std::cout << "Introduce el segundo nuumero: ";
    std::cin >> num2;

    if (num1 < 0 || num2 < 0)
    {
        ch1 = false;
        std::cerr << "Por favor ingrese un valor positivo\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    else if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cerr << "Por favor ingrese un entero positivo\n";
        ch1 = false;
    }
    else
    {
        ch1 = true;
    }
} while (ch1 == false);
    int resultado = maxcd(num1, num2);

    std::cout << "El Maximo comun divisor de " << num1 << " y " << num2 << " es: " << resultado << std::endl;
    std::cout << "Ingresa 1 para repetir y 0 para terminar la ejecucion" << std::endl;
    std::cin >> ch2;
} while (ch2);

}
