#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//My code starts here 
int head = 0;
int tail = 0;
int q[10000] ;
void insert_q(int i) {
    //printf("inserting to - %d", i);
    q[tail] = i;
    tail++;
}
int get_from_q() {
    head++;
    //printf("get from q %d\n", q[head -1] );
    return q[head - 1];
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int num_of_str, i, j ,k, temp;
    char **str_arr;
    char *temp_str;
    scanf("%d", &num_of_str);
    str_arr = (char **) malloc(num_of_str * sizeof(char *));
    // str_arr[0] = a ;
    for(i = 0 ; i < num_of_str; i++ ) {
        temp_str = (char * )malloc(10000 * sizeof(char));
        scanf("%s", temp_str) ;
       // printf("%s\n", temp_str);
        str_arr[i] =  temp_str;
       // printf("%s\n", str_arr[i]);
       // printf("%lu\n", strlen(str_arr[i]));
    }
    for (i = 0 ; i < num_of_str ; i++) {
        k = 1;
        head = 0;
        tail = 0;
        for (j = 0 ;j < strlen(str_arr[i]); j++) {
            if(j%2 ==0 ) {
                printf("%c", str_arr[i][j]);
            } 
            else {
                insert_q(j);
            }
            
        }
        printf(" ");
        while(head != tail) {
            temp = get_from_q();
            printf("%c", str_arr[i][temp]) ;
        }
        printf("\n");
    }
    
   // printf("%s", str_arr[0]);
    //my code ends here   
    return 0;
}
