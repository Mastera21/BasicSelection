#pragma once

//C system headers

//C++ system headers

//Other libraries headers

//Own components headers
#include "Config.h"

//Forward declarations

class ClientInput {
public:
	void init();
	void deinit();
	void printInfo();

private:
	Player* _player = nullptr;
	FirstGun* _firstGun = nullptr;
	SecondGun* _secondGun = nullptr;
	Knives* _knives = nullptr;
};

