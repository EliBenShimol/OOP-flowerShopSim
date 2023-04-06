#include "FlowersBouquet.h"
#include "DeliveryPerson.h"
#include "Person.h"
#include <iostream>
#include <vector>
#include <string>

DeliveryPerson::DeliveryPerson(std::string n) : Person(n)
{
}

void DeliveryPerson::deliver(Person* p, FlowersBouquet* fb)
{
	std::cout << this->getName() << " delivers flowers to " << p->getName() << "." << std::endl;
	p->acceptFlowers(fb);
}

std::string DeliveryPerson::getName()
{
	return "Delivery Person " + Person::getName();
}
