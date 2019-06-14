#include<stdio.h>

int main () {
    int A[4] = {0};
    int B[4];
    //B = A;
    for ( int i = 0 ; i < 4 ; i++) {
        printf("%d\n", A[i]);
    }
    return 0 ;
}