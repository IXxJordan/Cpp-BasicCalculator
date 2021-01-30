#include <iostream>
#include "Calculator.h"

int main()
{
	double x = 0.0, y = 0.0, result = 0.0;
	char oper = '+';

	std::cout << "Calculator Console Application\n";

	Calculator c;
	while (true) {
		std::cout << "\nPlease Enter the operation to perform. \nFormat: a + b | a - b | a * b | a / b \n";
		std::cin >> x >> oper >> y;

		if (oper == '/' && y == 0) {
			std::cout << "ERROR: Division by 0 exception.\n";
			continue;
		}
		else {
			result = c.Calculate(x, oper, y);
		}
		std::cout << "Result: " << x << " " << oper << " " << y << " = " << result << "\n";
	}
	return 0;
}
