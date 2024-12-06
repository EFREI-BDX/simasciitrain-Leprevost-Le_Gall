//
// Created by Le Gall on 06/12/2024.
//

#ifndef SIMASCIITRAIN_LEPREVOST_LE_GALL__PASSENGERWAGON_H_
#define SIMASCIITRAIN_LEPREVOST_LE_GALL__PASSENGERWAGON_H_
#include "AbstractWagon.h"

class PassengerWagon : public AbstractWagon {
  public:
	explicit PassengerWagon(int passengerCount);
	~PassengerWagon() override;

	[[nodiscard]] int getPassengerCount() const;
	void setPassengerCount(int passengerCount);

	void print(std::ostream& os) const override;

  private:
	int passengerCount_;
};

#endif //SIMASCIITRAIN_LEPREVOST_LE_GALL__PASSENGERWAGON_H_
