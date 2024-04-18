// 001_Hola_Mundo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale.h>
#include <string>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");


    //Tipo de dato + Nombre de la variable + Declaracion Inicial

   //bool    
    bool bandera = false; //bool es una variable binaria, asi que puede ser true or false (1/0)
    bool bandera2 = true;

    //Imprimimos el valor de la bandera 
    std::cout << "El valor de la variable booleana es: " << bandera << std::endl;
    std::cout << "El valor de la variable booleana es: " << bandera2 << std::endl;


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
    std::cout << "Tu mides " << altura << " metros" << std::endl;
    std::cout << "¿Cuanto mides?" << std::endl;
    std::cin >> altura;
    std::cout << "Entonces tu mides " << altura << " metros" << std::endl;


    //char
    char letrafav = 1;//char se usa para imprimir UN SOLO caracter, puedes asignar un rango limitado y predifinido de acsii y al llamarlo va a traducirlo a texto simple


    //Imprimimos el valor del caracter
    std::cout << "Tu letra favorita es " << letrafav << std::endl;
    std::cout << "¿Cual es tu letra favorita?" << std::endl;
    std::cin >> letrafav;
    std::cout << "Tu letra favorita es " << letrafav << std::endl;//Si quieres mostrar un valor acsii, no se puede editar desde aqui, deberas ingresarlo desde que se declara la variable

    char favacsii = 89; //89 es "Y" en acsii
    std::cout << "Tu letra favorita es " << favacsii << std::endl;


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
    std::cout << Saludo << std::endl;


    //Operaciones aritmeticas 

    //float 
    float factor1 = 1;
    float factor2 = 1;




    std::cout << "Ingresa los numeros a sumar (float)" << std::endl;
    std::cin >> factor1;
    std::cin >> factor2;
    float respsuma = factor1 + factor2;
    std::cout << "La suma es " << respsuma << std::endl;

    std::cout << "Ingresa los numeros a restar" << std::endl;
    std::cin >> factor1;
    std::cin >> factor2;
    float respresta = factor1 - factor2;
    std::cout << "La resta es " << respresta << std::endl;


    std::cout << "Ingresa los numeros a multiplicar" << std::endl;
    std::cin >> factor1;
    std::cin >> factor2;
    float respmult = factor1 * factor2;
    std::cout << "El producto es " << respmult << std::endl;

    std::cout << "Ingresa los numeros a dividir" << std::endl;
    std::cin >> factor1;
    std::cin >> factor2;
    float respdiv = factor1 / factor2;
    std::cout << "El cociente es " << respdiv << std::endl;

    std::cout << "Ingresa el numero a elevar al cuadrado" << std::endl;
    std::cin >> factor1;
    float respelev = factor1 * factor1;
    std::cout << factor1 << " al cuadrado es " << respelev << std::endl;

    std::cout << "A que numero le quieres sacar la raiz cuadrada?" << std::endl;
    std::cin >> factor1;
    float cuad1 = sqrt(factor1);
    std::cout << "La Raiz Cuadrada de " << factor1 << " es " << cuad1 << std::endl;




    //int


    short int factor3 = 1;
    short int factor4 = 1;


    //En caso de ingresar una variable incorrecta (decimales) el codigo se seguira ejecutando, pero de manera erronea

    std::cout << "Ingresa los numeros a sumar (int)" << std::endl;
    std::cin >> factor3;
    std::cin >> factor4;
    short int sumint = factor3 + factor4;
    std::cout << "La suma es " << sumint << std::endl;

    std::cout << "Ingresa los numeros a restar" << std::endl;
    std::cin >> factor3;
    std::cin >> factor4;
    short int resint = factor3 - factor4;
    std::cout << "La resta es " << resint << std::endl;


    std::cout << "Ingresa los numeros a multiplicar" << std::endl;
    std::cin >> factor3;
    std::cin >> factor4;
    short int prodint = factor3 * factor4;
    std::cout << "El producto es " << prodint << std::endl;

    std::cout << "Ingresa los numeros a dividir" << std::endl;
    std::cin >> factor3;
    std::cin >> factor4;
    short int divint = factor3 / factor4;
    std::cout << "El cociente es " << divint << std::endl;  //No es posible obtener numeros decimales con la variable int

    std::cout << "Ingresa el numero a elevar al cuadrado" << std::endl;
    std::cin >> factor3;
    float elevint = factor3 * factor3;
    std::cout << factor3 << " al cuadrado es " << elevint << std::endl;

    std::cout << "A que numero le quieres sacar la raiz cuadrada?" << std::endl;
    std::cin >> factor3;
    float cuad2 = sqrt(factor3);
    std::cout << "La Raiz Cuadrada de " << factor3 << " es " << cuad2 << std::endl;


    //bool


    bool factor5 = 1;
    bool factor6 = 1;




    std::cout << "Ingresa los numeros a sumar (bool)" << std::endl;
    std::cin >> factor5;
    std::cin >> factor6;
    bool sumbool = factor5 + factor6;
    std::cout << "La suma es " << sumbool << std::endl;

    std::cout << "Ingresa los numeros a restar" << std::endl;
    std::cin >> factor5;
    std::cin >> factor6;
    bool resbool = factor5 - factor6;
    std::cout << "La resta es " << resbool << std::endl;


    std::cout << "Ingresa los numeros a multiplicar" << std::endl;
    std::cin >> factor5;
    std::cin >> factor6;
    bool prodbool = factor5 * factor6;
    std::cout << "El producto es " << prodbool << std::endl;

    std::cout << "Ingresa los numeros a dividir" << std::endl;
    std::cin >> factor5;
    std::cin >> factor6;
    bool divbool = factor5 / factor6;
    std::cout << "El cociente es " << divbool << std::endl;

    std::cout << "Ingresa el numero a elevar al cuadrado" << std::endl;
    std::cin >> factor5;
    bool elebool = factor5 * factor5;
    std::cout << factor5 << " al cuadrado es " << elebool << std::endl;

    /* std::cout << "A que numero le quieres sacar la raiz cuadrada?" << std::endl;
       std::cin >> factor5;
       bool cuad3 = sqrt(factor5);
       std::cout << "La Raiz Cuadrada de " << factor5 << " es " << cuad3 << std::endl;  */
       //No puedes sacar raiz de un binario    

   //char 

    char factor7 = 'x', factor8 = 'y', space1 = ' ', factor9 = 'A', factor10 = 9, factor11 = 64;
    //Comilla simple (') es para texto   

    std::cout << factor7 << space1 << factor8 << std::endl;
    factor7 = factor7 + 1;
    factor8 = factor8 - 1;
    std::cout << factor7 << space1 << factor8 << std::endl;
    factor7 = factor10 * 4;
    factor8 = factor11 / 2;
    std::cout << factor7 << space1 << factor8 << std::endl;
    factor7 = factor10 * factor10;
    factor8 = sqrt(factor11);
    std::cout << factor7 << space1 << factor8 << std::endl;



    //string


    std::string saludo1 = "hOLA TONOTOs", saludo2 = "Este es mi codigo";
    char space2 = ' ';

    std::cout << saludo1 << space2 << saludo2;






}
