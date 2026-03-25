#include<bits/stdc++.h>
using namespace std;
void Print_Array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void Reverse_Array(int arr[],int size)
{
    int left=0,right=size-1;
        while(left<right)
        {

            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    Print_Array(arr,size);
}
int main()
{
    int arr[100],n;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Original Array is: ",Print_Array(arr,n);
    cout<<"\n";
    cout<<"Reversed Array is: ",Reverse_Array(arr,n);
}