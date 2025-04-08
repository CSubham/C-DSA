#include <stdio.h>
// m ^ n, there is also a fast exponentiation method which used binary

int main()
{
    printf("%d", pow1(2, 3));
    return 0;
}

int pow1(int m, int n)
{
    if (n == 0)
        return 1;
    else
        return m * pow1(m, n - 1);
}