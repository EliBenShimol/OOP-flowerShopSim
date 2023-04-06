#include "Gardener.h"
#include "Grower.h"
#include "FlowersBouquet.h"
#include <iostream>
#include <vector>
#include <string>


Grower::Grower(Gardener* ga, std::string n) : Person(n)
{
	g = ga;
	
}

FlowersBouquet* Grower::prepareOrder(std::vector < std::string > bouquet) {
	std::cout << this->getName() << " forwards the request to " << g->getName() << "." << std::endl;
	FlowersBouquet* ans = g->prepareBouquet(bouquet);
	std::cout << g->getName() << " returns flowers to " << this->getName() << "." << std::endl;
	return ans;


}

std::string Grower::getName()
{
	return "Grower " + Person::getName();
}