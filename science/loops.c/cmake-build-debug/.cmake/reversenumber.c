//
// Created by prade on 13-10-2023.
//
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int r=0;
    while(n>0){
        r=r+(n%10);
        r=r*10;
        n=n/10;
    }
    r=r/10;
    printf("The reversed number is %d",r );
    return 0;
}