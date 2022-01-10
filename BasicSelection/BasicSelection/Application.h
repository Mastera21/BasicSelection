#pragma once

//C system headers

//C++ system headers

//Other libraries headers

//Own components headers

//Forward declarations

#include "ClientInput.h"

class Application {
public:
	void init();
	void run();
	void deinit();
private:
	ClientInput _clientInput;
};