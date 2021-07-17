#include<iostream>
#include<string>
using namespace std;
/* ***Khai bao***
string <tenxau>; string strA; - xau rong
string strA="Hello";
cout <<strA;
string strB(<soluongkitu>,'mac dinh cac ki tu');
vector<int> a(10,9);
*/
void chuyenxau(string &a){
    for (int i=0;i<a.length();i++){
        if (a[i]>='a' && a[i]<='z'){
            a[i]=a[i]-'a'+'A';
        }
        else  if (a[i]>='A' &&a[i]<='Z'){
            a[i]=a[i]-'A'+'a';
        }
    }
}
int main (){
/*int age;
    string myName;
    cin >> age;
    // fflush(stdin) ~~ cin.ignore();
    getline(cin, myName); //getline(cin,myName,'a')- doc den ki tu a;
    cout << myName<<" "<<age;
   */
   /* string strA="123456";
    int len =strA.length();
    reverse(strA.begin(), strA.end()); // sau khi dao nguoc gia tri strA cung dao nguoc
*/
/* cv1: chuan hoa chuoi- chuyen xau thuong - hoa va nguoc lai;
cv2: chuan hoa chuoi- xoa bo dau cach thua, moi tu cach nhau boi 1 dau cach viet hoa tu dau tien cua moi ki tu;
*/
   /* string str1="aBcD";
    chuyenxau(str1);
    string str="xin chao";
    /*
     insert(<vi tri chen>,'ki tu'("string"));
     erase(<vi tri xoa>, < so ki tu xoa>);
     replace(<vi tri can thay the>,<so ki tu can thay the>, <chuoi thay the> );
     substr(<vi tri can lay>,<vi tri ban dau>,< vi tri ket thuc>);
    */
   //str.insert(3,"\n");
   //str.erase(0,2);
   //str.replace(0,3,"Hello");
 /* string strsub=str.substr(0,3);
    cout <<strsub<<endl;*/
    

}
