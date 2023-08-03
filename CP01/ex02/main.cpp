#include <string>
#include <iostream>

int main(void)
{
	std::string source = "HI THIS IS BRAIN";
	std::string *ptr = &source;
	std::string &name = source;

	std::cout << &source << std::endl;
	std::cout << ptr << std::endl;
	std::cout << &name << std::endl;

	std::cout << source << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << name << std::endl;
}
