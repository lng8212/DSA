#include<stdio.h>

int a[1000007];
int main (){    
    int n,k;
    scanf("%d %d", &n, &k);
    for (int i = 0;i<n;i++){
        scanf("%d", &a[i]);
    }
    int z = k%n;
    for (int i = z;i<n;i++){
        printf("%d ", a[i]);
    }   
    for (int i = 0 ;i<z;i++){
        printf("%d ", a[i]);
    }

}