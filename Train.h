//
// Created by Le Gall on 06/12/2024.
//

#ifndef SIMASCIITRAIN_LEPREVOST_LE_GALL__TRAIN_H_
#define SIMASCIITRAIN_LEPREVOST_LE_GALL__TRAIN_H_


#include "ITrain.h"
#include "Wagons.h"
#include "AbstractLocomotive.h"
#include <memory>

class Train : public ITrain {
  public:
	Train(Wagons *wagons, AbstractLocomotive *locomotive);
	~Train() override;

	void print(std::ostream& os) const override;

  private:
	Wagons* wagons_;
	AbstractLocomotive* locomotive_;
};
#endif //SIMASCIITRAIN_LEPREVOST_LE_GALL__TRAIN_H_
