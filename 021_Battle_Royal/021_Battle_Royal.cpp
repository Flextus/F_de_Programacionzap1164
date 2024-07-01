#include <iostream>
#include <cstdlib> 
#include <ctime>  
#include <iomanip>
#include <algorithm> 


int casechoose = 0;

struct Player
{
	char id;
	int hp;
	int str;
	int dex;
	int intel;
	int attack;

}Players[20];
// Creamos el obj de c/jugador con 4 estadisticas y un id 

void fillid(Player players[20])
{
	for (int j = 0; j < 20; j++)
	{
		players[j].id = 'a' + j;
	}
	//en cada iteracion, aumenta el valor de char para dar id unicas
}
// damos un id unico a cada jugador

void fillstat(Player players[20])
{
	srand(static_cast<unsigned>(time(0))); 
	for (int i = 0; i < 20; i++)
	{
		players[i].hp = rand() % 50 + 1;
		players[i].str = rand() % 50 + 1;
		players[i].dex = rand() % 50 + 1;
		players[i].intel = rand() % 50 + 1;
	}
	//asigna valores a las stats
}
//damos stats aleatorias para c/jugador en rango (0-50)

enum powerup
{
	hp=1,
	str,
	dex,
	intel	
};
//creamos una lista de valores para la siguiente funcion

void pwrup(Player players[20])
{
	srand(static_cast<unsigned>(time(0)));
	casechoose = rand() % 4 + 1;
	switch (casechoose)
	{
		case hp: 
			std::cout << "Health Boost\n";
			std::cout << "\n";
			for (int a = 0; a < 20; a++)
			{
				players[a].hp = players[a].hp + 5;
			}
			break;

		case str:
			std::cout << "Strength Boost\n";
			std::cout << "\n";
			for (int b = 0; b < 20; b++)
			{
				players[b].str = players[b].str + 5;
			}
			break;

		case dex:
			std::cout << "Dexterity Boost\n";
			std::cout << "\n";
			for (int c = 0; c < 20; c++)
			{
				players[c].dex = players[c].dex + 5;
			}
			break;

		case intel:
			std::cout << "Inteligence Boost\n";
			std::cout << "\n";
			for (int d = 0; d < 20; d++)
			{
				players[d].intel = players[d].intel + 5;
			}
			break;
		default:
			std::cerr << "Por favor Ingrese un dato valido\n";
			exit(EXIT_FAILURE);
	}


}
//generamos un random (1-4) para usarse en conjunto al enum anterior en un case
//dependiendo del case asignamos 5 pts extra al stat

void Tabla(Player players[20])
{
	std::cout << std::left << std::setw(10) << "ID";
	std::cout << std::left << std::setw(10) << "HP";
	std::cout << std::left << std::setw(10) << "STR";
	std::cout << std::left << std::setw(10) << "DEX";
	std::cout << std::left << std::setw(10) << "INT" << std::endl;

	std::cout << std::string(50, '-') << std::endl;

	for (int i = 0; i < 20; i++)
	{
		std::cout << std::left << std::setw(10) << players[i].id;
		std::cout << std::left << std::setw(10) << players[i].hp;
		std::cout << std::left << std::setw(10) << players[i].str;
		std::cout << std::left << std::setw(10) << players[i].dex;
		std::cout << std::left << std::setw(10) << players[i].intel << std::endl;
	}
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";
}
//imprimimos los datos en forma de tabla

void comptoatack(Player players[20])
{
	for (int e = 0; e < 20; e++)
	{
		std::cout << "Player " << players[e].id << ": ";
		if (players[e].str >= players[e].dex && players[e].str >= players[e].intel)
		{
			std::cout << "Has a lot more of Strength with " << players[e].str << " points" << std::endl;
			std::cout << "\n";
			players[e].attack = players[e].str;
		}
		else if (players[e].dex >= players[e].str && players[e].dex >= players[e].intel)
		{
			std::cout << "Has a lot more of Dexterity with " << players[e].dex << " points" << std::endl;
			std::cout << "\n";
			players[e].attack = players[e].dex;
		}
		else
		{
			std::cout << "Has a lot more of Intelligence with " << players[e].intel << " points" << std::endl;
			std::cout << "\n";
			players[e].attack = players[e].intel;
		}
	}
}
//compara las estadisticas de cada jugador y las muestra

void sort(Player players[20]) 
{
	std::sort(players, players + 20, [](const Player& a, const Player& b) 
		{
		return a.attack > b.attack;
		});
}
// acomoda los players

void Tabla2(Player players[20])
{
	std::cout << std::left << std::setw(10) << "ID";
	std::cout << std::left << std::setw(10) << "Player Attack" << std::endl;

	std::cout << std::string(23, '-') << std::endl;

	for (int i = 0; i < 20; i++)
	{
		std::cout << std::left << std::setw(10) << players[i].id;
		std::cout << std::left << std::setw(10) << players[i].attack << std::endl;
	}
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";
}
//imprime nuevos datos


int main()
{
	fillid(Players);
	fillstat(Players);
	pwrup(Players);
	Tabla(Players);
	comptoatack(Players);
	sort(Players);
	Tabla2(Players);
	std::cout << "El jugador " << Players[0].id << " es el ganador" << std::endl;
}
