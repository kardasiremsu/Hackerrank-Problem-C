#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_LEN 20
#define MAX_SIZE 200
int main() 
{
    char c;
    char s[MAX_LEN];
    char sen[MAX_SIZE];
    
    scanf("%c ", &c);
    scanf("%s ", s);
    fgets(sen, MAX_SIZE, stdin);
    printf("%c\n%s\n%s",c,s,sen);
    return 0;
}

