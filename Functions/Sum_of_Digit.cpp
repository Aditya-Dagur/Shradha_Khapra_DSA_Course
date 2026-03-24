#include<bits/stdc++.h>
using namespace std;
int sum_digit(int n)
{
    int sum=0;
    while(n>0){

        int last_digit=n%10;
        n=n/10;
        sum=sum+last_digit;
    }
    return sum;
}
int main()
{
    int num;
    cout<<"Enter any number: ";
    cin>>num;
    cout<<"Sum of the Digit of "<<num<<" is: "<<sum_digit(num);
}