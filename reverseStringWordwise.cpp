#include<iostream>
#include<bits/stdc++.h>

// void reverseStr(string str) {

    
// }

// void reverseWords() {

// }
using namespace std;

int main()
{
    string s1 = "Aksh Bhai aaya";
    
    int length = s1.length();
    int s = 0;
    int e = length-1;

    while (s<e)
    {
        swap(s1[s++],s1[e--]);
    }
    
    cout << s1;

    //reverseStr(s1);
    return 0;
}