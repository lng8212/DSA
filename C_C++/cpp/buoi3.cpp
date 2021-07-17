#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int giaithua(int n){
    if (n== 1 || n==0) return 1;
    else return n*giaithua(n-1);
}
bool nguyento(int n){
    if (n<2) return false;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0) return false;

    }
    return true;
}
void loigiai(){
    for (int i=2;i<=1000;i++){
        if (nguyento(i)==1)
        cout << i<< " ";
    }
}
void inra(vector<int> a){
    for (int i=0;i<a.size();i++){
        cout <<a.at(i)<<" ";
    }
}

int main (){
    vector<int> MyVector,MyVector_B; //khai bao vector vector<T> ten Vector;
    MyVector= MyVector_B; // gan 2 vector;
   // MyVector.resize(5,100);  //== int MyVector(5);
   //  MyVector.resize(10,9);
  /*  for (int i=0;i<MyVector.size();i++){
    cout << MyVector.at(i)<<" ";
    }
    cout <<MyVector.size();*/
   // MyVector_B=MyVector;
    // for (int i=0;i<MyVector_B.size();i++){
    // cout << MyVector_B.at(i)<<" ";
   // }
   // int chuoi[100];
   // fflush(stdin)== cin.ignore();
  /* for (int i=1;i<=10;i++){
       MyVector.push_back(i);
   }
   MyVector.push_back(9999);
   MyVector.erase(MyVector.begin()+5);
   MyVector.insert(MyVector.begin()+5,999);
    //đọc 1 chuỗi trong c++: cin.getline(chuoi,100)== fgets(tênchuỗi,100,stdin).
    /*  printf("Hello World!");
    cout << "Hello World!";*/
     //loigiai();
     //inra(MyVector);
     MyVector.resize(10);
     for (int i=0;i<MyVector.size();i++){
         cin >> MyVector[i];
     }
     for (int i=0;i<MyVector.size();i++){
         cout << MyVector.at(i);
     }
     return 0;
}