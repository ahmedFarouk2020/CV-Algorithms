#include <../includes/algorithms.hpp>
/******************************************************/
/*  THIS IS A TEMP PROGRAM TO USE IN THE CV PROJECTS  */
/******************************************************/


#include <vector>
#include <iostream>


int main()
{
    std::vector<int> numbers(4,5);

    auto algos = algorithms();
    int mean = algos.mean(numbers);

    std::cout<< mean;

    return 0;
}