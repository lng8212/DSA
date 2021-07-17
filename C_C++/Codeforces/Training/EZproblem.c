#include<stdio.h>
#include<math.h>

int main (){
    int a,b;
    scanf("%d%d", &a, &b);
    int s = 0;
    for (int i = a+1;i<b;i++){
        int cnt = 0;
        for (int j = 2;j<=sqrt(i);j++){
            if (j*j!=i){
                if (i%j==0) cnt+=2;
            }
            else {
                if (i%j==0) cnt++;
            }
        }
        if (cnt %2!=0) s++;
    }
    printf("%d", s);
}