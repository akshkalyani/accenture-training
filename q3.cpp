#include<iostream>
using namespace std;
void operationChoices(int c, int a , int b)
{
if(c==1)
{
cout << a + b;
}
else if(c==2)
{
cout << a - b;
}
else if(c==3)
{
cout << a * b;
}
else if(c==4)
{
cout << a / b;
}
}
int main()
{
int x, y, z;
int result;
cout<<"Enter c\n";
cin>>x;
cout<<"Enter two elements\n";
cin>>y;
cin>>z;
cout<<"The result is ";
operationChoices(x, y, z);
}