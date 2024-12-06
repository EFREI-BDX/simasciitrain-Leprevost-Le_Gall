//
// Created by Le Gall on 06/12/2024.
//
#include "UtilityWagon.h"
#include <ostream>

UtilityWagon::UtilityWagon()
	: AbstractWagon(TypeWagon::UTILITY) {}

UtilityWagon::~UtilityWagon() = default;

void UtilityWagon::print(std::ostream& os) const {
	os << "[" << getSymbol() << "]";
}