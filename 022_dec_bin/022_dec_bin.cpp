#include <iostream>
#include <string>
#include <thread>   
#include <chrono>  

std::string conv(int input) 
{
    if (input == 0) 
    {
        return "";
    }else
    {
        return conv(input / 2) + std::to_string(input % 2);
    }
}

std::string conv0(int input) 
{
    if (input == 0) 
    {
        return "0";
    }else 
    {
        return conv(input);
    }
}

int main()
{
    int input = 0, delay = 2;
    bool ch1 = false, ch2 = false;

    do
    {
        std::this_thread::sleep_for(std::chrono::seconds(delay));
        system("cls");
    do
    {
        std::cout << "Ingresa un decimal positivo\n";
        std::cin >> input;

        if (input < 0)
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

    std::string binario = conv0(input);
    std::cout << binario << std::endl;
    std::cout << "Ingresa 1 para repetir y 0 para terminar la ejecucion" << std::endl;
    std::cin >> ch2;
    } while (ch2);

}