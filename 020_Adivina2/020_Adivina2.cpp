#include <iostream>
#include <string>
#include <cctype>

std::string minus(std::string input)
{
    for (char& c : input)
    {
        c = std::tolower(c);
    }
    return  input;
}
//convierte todp string a su equivalente en minusculas para evitar problemas

bool comparar(std::string input)
{
    input = minus(input);
    
    if (input == "si")
    {
        return true;
    }else if (input == "no")
        {
            return false;
        }else
        {
            std::cerr << "Por favor Ingrese un dato valido\n";
            exit(EXIT_FAILURE);
        }
}




int main() 
{
std::string input;
bool q = false;

    std::cout << "Vamos a tratar de adivinar deportes...\n";
    std::cout << "Tus opciones son: ATLETISMO, GOLF, FUTBOL, BASKETBALL, BALONMANO\n";
    std::cout << "Vamos a empezar\n";
    std::cout << "Usa un balon/esfera?\n";
    std::cout << "Utiliza Si o No para responder\n";
    std::cin >> input;

    q = comparar(input);

        if (q)
        {
            std::cout << "Es de equipos?\n";
            std::cout << "Utiliza Si o No para responder\n";
            std::cin >> input;
            q = comparar(input);

            if (q)
            {
                std::cout << "Utilizas las manos?\n";
                std::cout << "Utiliza Si o No para responder\n";
                std::cin >> input;
                q = comparar(input);

                if (q)
                {
                    std::cout << "Tiene canastas?\n";
                    std::cout << "Utiliza Si o No para responder\n";
                    std::cin >> input; 
                    q = comparar(input);

                    if (q)
                    {
                        std::cout << "Es Balonmano?\n";
                        std::cout << "Utiliza  Si o No para responder\n";
                        std::cin >> input;
                        q = comparar(input);

                        if (q)
                        {
                            std::cout << "Lo sabia\n";
                        }
                        else
                        {
                            std::cout << "Entonces no se";
                        }
                    }
                    else
                    {
                        std::cout << "Entonces es Basketball";
                    }
                }
                else
                {
                    std::cout << "Entonces es Futbol";
                }
            }
            else
            {
                std::cout << "Entonces es Golf";
            }

        }
        else
        {
            std::cout << "Es Atletismo\n";
        }

    

}
