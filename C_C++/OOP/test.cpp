#include <iostream>

using namespace std;

class Rectangle {
public:
    double dai;
    double rong;
    void nhap(){
        cin >>dai;
        cin >>rong;
    }
    void in (){
        cout <<"Area: "<<dai*rong<<endl;
        cout <<"Perlimeter: "<<(dai+rong)*2;
    }
};

int main() {
    Rectangle r1;
    r1.nhap();
    r1.in();
    return 0;
}