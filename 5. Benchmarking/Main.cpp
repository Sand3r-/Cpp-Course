#include "HelperFunctions.h"

/*
 * Task 5: BENCHMARKING
 *
 * Modify the 'work' function to perform normalization created
 * in Task 4. You can copy the code from there if you want to.
 * Once you make sure that it works on Debug mode, do the following:
 * - In the main folder of the course, find file called
 * normalization.py.
 * - Run it using a command line, by calling
 * python normalization.py
 * - It will output the time spent on the same task as measured
 * here (normalization of 6147483 numbers).
 * - Now, back in Visual Studio - Change Debug to Release and
 * compare the results.
 *
 * ADDITIONAL INFO:
 * The main function performs the following:
 * - Creation of vector of N elements
 * - Filling the vector with N random numbers
 * - Measuring the time it takes for the work method to process
 * all the elements contained in the 'vec' vector.
 */


void work(std::vector<float>& vec)
{

}

int main()
{
    int N = 6147483;
    std::vector<float> vec(N);
    FillVector(vec);
    MeasureTime(work, vec);
    return 0;
}