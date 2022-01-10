#include "ClientInput.h"

//C system headers

//C++ system headers
#include <iostream>
//Other libraries headers

//Own components headers
#include "SelectionInfo.h"

std::string checkForInvalidInput(std::string& input, const std::vector<std::string>& gunSlots) {
	std::string result = "";
	bool isFound = false;

	for (int i = 0; i < gunSlots.size(); i++) {
		std::string temp = gunSlots[i];
		if (temp == input) {
			result = input;
			isFound = true;
			break;
		}
		else {
			isFound = false;
			continue;
		}
	}
	if (!isFound) {
		std::cout << "Input was not found. Plese select correct input\n";
		std::cin >> input;
		result = checkForInvalidInput(input, gunSlots);
	}
	return input;
}

void ClientInput::init() {
	std::cout << "                                           WELCOME TO SELECTION ON GUNS.                                                \n";
	std::cout << "                                           YOU HAVE FOUR SLOTS TO FILLED                                                 \n";
	std::cout << "                                                                                                                         \n";
	std::cout << "\n";

	std::cout << "1.First slot info: \n";
	std::cout << "-> ";
	const auto firstSlot = printInfoForFirstSlot();
	std::cout << "\n";
	std::cout << "2.Second slot info: \n";
	std::cout << "-> ";
	const auto secondSlot = printInfoForSecondSlot();
	std::cout << "\n";
	std::cout << "3.Third slot info: \n";
	std::cout << "-> ";
	const auto thirdSlot = printInfoForThirdSlot();
	std::cout << "4.Side info: \n";
	std::cout << "-> ";
	const auto sideSelection = printInfoForSide();
	std::cout << "\n";

	//-------------------First slot--------------------
	std::cout << "Select gun for first slot and ammo:\n";
	std::vector<std::string> gunFirstSlot = firstSlot;
	std::cout << "Name: ";
	std::string firstSlotInput = "";
	std::cin >> firstSlotInput;

	//check for invalid input
	std::string input = checkForInvalidInput(firstSlotInput, gunFirstSlot);
	std::cout << "Ammo: ";
	int ammo = 0;
	std::cin >> ammo;
	std::cout << "\n";
	if (input == "AK47" || input == "M4" || input == "AWP" || input == "M416") {
		if (input == "AK47") {
			_firstGun = new AK47(ammo);
		}
		else if (firstSlotInput == "M4") {
			_firstGun = new M4(ammo);
		}
		else if (firstSlotInput == "AWP") {
			_firstGun = new AWP(ammo);
		}
		else if (firstSlotInput == "M416") {
			_firstGun = new M416(ammo);
		}
		else {
			_firstGun = nullptr;
		}
	}

	//-------------------Second slot--------------------
	std::cout << "Select gun for second slot and ammo:\n";
	std::vector<std::string> gunSecondSlot = secondSlot;
	std::cout << "Name: ";
	std::string secondSlotInput = "";
	std::cin >> secondSlotInput;

	//check for invalid input
	input = checkForInvalidInput(secondSlotInput, gunSecondSlot);
	std::cout << "Ammo: ";
	std::cin >> ammo;
	std::cout << "\n";
	if (input == "Glock" || input == "USP") {
		if (input == "Glock") {
			_secondGun = new Glock(ammo);
		}
		else if (secondSlotInput == "USP") {
			_secondGun = new USP(ammo);
		}
		else {
			_secondGun = nullptr;
		}
	}

	//------------------Third slot--------------------
	std::cout << "Select knife for third slot:\n";
	std::vector<std::string> gunThirdSlot = thirdSlot;
	std::cout << "Name: ";
	std::string thirdSlotInput = "";
	std::cin >> thirdSlotInput;
	std::cout << "\n";
	//check for invalid input
	input = checkForInvalidInput(thirdSlotInput, gunThirdSlot);

	if (input == "M9" || input == "Karambit") {
		if (input == "M9") {
			_knives = new M9();
		}
		else if (thirdSlotInput == "Karambit") {
			_knives = new Karambit();
		}
		else {
			_knives = nullptr;
		}
	}

	//------------------Side selection--------------------
	std::cout << "Select side:\n";
	std::vector<std::string> side = sideSelection;
	std::cout << "Side: ";
	std::string sideInput = "";
	std::cin >> sideInput;
	std::cout << "\n";
	//check for invalid input
	input = checkForInvalidInput(sideInput, side);

	std::cout << "Total information:\n";
	if (sideInput == "CT" || sideInput == "T") {
		if (sideInput == "CT") {
			_player = new CT(_firstGun, _secondGun, _knives);
		}
		else if (sideInput == "T") {
			_player = new T(_firstGun, _secondGun, _knives);
		}
		else {
			_player = nullptr;
		}
	}
}

void ClientInput::printInfo() {
	std::cout << _player->printInfo();
}

void ClientInput::deinit() {
	delete _player;
	delete _firstGun;
	delete _secondGun;
	delete _knives;
}