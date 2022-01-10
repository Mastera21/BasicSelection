#include "M4.h"
//C system headers

//C++ system headers
#include <iostream>

//Other libraries headers

//Own components headers

M4::M4(int ammo) : _ammo(ammo) {}

std::string M4::typeFirstGun() const {
	return "M4";
}
int M4::getAmmo() const {
	return _ammo;
}