#include <stdio.h>

/*
  Calculates the factorial of a non-negative integer n recursively.
  The factorial of n (n!) is the product of all positive integers less than or
  equal to n. This function uses the recursive definition:
  - Base Case: factorial(0) = 1
  - Recursive Step: factorial(n) = n * factorial(n - 1) for n > 0
 */
 
long long factorial(int n) {
    if (n < 0) {
        return -1;
    }

    // Base Case: Stop condition for the recursion. Factorial of 0 is 1.
    if (n == 0) {
        return 1;
    }

    // Recursive Step: The function calls itself with a smaller argument (n - 1).
    return (long long)n * factorial(n - 1);
}

int main() {
    int number;
    long long result;

    printf("Enter a non-negative integer (up to 20 for accurate results): ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }
    result = factorial(number);

    // Check for error conditions 
    if (result == -1) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        printf("The factorial of %d is: %lld\n", number, result);
    }
    return 0; 
}
