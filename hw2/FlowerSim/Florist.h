#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "WholeSaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"

class DeliveryPerson;
class Person;
class WholeSaler;
class FlowerArranger;
class Florist : public Person
{
private:
    WholeSaler* ws;
    FlowerArranger* fa;
    DeliveryPerson* dp;
public:
    Florist(WholeSaler*, FlowerArranger*, DeliveryPerson*, std::string);
    void acceptOrder(Person*, std::vector < std::string >);
    std::string getName();
};