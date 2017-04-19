#pragma once

// Assignment 1: Employee.h
// Definition of Employee class.
//
// Tatiane Tosta Ferreira
// Jan. 25th, 2017

#include <string>

class Employee
{
public:
    explicit Employee( std::string, std::string, int ); // constructor initializes
	                                            // first name, last name and
											                        // monthly salary
    std::string getFirstName() const; // return the first name
    std::string getLastName() const; // return the last name
    int getMonthlySalary() const; // return the monthly salary
    void setFirstName( std::string ); // set the first name
    void setLastName( std::string ); // set the last name
    void setMonthlySalary( int ); // set the monthly salary
private:
    std::string firstName; // data member that stores the first name
    std::string lastName; // data member that stores the last name
    int monthlySalary; // data member that stores the monthly salary
}; // end class Employee
