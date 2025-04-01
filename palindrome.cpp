#include <stdio.h>

int main() {
    int n, digit, t, rev = 0;

    // Read the input number
    scanf("%d", &n);
    t = n; // Store the original number for comparison

    // Reverse the number
    while (n != 0) {
        digit = n % 10; // Get the last digit
        rev = (rev * 10) + digit; // Construct the reversed number
        n = n / 10; // Remove the last digit from n
    }

    // Check if the reversed number is equal to the original number
    if (rev == t) {
        printf("\nIts a palindrome\n"); // Corrected newline character
    } else {
        printf("\nIts not a palindrome\n"); // Corrected newline character
    }

    return 0;
}
