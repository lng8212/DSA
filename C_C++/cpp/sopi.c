#include<stdio.h>
#include<math.h>

int nguyento (int a){
    int tt=1;
    for (int i=2;i<a;i++){
        if (a%i==0) tt=0;
    }
    if (tt==1) return 1;
    else return 0;
}
int tongchuso( int b){
    int S=0;
    while (b!=0){
        S=S+b%10;
        b=b/10; 
    }
    return S;
}
int souoc (int c){
    int S1=0;
    for ( int i=1; i<=sqrt(c);i++){
        if(c%i==0 && i*i!=c) S1=S1+2; 
        if (i*i==c) S1=S1+1;
    }
    return S1;
}
int tonguoc (int d){
    int S2=0;
    for (int i=1;i<=sqrt(d);i++){
        if (d%i==0 && i*i!=d) S2=S2+i+d/i;
        if (i*i==d) S2=S2+i;
    }
    return S2;
}
int main(){
    int n;
    scanf("%d",&n);
    int x=tonguoc (n);
    int z=souoc (x);
    int y= tongchuso( z);
    int w= nguyento( y);
    if (w==1) printf("YES");
    if (w==0) printf("NO");
}