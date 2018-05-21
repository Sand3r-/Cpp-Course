#include <iostream>

/*
 * Task 1: ADDER
 * 
 * Write program that takes two numbers from the user
 * and outputs their sum afterwards.
 * 
 * HINTS:
 * 1. Take a look at the exemplary code below. It can
 * provide lots of useful information that may guide
 * you to the solution.
 */

void main()
{
    //  ##### Exemplary code. You can delete it
    double number;          //  Declare variable for number storage.
    std::cout << "Below you can write whatever number you want!" << std::endl;  //  'endl' makes the console go to the next line
    std::cin >> number;     //  Take number from the user. The program stops here and waits for input.
    std::cout << "The number of your choice is: " << number << "! Now press ENTER to exit.";
    std::cin.get();         //  This function "swallows" every ENTER key press.
    std::cin.get();         //  We put it twice to halt the program. First ENTER has been registered in 'std::cin'.
    //  #####
}