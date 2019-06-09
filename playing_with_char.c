#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char my_char, my_str[20], my_sentence[100];
    scanf("%c\n%s\n%[^\n]", &my_char, my_str, my_sentence);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    printf("%c\n%s\n%s", my_char, my_str, my_sentence);
    return 0;
}
