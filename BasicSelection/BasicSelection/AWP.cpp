#include "AWP.h"

//C system headers

//C++ system headers
#include <iostream>
//Other libraries headers

//Own components headers

AWP::AWP(int ammo) : _ammo(ammo) {}

std::string AWP::typeFirstGun() const {
	return "AWP";
}
int AWP::getAmmo() const {
	return _ammo;
}
