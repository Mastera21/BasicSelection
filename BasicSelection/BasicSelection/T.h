#pragma once

//C system headers

//C++ system headers

//Other libraries headers

//Own components headers
#include "Player.h"
//Forward declarations

class T : public Player {
public:
	T(FirstGun* firstGun, SecondGun* secondGun, Knives* knives);
private:
	std::string firstSlot() const override;
	std::string secondSlot() const override;
	std::string thirdSlot() const override;
	std::string sideInfo() const override;
};

