#include<stdio.h>
// Cho 1 mang n so, với mỗi số kiểm tra
// so uoc cua nó là s,
// tổng các chữ số của s là P
// P có phải số ngto hay k
 
int tongchuso(int n){
    int tong=0;
    while(n>0){
        tong+=n%10;
        n/=10;
    }
    return  tong;
}
int demuoc(int n){
    int uoc=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            uoc+=2;
            if(i*i==n){
                uoc--;
            }
        }
    }
    return uoc;
}
 
int kiemtrasonguyento(int n){
    int uoc;
    uoc=demuoc(n);
    if(uoc==2)return 1;
    return 0;
}
int A[10000007];
int solve(int n){
    int S=demuoc(n);
    int P=tongchuso(S);
    if(kiemtrasonguyento(P)==1)return 1;
    return 0;
 
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)scanf("%d",&A[i]);
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(solve(A[i])==1)cnt+=1;
    }
    printf("%d",cnt);
    return 0;
}