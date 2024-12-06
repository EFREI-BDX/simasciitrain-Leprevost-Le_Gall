//
// Created by Le Gall on 06/12/2024.
//

#include "GasolineLocomotive.h"
#include "TypeLocomotive.h"

GasolineLocomotive::GasolineLocomotive()
	: AbstractLocomotive(TypeLocomotive::GASOLINE) {}

GasolineLocomotive::~GasolineLocomotive() = default;