#include<bits/stdc++.h>
using namespace std;
string ROM = "MDCLXVI";
int intval[]= {1000,900,500,400,100,90,50,40,10,9,5,4,1};
string strval []= {"M","DM","D","CD","C","LC","L","XL","X","IX","V","IV","I"};
string toRom (int n){
    string a;
    for (int i=0;i<13;i++){
        while (n-intval[i]>=0) {
            n=n-intval[i];
            a=a+strval[i];
        }
    }
    return  a;
}
// 2946     MMDMXLVI
int toInt(string a){
    int n;
    for (int i=0;i<13;i++){
        for (int j=0;j<13;j++){
            if (a[i])
        }
    }
}
int main (){
    int n;
     cin >>n;
     cout <<toRom(n);
    return 0;
}