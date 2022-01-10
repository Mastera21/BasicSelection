#pragma once

//C system headers

//C++ system headers
#include <string>
//Other libraries headers

//Own components headers
#include "FirstGun.h"
#include "SecondGun.h"
#include "Knives.h"

//Forward declarations

class Player {
public:
	Player(FirstGun* firstGun, SecondGun* secondGun, Knives* knives);

	std::string printInfo() const;
	void deinit();

	virtual std::string firstSlot() const = 0;
	virtual std::string secondSlot() const = 0;
	virtual std::string thirdSlot() const = 0;
	virtual std::string sideInfo() const = 0;

protected:
	FirstGun* _firstGun = nullptr;
	SecondGun* _secondGun = nullptr;
	Knives* _knives = nullptr;
};

