#include<stdio.h>

int main (){
    int n;
    scanf("%d", &n);
    int a[n+1];
    int b[100007]={0};
    for (int i=0;i<n;i++){
        scanf("%d", &a[i]);
        b[a[i]]++;
    }
    for (int i=0;i<100006;i++){
        if (b[i]!=0) printf("%d ", i);
    }

    return 0;
}