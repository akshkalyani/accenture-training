#include<iostream>
using namespace std;
int differenceOfSum(int num1, int num2){

    int ans1 = 0;
    int ans2 = 0;

    for(int i = 0; i <= num2; i++){
        if(i%num1 == 0){
            ans1 = ans1 + i;
        }
        else{
            ans2 = ans2 + i;
        }
    }
    return ans2-ans1;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "The diff of sum is" << differenceOfSum(a, b);
    return 0;
}