// Assignment 4: GCD.h
// Find the greatest common divisor (GCD) using a function template.
// Author: Tatiane Tosta Ferreira
// Date: Feb 21st, 2017

// Definition of function template minimum that finds the GCD of 2 values
template <typename T>
T gcd( T x, T y )
{
    T greatest = 1; // current greatest common divisor, 1 is minimum
    
    // makes the inputs positive if they are negative
    x = (( x < 0 ) ? -x: x );
    y = (( y < 0 ) ? -y: y );
    
    // loop from 2 to smaller of x and y
    for ( T i = 2; i <= ( ( x < y ) ? x: y ); i++ )
    {
        // if current i divides both x and y
        if ( x % i == 0 && y % i == 0 )
        {
            greatest = i; // update greatest common divisor
        }
    } // end for
    
    return greatest; // return greatest common divisor found
} // end function template gcd
