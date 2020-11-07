#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int size,sum=0;
    scanf("%d",&size);
    int *array = (int*)malloc(size*sizeof(int));
    int n=0;
    while(n<size){
        scanf("%d",&array[n]);
        sum += array[n];
        n++;
    }
    printf("%d",sum);
    free(array);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

