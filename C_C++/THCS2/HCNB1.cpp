#include<bits/stdc++.h>
using namespace std;

int main (){
        int a,b;
        cin >>a>>b;
        int k=a;
        int z=a-b;
        int m=b;
        if (a<=b){
        while (k--){
            for (int i=a-k;i<=b;i++){
                char c=i+63;
                cout <<c;
            }
            for (int i=k+1;i<a;i++){
                char c=b+63;
                cout <<c;
            }
            cout <<endl;
             }
        }
        else {
            while (m--){
                for (int i=b-m;i<b;i++){
                char c=i+63;
                cout <<c;
            }
            for (int i=m+1;i<=b;i++){
                char c=b+63;
                cout <<c;
            }
            cout <<endl;
            }
            while (z--){
                for (int i=1;i<=b;i++){
                    char c=b+63;
                    cout <<c;
                }
                cout <<endl;
            }
            
        }
}