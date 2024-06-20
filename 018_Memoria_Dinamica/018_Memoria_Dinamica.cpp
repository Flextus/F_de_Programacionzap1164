

#include <iostream>

void Llenar_Matriz(int** matriz, int filas, int columnas)
{
    //Llenar la matriz de 0
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = 0;
            std::cout << "|" << matriz[i][j] << "|";
        }
        std::cout << std::endl;
    }
}



int main()
{
    //Incorrecto no es memoria dinamica.
    /*
    int matriz[100][100];//Esto es memoria estatica.
    int filas;
    int columnas;
    std::cout << "Cuantas filas y cuantas columnas\n";
    std::cin >> filas >> columnas;
    */
    int filas = 0, columnas = 0;
    std::cout << "Ingresa el numero de Filas: ";
    std::cin >> filas;
    std::cout << "\nIngresa el numero de Columnas: ";
    std::cin >> columnas;
    //Crear la memoria dinamica
    int** matriz = new int* [filas];
    for (int i = 0; i < filas; i++)
    {
        matriz[i] = new int[columnas];
    }
    //Asignar valores a la matriz y mostrarla
    Llenar_Matriz(matriz, filas, columnas);

    std::cout << "Vamos a ver la matriz antes de borrar " << matriz << std::endl;
    delete[] matriz;
    matriz = NULL;
    std::cout << "Vamos a ver la matriz " << matriz << std::endl;
}
