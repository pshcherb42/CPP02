#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
    std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed &copy) : _value(copy._value) {
    std::cout << "Copy constructor called" << std::endl;
    _value = copy.getRawBits();
};

Fixed& Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        _value = other.getRawBits();
    }
    return (*this);
};

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (_value);
};

void Fixed::setRawBits( int const raw ) {
    _value = raw;
};

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
};