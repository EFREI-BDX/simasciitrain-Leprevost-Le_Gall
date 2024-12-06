//
// Created by Le Gall on 06/12/2024.
//

#include "AbstractWagon.h"


AbstractWagon::AbstractWagon(const TypeWagon& typeWagon)
	: typeWagon_(typeWagon) {}

AbstractWagon::~AbstractWagon() = default;

char AbstractWagon::getSymbol() const {
	return typeWagon_.getSymbol();
}

std::string AbstractWagon::getType() const {
	return typeWagon_.getName();
}

void AbstractWagon::print(std::ostream& os) const {
	os << "[" << getSymbol() << "]";
}