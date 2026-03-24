#include<bits/stdc++.h>
using namespace std;
int Bin_to_Dec(int Bin_num)
{
    int ans=0,pow=1;
    while(Bin_num>0)
    {
        int rem=Bin_num%10;
        ans+=(rem*pow);
        Bin_num/=10;
        pow*=2;
    }
    return ans;
}
int main()
{
    int Bi_num;
    cout<<"Enter Any Binary Number: ";
    cin>>Bi_num;
    cout<<"Decimal Number of "<<Bi_num<<" is: "<<Bin_to_Dec(Bi_num);
}