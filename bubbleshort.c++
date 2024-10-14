#include <iostream>
using namespace std;

int main() {
    int arr[12] = {7, 4, 8, 5, 3, 6, 1,2,9,12,10,11};
    int n = sizeof(arr) / sizeof(int);

    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int k = 0; k < n; k++) {
        cout << arr[k] << endl;
    }

    return 0;
}

// #include <iostream>
// using namespace std;

// // Function to perform binary search
// int binarySearch(int arr[], int size, int target) {
//     int left = 0;
//     int right = size - 1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;

//         // Check if target is present at mid
//         if (arr[mid] == target) {
//             return mid;
//         }

//         // If target is greater, ignore left half
//         if (arr[mid] < target) {
//             left = mid + 1;
//         }
//         // If target is smaller, ignore right half
//         else {
//             right = mid - 1;
//         }
//     }

//     // Target is not present in array
//     return -1;
// }

// int main() {
//     int arr[12] = {7, 4, 8, 5, 3, 6, 1, 2, 9, 12, 10, 11};
//     int n = sizeof(arr) / sizeof(int);

//     // Bubble sort to sort the array
//     for (int i = n - 2; i >= 0; i--) {
//         for (int j = 0; j <= i; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }

//     // Print the sorted array
//     cout << "Sorted array: ";
//     for (int k = 0; k < n; k++) {
//         cout << arr[k] << " ";
//     }
//     cout << endl;

//     // Perform binary search
//     int target = 9; // Change this to the number you want to search for
//     int result = binarySearch(arr, n, target);

//     if (result != -1) {
//         cout << "Element found at index: " << result << endl;
//     } else {
//         cout << "Element not found in the array" << endl;
//     }

//     return 0;
// }

