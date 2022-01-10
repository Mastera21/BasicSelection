#include "Application.h"

//C system headers

//C++ system headers
#include <iostream>
//Other libraries headers

//Own components headers

void Application::init() {
	_clientInput.init();
}

void Application::run() {
	init();
	_clientInput.printInfo();
	deinit();
}

void Application::deinit() {
	_clientInput.deinit();
}
