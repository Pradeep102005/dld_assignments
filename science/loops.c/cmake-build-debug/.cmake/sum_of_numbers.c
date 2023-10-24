//
// Created by prade on 13-10-2023.
//
#include<stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int count = 0;
    while (n != 0) {
        n = n / 10;
        count++;
    }
    printf("the no of digits are %d", count);
    return 0;
}


