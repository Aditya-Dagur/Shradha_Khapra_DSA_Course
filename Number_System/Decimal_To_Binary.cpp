#include<bits/stdc++.h>
using namespace std;
int Dec_to_bin(int num)
{
    int ans=0,pow=1;
    while(num>0)
    {
        int rem=num%2;
        num=num/2;
        ans=ans+(rem*pow);
        pow=pow*10;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter any Number: ";
    cin>>n;
    cout<<"Binary number of "<<n<<" is: "<<Dec_to_bin(n);
}