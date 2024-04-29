/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:09:09 by imontero          #+#    #+#             */
/*   Updated: 2023/12/27 15:09:09 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
} 
*/



#include "Array.hpp"

int	main()
{
 	try 
	{
		Array<int> C(void);
		std::cout << "C: " << &C << "\n";

		int *a =new int(5);
		std::cout << "a: " << *a << "\n";


		Array<int> A(6);
		std::cout << "A: " << A << "\n";
		std::cout << "Change index 2 value in A\n";
		A[2] = *a;
		std::cout << "A: " << A << "\n";
		std::cout << "Copy array A to array B\n";
		Array<int> B(A);
		std::cout << "A: " << A << "\n";
		std::cout << "B: " << B << "\n";
		std::cout << "fill the [0] position of B with -42\n";
		B[0] = -42;
		std::cout << "A: " << A << "\n";
		std::cout << "B: " << B << "\n";

		std::cout << "A[0]: " << A[0] << "\n";
		std::cout << "A[2]: " << A[2] << "\n";	
		std::cout << "B[0]: " << B[0] << "\n";
		std::cout << "B[2]: " << B[2] << "\n";

		std::cout << "using funcion unsigned int Array<T>::getSize(void) const of A\n";
		std::cout << "A: " << A.getSize() << "\n";
		std::cout << "using funcion unsigned int Array<T>::getSize(void) const of B\n";
		std::cout << "B: " << B.getSize() << "\n";
		//trying the exception
		std::cout << "A[7]: " << A[7] << "\n";	
		std::cout << "B[7]: " << B[7] << "\n";
		delete a;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	} 
	//system("leaks _Array");
	return (0);
} 

