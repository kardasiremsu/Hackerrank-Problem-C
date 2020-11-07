#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char *start = "Hello, World!";
    char s[100];
    fgets(s,100,stdin);
    printf("%s\n%s",start,s);
    return 0;
}

