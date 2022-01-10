#include "T.h"

//C system headers

//C++ system headers

//Other libraries headers
// 
//Own components headers

T::T(FirstGun* firstGun, SecondGun* secondGun, Knives* knives) : Player(firstGun, secondGun, knives) {}

std::string T::firstSlot() const {
	return _firstGun->typeFirstGun() + " with ammo " + std::to_string(_firstGun->getAmmo()) + "\n";
}
std::string T::secondSlot() const {
	return _secondGun->typeSecondGun() + " with ammo " + std::to_string(_secondGun->getAmmo()) + "\n";
}
std::string T::thirdSlot() const {
	return _knives->typeKnife() + " knife\n";
}
std::string T::sideInfo() const {
	return "T\n";
}