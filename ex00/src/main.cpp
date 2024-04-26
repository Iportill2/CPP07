#include "whatever.hpp"
/* int main()
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
} */


int main( void ) 
{
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}