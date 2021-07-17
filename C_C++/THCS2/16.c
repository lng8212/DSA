#include<stdio.h>

int GCD (int a, int b){
    while (a*b!=0) {
        if (a>b) a=a%b;
        else b=b%a;
    }
    return a+b;
}
int main (){
    int a,b;
    scanf("%d%d", &a,&b);
    for (int i=a;i<b;i++){
        for (int j =i+1;j<=b;j++){
            if (GCD(i,j)==1) printf("%d %d\n",i,j);
        }
    }

    return 0;
}