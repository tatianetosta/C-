// Assignment 3: main.cpp
// Help the user to learn multiplication by prompting a multiplication
// question and asking him to answer it repeatedly until his
// answer is correct.
//
// Tatiane Tosta Ferreira
// Feb. 14th, 2017


#include <iostream>
#include <cstdlib>
#include <ctime>

void multiplication(); // function prototype
void correctMessage(); // function prototype
void incorrectMessage(); // function prototype

// function main begins program execution
int main(int argc, const char * argv[]) {
    
    multiplication();
    
    return 0;
} // end main

/*
 Use the rand function to produce two positive one-digit integers.
 Prompt the user with a multiplication question. 
 The user should input the answer.
 If it's correct, a message is displayed and another question is prompted.
 If it's wrong, the user have to try the same question repeatedly until
 he finally gets it right.
 */
void multiplication()
{
    // randomize random number generator using current time
    srand( static_cast<unsigned int>( time( 0 ) ) );
    
    int firstNumber  = 0;
    int secondNumber = 0;
    int correctAnswer = 0;
    int userAnswer = 0;
    
    std::cout << "Enter -1 to End." << std::endl;
    
    do
    {
        firstNumber  = rand() % 10;
        secondNumber = rand() % 10;
        correctAnswer = firstNumber * secondNumber;

        std::cout << "How much is " << firstNumber << " times " <<
                     secondNumber << " (-1 to End)? ";
        std::cin >> userAnswer;
        
        while(userAnswer != -1 && userAnswer != correctAnswer)
        {
            incorrectMessage();
            
            std::cout << "? ";
            std::cin >> userAnswer;
        }
        
        if(userAnswer == correctAnswer)
        {
            correctMessage();
        }
        
        std::cout << "\n";
        
        
    } while(userAnswer != -1);
        
    std::cout << "That's all for now. Bye." << std::endl;
    
} // end multiplication

/*
 Print a message to a corrent answer. The message is chosen
 randomly between 4 options.
 */
void correctMessage()
{
    unsigned int response = 1 + rand() % 4;

    switch(response)
    {
        case 1:
            std::cout << "Very good!" << std::endl;
            break;
        case 2:
            std::cout << "Excellent!" << std::endl;
            break;
        case 3:
            std::cout << "Nice work!" << std::endl;
            break;
        case 4:
            std::cout << "Keep up the good work!" << std::endl;
            break;
        default:
            std::cout << "Error: Invalid option" << std::endl;
            break;
    }
} // end correctMessage

/*
 Print a message to an incorrent answer. The message is chosen
 randomly between 4 options.
 */
void incorrectMessage()
{
    unsigned int response = 1 + rand() % 4;
    
    switch(response)
    {
        case 1:
            std::cout << "No. Please try again." << std::endl;
            break;
        case 2:
            std::cout << "Wrong. Try once more." << std::endl;
            break;
        case 3:
            std::cout << "Don't give up!" << std::endl;
            break;
        case 4:
            std::cout << "No. Keep trying." << std::endl;
            break;
        default:
            std::cout << "Error: Invalid option" << std::endl;
            break;
    }
} // end incorrectMessage
