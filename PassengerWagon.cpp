//
// Created by Le Gall on 06/12/2024.
//

#include "PassengerWagon.h"
#include <ostream>

PassengerWagon::PassengerWagon(int passengerCount)
	: AbstractWagon(TypeWagon::PASSENGER), passengerCount_(passengerCount) {}

PassengerWagon::~PassengerWagon() = default;

int PassengerWagon::getPassengerCount() const {
	return passengerCount_;
}

void PassengerWagon::setPassengerCount(int passengerCount) {
	passengerCount_ = passengerCount;
}

void PassengerWagon::print(std::ostream& os) const {
	os << "[";
	for (int i = 0; i < this->passengerCount_; ++i) {
		os << getSymbol();
	}
	os  << "]";
}