#include <iostream>

//input 16 chars to use buffer overflow and force the incorrect boolean to be false
//example: "aaaaaaaaaaaaaaaa"
//when inputing 16 chars the null value in value will overflow to incorrect and become false
struct Password
{
	char value[16];
	bool incorrect;
	Password() : value(""), incorrect(true)
	{
	}
};

int main()
{
	std::cout << "Enter your password to continue:" << std::endl;
	Password pwd;
	std::cin >> pwd.value;

	if (!strcmp(pwd.value, "********"))
		pwd.incorrect = false;

	if(!pwd.incorrect)
		std::cout << "Congratulations\n";

	return 0;
}
