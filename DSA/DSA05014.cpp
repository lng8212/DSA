#include<bits/stdc++.h>

using namespace std;


string a[105];
string multiply(string num1, string num2)
{
    int len1 = num1.size();
    int len2 = num2.size();
    if (len1 == 0 || len2 == 0)
        return "0";

    vector<int> result(len1 + len2, 0);

    int i_n1 = 0;
    int i_n2 = 0;

    for (int i = len1 - 1; i >= 0; i--)
    {
        int carry = 0;
        int n1 = num1[i] - '0';

        i_n2 = 0;

        for (int j = len2 - 1; j >= 0; j--)
        {
            int n2 = num2[j] - '0';

            int sum = n1 * n2 + result[i_n1 + i_n2] + carry;

            carry = sum / 10;

            result[i_n1 + i_n2] = sum % 10;

            i_n2++;
        }

        if (carry > 0)
            result[i_n1 + i_n2] += carry;

        i_n1++;
    }

    int i = result.size() - 1;
    while (i >= 0 && result[i] == 0)
        i--;

    if (i == -1)
        return "0";

    string s = "";

    while (i >= 0)
        s += result[i--]+'0';

    return s;
}
string add(string a, string b){
     if (a.size()<b.size()){
            while (a.size()<b.size()){
                a="0"+a;
            }
        }
        else if (b.size()<a.size()){
            while (b.size()<a.size()){
                b="0"+b;
            }
        }
        string c;
        c.resize(a.size());
        int k=0;
        for (int i=a.size()-1;i>=0;i--){
            int tmp = (a[i]-'0') + k+(b[i]-'0');
            if (tmp <10) {
                c[i]=tmp+'0';
                k=0;
            }
            else {
                k=1;
                c[i]=tmp-10+'0';
            }
        }
        if (k>0) c.insert(c.begin(),k+'0');
    return c;
}
int main (){
    
    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        a[0]="1";
        a[1]="1";
        for (int i = 2;i<=102;i++){
            string tmp;
            for (int j=0;j<i;j++){
                string x =(multiply(a[j],a[i-j-1]));
                tmp = add(tmp,x);
            }
            a[i]=tmp;
        }
        cout <<a[n]<<endl;

    }


    return 0;
}