    /* Include the header file that contains the declaration of the class */

#include "../includes/algorithms.hpp"


    /* The below code is the implementations of the class methods */

algorithms::algorithms(/* args */) // this called a constructor
{}

algorithms::~algorithms()  // this called a destructor
{}


    /* Implementation of private method */
int algorithms::sum_of_numbers_list(std::vector<int> numbers) 
{
    int sum = 0;

    for (auto &i : numbers)
    {
        sum += i;
    }
    return sum;
}

        /* the implementation of the public method */
int algorithms::mean(std::vector<int> numbers)
{
    return this->sum_of_numbers_list(numbers)/numbers.size();
}