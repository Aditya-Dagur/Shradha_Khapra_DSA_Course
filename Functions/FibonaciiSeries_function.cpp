#include<bits/stdc++.h>
using namespace std;
int fibonacii_Series(int n)
{
    int first=0;
    int Second=1;
    for(int i=2;i<=n;i++)
    {
    int next=first+Second;
    first=Second;
    Second=next;
    }
    return Second;
}
int main()
{
    int n;
    cout<<"Enter the Term: ";
    cin>>n;
    cout<<fibonacii_Series(n);
}
