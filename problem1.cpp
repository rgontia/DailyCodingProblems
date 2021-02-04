// Description
// Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
// For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

#include <iostream>
#include <unordered_set>



bool CanAddUp(int arr[], int size, int k) {
    std::unordered_set<int> lookup;
    bool found = false;
    for(int i = 0; i < size; i++) {
        std::unordered_set<int>::const_iterator got = lookup.find(arr[i]);
        if (got == lookup.end()) {
            lookup.insert(k - arr[i]);
        }
        else {
            found = true;
            break;
        }
    }
    return found;
}
int main() {
    int arr[] = { 10, 15, 3, 7 };
    std::cout << CanAddUp(arr, sizeof(arr) / sizeof(arr[0]), 17) << std::endl;

    int arr1[] = { 0, -1, 2, -3, 1 };
    std::cout << CanAddUp(arr1, sizeof(arr1) / sizeof(arr1[0]), -2) << std::endl;
    return 0;
}
