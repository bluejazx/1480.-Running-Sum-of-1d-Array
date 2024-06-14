#include <iostream>
#include <vector>

std::vector<int> runningSum(const std::vector<int>& nums) 
{
    //Empty vector to store the sum
    std::vector<int> sums;
    int sum = 0;

    //traverses through each index of sum up to the second to last index 
    for(int i = 0; i < nums.size(); i++ )
    {
        sum = sum + nums[i];
        sums.push_back(sum);
    }
    return sums;
}

//prints resulting sum to consel
void printSum(std::vector<int>& nums)
{
    std::cout << "{";
    for(int i = 0; i < nums.size() - 1; i++)
    {
        std::cout << nums[i] << ",";   
    }
    std::cout << nums[nums.size() - 1] << "}\n";
}