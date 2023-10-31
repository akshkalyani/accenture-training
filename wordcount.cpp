#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int countWord(char str[]){
    int len = strlen(str);
    int count = 0;

    for(int i=0; i<len-1; i++){

        if(str[i]==' '){
            count++;
        }
    }

    return count+1;
}

int main()
{
    char name[1001];
    gets(name);
    //cin>>name;

    cout << countWord(name);

    return 0;
}