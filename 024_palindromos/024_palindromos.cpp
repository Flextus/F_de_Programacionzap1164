
#include <iostream>
#include <string>
#include <thread>   
#include <chrono>  

bool Pal(std::string palabra, int inicio, int fin)
{
    if (inicio >= fin)
    {
        return true;
    }
    if (palabra[inicio] != palabra[fin])
    {
        return false;
    }
    return Pal(palabra, inicio + 1, fin - 1);
}

int main()
{
    bool ch1 = false;
    int delay = 2;
    do
    {
        std::this_thread::sleep_for(std::chrono::seconds(delay));
        system("cls");

        std::string palabra;

        std::cout << "Ingrese una palabra: ";
        std::cin >> palabra;

        if (Pal(palabra, 0, palabra.length() - 1))
        {
            std::cout << "La palabra \"" << palabra << "\" es un palindromo.\n";
        }
        else
        {
            std::cout << "La palabra \"" << palabra << "\" no es un palindromo.\n";
        }
        std::cout << "Ingresa 1 para repetir y 0 para terminar la ejecucion" << std::endl;
        std::cin >> ch1;
    } while (ch1);

}
