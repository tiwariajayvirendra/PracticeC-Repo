#include <stdio.h>
#include <stdlib.h>  // Corrected to use standard library functions instead of conio.h


/* The Folllowing C Program Demonstrates how the Non-Zero elements of a 5-Square Tridiagonal Array are stored in a linear Array: */
void processArray() {
    int A[5][5];  // Array to store the 5x5 matrix
    int B[50];    // Linear array to store non-zero elements
    int J, K, L;
    int N = 5;

    // Initialize A and B arrays
    for (J = 0; J < N; J++)
        for (K = 0; K < N; K++)
            A[J][K] = 0;

    for (L = 0; L < 50; L++)
        B[L] = 0;  // Added missing semicolon

    // Assign values to the A array
    A[0][0] = 2;   A[0][1] = 22;
    A[1][0] = -13; A[1][1] = 77; A[1][2] = 4;
    A[2][1] = 3;   A[2][2] = 87; A[2][3] = 99;
    A[3][2] = 42;  A[3][3] = 6;  A[3][4] = 9;
    A[4][3] = 7;   A[4][4] = 29;

    // Transfer non-zero elements to B array
    for (J = 0; J < N; J++)
        for (K = 0; K < N; K++) {
            if (A[J][K] != 0) {
                L = 2 * (J + 1) + K + 1 - 2 - 1;
                B[L] = A[J][K];
            }
        }

    // Display the A array
    printf("5-Square Tridiagonal Array A:\n\n");
    printf("%d %d \n\n", A[0][0], A[0][1]);

    for (J = 1, K = 1; J <= 3 && K <= 3; J++, K++) {
        L = J;
        while (L != 0) {
            printf("\t");
            L = L - 1;
        }
        printf("%d %d %d\n\n", A[J][K - 1], A[J][K], A[J][K + 1]);
    }

    printf("\t\t\t\t%d %d\n\n", A[4][3], A[4][4]);

    // Display the B array
    printf("5-Square Tridiagonal Array A stored in Linear Array B:\n\n");
    L = 0;
    while (B[L] != 0) {
        printf("B[%d] = %d\n", L, B[L]);
        L = L + 1;
    }
}

int main() {
    processArray();
    return 0;
}
