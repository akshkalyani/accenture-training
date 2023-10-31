#include<iostream>
#include <bits/stdc++.h>

using namespace std;
void reverseStr(string str, int n){

vector<string> temp;
string word;
    for(int i=0; i < n; i++){

        if(str[i]==' '){
            temp.push_back(word);
            word = "";
        }
        else{
            word = word + str[i];
        }

    }

    temp.push_back(word);

    for(int i = temp.size(); i>0; i--){
        cout << temp[i] << " ";
    }
    cout << temp[0] << endl;
}
int main()
{   
    string str;
    cin >> str;
    int len = str.length();
    reverseStr(str, len);
    return 0;
}