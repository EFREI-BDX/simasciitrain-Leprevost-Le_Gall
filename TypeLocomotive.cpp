//
// Created by Le Gall on 06/12/2024.
//

#include "TypeLocomotive.h"

TypeLocomotive::TypeLocomotive(const std::string& name, char symbol){
	this->name_ = name;
	this->symbol_ = symbol;
}

const TypeLocomotive TypeLocomotive::ELECTRIC("Electrique", 'E');
const TypeLocomotive TypeLocomotive::GASOLINE("Essence", 'G');