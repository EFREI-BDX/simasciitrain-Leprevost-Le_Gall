//
// Created by Le Gall on 06/12/2024.
//

#include "TypeWagon.h"

TypeWagon::TypeWagon(const std::string& name, char symbol){
	this->name_ = name;
	this->symbol_ = symbol;
}

const TypeWagon TypeWagon::PASSENGER("passager", 'O');
const TypeWagon TypeWagon::FREIGHT("marchandise", '#');
const TypeWagon TypeWagon::UTILITY("utilitaire", '@');