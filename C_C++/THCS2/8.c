#include<stdio.h>



int main (){
    int n;
    scanf("%d", &n);
    for (int i=2;i<=n;i++){
        if (n%i==0){
            while (n%i==0){
                printf("%d", i);
                n=n/i;
                if (n>=i) printf("x");
            }
        }
    }
    return 0;
}