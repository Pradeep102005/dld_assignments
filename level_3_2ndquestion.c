//
// Created by prade on 02-10-2023.
//
#include<stdio.h>
int main() {
    int n;
    printf("Please enter a number");
    scanf("%d", &n);
    if (n % 5 == 0) {
        if (n % 3 == 0) {
            printf("The number is divisible by 5 and 3");
        } else {
            printf("The number is not divisible by 5 and 3");
        }
    } else {
        printf("The number is not divisble by 5 and 3");
    }
    return 0;
}



