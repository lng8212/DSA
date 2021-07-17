#include<stdio.h>
#include<math.h>

int main (){
    long long n;
    scanf("%lld", &n);
    long long s = 0;
    for (int i = 2;i<=sqrt(n);i++){
        if (n%i==0){
            s++;
            while (n%i==0){
                n/=i;
            }
        }
    }
    if (n>1){
        int check = 0;
        for (int i = 2;i<=sqrt(n);i++){
            if (n%i==0) check = 1;
        }
        if (check == 0) s++;
    }
    printf("%d", s);
}