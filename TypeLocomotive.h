//
// Created by Le Gall on 06/12/2024.
//

#ifndef SIMASCIITRAIN_LEPREVOST_LE_GALL__TYPELOCOMOTIVE_H_
#define SIMASCIITRAIN_LEPREVOST_LE_GALL__TYPELOCOMOTIVE_H_

#include <string>

class TypeLocomotive {
  private:
	std::string name_;
	char symbol_;

  public:
	TypeLocomotive(const std::string& name, char symbol);
	[[nodiscard]] std::string getName() const { return name_; }
	[[nodiscard]] char getSymbol() const { return symbol_; }

	static const TypeLocomotive ELECTRIC;
	static const TypeLocomotive GASOLINE;
};

#endif //SIMASCIITRAIN_LEPREVOST_LE_GALL__TYPELOCOMOTIVE_H_
