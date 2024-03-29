#include <stdio.h>

unsigned long long factorial(unsigned int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    unsigned int num;
    printf("Enter a positive integer: ");
    scanf("%u", &num);

    unsigned long long result = factorial(num);
    printf("Factorial of %u = %llu\n", num, result);

    return 0;
}
