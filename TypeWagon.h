//
// Created by Le Gall on 06/12/2024.
//

#ifndef SIMASCIITRAIN_LEPREVOST_LE_GALL__TYPEWAGON_H_
#define SIMASCIITRAIN_LEPREVOST_LE_GALL__TYPEWAGON_H_

#include "string"

class TypeWagon {
  private:
	std::string name_;
	char symbol_;

  public:
	TypeWagon(const std::string& name, char symbol);
	[[nodiscard]] const std::string& getName() const { return name_; }
	[[nodiscard]] char getSymbol() const { return symbol_; }

	static const TypeWagon PASSENGER;
	static const TypeWagon FREIGHT;
	static const TypeWagon UTILITY;
};





#endif //SIMASCIITRAIN_LEPREVOST_LE_GALL__TYPEWAGON_H_
