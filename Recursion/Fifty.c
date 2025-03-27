#include <stdio.h>

int main(){
    int n = 4;
    increasing(n);
    printf("\n");
    decreasing(n);
    return 0;
}

void increasing(int n){
    if(n==0)return;
    printf("%d ",n);
    increasing(--n);
}

void decreasing(int n){
    if(n==0)return;
    decreasing(n-1);
    printf("%d ",n);
}