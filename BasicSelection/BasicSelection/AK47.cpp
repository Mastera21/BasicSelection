#include "AK47.h"

//C system headers

//C++ system headers
#include <iostream>

//Other libraries headers

//Own components headers

AK47::AK47(int ammo) : _ammo(ammo) {}

std::string AK47::typeFirstGun() const {
	return "AK47";
}
int AK47::getAmmo() const {
	return _ammo;
}