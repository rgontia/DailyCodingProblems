// SMSApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Description
// Given an array of integers, return a new array such that each element at index i of the new array 
// is the product of all the numbers in the original array except the one at i.
// For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. 
// If our input was [3, 2, 1], the expected output would be [2, 3, 6].

#include <iostream>
#include <vector>

std::vector<int> ProductVector(const std::vector<int>& vec) {
    if (vec.size() == 1) return vec;
    std::vector<int> prodVec;
    int product = vec[0];
    for (unsigned int i = 1; i < vec.size(); i++) {
        product *= vec[i];
    }
    for (auto v : vec) {
        prodVec.push_back(product/v);
    }
    return prodVec;
}

void printVector(const std::vector<int>& vec) {
    for (auto v : vec) {
        std::cout << v << " ";
    }
    std::cout << std::endl;
}
int main() {
    std::vector<int> vec = { 1, 2, 3, 4, 5 };
    printVector(vec);
    printVector(ProductVector(vec));

    vec = { 10};
    printVector(vec);
    printVector(ProductVector(vec));
    return 0;
}
