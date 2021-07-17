#include<stdio.h>

int main (){
    int a,b;
    scanf("%d%d", &a,&b);
    int k=a;
    if (a<=b){
    while (k--){
        for (int i=k;i<b-1;i++){
            printf("%d", b-k);
        }
        for (int i=b-k;i<=b;i++){
            printf("%d", i);
        }
        printf("\n");
    }
    }
    else{
        int z=a;
        while (z>b){
            for (int i=a-b+1;i<=a;i++){
                printf("%d",i);
            }
            z--;
            printf("\n");
        }
        int tmp=a-b+1;
        while (tmp<=a){
            for (int i=a-b+1;i<tmp;i++){
                printf("%d", tmp);
            }
            for (int i=tmp;i<=a;i++){
                printf("%d",i);
            }
            tmp++;
            printf("\n");

        }
    }
   
}