// 000_P1_HablarconelUsuario.cpp : 
// Benjamin Sepulveda    
// Hablaremos con el usuario 
// Utilizando la libreria IOStream

#include <iostream>// Chat
#include <locale.h>// Localizacion de idioma, para usar caracteres unicos de cada idioma se debe agregar esta libreria.


int main()//(int) define mi tipo de variable, mientras que (main) me indica que esta es la funcion principal
{
    setlocale(LC_ALL, "es_MX.UTF-8"); //Comando para establecer el uso de la libreria "locale", se especifica el idioma y region (es, MX) y se agrega el protocolo (.UTF-8), el estandar moderno suele ser (.86)

    std::cout << "Every dark, has it souls!\n-John Dark " <<
                 "Souls\n ñ by the way" <<std::endl;  // El (\n) es un salto de linea, (endl) tambien lo es, (<<) Concatenara el texto (lo une)
    std::cout << "Joder\n"; //(cout) es el comando que indica que vamos a tener una salida de personajes, (std) inicia la comunicacion con el usuario siendo esta en protocolo estandarizado global
    std::cout << "(⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣶⠂⠀⠀⠀⠀"<<⠀⠀⠀⠀
⠀⠀⠀"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣾⣿⠀⠀⠀⠀⠀⠀⣠⢾⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠞⢻⣿⣿⠏⠀⠀⠀⠀⣠⠞⠁⢸⣿⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡞⠁⠀⢸⣿⡟⠀⠀⠀⢀⡾⠁⠀⠀⢸⡿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⠋⠀⠀⠀⣸⠟⠀⠀⠀⣠⠟⠀⠀⠀⢀⡞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡼⣁⣠⠤⠶⠒⠛⠶⠦⢤⣴⠃⠀⠀⠀⣠⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡾⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠃⠀⠀⣠⠞⠁⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠰⣯⠀⠀⠀⠀⠀⣀⡴⠚⢻⣄⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⢰⡖⣆⠀⠀⠀⠀⠀⡖⠺⣷⡀⠀⠀⠀⢸⡆⠀⣀⡴⠚⠁⠀⠈⠢⡊⢷⡀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⢀⡇⠸⣿⠇⢀⠀⠀⠀⠀⠻⢿⣿⠇⠀⠀⠀⠀⡷⠞⠁⠀⠀⠀⠀⠀⠀⠈⠀⠙⢦⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⡿⢆⠀⠀⠀⠈⠁⠀⠀⠀⠀⠀⡴⠉⠉⢢⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢳⡄⠀
⠀⠀⠀⠀⠀⠀⠀⠀⢷⡼⠀⠀⠈⠉⠉⠉⠁⠀⠀⠀⠱⢤⡠⠎⠀⢠⡇⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⠴⠚⠉⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠈⠳⣄⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⣠⡿⣤⡀⠀⢀⠀⠀⢠⡴⠚⠉⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⡷⢤⡴⢚⡉⠉⠉⠙⠳⣄⠀⣀⡚⠁⠙⣦⠉⠳⢤⡁⠢⠀⢙⡦⢤⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⡧⡀⢠⢾⡁⠀⠀⠀⡀⣽⣠⠟⠛⠂⠀⣾⢀⡤⢞⡧⠀⠀⠈⠉⠙⢦⣠⢴⡄⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣽⠧⣼⢿⡷⢿⣾⣿⣿⣿⣿⣿⡆⣠⡶⣷⡋⠙⠁⠀⢀⣀⡤⠶⠚⠋⠉⠿⠗⢀⢤
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡇⢀⣠⣾⣶⠶⢿⣿⣿⣿⣿⣿⣿⢯⡇⠈⠙⢦⡀⠀⠙⢦⡀⠀⠀⠀⠀⠀⠀⠸⠜
⠀⠀⠀⠀⠀⠀⢀⣠⠤⢤⣾⣻⣿⡛⠭⠝⣿⣕⠼⢿⣿⣿⣿⡟⣴⣿⠀⣠⡴⠋⠀⠀⠀⣹⣦⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⣠⠶⠞⠛⢚⠳⠮⣄⡚⢿⣦⣤⣴⠟⢻⡆⢸⣿⣿⣿⣟⡎⢹⠛⠉⣻⣦⠴⠖⠋⠉⠀⠀⠀⠀⠀⠀⠀⠀
⠀⣠⢞⣅⡀⠀⣾⣿⣷⠀⠀⠙⣦⠈⢿⠃⣉⣽⣗⡾⠿⠛⢻⣿⣷⡿⠞⠋⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣰⠳⣿⣿⣯⠀⠙⠛⠋⣠⣶⡄⠈⣧⠘⡗⣯⣽⣟⠁⠀⠂⠀⠹⣿⣷⣦⣤⣀⣀⣀⣀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀
⡏⠀⣉⣍⠉⠀⠀⠀⠘⣿⣿⡿⠀⢸⡗⣿⠏⠀⠉⠉⠛⠒⢶⠺⣯⣿⠛⠿⠿⠿⠿⢿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀
⡇⣼⣿⣿⡃⠀⠀⠀⠀⣠⣤⣄⠀⢸⣷⠃⠀⠀⠀⠀⠀⠀⠈⠙⠓⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠹⣜⠛⠛⢃⣴⣶⣆⢸⣿⣿⣿⢀⡾⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠙⢦⡀⠘⢿⣿⠿⠀⠈⠉⣠⠞⠃⠀
⠀⠀⠀⠉⠓⠦⠤⠤⠤⠶⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀

