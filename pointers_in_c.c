#include <stdio.h>
#include <math.h>
void update(int *a,int *b) {
    // Complete this function    
    int i = *a;
    int j = *b;
    *a = i+j;

    if(i-j<0){
        *b = j -i;
    }
    else{
        *b = i-j;
    }

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

