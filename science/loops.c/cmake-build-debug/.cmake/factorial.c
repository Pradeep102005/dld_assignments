//
// Created by prade on 14-10-2023.
//
#include<stdio.h>
int main(){
    int n;
    printf("Please enter a number");
    scanf("%d",&n);
    //5!=1x2x3x4x5
    int product=1;
    for(int i=1;i<=n;i++) {
        product = product * i;
    }
    printf("The factorial is: %d",product);
    return 0;
}