#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, sum_of_digits=0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    for (;n>0;) {
        sum_of_digits += n%10;
        n=n/10;
    }
    printf("%d", sum_of_digits);
    return 0;
}