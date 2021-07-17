#include<stdio.h>

int main (){
    int a,b;
    scanf("%d%d", &a,&b);
    int k=a;
    int tmp;
    if (a>b) tmp=a;
    else tmp=b;
    if (b>=a){
    while (k--){
        for (int i=b;i>tmp;i--){
            char c=i+96;
            printf("%c",c);
        }
        for (int i=0;i<tmp;i++){
            char c=tmp+96;
            printf("%c",c);
        }
        tmp--;
        printf("\n");
    }
    }
    else {
        int tmp=a-b;
        int h=b;
        while (h--){
            for (int i=b;i>h+1;i--){
                char c=i+tmp+96;
                printf("%c",c);
            }
            for (int i=0;i<=h;i++){
                char c=h+tmp+97;
                printf("%c",c);
            }
            printf("\n");
        }
        while (tmp--){
            for (int i=a;i>a-b;i--){
                 char c=i+96;
            printf("%c",c);
            }
            printf("\n");
        }
    }
    
}