#include <iostream>

#include "Calculator.hpp"

int main(int argcs, char** argvs){
	Calculator cal;
	int a = 4, b = 5;
	
	// Sample of sum
	int sum = cal.Sum(a,b);
	std::cout << "Sum of " << a << " and " << b << " is " << sum << std::endl;
	
	// Sample for sub
	int sub = cal.Sub(a,b);
	std::cout << "Sub of " << a << " to " << b << " is " << sub << std::endl;
	
	return 0;
}
