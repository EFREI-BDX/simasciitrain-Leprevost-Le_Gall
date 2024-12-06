//
// Created by Le Gall on 06/12/2024.
//

#ifndef SIMASCIITRAIN_LEPREVOST_LE_GALL__ABSTRACTLOCOMOTIVE_H_
#define SIMASCIITRAIN_LEPREVOST_LE_GALL__ABSTRACTLOCOMOTIVE_H_

#include "TrainElement.h"
#include "TypeLocomotive.h"
#include <string>
#include <ostream>

class AbstractLocomotive : public TrainElement {
  public:
	AbstractLocomotive(const TypeLocomotive& type);
	~AbstractLocomotive() override;

	[[nodiscard]]char getSymbol() const override;
	[[nodiscard]]std::string getType() const override;
	void print(std::ostream& os) const override;

  protected:
	const TypeLocomotive& typeLocomotive;
};

#endif //SIMASCIITRAIN_LEPREVOST_LE_GALL__ABSTRACTLOCOMOTIVE_H_
