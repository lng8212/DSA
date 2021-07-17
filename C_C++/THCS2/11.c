#include<stdio.h>
#include<math.h>


int main (){
    int m,n;
    scanf("%d%d",&m,&n );
    int s=0;
    for (int i=m;i<=n;i++){
        if ((int )(sqrt(i))*(int )(sqrt(i))==i) {
            printf("%d ", i);
            s++;
        }
    }
    printf("\n%d",s);

    return 0;
}