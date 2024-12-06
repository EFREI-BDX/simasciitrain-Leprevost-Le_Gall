#include "Train.h"

#include <ostream>

Train::~Train() {}

void Train::print(std::ostream& os) const {
	os << *(this->wagons_) << "-" << *(this->locomotive_);
}


Train::Train(Wagons *wagons, AbstractLocomotive *locomotive) {
	this->wagons_ = wagons;
	this->locomotive_ = locomotive;
}
