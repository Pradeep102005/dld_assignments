//
// Created by prade on 02-10-2023.
//
//Take +ve integer input and tell if it is divisible by 5 or 3 but not divisible by 15
#include<stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n%5==0||n%3==0) {
        if (n % 15 != 0) {
            printf("the number is divisble by 5 or 3 but not 15");
        } else {
            printf("The number is divisible by 15");
        }
    }
        else{
            printf("The number is not divisble by 3 or 5");
        }
        return 0;
    }