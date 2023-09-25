#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool stringAnagram(string str1, string str2){
    int len1 = str1.length();
    int len2 = str2.length();

    if(len1 != len2) return false;

    sort(begin(str1), end(str1));
    sort(begin(str2), end(str2));

    for(int i = 0; i < len1; i++){

        if(str1[i] != str2[i]){
            return false;
        }
    }

    return true;   
}

int main()
{
    string str1;
    cin >> str1;
    
    string str2;
    cin >> str2;
    
    if(stringAnagram(str1,str2)) cout<<"Yes";
    else cout << "no";

    return 0;
}