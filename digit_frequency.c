#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int *number = (int*) malloc(10 * sizeof(int));
    char c;
    //for assign value 0 of every number
    for(int i = 0; i < 10; i++)
        *(number+i) = 0;

    while(scanf("%c", &c) == 1)
        if(c >= '0' && c <= '9')
            (*(number+(c-'0')))++;
    
    for(int i = 0; i < 10; i++)
        printf("%d ", *(number+i));
    
    return 0;
}




