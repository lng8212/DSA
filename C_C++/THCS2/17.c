#include<stdio.h>
#include<math.h>
#include<string.h>
int isPrime (int n){
    if (n<2) return 0;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0) return 0;
    }
    return 1;
}
int SumofNum (int n){
    int s=0;
    while (n>0){
        s=s+n%10;
        n/=10;
    }
    if (isPrime(s)==1) return 1;
    return 0;
}
int NotDecrease (int n){
    char a[1000];
    int z=0;
    while (n>0){
        a[z++]=n%10;
        n/=10;
    }
    char ans='0';
    for (int i=0;i<z;i++){
        if (ans <a[i]) return 0;
        else {
            ans=a[i];
        }
    }
    return 1;
}
int main (){
    for (int i=1000000;i<=9999999;i++){
        if (isPrime(i)==1 &&SumofNum(i)==1 && NotDecrease(i)==1) printf("%d ",i);
    }

    return 0;
}