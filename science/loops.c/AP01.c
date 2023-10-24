//
// Created by prade on 10-10-2023.
// display this AP-1,3,5,7,9 upto n terms
//2n-1
#include<stdio.h>
int main(){
    int n;
    printf("Please enter a number");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i=i+2){
        printf("%d\n",i);
    }
    return 0;
}
