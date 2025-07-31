#include <iostream>

int main() {

	//An numerical type may be declared and ititialized with a numerical value of the same type.
	std::uint8_t x = 24;//x = 24.
	//Numerical types may be initialized with the value after an assignment operator (=) 
	//or in parenthasis after the variable.
	std::uint8_t y(23);//y = 23.
	//A numerical type may be initialized without a starting value (as long as it isn't const)
	//The value may be assigned later.
	std::uint8_t tmp;//tmp is so far uninitialized.

	//Numerical variables may use the addition operator which adds together those two variables
	//The assignment operator here "tells" the variable tmp that it is the same value as x + y.
	tmp = x + y;//tmp = 47.
	//The compound assignment operator plus-equals here is saying tmp = tmp + y.
	tmp += y;//tmp = 70.
	tmp = tmp + y;//tmp = 93.
	//Numerical values may be added onto a numerical variable directly.
	tmp += 49;//tmp = 142.
	//The increment operator adds 1 numerical unit to a variable.
	//The increment operators will assign their values at different orders, so x = ++y is not the same as x = y++.
	tmp++;//tmp = 143.
	++tmp;//tmp = 144.

	std::cout << +tmp << std::endl;//The + in +tmp here tells the compiler to print tmp as a number not a character.

	return 0;
}
