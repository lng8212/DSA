#include<stdio.h>
#include<math.h>

int main (){
    int n;
    scanf ("%d", &n);
    double s=0;
    for (int i=1;i<=n;i++){
        double k =1;
        s=s+ (k/i);
    }
    printf("%lf ", s);
    return 0;
}