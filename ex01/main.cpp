#include "iter.hpp"

template <typename T>
void prints(T &s)
{
	std::cout << s ;
}
int main()
{
	char z[5] = "hola";
	const char *s = "pepo";
	int n[5] = {1,2,3,4};
	const char* array[] = {"hola", "pepe", "luis"};


	iter (s,4,prints);
	iter (z,4,prints);
	iter (n,4,prints);
	iter (array,3,prints);
}



