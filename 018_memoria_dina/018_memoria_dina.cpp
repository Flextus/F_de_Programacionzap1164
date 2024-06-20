#include <iostream>
#include <cstdlib> // for srand, rand
#include <ctime>   // for time

void MATRIZMAS3(int** matriz, int x, int y)
{
    srand(time(NULL));

    // Corrección de la condición del bucle
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            matriz[i][j] = rand() % 9 + 1;
            std::cout << "[" << matriz[i][j] << "]";
        }
        std::cout << std::endl; // Añadido para formatear correctamente la salida
    }
}

void MATRIZ3(int** matriz, int x, int y)
{
    int valuser = 0;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            std::cout << "Ingresa el valor de la posicion [" << i << "," << j << "]" << std::endl;
            std::cin >> valuser;
            matriz[i][j] = valuser;
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            std::cout << "[" << matriz[i][j] << "]";
        }
        std::cout << std::endl; // Añadido para formatear correctamente la salida
    }
}

int main()
{
    int mat[2][3], valmat = 0, sw1 = 0, x = 0, y = 0;
    bool cont2 = true;

    std::cout << "Ingresa valor en x\n";
    std::cin >> x;
    std::cout << "Ingresa valor en y\n";
    std::cin >> y;

    // Corrección en la inicialización de la matriz dinámica
    int** matriz = new int* [x];
    for (int i = 0; i < x; i++)
    {
        matriz[i] = new int[y];
    }

    while (cont2)
    {
    tohere:
        std::cout << "Selecciona con numeros\n";
        std::cout << "1) 2*3  2) matriz libre\n";
        std::cin >> sw1;

        switch (sw1)
        {
        case 1:
            for (int i1 = 0; i1 < 2; i1++)
            {
                for (int j1 = 0; j1 < 3; j1++)
                {
                    std::cout << "Ingresa el valor de la posicion [" << i1 << "," << j1 << "]" << std::endl;
                    std::cin >> valmat;
                    mat[i1][j1] = valmat;
                }
            }
            for (int i2 = 0; i2 < 2; i2++)
            {
                for (int j2 = 0; j2 < 3; j2++)
                {
                    std::cout << "[" << mat[i2][j2] << "]";
                }
                std::cout << std::endl; // Simplificación de la salida
            }
            break;

        case 2:
            if (x > 3 || y > 3)
            {
                MATRIZMAS3(matriz, x, y);
            }
            else
            {
                MATRIZ3(matriz, x, y);
            }
            break;

        default:
            std::cout << "Ingresa una opcion Valida\n";
            goto tohere;
            break;
        }

        std::cout << "1 para repetir, 0 end\n";
        std::cin >> cont2;
    }

    // Corrección en la eliminación de la matriz dinámica
    for (int i = 0; i < x; i++)
    {
        delete[] matriz[i];
    }
    delete[] matriz;
    matriz = NULL;

    return 0;
}