#include<stdio.h>

int main (){
    long long n,u1,d;
    scanf("%lld%lld%lld", &n, &u1, &d);
    long long s = n*(2*u1+(n-1)*d);
    printf("%lld", s/2);
}


