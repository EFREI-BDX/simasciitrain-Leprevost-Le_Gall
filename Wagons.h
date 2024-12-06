//
// Created by Le Gall on 06/12/2024.
//

#ifndef SIMASCIITRAIN__WAGONS_H_
#define SIMASCIITRAIN__WAGONS_H_

#include <vector>
#include <ostream>
#include <memory>
#include <valarray>
#include "AbstractWagon.h"

class Wagons {
  public:
	Wagons();
	~Wagons();

	Wagons* addWagon(AbstractWagon* wagon);

	friend std::ostream& operator<<(std::ostream& os, const Wagons& wagons);

  private:
	std::vector<AbstractWagon*> wagons_;
};

#endif //SIMASCIITRAIN__WAGONS_H_
