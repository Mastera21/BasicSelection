#pragma once

//C system headers

//C++ system headers
#include <string>
//Other libraries headers

//Own components headers
#include "Knives.h"
//Forward declarations

class Karambit : public Knives {
public:
	Karambit();
	std::string typeKnife() const override;
};

