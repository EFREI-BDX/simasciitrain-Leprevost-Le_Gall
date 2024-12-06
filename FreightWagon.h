//
// Created by Le Gall on 06/12/2024.
//

#ifndef SIMASCIITRAIN_LEPREVOST_LE_GALL__FREIGHTWAGON_H_
#define SIMASCIITRAIN_LEPREVOST_LE_GALL__FREIGHTWAGON_H_

#include "AbstractWagon.h"

class FreightWagon : public AbstractWagon {
  public:
	explicit FreightWagon(int freightCount = 0);
	~FreightWagon() override;

	[[nodiscard]] int getFreightCount() const;
	void setFreightCount(int freightCount);

	void print(std::ostream& os) const override;

  private:
	int freightCount_;
};
#endif //SIMASCIITRAIN_LEPREVOST_LE_GALL__FREIGHTWAGON_H_
