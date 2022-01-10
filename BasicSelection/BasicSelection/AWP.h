#pragma once

//C system headers

//C++ system headers
#include <string>
//Other libraries headers

//Own components headers
#include "FirstGun.h"
//Forward declarations

class AWP : public FirstGun {
public:
	AWP(int ammo);
	std::string typeFirstGun() const override;
	int getAmmo() const override;
private:
	int _ammo;
};

