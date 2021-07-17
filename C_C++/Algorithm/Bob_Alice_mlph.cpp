    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        int u,v,a,b;
        cin>>u>>v>>a>>b;
        if(__gcd(u,v)== __gcd(a,b)) cout<<"A++";
        else cout <<"A--";
        return 0;
    }