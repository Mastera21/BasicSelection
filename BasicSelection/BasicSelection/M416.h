#pragma once

//C system headers

//C++ system headers
#include <string>
//Other libraries headers

//Own components headers
#include "FirstGun.h"
//Forward declarations

class M416 : public FirstGun {
public:
	M416(int ammo);
	std::string typeFirstGun() const override;
	int getAmmo() const override;
private:
	int _ammo;
};

