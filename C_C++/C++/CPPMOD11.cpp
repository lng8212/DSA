#include<stdio.h>

  
// Returns (a * b) % mod 
long long moduloMultiplication(long long a, 
                            long long b, 
                            long long mod) 
{ 
    long long res = 0; // Initialize result 
  
    // Update a if it is more than 
    // or equal to mod 
    a %= mod; 
  // a*b =  2*a*b/2;
  //  a*b = a+ a*(b-1);
    while (b>0) 
    { 
        // If b is odd, add a with result 
        if (b %2== 1) 
            res = (res + a) % mod; 
  
        // Here we assume that doing 2*a 
        // doesn't cause overflow 
        a = (2 * a) % mod; 
  
        b/=2; // b = b / 2 
    } 
  
    return res; 
} 
  
// Driver program 
int main() 
{ 
    int t;
    scanf("%d", &t);
    while (t--){
        long long a,b,m;
        scanf("%lld%lld%lld",&a,&b,&m);
        printf("%lld\n", moduloMultiplication(a,b,m));
    }
    
    return 0; 
} 