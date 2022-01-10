#pragma once
//C system headers

//C++ system headers
#include <string>
//Other libraries headers

//Own components headers

//Forward declarations
class SecondGun {
public:
	virtual ~SecondGun() = default;
	virtual std::string typeSecondGun() const = 0;
	virtual int getAmmo() const = 0;
};