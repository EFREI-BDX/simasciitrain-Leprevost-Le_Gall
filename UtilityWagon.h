//
// Created by Le Gall on 06/12/2024.
//

#ifndef SIMASCIITRAIN_LEPREVOST_LE_GALL__UTILITYWAGON_H_
#define SIMASCIITRAIN_LEPREVOST_LE_GALL__UTILITYWAGON_H_

#include "AbstractWagon.h"

class UtilityWagon : public AbstractWagon {
  public:
	UtilityWagon();
	~UtilityWagon() override;

	void print(std::ostream& os) const override;
};

#endif //SIMASCIITRAIN_LEPREVOST_LE_GALL__UTILITYWAGON_H_
