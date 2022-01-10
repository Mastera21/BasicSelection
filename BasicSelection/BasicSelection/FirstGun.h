#pragma once
//C system headers

//C++ system headers
#include <string>
//Other libraries headers

//Own components headers

//Forward declarations
class FirstGun {
public:
	virtual ~FirstGun() = default;
	virtual std::string typeFirstGun() const = 0;
	virtual int getAmmo() const = 0;
};
