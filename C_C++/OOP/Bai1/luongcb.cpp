#pragma once
#include<bits/stdc++.h>
#include "canbo.cpp"
using namespace std;

class luongcb: canbo{
    private:
    int ngaycong;
    int luong;
    public:
    luongcb(){}
    void setNgaycong(int ngaycong){
        this->ngaycong = ngaycong;
    }
    int getNgaycong(){
        return ngaycong;
    }
    int getLuong(){
        return  canbo::luongcb+(ngaycong*50000);
    }
    
};