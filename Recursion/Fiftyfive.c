#include <stdio.h>
//Tree recursion

int main(){
    func(2);
    return 0;
}

int func(int n){
    if(n>0){
        printf("%d",n);
        func(n-1);
        func(n-1);
    }
}
