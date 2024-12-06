//
// Created by Le Gall on 06/12/2024.
//

#ifndef SIMASCIITRAIN_LEPREVOST_LE_GALL__TRAINELEMENT_H_
#define SIMASCIITRAIN_LEPREVOST_LE_GALL__TRAINELEMENT_H_
#include <ostream>

class TrainElement {
  public:
	virtual ~TrainElement() = default;
	[[nodiscard]] virtual char getSymbol() const = 0;
	[[nodiscard]] virtual std::string getType() const = 0;
	friend std::ostream &operator<<(std::ostream &os, TrainElement &train_element){
		train_element.print(os);
		return os;
	}
  protected:
	virtual void print(std::ostream& os) const = 0;
};

#endif //SIMASCIITRAIN_LEPREVOST_LE_GALL__TRAINELEMENT_H_
