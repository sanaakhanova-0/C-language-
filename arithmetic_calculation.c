#include <stdio.h>
int main(){
    int a, b;
    printf("Enter first integer:");
    scanf("%d", &a);
    printf("Enter second integer:");
    scanf("%d", &b);
    printf("Sum of %d and %d is: %d\n", a, b, a + b);
    printf("Difference of %d and %d is: %d\n", a, b, a - b);
    printf("Product of %d and %d is: %d\n", a, b, a * b);
    printf("Quotient of %d and %d is: %d\n", a, b, a / b);
return 0;
}
