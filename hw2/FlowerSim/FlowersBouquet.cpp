#include "FlowersBouquet.h"
#include <iostream>
#include <vector>
#include <string>


FlowersBouquet::FlowersBouquet(std::vector <std::string>bouquet) {
	this->bouquet = bouquet;
	this->arg = false;
}
bool FlowersBouquet::is_arranged() {
	return arg;
}

void FlowersBouquet::arrange() {
	this->arg = true;
}

std::vector <std::string> FlowersBouquet::getBouquet() {
	return bouquet;
}