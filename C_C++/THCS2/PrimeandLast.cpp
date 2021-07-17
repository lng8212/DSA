#include<stdio.h>
#include<math.h>
int isPrime(int n){
    if (n<2) return 0;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0) return 0;
    }
    return 1;
}
bool last (int n){
    int t=n%10;
    while (n>0){
        int z=n%10;
        if (z>t) return 0;
        n=n/10;
    }
    return 1;
}
int main (){
    int n;
    scanf("%d",&n);
    int sum=0;
    for (int i=2;i<n;i++){
        if (isPrime(i)==1 && last(i)==1) {
            printf("%d ",i);
            sum++;
        }
    }
    printf("\n%d",sum);

}