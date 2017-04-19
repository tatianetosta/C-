// Assignment 1: Employee.cpp
// Member-function definitions for class Employee.
//
// Tatiane Tosta Ferreira
// Jan. 25th, 2017

#include <iostream>
#include "Employee.h" // include definition of class Employee

using namespace std;

// Employee constructor initializes data member balance
Employee::Employee( string fName, string lName, int initialMonthlySalary )
:firstName(fName), lastName(lName), monthlySalary(initialMonthlySalary)
{
    // check if first name did have valid value
    // if not - display warning message
    if ( fName.length() < 2 )
    {
        cout << "\nWarning - invalid length string entered for "
	           << "first name in ctor: " << fName << endl;

        cout << "The string that was entered will be used for now." << endl;
    }
    firstName = fName;

    // check if last name did have valid value
    // if not - display warning message
    if ( lName.length() < 2 )
    {
        cout << "\nWarning - invalid length string entered for "
	           << "last name in ctor: " << lName << endl;

        cout << "The string that was entered will be used for now." << endl;
    }
    lastName = lName;

    // check if initialMonthlySalary did have valid value
    // if not - set salary to 0 and display error message
    if ( initialMonthlySalary < 0 )
    {
        cout << "\nInvalid salary amount specified in ctor: $"
	           << initialMonthlySalary << endl;

        cout << "Salary set to $0 instead." << endl;

        monthlySalary = 0;
    }

} // end Employee constructor

// return the first Name
string Employee::getFirstName() const
{
    return firstName;
} // end function getFirstName

// return the last name
string Employee::getLastName() const
{
    return lastName;
} // end function getLastName

// return the monthly salary
int Employee::getMonthlySalary() const
{
    return monthlySalary;
} // end function getMonthlySalary

// set the first name
void Employee::setFirstName( string name )
{
    // check if first name did have valid value
    // if not - display error message
    if ( name.length() < 2 )
    {
        cerr << "\nERROR - invalid length string entered "
	           << "for first name in setFirstName(): " << name << endl;

        cerr << "The first name was left unchanged: "
	           << firstName << endl;
    }
    else
    {
        firstName = name;
    }
} // end function setFirstName

// set the last name
void Employee::setLastName( string name )
{
    // check if last name did have valid value
    // if not - display error message
    if ( name.length() < 2 )
    {
        cerr << "\nERROR - invalid length string entered "
	           << "for last name in setLastName(): " << name << endl;

        cerr << "The last name was left unchanged: "
	           << lastName << endl;
    }
    else
    {
        lastName = name;
    }
} // end function setFirstName

// set the monthly salary
void Employee::setMonthlySalary( int initialMonthlySalary )
{
    // check if initialMonthlySalary did have valid value
    // if not - display error message
    if ( initialMonthlySalary < 0 )
    {
        cerr << "\nERROR - Invalid salary amount specified: $"
	           << initialMonthlySalary << endl;

        cerr << "Salary was left unchanged at: $"
	           << monthlySalary << endl;
    }
    else
    {
        monthlySalary = initialMonthlySalary;
    }
} // end function setMonthlySalary
