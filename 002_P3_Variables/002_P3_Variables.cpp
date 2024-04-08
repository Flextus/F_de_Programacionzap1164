// 002_P3_Variables.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale.h>
#include <string>

int main()
{   
    setlocale(LC_ALL, "es_MX.UTF-8");


 //Tipo de dato + Nombre de la variable + Declaracion Inicial
 
//bool    
 /*       bool bandera = false; //bool es una variable binaria, asi que puede ser true or false (1/0)
        bool bandera2= true;

//Imprimimos el valor de la bandera 
        std::cout<<"El valor de la variable booleana es: " <<bandera<< std::endl;
        std::cout<<"El valor de la variable booleana es: "<< bandera2 << std::endl;

      
 //int      
        int Edad = 0;//La variable int sirve para numeros enteros desde -2147483647 hasta 2147483647

//Imprimimos el valor de la edad
        std::cout << "El valor de la variable entera es: " << Edad << std::endl;
        std::cout << "¿Cual es tu edad? " << std::endl;
        std::cin >> Edad; //cin significa Caracter Input, sirve para solicitar una entrada de datos al usuario
        std::cout << "Entonces tienes " << Edad << " años" << std::endl;


//float
        float altura = 0;//float sirve para numeros con decimales

//Imprimimos el valor de la altura
        std::cout << "Tu mides " << altura << " metros"<<std::endl;
        std::cout << "¿Cuanto mides?" << std::endl;
        std::cin >> altura;
        std::cout << "Entonces tu mides " << altura << " metros" << std::endl;


//char
        char letrafav = 1;//char se usa para imprimir UN SOLO caracter, puedes asignar un rango limitado y predifinido de acsii y al llamarlo va a traducirlo a texto simple


//Imprimimos el valor del caracter
        std::cout << "Tu letra favorita es " << letrafav<< std::endl;
        std::cout<< "¿Cual es tu letra favorita?" << std::endl;
        std::cin >> letrafav;
        std::cout << "Tu letra favorita es " << letrafav << std::endl;//Si quieres mostrar un valor acsii, no se puede editar desde aqui, deberas ingresarlo desde que se declara la variable
        
        char favacsii = 89; //89 es "Y" en acsii
        std::cout << "Tu letra favorita es " << favacsii<< std::endl; 


//double

        double Pi = 0;// double es una variable float de hasta 15 digitos

//Imprimimos el valor de double
        std::cout << "Los digitos de Pi son " << Pi << " ?" << std::endl;
        std::cin >> Pi;
        std::cout << "No, los digitos de Pi son " << Pi << std::endl;  


//string

        std::string Saludo = "Hola Usuario"; //string se utiliza para cadenas de caracteres 

//Imprimimos el valor de string
        std::cout << Saludo << std::endl;
        std::cout << "Saludame " << std::endl;
        std::cin >> Saludo;
        std::cout << Saludo << std::endl;     */


//Operaciones aritmeticas 

//int
        short int factor1 = 0;
        short int factor2 = 0; 
        

        

        std::cout << "Ingresa los numeros a sumar" << std::endl;
        std::cin >> factor1;
        std::cin >> factor2;
        short int respsuma = factor1 + factor2;
        std::cout << "La suma es " << respsuma << std::endl;

        std::cout << "Ingresa los numeros a restar" << std::endl;
        std::cin >> factor1;
        std::cin >> factor2;
        short int respresta = factor1 - factor2;
        std::cout << "La resta es " << respresta << std::endl;


        std::cout << "Ingresa los numeros a multiplicar" << std::endl;
        std::cin >> factor1;
        std::cin >> factor2;
        short int respmult = factor1 * factor2;
        std::cout << "El producto es " << respmult << std::endl;

        std::cout << "Ingresa los numeros a dividir" << std::endl;
        std::cin >> factor1;
        std::cin >> factor2;
        short int respdiv = factor1 / factor2;
        std::cout << "El cociente es " << respdiv << std::endl;  //No es posible obtener numeros decimales con la variable int

        std::cout << "Ingresa el numero a elevar" << std::endl;
        std::cin >> factor1;
        short int respelev;
        std::cout << factor1 << " al cuadrado es " << respelev << std::endl;


}

