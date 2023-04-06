#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Grower.h"
#include "Person.h"

class FlowersBouquet;
class Grower;
class Person;
class WholeSaler :public Person
{
protected:
    Grower* g;

public:
    WholeSaler(Grower*, std::string);
    FlowersBouquet* acceptOrder(std::vector < std::string >);
    std::string getName();
};