    #include<bits/stdc++.h>
    using namespace std;


    int main (){
        int t;
        cin >>t;
        while (t--){
            string ans;
            ans.clear();
            int s, d;
            cin >>s>>d;
            if (s==0 || d==0) {
                cout <<"-1"<<endl;
                continue;
            }
            if ((9*d)<s){
                cout <<"-1"<<endl;
                continue;
            }
            while (s>0 &&d>0){
                if (s>10){
                    ans= "9"+ans;
                    s-=9;
                    d--;
                }
                else if (s==9){
                    if (d==1) {
                        ans="9"+ans;
                        d--;
                    }
                    else {
                        ans = "8"+ans;
                        d--;
                        while (d>1){
                            ans = "0"+ans;
                            d--;
                        }
                        ans = "1"+ans;
                        d--;
                    }
                }
                else {
                    if (d==1) {
                        string tmp;
                        tmp.push_back(s+'0');
                        ans = tmp+ ans;
                        d--;
                    }
                    else {
                        string tmp;
                        tmp.push_back(s-1+'0');
                        ans = tmp +ans;
                        d--;
                        while (d>1){
                            ans = "0"+ans;
                            d--;
                        }
                        ans = "1"+ans;
                        d--;
                    }
                }

            }
            cout <<ans<<endl;
        }
    }