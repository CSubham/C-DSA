#include <stdio.h>

double taylor(int x, int n);
double pow1(int x, int n);
double fact(int n);

int main(){
    printf("%lf", taylor(4,10 ));
    return 0;
}

double taylor(int x,int n){
    if(n==0) return 1.0;
    else return (double)(((pow1(x,n))/fact(n)) + taylor(x,n-1));
}

double pow1(int m, int n)
{
    if (n == 0)
        return 1;
    else
        return m * pow1(m, n - 1);
}

double fact(int n){
    if(n==0) 
    return 1;
    else return n * fact(n-1); 
}

