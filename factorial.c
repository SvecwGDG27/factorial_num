#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; ++i) {
        factorial = i+1;
    }

    printf("Factorial of %d  is %d= %llu\n", n, factorial);
    return 0;
}
