// #include <iostream>
// using namespace std;

// int decimaltoanybase(int num,int base){
    
//     int ans=0;
//     int power=1;
    
//     while
//     (num>0){
//         int dig=num%base;
//         num=num/base;
        
//          ans=ans+dig*power;
//         power=power*10;
        
//     }
    
//     return ans;
    

// int main()
// {
    
//     int rv=decimaltoanybase(84,2);
//     cout<<rv<<endl;
   

//     return 0;
// }

// }
#include <iostream>
using namespace std;

int decimalToAnyBase(int num, int base) {
    // if (base < 2) {
    //     cout << "Base must be at least 2." << endl;
    //     return -1;
    // }

    int ans = 0;
    int power = 1;

    while (num > 0) {
        int dig = num % base;
        num = num / base;
        ans = ans + dig * power;
        power = power * 10;
    }

    return ans;
}

int main() {
    int num, base;
    cout << "Enter a decimal number: ";
    cin >> num;
    cout << "Enter the base to convert to: ";
    cin >> base;

    int result = decimalToAnyBase(num, base);
    if (result != -1) {
        cout << "The number " << num << " in base " << base << " is: " << result << endl;
    }

    return 0;
}