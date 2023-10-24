//
// Created by prade on 16-10-2023.
//
#include<stdio.h>
int main(){
    int n;
    printf("Enter no of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){//no of lines/rows->i
        for(int j=1;j<=n+1-i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}