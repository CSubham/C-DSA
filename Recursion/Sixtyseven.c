#include <stdio.h>

double taylor(int x, int n);
double pow1(int x, int n);
double fact(int n);
double taylor2(int x,int n, double s);

int main(){
    printf("%lf\n", taylor(2,10 ));
    printf("%lf", taylor2(2,10,1 ));
    return 0;
}

double taylor(int x,int n){
    if(n==0) return 1.0;
    else return (double)(((pow1(x,n))/fact(n)) + taylor(x,n-1));
}

double taylor2(int x,int n, double s){
    if(n==0) return s;
    s = 1.0 + ((x/(double)n) *  s);
    return  taylor2(x, n-1, s);
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

