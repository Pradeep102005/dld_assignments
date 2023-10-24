//
// Created by prade on 10-10-2023.
//Display the AP-4,7,10,13,16 upto n terms
//3n+1
#include<stdio.h>
int main(){
    int n;
    printf("Please enter a number");
    scanf("%d",&n);
    for(int i=4;i<=3*n+1;i=i+3) {
        printf("%d\n", i);
    }
        return 0;
    }


