#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int my_int;
    double my_double;
    char my_str[100];
    
    // Declare second integer, double, and String variables.
    scanf("%d\n%lf\n%[^\n]", &my_int, &my_double, my_str);
    // Read and save an integer, double, and String to your variables.
    printf("%d\n%.1lf\n%s%s", i + my_int, d + my_double, s, my_str);
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}