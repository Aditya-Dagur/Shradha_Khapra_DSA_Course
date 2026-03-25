// WAP To Print Sum & Product of Array Element 
#include<bits/stdc++.h>
using namespace std;
int Array_Sum(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
      sum+=arr[i];
    }
    return sum;
}
int Array_Prod(int arr[],int n)
{
    int prod=1;
    for(int i=0;i<n;i++)
    {
        prod*=arr[i];
    }
    return prod;
}
int main()
{
     int arr[100],n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Sum of all Array Elements is: "<<Array_Sum(arr,n)<<endl;
    cout<<"Product of all Array Elements is: "<<Array_Prod(arr,n);
}