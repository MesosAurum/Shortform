#include <iostream>

int main() {

	//Initializing the variable x as the upper limit of the numerical type char.
	unsigned char x = 255;
	++x;//Adding 1 unit to x.

	//Since x has gone 1 over the type upper limit, the value will now roll over to the lower limit
	//Here that is 0.
	std::cout << +x << std::endl;//The + in +x here tells the compiler to print x as a number not a character.

	return 0;
}
