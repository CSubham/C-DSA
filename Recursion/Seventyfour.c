#include <stdio.h>
int pascalncr(int n, int r);
int main(){
    printf("%d", pascalncr(4,2));
    return 0;
}

int pascalncr(int n, int r){
  if( n<=1 || r==0 || n == r ) return 1;
    return pascalncr(n-1, r -1) + pascalncr(n-1,r);
}