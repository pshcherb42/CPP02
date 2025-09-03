#include <iostream>

class Fixed {
    private:
        int _value;
        static const int _bits = 8;
    public:
        Fixed(); // default constructor
        Fixed(const Fixed &copy); // copy constructor
        Fixed &operator=(const Fixed &copy) {
            if (this != &copy) {
            _value = copy._value;
        }
            std::cout << "Copy assignment operator called" << std::endl;

            return (*this);
        }; // assignmetn operator
        /*int getRawBits( void ) const;
        void setRawBits( int const raw);*/
        ~Fixed();
};