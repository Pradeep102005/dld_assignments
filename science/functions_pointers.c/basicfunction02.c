//
// Created by prade on 19-10-2023.
//
#include<stdio.h>
void england(){
    printf("You are in england\n");
    return;
}
void australia(){
    printf("You are in australia\n");
    england();
}
void india() {
    printf("You are in  india\n");
    australia();//calling australia
    return;
}
int main(){
    //findia();//calling india//
    printf("Hellow world");
    return 0;
}