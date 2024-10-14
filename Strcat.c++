//strcut code example

// #include<stdio.h>
// #include<string.h>
//     int main()
//     {
//         char str1[50]="Ajay ";
//         char str2[50]="Tiwari";
//         strcat (str1,str2);
//         printf("%s",str1);
//         return 0;
//     }

//strncut example code 
// #include<stdio.h>
// #include<string.h>

//     int main()
//     {
//         char str1 [50]= "Ajay ";
//         char str2[10]= "Tiwari";

//         strncat(str1, str2, 4);
//         printf("%s",str1);
//         return 0;
//     }

// #include <iostream>
// #include <cstring>

// int main() {
//     // Initialize a C-style string
//     char str[] = "Hello, C++!";

//     // Use strlen to find the length of the string
//     size_t length = strlen(str);

//     // Print the length of the string
//     std::cout << "ajay is best in the world: " << length << std::endl;

//     return 0;
// }

//anmol sir ka code 
// #include <stdio.h>
// #include <string.h>

// int main (void) {
//    char string[] = "simplyeasylearning";
//    char temp;

//    int i, j;
//    int n = strlen(string);

//    printf("String before sorting - %s \n", string);

//    for (i = 0; i < n-1; i++) {
//       for (j = i+1; j < n; j++) {
//          if (string[i] > string[j]) {
//             temp = string[i];
//             string[i] = string[j];
//             string[j] = temp;
//          }
//       }
//    }
   
//     printf("String after sorting  - %s \n", string); 
//     return 0;
// }
//copilot ka code
#include <stdio.h>
#include <string.h>

int main(void) {
    char string[] = "simplyeasylearning";
    char temp;
    int i, j;
    int n = strlen(string);

    printf("String before sorting: %s\n", string);

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (string[i] > string[j]) {
                temp = string[i];
                string[i] = string[j];
                string[j] = temp;
            }
        }
    }

    printf("String after sorting: %s\n", string);
    return 0;
}
