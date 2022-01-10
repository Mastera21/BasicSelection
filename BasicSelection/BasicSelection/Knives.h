#pragma once
//C system headers

//C++ system headers
#include <string>
//Other libraries headers

//Own components headers

//Forward declarations

class Knives {
public:
	virtual ~Knives() = default;
	virtual std::string typeKnife() const = 0;
};
