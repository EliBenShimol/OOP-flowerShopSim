#include "FlowersBouquet.h"
#include "Gardener.h"
#include <iostream>
#include <vector>
#include <string>

Gardener::Gardener(std::string n) : Person(n)
{
}

FlowersBouquet* Gardener::prepareBouquet(std::vector < std::string > bouquet) {
	std::cout << this->getName() << " prepares flowers." << std::endl;
	FlowersBouquet* fb = new FlowersBouquet(bouquet);
	return fb;
}

std::string Gardener::getName()
{
	return "Gardener " + Person::getName();
}