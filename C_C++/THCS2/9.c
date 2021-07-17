#include<stdio.h>

int a[100007];
int prime[100006];
void Era(){
    a[0]=0;
    a[1]=0;
    for (int i=2;i<100007;i++){
        a[i]=1;
    }
    for (int i=2;i<100007;i++){
        for (int j=2*i;j<100007;j+=i){
            a[j]=0;
        }
    }
    int z=0;
    for (int i=2;i<100007;i++){
       if (a[i]==1) prime[z++]=i;
    }
}
int main (){
    Era();
    int n;
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        printf("%d ",prime[i]);
    }

    return 0;
}