#pragma once
#include <iostream>
#include <vector>
#include <string>
class FlowersBouquet
{
protected:
    std::vector <std::string> bouquet;
    bool arg;
public:
    FlowersBouquet(std::vector <std::string>);
    bool  is_arranged();
    void arrange();
    std::vector <std::string> getBouquet();
};