#include<stdio.h>

int main (){
    int n;
    scanf("%d", &n);
    int a[n+1];
    for (int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    int check =1;
    for (int i=0;i<n;i++){
        if (a[i]!=a[n-1-i]) {
            check =0;
            break;
        }
    }
    if (check ==1) printf("YES");
    else printf("NO");

    return 0;
}