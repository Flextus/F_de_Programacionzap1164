#include <iostream>

int main()
{
    bool q1 = false, q2 = false, q3 = false, q4 = false, q5 = false, cont1 = false, val1;

    std::cout << "Vamos a tratar de adivinar deportes...\n";
    std::cout << "Tus opciones son: ATLETISMO, GOLF, FUTBOL, BASKETBALL, BALONMANO\n";
    std::cout << "Vamos a empezar\n";
    std::cout << "Usa un balon/esfera?\n";
    std::cout << "Utiliza 1 para Si y 0 para No\n";
    std::cin >> q1;
    if (q1)
    {
        std::cout << "Es de equipos\n?";
        std::cout << "Utiliza 1 para Si y 0 para No\n";
        std::cin >> q2;
        if (q2)
        {
            std::cout << "Utilizas las manos\n?";
            std::cout << "Utiliza 1 para Si y 0 para No\n";
            std::cin >> q3;
            if (q3)
            {
                std::cout << "Tiene canastas\n?";
                std::cout << "Utiliza 1 para Si y 0 para No\n";
                std::cin >> q4;
                if (q4)
                {
                    std::cout << "Es Balonmano\n?";
                    std::cout << "Utiliza 1 para Si y 0 para No\n";
                    std::cin >> q5;
                    if (q5)
                    {
                        std::cout << "Lo sabia\n";
                    }
                    else
                    {
                        std::cout << "Entonces no se";
                    }
                }else
                {
                    std::cout << "Entonces es Basketball";
                }
            }
            else
            {
                std::cout << "Entonces es Futbol";
            }
        }else
        {
            std::cout << "Entonces es Golf";
        }

    }else
    {
        std::cout<<"Es Atletismo\n";
    }

}

