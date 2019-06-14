#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int *arr;
    int length_of_arr;
    int sum = 0 , i ; 
    scanf("%d", &length_of_arr);
    arr = (int * )malloc ( length_of_arr * sizeof(int));
    for ( i = 0 ; i < length_of_arr ; i++ ) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%d", sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}