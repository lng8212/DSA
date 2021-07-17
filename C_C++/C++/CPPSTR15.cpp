#include<bits/stdc++.h>
using namespace std;


int main (){
    int t;
    cin >>t;
    cin.ignore();
    while (t--){
        string a;
        cin >>a;
        long long s=a.size();
        for (int i=0;i<a.size();i++){
            for (int j=i+1;j<a.size();j++){
                if (a[i]==a[j]) s++;
            }
        }
        cout <<s<<endl;
    }


    return 0;
}