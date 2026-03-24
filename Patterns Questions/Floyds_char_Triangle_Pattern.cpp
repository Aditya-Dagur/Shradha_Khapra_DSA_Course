#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=i+1;j>=1;j--){
           cout<<ch<<" ";
           ch++;
        }
        cout<<"\n";
    }
    return 0;
}