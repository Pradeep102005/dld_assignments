//
// Created by prade on 14-10-2023.
//need 5 stars in a row with 3 columns
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ //outer loop ->no of lines
        for(int i=1;i<=5;i++) //inner loop->no of stars in each line
            printf("*");
        printf("\n");// har line ke baad ek enter maarne keliye haif
    }
    return 0;
}
