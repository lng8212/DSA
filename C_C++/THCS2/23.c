#include<stdio.h>

int main (){    
    int n,m,p;
    scanf("%d%d%d",&n,&m,&p);
    int a[n+1];
    int b[m+1];
    for (int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for (int i=0;i<m;i++){
        scanf("%d", &b[i]);
    }
    for (int i=0;i<p;i++){
        printf("%d ", a[i]);
    }
    for (int i=p;i<p+m;i++){
        printf("%d ", b[i-p]);
    }
    for (int i=p;i<n;i++){
        printf("%d ", a[i]);
    }
    return 0;
}