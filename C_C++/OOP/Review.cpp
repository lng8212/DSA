#include<bits/stdc++.h>
using namespace std;
class student {
    private:
        string name;
        string stuCode;
        int age;
    public:
        student(){};
        void Input(){
            cout <<"Ten sinh vien: ";
            getline (cin,name);
            cout <<"\nMa sinh vien: ";
            getline(cin,stuCode);
            cout <<"\nTuoi : ";
            cin >>age;
            cin.ignore();
        }
        void Output (){
            cout <<"Ten sinh vien: "<<name<<"\t"<<"Ma sinh vien: "<<stuCode<<"\t"<<"Tuoi: "<<age<<endl;
        }
};
class teacher {
    private:
    string name;
    int age;
    public:
        teacher (){};
        void Input (){
            cout <<"Ten giao vien: ";
            getline (cin,name);
            cout <<"\nTuoi : ";
            cin >>age;
            cin.ignore();
        }
        void Output (){
            cout <<"Ten giao vien: "<<name <<"\t"<<"Tuoi: "<<age<<endl;
        }
};
  class Classroom {
    private:
      teacher tea;
      int count;
      vector<student> a;
    public:
      Classroom(){};
      void Input (){
          cout <<"\n\n\t\tNHAP THONG TIN GIAO VIEN\n";
            tea.Input();
            cout <<"SO LUONG SINH VIEN: ";
            cin >>count;
            cin.ignore();
            a.resize(count);
            for (int i=0;i<count ;i++){
                
                cout <<"\n\n\t\tNHAP THONG TIN SINH VIEN THU "<<i+1<<endl;
               // cin.ignore();
                a[i].Input();
            }
      }
      void Output(){
          cout<<"\n\n\t\tTHONG TIN GIAO VIEN\n";
          tea.Output();
          cout <<count;
          for (int i=0;i<count ;i++){
              cout <<"\n\n\t\tTHONG TIN SINH VIEN THU "<<i+1<<endl;
              a[i].Output();
          }
      }

  }  ;
int main (){
    Classroom *test = new Classroom();
    test->Input();
    test->Output();
    
    return 0;
}