#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    queue<int> q;
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        if (n == 1)
            cout << q.size() << endl;
        if (n == 2)
        {
            if (!q.empty())
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        if (n == 3)
        {
            int tmp;
            cin >> tmp;
            q.push(tmp);
        }
        if (n == 4)
        {
            if (!q.empty())
                q.pop();
        }
        if (n == 5)
        {
            if (!q.empty())
            {
                cout << q.front() << endl;
            }
            else
                cout << "-1" << endl;
        }
        if (n == 6)
        {
            if (!q.empty())
                cout << q.back() << endl;
            else
                cout << "-1" << endl;
        }
    }
    return 0;
}
/*
    Hàng đợi ưu tiên:
    priority_queue <int > a;
*/
/*
    deque<int>a;
    a.push_back(z);
    a.push_front(z);
*/
/*
    queue <int> q;
     queue: hàng đợi - vào trước ra trước
    q.push(x) - push vào cuối queue
    q.front() - lấy phần tử đầu tiên
    q.back () - lấy phần tử cuối cùng(vừa push vào)
    q.size()
    q.empty()
    q.pop() - xoá phần tử đầu tiên
    */
/*
        stack<int> s; 
        stack : ngăn xếp
        s.empty()- true : rỗng
                    false: có phần tử.
        s.push(n) - thêm giá trị n vào vị trí sau cùng.
        s.size() - số lượng phần tử trong stack
        s.top () - lấy ra phần tử trên cùng
    */
// stack<int> s;
// s.push (2);
// s.push (3);
// s.push (5);
// while (!s.empty()){
//     cout <<s.top()<<' ';
//     s.pop();
// }