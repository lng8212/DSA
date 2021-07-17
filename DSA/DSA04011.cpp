#include<bits/stdc++.h>
using namespace std;

long long binarytoDecimal(string a){
    long long s=0;
    int count = 0;
    for (int i=a.size()-1;i>=0;i--){
        int k = a[i]-'0';
        s+=k*(pow(2,count));
        count++;
    }
    return s;
}
int main (){

    int t;
    cin >>t;
    while (t--){
        string a,b;
        cin >>a>>b;
        long long a1 = binarytoDecimal(a);
        long long a2 = binarytoDecimal(b);
        cout <<a1*a2<<endl;
    }


    return 0;
}