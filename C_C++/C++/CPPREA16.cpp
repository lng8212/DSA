// C++ program to find the largest smaller   
// number by swapping one digit.  
#include <bits/stdc++.h> 
using namespace std; 
  
// Returns largest possible number with one 
// swap such that the number is smaller than 
// str. It is assumed that there are leading 
// 0s. 
string prevNum(string str) 
{ 
    int len = str.length(); 
    int index = -1; 
  
    // Traverse from right until we find  
    // a digit which is greater than its  
    // next digit. For example, in 34125, 
    // our index is 4. 
    for (int i = len - 2; i >= 0; i--) { 
        if (str[i] > str[i+1]) 
        { 
            index = i; 
            break; 
        } 
    } 
      
    // We can also use binary search here as 
    // digits after index are sorted in increasing 
    // order. 
    // Find the biggest digit in the right of 
    // arr[index] which is smaller than arr[index] 
    int smallGreatDgt = -1; 
    for (int i = len - 1; i > index; i--) { 
        if (str[i] < str[index]) { 
            if (smallGreatDgt == -1) 
                smallGreatDgt = i; 
            else if (str[i] >= str[smallGreatDgt]) 
                smallGreatDgt = i; 
        } 
    } 
      
    // If index is -1 i.e. digits are  
    // in increasing order. 
    if (index == -1) 
        return "-1"; 
          
    // Swap both values 
    if (smallGreatDgt != -1)  
    { 
        swap(str[index], str[smallGreatDgt]); 
        return str; 
    } 
      
    return "-1"; 
} 
  
// Drivers code 
int main() 
{ 
    int T;
    cin >>T;
    while (T--){
        string a;
        cin >>a;
        cout << prevNum(a)<<endl; 
    }
    
    return 0; 
} 