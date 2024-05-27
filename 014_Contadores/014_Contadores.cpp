// 014_Contadores.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>   
#include <chrono>

int main()
{
	int delay = 1;

	//contador 10*10
	std::cout << "10*10\n";
	for (int cont10 = 10; cont10 <= 100; cont10 += 10)
	{
		std::cout << cont10 << std::endl;
	}


	//do while 1000
	std::cout << "dowhile-1000\n";
	int dowhile = 1;
	do
	{
		std::cout << dowhile << std::endl;
		dowhile++;
	} while (dowhile <= 1000);



	//while 1000
	std::cout << "while-1000\n";
	int while1 = 1;
	while (while1<1000)
	{
		while1 ++;
		std::cout << while1 << std::endl;
	}
	//for 1000
	std::cout << "for-1000\n";
	for (int fork = 1; fork <= 1000; fork++)
	{
		std::cout << fork << std::endl;
	}

	//contador reversa
	std::cout << "reversa lenta\n";
	for (int cont100 = 1; cont100 <= 100; cont100++)
	{
		std::cout << cont100 << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(delay));

	}
	/*
	*/



}

