#include<stdio.h>
#include<math.h>
#include<string.h>
int m;
void numToString (int n, char a[]){
   int z=0;
   char b[1000];
    while (n>0){
       b[z++]=n%10+'0';
        n/=10;
    }
    for (int i=0;i<z;i++){
        a[z-i-1]=b[i];
    }
    m=z;
}
int tn (char a[]){
    for (int i=0;i<m;i++){
        if (a[i]!=a[m-1-i]) return 0;
    }
    return 1;
}
int dif (char a[]){
    for (int i=0;i<m;i++){
        int k = a[i]-'0';
       if (k!=0 && k!=8 && k!=6) return 0;
    }
    return 1;
}
int sumz (char a[]){
    int s=0;
    for (int i=0;i<m;i++){
        s=s+(a[i]-'0');
    }
    if (s%10==0) return  1;
    return 0;
}

int main (){
    for (int i=1000000;i<=99999999;i++){
        char a[1000];
        numToString(i,a);
        if (dif (a)==1 && tn(a)==1 && sumz(a) ) printf("%d ",i);
    }
    return 0;
}