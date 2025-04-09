#include <stdio.h>

void fib(int p, int n, int u);
int fib2(int n);
int fib3(int n);
int main()
{
    printf("%d \n",fib2(3));
    printf("%d \n", fib3(3));

    return 0;
}

// print till nth recursively
void fib(int p, int n, int u)
{
    if (u == 0)
        return;
    else if (n == 0)
    {
        printf("%d ", 0);
        if (u-1 == 0)
            return;
        --u; 
        printf("%d ", 1);
        --u; ++n;
    }
    else
    {
        printf("%d ", p + n);
        int temp = p + n;
        p = n;
        n = temp;
        --u;
    }

    fib(p, n, u);
}

//fetch nth recursively
int fib2(int n)
{
    if (n <= 1) return n;
    return fib2(n - 2) + fib2(n - 1);
}

//memoization
int arr [10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int fib3(int n){
    if(arr[n] != -1) return arr[n];

    if(n<=1){
        arr[n] = n;
        return n;
    }

    int x = (arr[n-2]==-1)? fib3(n-2):arr[n-2];
    arr[n-2] = x;
    int y = (arr[n-1]==-1)? fib3(n-1):arr[n-1];
    arr[n-1] = y;

    return x + y;
}
