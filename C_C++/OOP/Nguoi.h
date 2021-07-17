#include<bits/stdc++.h>
using namespace std;

class Nguoi {
    protected:
    string name;
    string address;
    int sdt;
    public:
    Nguoi(){}
    void Nhaptt(){
         cout <<"\nNhap ten : ";
        getline(cin,name);
        cout <<"'\nNhap dia chi: ";
        getline(cin,address);
        cout <<"\nNhap sdt: ";
        cin>>sdt;

    }
    void Intt(){
        cout <<"\nTen: "<<name;
        cout <<"\nDia chi: "<<address;
        cout <<"\nSdt: "<<sdt;
    }
};