#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.

    int i , j, min;
    for ( i = 0  ; i <= ( 2 * ( n - 1 )) ; i++) {
        for (j = 0 ; j <= ( 2 * ( n - 1 )) ; j++ ) {
            if( ( j < n ) && ( i < n ) ) {
            
                if(i < j ) {
                    min = i ;
                }
                else {
                    min = j ;
                }
            }
            if( ( j >= n ) && ( i < n ) ) {
            
                if(i < ( ( 2 * ( n - 1 ) )- j ) ) {
                    min = i ;
                }
                else {
                    min = ( 2 * ( n - 1 ) ) - j  ;
                }
                
            }
            if( ( i >= n ) && ( j < n ) ) {
            
                if(j < ( ( 2 * ( n - 1 ) )- i ) ) {
                    min = j ;
                }
                else {
                    min = ( 2 * ( n - 1 ) ) - i  ;
                }
                
            }
            if( ( i >= n ) && ( j >= n ) ) {
            
                if(( ( 2 * ( n - 1 ) )- j ) < ( ( 2 * ( n - 1 ) )- i ) ) {
                    min = ( ( 2 * ( n - 1 ) )- j ) ;
                }
                else {
                    min = ( 2 * ( n - 1 ) ) - i  ;
                }
                
            }
            printf("%d ", n - min);
        }
        printf("\n");
    }

    return 0;
}
