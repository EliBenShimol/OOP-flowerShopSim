// FlowerSim.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "FlowersBouquet.h"
#include "Gardener.h"
#include "Grower.h"
#include "WholeSaler.h"
#include "FlowerArranger.h"
#include "Florist.h"
#include "DeliveryPerson.h"
#include "Person.h"
#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::vector <std::string>bouquet = { "Roses", "Violets", "Gladiolus" };
	Gardener* gard = new Gardener("Garett");
	Grower* grow = new Grower(gard, "Gray");
	WholeSaler* wholS = new WholeSaler(grow, "Watson");
	FlowerArranger* floA = new FlowerArranger("Flora");
	Person* chris =new Person("chris");
	Person* robin =new Person("robin");
	DeliveryPerson* deliP =new DeliveryPerson("Dylan");
	Florist* flora =new Florist(wholS, floA, deliP, "Fred");
	chris->orderFlowers(flora, robin, bouquet);
	delete gard;
	delete grow;
	delete wholS;
	delete floA;
	delete chris;
	delete robin;
	delete deliP;
	delete flora;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
