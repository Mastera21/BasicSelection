#include "M416.h"

//C system headers

//C++ system headers

//Other libraries headers

//Own components headers

M416::M416(int ammo) : _ammo(ammo) {}

std::string M416::typeFirstGun() const {
	return "M416";
}
int M416::getAmmo() const {
	return _ammo;
}