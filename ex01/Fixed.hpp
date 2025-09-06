#include <iostream>

class Fixed {
    private:
        int _value;
        static const int _base = 8;
    public:
        Fixed(); // default constructor
        Fixed(const Fixed &copy); // copy constructor
        // Fixed( int const param ); 
        // Fixed( float const num);
        Fixed &operator=(const Fixed &other); // assigment operator
        // ex00
        int getRawBits( void ) const;
        void setRawBits( int const raw);
        // ex01
        /*
        void constructorInt( int const raw? ); // converts int to fixed point
        void constructorFloat( float const num ); // converts float to fixed point
        flo
        */
        ~Fixed(); // Destructor
};