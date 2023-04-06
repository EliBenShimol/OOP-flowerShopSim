#include "FlowersBouquet.h"
#include "FlowerArranger.h"
#include <iostream>
#include <vector>
#include <string>

FlowerArranger::FlowerArranger(std::string n) : Person(n)
{
}

void FlowerArranger::arrangeFlowers(FlowersBouquet* fb)
{
	std::cout << this->getName() << " arranges flowers." << std::endl;
	fb->arrange();
}

std::string FlowerArranger::getName()
{
	return "Flower Arranger " + Person::getName();
}