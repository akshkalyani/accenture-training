/*
1. Small Large Sum

Write a function SmallLargeSum(array) which accepts the array as an argument or
parameter, that performs the addition of the second largest element from the
even location with the second largest element from an odd location?

Rules:
All the array elements are unique.
If the length of the array is 3 or less than 3, then return 0.
If Array is empty then return zero.

Sample Test Case 1:

Input:
6
3 2 1 7 5 4
Output:
7
Explanation: The second largest element in the even locations (3, 1, 5) is 3. The
second largest element in the odd locations (2, 7, 4) is 4. So the addition of 3 and
4 is 7. So the answer is 7.

Sample Test Case 2:

Input:
7
4 0 7 9 6 4 2

Output:
10
*/

#include<bits/stdc++.h>
using namespace std;

int SmallLargeSum(int *arr, int n){
    if (n<=3){
        return 0;
    }

    vector<int> evenarr, oddarr;
    evenarr.push_back(arr[0]);
    for(int i = 1; i < n; i++ ) {
        if(i%2 == 0) {
            evenarr.push_back(arr[i]);
           // cout << "even pos" << arr[i] << endl;
        }
        else{
            oddarr.push_back(arr[i]);
            //cout << "odd pos" << arr[i] << endl;
        } 
    }

    sort(begin(evenarr), end(evenarr));
    sort(begin(oddarr), end(oddarr));

    return oddarr[1] + evenarr[1];
}
int main()
{ 
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << SmallLargeSum(arr, n);
    return 0;
}