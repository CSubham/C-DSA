#include <stdio.h>
// Sum of N natural numbers


int NaturalSum(int n);

int main(){
   printf("%d", sum(5));
    return 0;
}

int NaturalSum(int n){
    if(n==1)return 1;
    else return n+ NaturalSum(n-1);
}

int sum(int n ){
    if(n>0) return n+sum(n-1);
}

int sum2(int n, int s){
    if(n>0) return sum2((n-1),(s + n));
    else return s;
}