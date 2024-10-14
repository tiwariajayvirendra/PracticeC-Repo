#include<iostream>
using namespace std;
int main()
{
    int arr[12]={11, 1, 3, 12, 2, 10, 8, 6, 4, 9, 5, 7};
    int n=sizeof(arr) /sizeof(int);
    for (int  i = 0 ; i <n-1; i++){
        int index=i;
        for (int j = i+1 ; j < n ; j++){
            if (arr[j] <arr[index]){
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
    for(int k = 0 ; k < 12 ; k++) {
        cout << arr[k] <<  endl;

    }
    return 0;
    
}

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[12] = {12,11,10,9,8,7,6,5,4,3,2,1};
//     int n = sizeof(arr) / sizeof(int);

//     for (int i = 0; i < n - 1; i++) {
//         int index = i;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[index]) {
//                 index = j;
//             }
//         }
//         swap(arr[i], arr[index]);
//     }

//     for (int k = 0; k < 12; k++) {
//         cout << arr[k] << endl;
//     }

//     return 0;
// }


// https://codeshare.io/w9lmMj
// merg short 
// inserson short 
// bubble short ,

// class Solution {
// public:
//     vector<int> sortArray(vector<int>& nums) {

//         int n =nums.size();


//         for(int i=0;i<n-1;i++){
//             int index=i;
//             for(int j=i+1;j<n;j++){
//                 if(nums[j]<nums[index]){
//                     index=j;
//                 }
//             }
//             swap(nums[i],nums[index])
//         }


        
//     }
// };


// Pasted code here BubbleSort/ in gfg post my first post there 
// class Solution {
// public:

//      void bubbleShort (int arr[], int n){

//         for(int i=n-2;i>=0;i--){
//             for(int j=0;j<=i;j++){
//                 if(arr[j]>arr[j+1]){
//                     swap(arr[j],arr[j+1])
//                 }
//             }
            
//         }
        
//     }
// };