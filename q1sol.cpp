#include <bits/stdc++.h>
using namespace std;

int smallLargeSum(int *arr, int n) {
if(n <= 3) {
return 0;
}
//Here we use vector because we don't know the array size,
//we can use array also but vector gives us more functionality than
vector<int> arrEven, arrOdd;
//Break array into two different arrays even and odd
arrEven.push_back(arr[0]);
for(int i = 1; i <= n; i++) {
//If Number is even then add it into even array
if(i % 2 == 0) {
arrEven.push_back(arr[i]);
}
else if(i % 2 != 0) {
arrOdd.push_back(arr[i]);
}
}
//Sort the even array
sort(arrEven.begin(), arrEven.end());
for(int i = 0; i < 4; i ++){
    cout << arrEven[i] << " ";
}
cout<< "printed even" << endl;
//We use sort function from C++ STL library
//Sort the odd array
sort(arrOdd.begin(), arrOdd.end());
for(int i = 0; i < 3; i ++){
    cout << arrOdd[i] << " ";
}
cout << " printed odd" << endl;
//Taking second largest element from both arrays and add them
return arrEven[1] + arrOdd[1];
}

int main()
{
int n;
cout<<"Enter How many elements you want to enter?\n";
cin>>n;
int arr[n];
//Get input from user
cout<<"Start entering the numbers\n";
for(int i = 0; i < n; i++) {
cin>>arr[i];
}
cout<<"Output is\n";
cout<<smallLargeSum(arr, n);
return 0;
}
