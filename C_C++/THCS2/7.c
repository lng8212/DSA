#include<stdio.h>


int main (){
    int a,b;
    scanf("%d%d", &a,&b);
    int  z= a;
    int y = b;
    while (z*y!=0) {
        if (z>y) z=z%y;
        else y=y%z;
    }
    int GCD= z+y;
    printf("%d %d", GCD, (a*b)/GCD);
    return 0;
}