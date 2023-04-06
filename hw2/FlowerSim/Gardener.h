#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Person.h"
class Person;
class FlowersBouquet;
class Gardener : public Person
{
protected:
    std::string name;

public:
    Gardener(std::string);
    FlowersBouquet* prepareBouquet(std::vector < std::string >);
    std::string getName();
};

