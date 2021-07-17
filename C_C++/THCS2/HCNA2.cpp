#include<stdio.h>

int main(){
    int a,b;
    scanf("%d%d", &a,&b);
    int k=a;
    int z=b;
    if (b>=a){
         while (k--){
        for (int i=a-k;i<=b;i++){
            if (b>a) printf("%d",z);
            else printf("%d",k+1);
           
        }
         z--;
        for (int i=k-a+2+b;i<=b;i++){
            printf("%d",i);
        }
        printf("\n");
    }
    }
    else {
        int q=b;
        int m=a;
        int y=a;
        while (q--){
            for (int i=1;i<=q+1;i++){
                printf("%d",m);
            }
            m--;
            for (int i=y+1;i<=a;i++){
                printf("%d",i);
            }
            y--;
            printf("\n");
        }
        int tmp=a-b;
        while (tmp--){
            for (int i= a-b+1;i<=a;i++){
                printf("%d",i);
            }
            printf("\n");
        }
    }
   
}