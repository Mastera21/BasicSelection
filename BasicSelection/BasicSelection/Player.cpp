#include "Player.h"

//C system headers

//C++ system headers

//Other libraries headers
#include "FirstGun.h"
#include "SecondGun.h"
#include "Knives.h"
//Own components headers

Player::Player(FirstGun* firstGun, SecondGun* secondGun, Knives* knives) : _firstGun(firstGun), _secondGun(secondGun), _knives(knives) {}

std::string Player::printInfo() const {
	std::string result;
	result += "1.First slot: " + firstSlot();
	result += "2.Second slot: " + secondSlot();
	result += "3.Third slot: " + thirdSlot();
	result += "4.Player is: " + sideInfo();

	return result;
}

void Player::deinit() {
	delete _firstGun;
	delete _secondGun;
	delete _knives;
}