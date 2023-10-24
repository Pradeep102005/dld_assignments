//
// Created by prade on 09-10-2023.
//
#include<stdio.h>
int main(){
    int n;
    printf("Please enter a number");
    scanf("%d",&n);
    for(int i=n;i<=n*10;i=i+n){
        printf("%d\n",i);
    }
    return 0;
}