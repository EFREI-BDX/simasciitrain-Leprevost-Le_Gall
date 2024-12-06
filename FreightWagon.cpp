//
// Created by Le Gall on 06/12/2024.
//

#include "FreightWagon.h"
#include "TypeWagon.h"
#include <ostream>

FreightWagon::FreightWagon(int freightCount)
	: AbstractWagon(TypeWagon::FREIGHT), freightCount_(freightCount) {}

FreightWagon::~FreightWagon()= default;

int FreightWagon::getFreightCount() const {
	return freightCount_;
}

void FreightWagon::setFreightCount(int freightCount) {
	freightCount_ = freightCount;
}

void FreightWagon::print(std::ostream& os) const {
	os << "[";
	for (int i = 0; i < this->freightCount_; ++i) {
		os << getSymbol();
	}
	os << "]";
}
