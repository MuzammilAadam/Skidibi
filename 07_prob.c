#include <stdio.h>
#include <math.h> // For the sqrt function

void main() {
    int n;
    int prime = 1; // Assume the number is prime

    // Input a number
    printf("Enter any number: ");
    scanf("%d", &n);

    // Handle edge cases for numbers less than or equal to 1
    if (n <= 1) {
        prime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        // Check for factors from 2 up to the square root of n
        for(int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                prime = 0; // If n is divisible by i, it's not prime
                break; // No need to check further
            }
        }
    }

    // Output the result
    if (prime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
}
