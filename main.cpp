#include <iostream>

#include "Calculator.hpp"

int main(int argcs, char** argvs){
	Calculator cal;
	int a = 4, b = 5;
	int sum = cal.Sum(a,b);
	std::cout << "Sum of " << a << " and " << b << " is " << sum << std::endl;
	return 0;
}