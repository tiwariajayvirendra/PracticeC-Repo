 #include <stdio.h>

int main() {
    float num1, num2, product;
    printf("Enter two floating-point numbers: ");
    
    // Check if both inputs are read successfully
    if (scanf("%f %f", &num1, &num2) != 2) {
        printf("Invalid input. Please enter valid floating-point numbers.\n");
        return 1; // Exit with an error code
    }
    
    product = num1 * num2;
    printf("Product: %.2f\n", product);
    return 0;
}
