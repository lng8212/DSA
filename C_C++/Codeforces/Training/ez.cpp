#include<iostream>
using namespace std;
 
int main (){
 
    int t;
    scanf("%d", &t);
    while (t--){
        int n;
        scanf("%d", &n);
        int *a = new int [n+1];
        for (int i = 1;i<=n;i++){
            scanf("%d", &a[i]);
        }
        long long current = 0;
        long long r = a[1];
        long long l = 0;
        for (int i = 2 ;i<=n;i++){
            if (l>r ) current = l;
            else  current = r;
            r = l + a[i];
            l = current;
        }
        if (r > l) printf("%lld", r);
        else printf("%lld", l);
        printf("\n");
    }
}