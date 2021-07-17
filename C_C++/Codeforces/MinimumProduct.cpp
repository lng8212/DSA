#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >>t;
    while (t--){
        long long a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
        long long tmp1=a,tmp2=b,val=n;
        long long ans1=0,ans2=0;
        if (tmp1-val>=x) {
            tmp1=tmp1-val;
            ans1=tmp1*tmp2;

        }
        else {
            val=val-(tmp1-x);
            tmp1=x;
            
            if (tmp2-val>=y) {
                tmp2=tmp2-val;
                ans1=tmp1*tmp2;
            }
            else{
                tmp2=y;
                ans1=tmp1*tmp2;
            }

        }
        long long ex1=a,ex2=b,vaz=n;
        if (ex2-vaz>=y){
            ex2=ex2-vaz;
            ans2=ex1*ex2;
        }
        else{
            vaz=vaz-(ex2-y);
            ex2=y;
            if (ex1-vaz>=x){
                ex1=ex1-vaz;
                ans2=ex1*ex2;
            }
            else{
                ex1=x;
                ans2=ex1*ex2;
            }
          
        }

        
  //cout <<ans1<<" "<<ans2;

        if (ans1>ans2) cout <<ans2<<endl;
        else cout <<ans1<<endl;
    }

    return 0;
}