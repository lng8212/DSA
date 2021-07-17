#include<bits/stdc++.h>
using namespace std;
class Animal {
    public : 
    virtual void speak (){
        cout <<"is speaking.";
    }
};  
class Cat: public Animal {
    public:
    void speak(){
        cout <<" Meo meo"<<endl;
    }
};
int main (){ 
    Animal *tom = new Cat();
    tom->speak();
    return 0;

}