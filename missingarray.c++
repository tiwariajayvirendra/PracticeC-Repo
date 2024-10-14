#include <iostream>
#include <vector>

int findMissingElement(int n, std::vector<int>& arr) {
    // Calculate the expected sum of the first n natural numbers
    int totalSum = n * (n + 1) / 2;
    
    // Calculate the sum of the elements in the array
    int arraySum = 0;
    for (int num : arr) {
        arraySum += num;
    }
    
    // The missing element is the difference between the expected sum and the array sum
    return totalSum - arraySum;
}

int main() {
    int n = 5;
    std::vector<int> arr = {1, 2, 3, 5};
    std::cout << "Missing element: " << findMissingElement(n, arr) << std::endl;

    n = 2;
    arr = {1};
    std::cout << "Missing element: " << findMissingElement(n, arr) << std::endl;

    return 0;
}
