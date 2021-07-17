#include<stdio.h>


int main (){

    int t;
    scanf("%d", &t);
    while (t--){
        int n;
        scanf("%d", &n);
        int a[n+1];
        for (int i  = 0;i<n;i++){
            scanf("%d", &a[i]);
        }
        int vt1= -10000007, vt2 = -10000007;
        for (int i = 0;i<n;i++){
            if (a[i]>vt1) {
                vt1= a[i];      
            }
        }
        for (int i = 0;i<n;i++){
            if (a[i]>vt2 && a[i] != vt1 ) {
                vt2  = a[i];
            }
        }
        if (vt1==-10000007 || vt2== -10000007 ) printf("0");
        else printf("%d %d", vt2,vt1);
        printf("\n");
    }
}