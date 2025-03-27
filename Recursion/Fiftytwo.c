#include <stdio.h>

int main(){

    printf("%d",sqr(10));
    return 0;
    
}

// role of static variables in recursion
int sqr(int n){
    static int x = 0;
    if(n==0) return 0;
    x++;
    return func(n-1) + x;
 }