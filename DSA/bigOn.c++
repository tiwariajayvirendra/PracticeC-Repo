// big O(1)

// #include <iostream>
// using namespace std;

// int main() {
//     int myArray[10] = {2,4,6,8,10,12,14,16,18,20};

//     // Accessing the element at index 2 (which is 30)
//     int elementAtIndex0 = myArray[5];

//     cout << "Element at index 5: " << elementAtIndex0 << endl;

//     return 0;
// }

/////////////////////////////////////////////////////////////////


// #include <iostream>
// using namespace std;

// bool isPalindrome(const string& s) {
//     int left = 0;
//     int right = s.size() - 1;

//     while (left < right) {
//         if (s[left] != s[right]) {
//             return false; // Not a palindrome
//         }
//         ++left;
//         --right;
//     }

//     return true; // It's a palindrome
// }

// int main() {
//     string s = "madam";

//     if (isPalindrome(s)) {
//         cout << "It's a palindrome!" << endl;
//     } else {
//         cout << "Not a palindrome." << endl;
//     }

//     return 0;
// }








// big O(n)

#include <iostream>
using namespace std;

bool isPalindrome(const string& s) {
    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return false; // Not a palindrome
        }
        ++left;
        --right;
    }

    return true; // It's a palindrome
}

int main() {
    string s = "madam";

    if (isPalindrome(s)) {
        cout << "It's a palindrome!" << endl;
    } else {
        cout << "Not a palindrome." << endl;
    }

    return 0;
}
