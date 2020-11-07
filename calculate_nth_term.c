#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  if(n>3){
      int i=4;
      while(i<=n){
          int temp = a+b+c;
          a = b;
          b = c; 
          c = temp;
          i++;      }
      
}
return c;
}

int main() {
    int n, a, b, c;
    scanf("%d",&n);
    scanf("%d %d %d",&a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}

