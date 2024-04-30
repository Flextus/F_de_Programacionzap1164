// 006_Repaso_Entrada_In_Out_Control.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <locale>

int main()
{
std::string email, pass, usename;
short int menu = 0, edad = 0, conf = 0;
setlocale(LC_ALL, "es_MX.UTF-8");


    std::cout << "\n"; 
    std::cout << "Bienvenido a Albion Online 2: Electric Boogalo" << std::endl;
    std::cout << "\n";
    std::cout << "Inicie Sesión para Continuar usando el email y contraseña que le fueron proporcionados previamente" << std::endl;
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\t  Email:" << std::endl;
        std::cin >> email;
    std::cout << "\tContraseña" << std::endl;
        std::cin >> pass;
    if (email=="albiondemobeta@hotmail.com")
    {   if (pass=="demo123")
        {
        std::cout << "Para continuar, seleccione un nombre de usuario" << std::endl;
        std::cin.ignore();//Se usa para limpiar el buffer de entrada de datos, no siempre es necesario pero si cuando el codigo no funciona 
        std::getline(std::cin, usename);
        std::cout << "Hola " << usename<<std::endl;
        std::cout << "Ingresa tu edad para continuar" << std::endl;
        std::cin >> edad;
            if (edad < 18)
            {
                std::cout << "Aquí no es la choza de los pequeñines." << std::endl;
            }
    system("cls");
        std::cout << "Cargando..." << std::endl;
        std::cout << "...";
        std::cout << "\n";
        menup:
        std::cout << usename << " Selecciona una opción para continuar";
        std::cout << "\n";
        std::cout << "Navega por el menu utilizando los numeros de las opciones" << std::endl;
        std::cout << "\n";
        std::cout << "1.- Iniciar Partida" << std::endl;
        std::cout << "2.-Configuración" << std::endl;
        std::cout << "3.-Changelog" << std::endl;
        std::cout << "4.-Feedback & FAQ" << std::endl;
        std::cout << "5.-Salir" << std::endl;
        std::cout << "\n";
        std::cout << "\n";
        std::cin >> menu;
    system("cls");
        switch (menu)
            {
                case 1://Iniciar partida
                    std::cout << "Albion online es un MMORPG no lineal donde escribes tu propia historia..." << std::endl;
                break;
                confm:
                case 2://Configuración
                    std::cout << "Navega por el menu utilizando los numeros de las opciones" << std::endl;
                    std::cout << "1.-Cambiar FOV" << std::endl;
                    std::cout << "2.-Cambiar Resolución" << std::endl;
                    std::cout << "3.-Regresar al menu" << std::endl;
                    std::cin >> conf;
                    system("cls");
                    switch (conf)
                        {
                        case 1:
                            std::cout << "..." << std::endl;
                            std::cout << "FOV cambiado con exito" << std::endl;
                            system("cls");
                            goto menup;
                        break;

                        case 2: 
                            std::cout << "..." << std::endl;
                            std::cout << "Resolución cambiada con exito" << std::endl;
                            system("cls");
                            goto menup;
                        break;

                        case 3:
                            std::cout << "..." << std::endl;
                            system("cls");
                            goto menup;
                        break;

                        default: 
                            std::cout << "Por Favor selecciona una opción Valida" << std::endl;
                            system("cls");
                            goto confm;
                        break;
                        }

                case 3://Changelog
                    std::cout << "Albion Online 2: Electric Boogaloo" << std::endl;
                    std::cout << "\n";
                    std::cout << "\n";
                    std::cout << "*Corregimos Bugs" << std::endl;
                    std::cout << "*Añadimos Bugs para Corregirlos luego" << std::endl;
                    std::cout << "Nota: Favor de no remover la imagen del coco, no sabemos como llego ahi, pero sin ella el codigo no funciona " << std::endl;
                    std::cout << "\n";
                        goto menup;
                        system("cls");
                break;

                case 4://Feedback & FAQ
                    std::cout << "\n";
                    std::cout << "Cualquier sugerencia, Reporte o Queja favor de enviarlas a albionqa@hotmail.com" << std::endl;
                    std::cout << "\n";
                    std::cout << "??:\t Cuando se espera el lanzamiento Final?" << std::endl;
                        std::cout << "R:\t Se espera el lanzamiento para Q3 2025, pero esta dispuesto a cambios" << std::endl;
                    std::cout << "??:\t Porque el juego me crashea cuando lo inció?" << std::endl;
                        std::cout << "R:\t Al ser una beta, se ejecuta en una build expermental, favor de revisar nuestras soluciones en el foro de \n";
                        std::cout<<"\tnuestra web" << std::endl;
                        goto menup;
                        system("cls");
                    break;

                case 5://salir
                    break;

            default:
                system("cls");
                goto menup;
            break;

            }

        }
    }
    else
        {
        std::cout << "Información de Inicio de Sesión Incorrecta" << std::endl;
        
        }



}

