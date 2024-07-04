


#include "Array.hpp"

int	main()
{
 	try 
	{
		Array<int> C;
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

