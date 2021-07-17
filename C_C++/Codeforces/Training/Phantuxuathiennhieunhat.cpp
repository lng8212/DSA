#include<stdio.h>


int b[1000007];
int main (){
    int n;
    scanf("%d", &n);
    int a[n+1];
    for (int i = 0;i<1000007;i++){
        b[i] = 0;
    }
    for (int i = 0;i<n;i++){
        scanf("%d", &a[i]);
        b[a[i]]++;
    }
    int num = -1;
    int maximum = 0;
    for (int i = 0;i<1000007;i++){
        if (b[i]>=maximum) {
            num = i;
            maximum = b[i];
        }
    }
    printf("%d %d",  num, maximum);
    
    return 0;
}