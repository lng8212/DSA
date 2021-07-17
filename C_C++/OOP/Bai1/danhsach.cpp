#pragma once
#include <bits/stdc++.h>
#include "canbo.cpp"
using namespace std;

class danhsach
{
private:
    canbo a[100];
    string tscanbo;
    int n;
public:
    danhsach() {}
    void setTscanbo(string tscanbo)
    {
        this->tscanbo = tscanbo;
    }
    string getTscanbo()
    {
        return tscanbo;
    }
    void setCanbo()
    {
        
        cout << "\nSL canbo: ";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout <<"\nThong tin can bo thu: "<<i+1;
            string name;
            int luongcb;
            cout <<"\nNhap ten: ";
            cin >>name;
            cout<<"\nNhap luongcb: ";
            cin >>luongcb;
            a[i].setHoten(name);
            a[i].setLuongcb(luongcb);
        }
    }
    void getCanbo(){
        for (int i = 0;i<n;i++){
            cout <<"\nThong tin can bo thu: "<<i+1;
            cout <<"\nTen: "<<a[i].getHoten();
            cout <<"\nLuongcb: "<<a[i].getLuongcb();
        }
    }
    void sapxepgiam(){
        for (int i = 0;i<n;i++){
            for (int j =i+1;j<n;j++){
                if(a[j].getLuongcb()>a[i].getLuongcb()) {
                    canbo tmp;
                    tmp = a[i];
                    a[i]=a[j];
                    a[j]=tmp;
                }
            }
        }
    }
};