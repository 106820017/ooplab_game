<<<<<<< HEAD
﻿#include "stdafx.h"
#include <string>
#include <iostream>
using namespace System;
bool Guess(int number) {
	static int target = -1;
	if (target == -1) {
		Random r;
		target = r.Next() % 100 + 1;
	}
	if (number == target)return true;
	return false;
}
int main(array<System::String^>^ args)
{
	int guess;
	do {
		std::cin >> guess;
	} while (!Guess(guess));
	return 0;
=======
﻿#include "stdafx.h"
#include <string>
#include <iostream>
using namespace System;
bool Guess(int number) {
	static int target = -1;
	if (target == -1) {
		Random r;
		target = r.Next() % 100 + 1;
	}
	if (number > target) {
		std::cout << "Smaller" << std::endl;
		return false;
	}
	else if (number < target) {
		std::cout << "Bigger" << std::endl;
		return false;
	}
	return true;
}
int main(array<System::String^>^ args)
{
	int guess;
	do {
		std::cin >> guess;
	} while (!Guess(guess));
	return 0;
>>>>>>> 874634113e8fc93a3883eaf21be28110e1d31998
}