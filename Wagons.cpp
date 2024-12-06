//
// Created by Le Gall on 06/12/2024.
//

#include <valarray>
#include "Wagons.h"

Wagons::Wagons() = default;

Wagons::~Wagons() = default;

Wagons* Wagons::addWagon(AbstractWagon* wagon) {
	this->wagons_.push_back(wagon);
	return this;
}

std::ostream& operator<<(std::ostream& os, const Wagons& wagons) {
	int nbItems = (int)wagons.wagons_.size();
	for (const AbstractWagon *item : wagons.wagons_){
		item->print(os);
		if(nbItems != 1) {
			os << "-";
		}
		nbItems--;
	}
	return os;
}