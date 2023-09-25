/*

2. Check Password
Write a function CheckPassword(str) which will accept the string as an
argument or parameter and validates the password. It will return 1 if
the conditions are satisfied else it’ll return 0?
The password is valid if it satisfies the below conditions:
It should contain at least 4 characters.
At least 1 numeric digit should be present.
1 Capital letter should be there.
Password should not contain space or slash.
The starting character should not be a number.
Sample Test Case:
Input:
bB1_89
Output:
1

*/

#include<bits/stdc++.h>

using namespace std;

int CheckPassword(char str[]){
    
    int n = strlen(str);
    bool isDigit = false, isCap = false, isSlashSpace = false, isNumStart = false;
    //rule 1
    if (n < 4) return 0;
    
    //rule 2
    for(int i = 0; i<n; i++){
        if(str[i]>='0' && str[i]<='9'){
            isDigit = true;
        }
    }
    //cout << isDigit << endl;

    //rule 3
    for(int i = 0; i<n; i++){
        if(str[i]>='A' && str[i]<='Z'){
            isCap = true;
        }
    }
    cout << isCap << endl;

    //rule 4
    for(int i = 0; i<n; i++){
        if(str[i]==' ' || str[i]=='/'){
            isSlashSpace = true;
        }
    }
    cout << !isSlashSpace << endl;

    //rule 5
        if(str[0]>='0' || str[0]<='9'){
            isNumStart = true;
        }

    //bB1_89isNumStart = (str[0]>='0' && str[0]<='9');
    cout << isNumStart << endl;

return isDigit && isCap && !isSlashSpace && isNumStart;
}

int main() {
    char password[100];
    cin >> password;
    cout << CheckPassword(password);
}