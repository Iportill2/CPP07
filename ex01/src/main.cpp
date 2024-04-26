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




/*
#include "iter.hpp"
#include <iostream>

class Awesome
{
	private:
	
		int _n;
	
	public:
	
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main()
{
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];
	iter( tab, 5, print );
	iter( tab2, 5, print );
	return 0;
}
*/