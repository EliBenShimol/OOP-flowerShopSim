#include "Person.h"
#include "Florist.h"
#include "Grower.h"
#include "FlowersBouquet.h"
#include <iostream>
#include <vector>
#include <string>


Person::Person(std::string name) : name(name)
{}

std::string Person::getName()
{
	return name;
}

void Person::orderFlowers(Florist* f, Person* p, std::vector<std::string> bouquet)
{
	std::string s = "";
	for (int i = 0;i < bouquet.size() - 1;i = i + 1)
		s = s + bouquet[i] + ", ";
	s = s + " " + bouquet[bouquet.size() - 1] + ".";
	std::cout << this->getName() << " orders flowers to " << p->getName() << " from " << f->getName() << ": " << s << std::endl;
	f->acceptOrder(p, bouquet);
}

void Person::acceptFlowers(FlowersBouquet* fb)
{
	std::vector<std::string> bouquet = fb->getBouquet();
	std::string s = " accepts the flowers: ";
	for (int i = 0;i < bouquet.size() - 1;i = i + 1)
		s = s + bouquet[i] + ", ";
	s = s + "and " + bouquet[bouquet.size() - 1];
	std::cout << this->getName() << s << "."<<std::endl;
}