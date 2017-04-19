//
//  Assignment 5: main.cpp
//  Duplicate Elimination with array (7.13).
//  Read in 20 numbers, store only the unique values
//  that the user entered and display them.
//
//  Tatiane Tosta Ferreira
//  Mar 6, 2017
//

#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

const int NUMBER_OF_VALUES = 20;
const int MIN_VALUE = 10;
const int MAX_VALUE = 100;


bool isUnique(int, const array<int, NUMBER_OF_VALUES>&, int);


int main(int argc, const char * argv[]) {
    
    int totalNumbers=0;
    int number=0;
    
    array<int, NUMBER_OF_VALUES> arrNumbers = { 0 };
    
    // Perform loop NUMBER_OF_VALUES times
    for (int i = 1; i <= NUMBER_OF_VALUES; ++i)
    {
        cout << "\nEnter # " << i << ": ";
        cin >> number;
        
        while(number < MIN_VALUE || number > MAX_VALUE)
        {
            cout << "The number is not in the valid range of "
                 << MIN_VALUE << " to " << MAX_VALUE << endl;
            
            cout << "\nEnter # " << i << ": ";
            cin >> number;
        }
        
        if(isUnique(number, arrNumbers, totalNumbers))
        {
            cout << "The number: " << number << " is unique" << endl;
            arrNumbers[totalNumbers++] = number;
        }
    }

    
    //Display the elements of the array
    cout << "\n\nThe unique numbers are: \n" << endl;
    for(int i=0; i < totalNumbers; i++)
    {
        if(i % 5 == 0 && i != 0)
        {
            cout << endl;
        }
        
        cout << setw(6) << arrNumbers[i];
        
    }
    
    cout << "\n\n";
    
    system("pause");
    
    return 0;
}


// Returns true if the number input is unique in the array
// and false otherwise.
bool isUnique(int number, const array<int, NUMBER_OF_VALUES> & arrNumbers, int totalNumbers)
{
    bool uniqueNumber = true;
    int index = 0;
    
    while(uniqueNumber && index < totalNumbers)
    {
        if(arrNumbers[index] == number)
        {
            uniqueNumber = false;
        }
        index++;
    }
    
    return uniqueNumber;
}
