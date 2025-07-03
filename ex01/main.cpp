#include "iter.hpp"

template <typename T>
void prints(T const &s)
{
	std::cout << s << " ";
}
int main()
{
	char z[5] = "hola";
	const char *s = "pepo";
	int n[4] = {1,2,3,4};
	const char* array[] = {"hola", "pepe", "luis"};

	std::cout << "Testing with string: ";
	iter(s, 4, prints);
	std::cout << std::endl;
	
	std::cout << "Testing with char array: ";
	iter(z, 4, prints);
	std::cout << std::endl;
	
	std::cout << "Testing with int array: ";
	iter(n, 4, prints);
	std::cout << std::endl;
	
	std::cout << "Testing with string array: ";
	iter(array, 3, prints);
	std::cout << std::endl;
	
	return 0;
}



