#pragma once
#include<bits/stdc++.h>
#include "luongcb.cpp"
using namespace std;


class bangluong{
    private:
    int thang;
    luongcb b[100];
    int soluong;
    public:
    bangluong(){}
    void setThang(int thang){
        this-> thang = thang;
    }
    int getThang(){
        return thang;
    }
    void ktaobangluong(){
        cout <<"\nNhap so luong: ";
        cin >>soluong;
        for (int i = 0;i<soluong;i++){
        
        }
    }

};