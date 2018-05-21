#include <iostream>

/*
 * Task 3: CALCULATOR
 * 
 * Write a program that takes two numbers from the user
 * and symbol of a mathematical operator. After taking 
 * all the input, make the program perform the mathematical
 * operation on those two numbers and write the result
 * to the user.
 * 
 * Required mathematical operations:
 * - addition       '+'
 * - difference     '-'
 * - multiplication '*'
 * - division       '/'
 * - power          '^'     (separate function required)
 * - factorial      '!'     (separate function required)
 * 
 * HINTS:
 * 1. The mathematical operator may be stored in variable 
 * of type "char".
 * 2. You may use switch statement for distinguishing proper
 * operations. Don't forget to include breaks on each case
 * and to handle "default" case!
 */

void main()
{
    //  ##### Exemplary code. You can delete it
    double number;          //  Declare variable for number storage.
    std::cout << "Below you can write whatever number you want!" << std::endl;
    std::cin >> number;     //  Take number from the user. The program stops here and waits for input.
    std::cout << "The number of your choice is: " << number << "! Now press ENTER to exit.";
    std::cin.get();         //  This function "swallows" every ENTER key press.
    std::cin.get();         //  We put it twice to halt the program. First ENTER has been registered in 'std::cin'.
    //  #####
}
