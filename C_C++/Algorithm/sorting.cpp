#include<bits/stdc++.h>
using namespace std;
int a[1000001];
 int b[1000001];
int main (){
    int n;
    cin >>n;
  
    for (int i=0;i<n;i++){
        cin >>a[i];
    }
  
    for (int i=0;i<n;i++){
        b[i]=a[i];
    }
    sort(b,b+n);
    int i=0;
    while (a[i]==b[i]){
        i++;
    }
    int z=n-1;
    while (a[z]==b[z]){
        z--;
    }
    cout <<i+1<<' '<<z+1;
    return 0;
}