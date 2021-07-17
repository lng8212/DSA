#include<stdio.h>

int main(){
    int a,b;
    scanf("%d%d", &a,&b);
    int k=a;
    int z;
    if (a>b) z=a;
    else z=b;
    if (b>=a){
        while (k--){
            for (int i=k+1;i<b;i++){
                char c=i+64;
                printf("%c",c);
            }
            for (int i=k+1;i>0;i--){
                char c=z+64;
                 printf("%c",c);
            }
            printf("\n");
        }
    }
    else {
        int tmp=a-b;
        int m=b;
        while (tmp--){
            for (int i=1;i<=b;i++){
                char c=b+64;
                printf("%c",c);
            }
            printf("\n");
        }
        while (m--){
            for (int i=m+1;i<=b;i++){
                char c=i+64;
                printf("%c",c);
            }
            for (int i=0;i<m;i++){
                char c=b+64;
                printf("%c",c);
            }
            printf("\n");
        }

    }
   
}