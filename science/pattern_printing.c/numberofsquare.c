//
// Created by prade on 14-10-2023.
//
#include<stdio.h>
int main() {
    setbuf(stdout, 0);
    int n;
    printf("Please enter no of rows: ");
    scanf("%d", &n);
    for (int i= 1; i <= n; i++) {
        for (int j = 1; j <= n; j++){
            printf("%d",j);
    }
    printf("\n");
}
return 0;
}
