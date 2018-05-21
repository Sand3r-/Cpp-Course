#include <iostream>

/*
 * Task 2: FUNCTIONS
 * 
 * Write program that takes two numbers from the user
 * and outputs their sum and difference afterwards...
 * ...but with a twist!
 * 
 * Extract the sum and difference to separate functions:
 * - "sum" function that takes two arguments and returns 
 *   result
 * - "subtract" function that takes three arguments; the
 *   result is assigned to third argument
 * 
 * HINTS:
 * 1. Take a look at the exemplary code below. It can
 * provide lots of useful information that may guide
 * you to the solution.
 */

int tripleTheNumber(int number)
{
    return 3 * number;
}

void makeZero(int &number)
{
    number = 0;
}

void main()
{
    int a = tripleTheNumber(3);
    std::cout << "The 'a' variable is: " << a << std::endl;
    std::cout << "Let's try to anihilate it!" << std::endl;
    makeZero(a);
    std::cout << "Now 'a' is: " << a << std::endl;
    std::cin.get();
}