#include <iostream>

int main()
{
    bool q1 = false, q2 = false, q3 = false, q4 = false, q5 = false, cont1 = false, val1;

    std::cout << "Hum... Asi que no recuerdas el genero que era aquel libro y quieres mi ayuda para recordarlo...\n";
    std::cout << "Vamos a empezar\n";
    std::cout << "Es realidad o ficción?\n";
    std::cout << "Utiliza 1 para realidad y 0 para ficcion\n";
    do
    {
        std::cin >> q1;
        if (std::cin.fail()) 
        {
            std::cin.clear(); // Limpia el estado de error de std::cin
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignora la entrada incorrecta
            std::cerr << "Error: Entrada no valida. Por favor, ingrese 1 o 0";//cerr sirve para sacar estados de error
            val1 = false;
        }
            else
            {
            val1 = true;
            }  
    } while (!val1);
    if (q1=true)
    {

    }
    else
    {

    }

}

