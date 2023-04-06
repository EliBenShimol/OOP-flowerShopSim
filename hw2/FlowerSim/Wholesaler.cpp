#include "WholeSaler.h"
#include "Grower.h"
#include "FlowersBouquet.h"
#include <iostream>
#include <vector>
#include <string>



WholeSaler::WholeSaler(Grower* g, std::string n) : Person(n)
{
	this->g = g;
}




FlowersBouquet* WholeSaler::acceptOrder(std::vector<std::string> bouquet)
{
	std::cout << this->getName() << " forwards the request to " << g->getName() << "." << std::endl;
	FlowersBouquet* ans = g->prepareOrder(bouquet);
	std::cout << g->getName() << " returns flowers to " << this->getName() << "." << std::endl;
	return ans;

}

std::string WholeSaler::getName()
{
	return "WholeSaler " + Person::getName();
}
