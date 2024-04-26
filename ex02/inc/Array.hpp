#ifndef ARRAY_HPP
#define ARRAY_HPP
# include <iostream>

template <typename T>
class Array
{
	private:
		T				*_array;
		unsigned int 	_n;	
	public:
		Array<T>(): _array(NULL), _n(0)
		{
			std::cout << "Default constructor Array class" << std::endl;
		}
		Array<T>(unsigned int n): _n(n)
		{
			unsigned int i = 0;
			_array = new T[n];

			while(i < n)
			{
				_array[i] = 0;
				i++;
			}
		}
		Array<T>(Array<T> const & copy)
		{
			*this=copy;
		}
		~Array<T>()
		{
			if(_array)
				delete[] _array;
		}
		Array<T> & operator=(Array<T> const & inst)
		{
			unsigned int i = 0;

			this->_n = inst._n;
			this->_array = new T[_n];
			while(i < _n)
			{
				this->_array[i] = inst._array[i];
				i++;
			}
			return(*this);
		}
		T & operator[](unsigned int i)
		{
			if(i >= this->_n)
				throw std::out_of_range("Incorrect Index");
			return(_array[i]);
		}
		unsigned int size() const
		{
			return(_n);
		}
		T & getValue(unsigned int i) const 
		{
			return (_array[i]);
		}
};

template <typename T>
std::ostream & operator<<(std::ostream & o, Array<T> const & rhs)
{
	o << "{";
	for (unsigned int i = 0; i < rhs.size(); i++)
	{
		o << rhs.getValue(i);
		if (i < rhs.size() - 1)
			o << ", ";
	}
	o << "}";
	return (o);
}
class comp
{
     private:

         int _n;

     public:

        comp(void): _n(0) {}
        comp (int n): _n (n) {}
        ~comp(void){}

		

        int get_n(void) const {return _n;}
		//void set_n(int n) {this->_n = n;}
    };
std::ostream & operator<<(std::ostream & o, comp const & rhs)
{
    o << rhs.get_n();
    return (o);
} 


#endif










/* #ifndef ARRAY_H
# define ARRAY_H
# include <iostream>
template <typename T>
class Array
{

	private:

		T				*_ar;			
		unsigned int	_n;
	
	public:

		Array<T>(void): _ar(NULL), _n(0) {}
		
		Array<T>(unsigned int n) : _n(n) 
		{
			_ar = new T[n];
			for (unsigned int i = 0; i < n; i++)
				_ar[i] = 0;	
		}
		
		Array<T>(Array<T> const & src) 
		{
			*this = src;
		}	
		
		~Array<T>(void)
		{
			if(_ar)
				delete [] _ar;
		}
		
		Array<T> &	operator=(Array<T> const & rhs)
		{
			this->_n = rhs._n;
			this->_ar = new T[_n];
				
			for(unsigned int i = 0; i < _n; i++)
				this->_ar[i] = rhs._ar[i];
			return *this;
		}
		
		T & operator[](unsigned int i)
		{
			if (i >= this->_n)			
				throw std::out_of_range("Incorrect Index");
			return (_ar[i]);
		}
		
		unsigned int size(void) const 
		{
			return _n;
		}
		 
		T & getValue(unsigned int i) const 
		{
			return (_ar[i]);
		}
};

template <typename T>
std::ostream & operator<<(std::ostream & o, Array<T> const & rhs)
{
	o << "{";
	for (unsigned int i = 0; i < rhs.size(); i++)
	{
		o << rhs.getValue(i);
		if (i < rhs.size() - 1)
			o << ", ";
	}
	o << "}";
	return (o);
}

class comp
{
     private:

         int _n;

     public:

        comp(void): _n(0) {}
        comp (int n): _n (n) {}
        ~comp(void){}

		

        int get_n(void) const {return _n;}
		//void set_n(int n) {this->_n = n;}
    };
std::ostream & operator<<(std::ostream & o, comp const & rhs)
{
    o << rhs.get_n();
    return (o);
} 


#endif
 */