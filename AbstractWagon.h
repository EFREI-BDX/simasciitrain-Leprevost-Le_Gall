//
// Created by Le Gall on 06/12/2024.
//

#ifndef SIMASCIITRAIN_LEPREVOST_LE_GALL__ABSTRACTWAGON_H_
#define SIMASCIITRAIN_LEPREVOST_LE_GALL__ABSTRACTWAGON_H_

#include "TrainElement.h"
#include "TypeWagon.h"
#include "iostream"

class AbstractWagon : public TrainElement {
  public:
	explicit AbstractWagon(const TypeWagon& typeWagon);
	~AbstractWagon() override;

	[[nodiscard]] char getSymbol() const override;
	[[nodiscard]] std::string getType() const override;
	void print(std::ostream& os) const override;

  protected:
	const TypeWagon& typeWagon_;
};

#endif //SIMASCIITRAIN_LEPREVOST_LE_GALL__ABSTRACTWAGON_H_
