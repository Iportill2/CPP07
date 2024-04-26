#include "whatever.hpp"
int main()
{
	char a = 'a';
	char b = 'b';

	std::cout << "*******Swap******"  << std::endl;
	std::cout << "a:" << a << std::endl;
	std::cout << "b:" << b << std::endl;
	swap(a,b);
	std::cout << "a:" << a << std::endl;
	std::cout << "b:" << b << std::endl;
	std::cout << "//////////////////"  << std::endl;
	std::cout << "*******Min******"  << std::endl;
	char c = min(b,a);
	std::cout << "Of char a and b the MIN is:" << c << std::endl;
	std::cout << "*******Max******"  << std::endl;
	c = max(b,a);
	std::cout << "Of char a and b the MAX is:" << c << std::endl;
}
