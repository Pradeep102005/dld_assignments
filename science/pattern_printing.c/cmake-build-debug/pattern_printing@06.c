//
// Created by prade on 17-10-2023.
//
#include<stdio.h>
int main(){
    int n;

printf("Enter no of rows");
scanf("%d",&n);
//A B C D
//A B C D
//A B C D
for(int i=1;i<=n;i++){
    int a=1;
    for(int j=1;j<=n;j++){
        int d=a+64;
        char ch=(char)d;//d=65
        printf("%d",d);//ch=(char)65->ch='A'
        a++;
    }
    return 0;
}