#include<stdio.h>
#include<string.h>
int tc (char a[]){
    int mark=0;
    for (int i=0;i<strlen(a);i++){
        if (a[i]!=a[strlen(a)-i-1]) {
            mark=1;
            break;
        }
    }
    if (mark==0) return 1;
    return 0;
}
void numtostring (int n, char a[]){
    char b[1000];
    int z=0;
    while (n>0){
        b[z++]=n%10+'0';
        n/=10;
    }
    for (int i=0;i<z;i++){
        a[z-i-1]=b[i];
    }

}
int main (){
    for (int i=100000;i<=999999;i++){
        int k=i;
        int s=0;
        while (k>0){
            s=s+k%10;
            k/=10;
        }
        char b[1000];
        numtostring(i,b);
        if (s%10==0 && tc(b)==1) printf("%d ",i);
    }
    return 0;
}