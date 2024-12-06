//
// Created by Le Gall on 06/12/2024.
//

#ifndef SIMASCIITRAIN_LEPREVOST_LE_GALL__ITRAIN_H_
#define SIMASCIITRAIN_LEPREVOST_LE_GALL__ITRAIN_H_
#include <iostream>


class ITrain {
  public:
	virtual ~ITrain() = default;
	virtual void print(std::ostream& os) const = 0;

	friend std::ostream& operator<<(std::ostream& os, const ITrain& train) {
		train.print(os);
		return os;
	}
};





#endif //SIMASCIITRAIN_LEPREVOST_LE_GALL__ITRAIN_H_
