// In An Array There are n number and u have to return a number which is unique.
#include<iostream>
#include<vector>
using namespace std;
int Single_num(vector<int> &num)
{
    int ans=0;
    for(int val:num)
    {
       ans=ans^val;
    }
    return ans;
}
int main()
{
    int n,i;
    vector<int>nums(n);
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter the values of vector: ";
    for(i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cout<<"Unique Value is: "<<Single_num(nums);
}