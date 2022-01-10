#include "CT.h"

//C system headers

//C++ system headers

//Other libraries headers

//Own components headers

CT::CT(FirstGun* firstGun, SecondGun* secondGun, Knives* knives) : Player(firstGun, secondGun, knives) {}

std::string CT::firstSlot() const {
	return _firstGun->typeFirstGun() + " with ammo " + std::to_string(_firstGun->getAmmo()) + "\n";
}
std::string CT::secondSlot() const {
	return _secondGun->typeSecondGun() + " with ammo " + std::to_string(_secondGun->getAmmo()) + "\n";
}
std::string CT::thirdSlot() const {
	return _knives->typeKnife() + " knife\n";
}
std::string CT::sideInfo() const {
	return "CT\n";
}