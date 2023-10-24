//
// Created by prade on 14-10-2023.
//
#include<stdio.h>
int main(){
int n;
printf("Enter a number: ");
scanf("%d",&n);
int a=1;
int b=1;
int sum=1;//sum=0 isliye nahi diya kyuki 1st and 2nd fibanocci number galat aayegi kyuki n-2=0 toh 0 hota hai
for(int i=1;i<=n-2;i++){
/* hum n-2 isliye de rahe h kyuki hum already 1st and 2nd number print karliye h
 * a=1 b=1 kardiye h humne matlab first two numbers already declared h so answer bhi 2 nuumbers aage ki ayega
 * isliye hum idhar n-2 kar rahe hai*/
sum = a + b;
a = b;
b = sum;
}
printf("%d",sum);
return 0;
}