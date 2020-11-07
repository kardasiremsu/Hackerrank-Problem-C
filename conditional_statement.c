#include<stdio.h>

int main(){
    int n;
    char *numbers[] = {"one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d",&n);
    if(n<10){
        printf("%s",numbers[n-1]);
    }
    else{
        printf("Greater than 9");
    }
}

