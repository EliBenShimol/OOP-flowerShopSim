#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Person.h"

class FlowersBouquet;
class FlowerArranger : public Person
{
protected:

public:
    FlowerArranger(std::string);
    void arrangeFlowers(FlowersBouquet*);
    std::string getName();
};