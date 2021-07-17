#include<bits/stdc++.h>
using namespace std;
int summax (string a, string b){
    int sa=0,sb=0;
    for (int i = 0;i<a.size();i++){
        if (a[i]=='5') a[i]='6';
        sa=sa*10+(a[i]-'0');
    }
    for (int i = 0;i<b.size();i++){
        if (b[i]=='5') b[i]='6';
        sb=sb*10+(b[i]-'0');
    }
    return sa +sb;
}
int summin (string a, string b){
    int sa=0,sb=0;
    for (int i = 0;i<a.size();i++){
        if (a[i]=='6') a[i]='5';
        sa=sa*10+(a[i]-'0');
    }
    for (int i = 0;i<b.size();i++){
        if (b[i]=='6') b[i]='5';
        sb=sb*10+(b[i]-'0');
    }
    return sa +sb;
}
int main (){

    string a,b;
    cin >>a>>b;
   cout <<summin(a,b)<<" "<<summax(a,b);
    

    return 0;
}