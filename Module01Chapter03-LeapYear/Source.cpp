#include <iostream>
#include <string>

void main() {
	std::string input;
	int year;
	bool isleapYear;

	std::cout << "Input a year\n";
	std::cin >> year;

	//Check whether leap year
	if (year % 4 == 0) {
		isleapYear = true;
		if (year % 100 == 0 and year % 400 != 0) {
			isleapYear = false;
		}
	}
	else {
		isleapYear = false;
	};


	if (isleapYear == true) {
		std::cout << "The specified year is a leap year";
	}
	else {
		std::cout << "The specified year is not a leap year";
	}
	
}