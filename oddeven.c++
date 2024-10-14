#include <iostream>
using namespace std;

void countEvenOdd(int arr[], int size, int &evenCount, int &oddCount) {
    evenCount = 0;
    oddCount = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
}

int main() {
    int arr1[11] = {2, 3, 4, 5, 6,7,8,9,10,11,13};
    int evenCount1, oddCount1;
    countEvenOdd(arr1, 11, evenCount1, oddCount1);
    cout << "Number of even elements Ajay = " << evenCount1 << endl;
    cout << "Number of odd elements Vijay = " << oddCount1 << endl;

    int arr2[5] = {22, 32, 42, 52, 62};
    int evenCount2, oddCount2;
    countEvenOdd(arr2, 5, evenCount2, oddCount2);
    cout << "Number of even elements = " << evenCount2 << endl;
    cout << "Number of odd elements = " << oddCount2 << endl;

    return 0;
}
