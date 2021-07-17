    #include<stdio.h>
            #include<math.h>

            long long giaithua(int x){
                if (x==1) return 1;
                return x*giaithua(x-1);
            }
            int main (){
                int n;
                    while(scanf("%d", &n)!=0){
                    if (n==0) break;
                    printf("%lld\n", giaithua(n));
                    }

            }
