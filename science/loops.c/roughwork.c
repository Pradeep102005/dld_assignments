#include<stdio.h>

int main() {
    int n;
    printf("Please enter a number: ");
    scanf("%d", &n);

    int sum = 0;
    while (n != 0) {
        int last_digit = n % 10; // Extract the last digit of n
        if (last_digit % 2 == 0) {
            sum = sum + last_digit; // Add the even digit to sum
        }
        n = n / 10; // Remove the last digit from n
    }

    printf("The sum of even digits in the given number is %d", sum);
    return 0;
}


















