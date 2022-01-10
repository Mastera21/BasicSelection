#pragma once

//C system headers

//C++ system headers
#include <string>
//Other libraries headers

//Own components headers
#include "Player.h"
//Forward declarations

class CT : public Player {
public:
	CT(FirstGun* firstGun, SecondGun* secondGun, Knives* knives);
private:
	std::string firstSlot() const override;
	std::string secondSlot() const override;
	std::string thirdSlot() const override;
	std::string sideInfo() const override;
};

