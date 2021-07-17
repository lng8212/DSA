#include<bits/stdc++.h>
using namespace std;
unsigned long long a[1000006];
long long modz= 1e9+7;
void process(){
    a[0]=1;
    a[1]=3;
    for(int i=2;i<1000003;i++){
        a[i]=((a[i-1]-a[i-2])*5+a[i-2]+a[i-1])%modz;
    }
}
int main (){
    int n;
    cin >>n;
   
    process();
    cout <<a[n];
}