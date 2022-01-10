#pragma once
//C system headers

//C++ system headers
#include <string>
//Other libraries headers

//Own components headers
#include "SecondGun.h"
//Forward declarations

class USP : public SecondGun {
public:
	USP(int ammo);

	std::string typeSecondGun() const override;
	int getAmmo() const override;
private:
	int _ammo;
};

