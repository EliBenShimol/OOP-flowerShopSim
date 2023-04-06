#include "Florist.h"
#include "FlowersBouquet.h"
#include "WholeSaler.h"
#include "Person.h"
#include "DeliveryPerson.h"
#include "FlowerArranger.h"
#include <iostream>
#include <vector>
#include <string>
Florist::Florist(WholeSaler* w, FlowerArranger* f, DeliveryPerson* d, std::string n) : Person(n)
{
	ws = w;
	fa = f;
	dp = d;
}

void Florist::acceptOrder(Person* p, std::vector<std::string> bouquet)
{
	std::cout << this->getName() << " forwards request to " << ws->getName() << "." << std::endl;
	FlowersBouquet* fb = ws->acceptOrder(bouquet);
	std::cout << ws->getName() << " returns flowers to " << this->getName() << "." << std::endl;
	std::cout << this->getName() << " request flowers arrangement from " << fa->getName() << "." << std::endl;
	fa->arrangeFlowers(fb);
	std::cout << fa->getName() << " returns arranged flowers to " << this->getName() << "." << std::endl;
	std::cout << this->getName() << " forwards flowers to " << dp->getName() << "." << std::endl;
	dp->deliver(p, fb);


}

std::string Florist::getName() {
	return "Florist " + Person::getName();
}
