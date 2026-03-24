#include<bits/stdc++.h>
using namespace std;
int Sum_N(int n)
{
    int sum=n*(n+1)/2;
    return sum;
}
int main()
{
    int n;
    cout<<"Enter any Number: ";
    cin>>n;
    cout<<"Sum of "<<n<<" number are: "<<Sum_N(n);
}