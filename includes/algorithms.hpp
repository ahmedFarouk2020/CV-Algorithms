#ifndef ALGORITHMS_HPP_
#define ALGORITHMS_HPP_

#include <vector>

class algorithms
{
private: // user can't access these methods (functions)
    int sum_of_numbers_list(std::vector<int> numbers);


public: // user can access these methods (functions)
    algorithms(/* args */);
    ~algorithms();

    int mean(std::vector<int> numbers);

};









#endif