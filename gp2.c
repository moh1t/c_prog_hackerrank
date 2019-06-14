#include<stdio.h>

struct Results {
    int (*R)[4];
    int M ;
};
struct Results solution(int A[], int N, int K) {
    struct Results result;
    int max_arr[K] ;
    int temp[K] ;
    int i , j, k = 0 , l;
    // for (i = 0 ; i < N ; i++) {
    //     printf("%d", A[i]);
    // }
    // printf("%d %d", N, K);
    for ( i = 0 ; i < K ; i++ ) {
        max_arr[i] = A[i] ;
        printf("copying max 1st time --> %d \n", max_arr[i]);
    }
    for ( i = 1 ; i < N - K + 1 ; i++ ) {
        for ( j = i; j < K + i ; j++ ) {
            temp[j - i ] = A[j];
            printf("setting up temp Arr ---> %d \n", temp[j]);
        }
        k = 0 ;
        while (temp[k] == max_arr[k]) {
                printf("comparing k th element ");
            k++;
        }
        if ( temp[k] >  max_arr[k]) {
            printf("Entering new max \n") ;
            for(l = 0 ; l < K ; l++) {
                max_arr[l] = temp[l];
                printf("%d putting value in max ", max_arr[l]) ;
            }
        }
    }
    
    // write your code in C99 (gcc 6.2.0)
    result.M = K;
    result.R = max_arr ;// put your result array here
    return result;
}

int main () {
    struct Results r;
    int B[] = {1, 4, 3, 2, 5};
    r = solution(B, 5 ,4) ;
    for(int i = 0 ; i < 4 ; i++) {
        printf("\n%d -->", r.R[i]);
    }
    return 0 ;
}