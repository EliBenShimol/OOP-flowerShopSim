#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Person.h"
#include "FlowersBouquet.h"

class FlowerBouquet;
class Person;
class DeliveryPerson : public Person
{
protected:

public:
    DeliveryPerson(std::string);
    void deliver(Person*, FlowersBouquet*);
    std::string getName();
};