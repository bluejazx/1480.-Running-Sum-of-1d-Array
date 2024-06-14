#include<iostream>
#include<vector>

#include "Solution.hpp"

int main()
{
  std::vector <int> numbers = {1,2,3,4};
  std::vector <int> sum = runningSum(numbers);
  printSum(sum);
  
}