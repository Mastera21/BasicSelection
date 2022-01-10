#include "USP.h"
//C system headers

//C++ system headers

//Other libraries headers

//Own components headers

USP::USP(int ammo) : _ammo(ammo) {}

std::string USP::typeSecondGun() const {
	return "USP";
}
int USP::getAmmo() const {
	return _ammo;
}

