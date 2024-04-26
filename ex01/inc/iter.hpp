#ifndef ITER_HPP
#define ITER_HPP
# include <iostream>
//# include <Array.hpp>
template <typename T>
void iter(T *array, int len, void (*f)(T const &))
{
	int i = 0;
	while(i < len)
	{
		f(array[i]);
		i++;
	}
		std::cout << std::endl;
}
#endif




/*
#ifndef ITER_H
# define ITER_H

template <typename T>
void	iter(T * ar, int len, void (* call)(T const &))
{
	for (int i = 0; i < len; i++)
		call(ar[i]);
}

#endif
*/














/*
#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *array, int len, void (*f)(T const &))
{
	for (int i = 0; i < len; i++)
		f(array[i]);
}

template <typename T>
void print(T const &x)
{
	std::cout << x << std::endl;
}

#endif
*/