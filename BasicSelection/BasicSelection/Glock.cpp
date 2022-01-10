#include "Glock.h"

//C system headers

//C++ system headers

//Other libraries headers

//Own components headers

Glock::Glock(int ammo) : _ammo(ammo) {}

std::string Glock::typeSecondGun() const {
	return "Glock";
}
int Glock::getAmmo() const {
	return _ammo;
}
