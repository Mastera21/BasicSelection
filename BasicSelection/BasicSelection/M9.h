#pragma once

//C system headers

//C++ system headers
#include <string>
//Other libraries headers

//Own components headers
#include "Knives.h"
//Forward declarations

class M9 : public Knives {
public:
	M9();
	std::string typeKnife() const override;
};

