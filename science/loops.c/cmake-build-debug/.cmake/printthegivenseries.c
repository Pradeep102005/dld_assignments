//
// Created by prade on 14-10-2023.
//print the given series
//1-2+3-4+5-6.....upto 'n'
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    //1-2+3-4+5-6+.....n terms
    //odd numbers->add
    //even numbers->subtract
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0) sum=sum+i;
        else sum=sum-i;
    }
    printf("THe sum is: %d",sum);
    return 0;
}