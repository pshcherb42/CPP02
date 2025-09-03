#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
    std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed &copy) : _value(copy._value) {
    std::cout << "Copy constructor called" << std::endl;
};

/*int Fixed::getRawBits( void ) const {

};

void Fixed::setRawBits( int const raw ) {

};*/

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
};