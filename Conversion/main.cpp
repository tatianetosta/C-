//
//  Assignment 2: main.cpp
//  Convert Roman number system values into their
//  equivalent Hindu-Arabic number system values.
//
//  Tatiane Tosta Ferreira
//  Feb. 1st, 2017
//
#include <iostream>
#include <cctype>

using namespace std;

int main(int argc, const char * argv[]) {

    cout << "10 Roman numeral values will be input and converted into\n";
    cout << "their equivalent Hindu-Arabic numeric values." << endl;
    
    const int ARABIC_VALUE_OF_I = 1;
    const int ARABIC_VALUE_OF_V = 5;
    const int ARABIC_VALUE_OF_X = 10;
    const int ARABIC_VALUE_OF_L = 50;
    const int ARABIC_VALUE_OF_C = 100;
    const int ARABIC_VALUE_OF_D = 500;
    const int ARABIC_VALUE_OF_M = 1000;
    const char NEW_LINE = '\n';
    
    // Expect 10 different Roman numeral inputs
    for(int index=1; index <= 10; index++)
    {
        int arabicTotalSum = 0;
        int newArabicNumber = 0;
        int oldArabicNumber = 0;
        char newCharacter = ' ';
        bool foundInvalidCharacter = false;
    
        cout << "\nInput Roman numeral # " << index << ": ";
        
        // Loop until user types new line (\n) key sentence
        while( ( newCharacter = toupper( cin.get() ) ) != NEW_LINE )
        {
         
            // Convert the Roman digit which was entered.
            // Subtract from the total sum up the last
            // digit converted if the new digit is greater
            // than it. Otherwise, add it to the total sum.
            switch (newCharacter)
            {
                case 'I':
                    newArabicNumber = ARABIC_VALUE_OF_I;
                    arabicTotalSum += oldArabicNumber;
                    break;
                case 'V':
                    newArabicNumber = ARABIC_VALUE_OF_V;
                    if(oldArabicNumber < newArabicNumber) {
                        oldArabicNumber *= (-1);
                    }
                    arabicTotalSum += oldArabicNumber;
                    break;
                case 'X':
                    newArabicNumber = ARABIC_VALUE_OF_X;
                    if(oldArabicNumber < newArabicNumber) {
                        oldArabicNumber *= (-1);
                    }
                    arabicTotalSum += oldArabicNumber;
                    break;
                case 'L':
                    newArabicNumber = ARABIC_VALUE_OF_L;
                    if(oldArabicNumber < newArabicNumber) {
                        oldArabicNumber *= (-1);
                    }
                    arabicTotalSum += oldArabicNumber;
                    break;
                case 'C':
                    newArabicNumber = ARABIC_VALUE_OF_C;
                    if(oldArabicNumber < newArabicNumber) {
                        oldArabicNumber *= (-1);
                    }
                    arabicTotalSum += oldArabicNumber;
                    break;
                case 'D':
                    newArabicNumber = ARABIC_VALUE_OF_D;
                    if(oldArabicNumber < newArabicNumber) {
                        oldArabicNumber *= (-1);
                    }
                    arabicTotalSum += oldArabicNumber;
                    break;
                case 'M':
                    newArabicNumber = ARABIC_VALUE_OF_M;
                    if(oldArabicNumber < newArabicNumber) {
                        oldArabicNumber *= (-1);
                    }
                    arabicTotalSum += oldArabicNumber;
                    break;
                default:
                    foundInvalidCharacter = true;
                    break;
        
            }
            
            oldArabicNumber = newArabicNumber;
            cout << newCharacter;
            
            // If it is an invalid Roman digit, stop converting
            // the next digits entered.
            if(foundInvalidCharacter)
            {
                cin.clear();
                cin.ignore(10000,'\n');
                break;
            }
            
        }
        
        // If there is an invalid Roman digit, print an error message.
        // Otherwise, print the result.
        if(foundInvalidCharacter)
        {
            cout << " Error - last character was not valid!!! " << endl;
        }
        else
        {
            arabicTotalSum += oldArabicNumber;
            cout << " = " << arabicTotalSum << endl;
        }
    }
    
    cout << "\nTHAT'S ALL FOLKS :)\n" << endl;
    
    return 0;
}
