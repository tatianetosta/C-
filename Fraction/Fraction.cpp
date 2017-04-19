// Assignment 4: Fraction.cpp
// Member-function definitions for class Fraction.
// Author: Tatiane Tosta Ferreira
// Date: Feb 21st, 2017

#include "Fraction.h"
#include "GCD.h" // template function for calculating greatest common divisor
#include <iostream>
using namespace std;


//Default constructor
Fraction::Fraction ()
: numerator(0), denominator(1)
{
}

//Constructor which requires at least one long long argument
Fraction::Fraction (long long num, long long denom )
: numerator(num), denominator(denom)
{
    simplify();
}

//Implementation of the timesEq() member function
//Performs similar operation as the *= operator on the built-in types
const Fraction & Fraction::timesEq(const Fraction & op )
{
	numerator *= op.numerator;
	denominator *= op.denominator;

	simplify();  // will make sure that denominator is positive and
	             //   will invoke gcd() function to reduce fraction
	             //   as much as possible

	return (*this); // returns the object which invoked the method
}

//Implementation of the plusEq() member function
//Performs similar operation as the += operator on the built-in types
const Fraction & Fraction::plusEq(const Fraction & op )
{
    long long newDemon = denominator * op.denominator;
    
    numerator   = ( ((newDemon / denominator) * numerator) +
                    ((newDemon / op.denominator) * op.numerator) );
    
    denominator = newDemon;
    
    simplify();
    
    return (*this);
}

//Implementation of the minusEq() member function
//Performs similar operation as the -= operator on the built-in types
const Fraction & Fraction::minusEq(const Fraction & op )
{
    long long newDemon = denominator * op.denominator;
    
    numerator   = ( ((newDemon / denominator) * numerator) -
                   ((newDemon / op.denominator) * op.numerator) );
    
    denominator = newDemon;
    

    simplify();
    
    return (*this);
}

//Implementation of the divideEq() member function
//Performs similar operation as the /= operator on the built-in types
const Fraction & Fraction::divideEq(const Fraction & op )
{
    numerator *= op.denominator;
    denominator *= op.numerator;

    simplify();
    
    return (*this);
}

//Implementation of the negate() member function
//Returns the negation of the Fraction object
Fraction Fraction::negate (void) const
{
    return Fraction(-numerator, denominator);
}

//Implementation of the getNum() member function
//Returns numerator
long long Fraction::getNum(void) const
{
    return numerator;
}

//Implementation of the getDenom() member function
//Returns denominator
long long Fraction::getDenom(void) const
{
    return denominator;
}

//Implementation of the display() member function
//Outputs to standard output stream the Fraction object
//in the format: numerator/denominator
void Fraction::display(void) const
{
    cout << numerator << "/" << denominator;
}

//Implementation of the simplify() member function
//Reduces the Fraction objects as much as possible.
//Also, ensures that the denominator is positive
void Fraction::simplify (void)
{
    long long gcdValue = gcd<long long>(numerator, denominator);
    
    numerator /= gcdValue;
    denominator /= gcdValue;
    
    if(denominator < 0)
    {
        numerator *= (-1);
        denominator *= (-1);
    }
}

