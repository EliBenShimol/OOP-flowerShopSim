#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Gardener.h"
#include "Person.h"

class FlowersBouquet;
class Gardener;
class Person;
class Grower : public Person
{
protected:
    Gardener* g;

public:
    Grower(Gardener*, std::string);
    FlowersBouquet* prepareOrder(std::vector < std::string >);
    std::string getName();
};

