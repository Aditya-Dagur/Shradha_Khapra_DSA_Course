#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    // cout << vec[0]; // Give error while executes bcz no value is passed yet.
    vector<int> vec2 = {11, 22, 33, 44};
    cout << vec2[0]; // Output= 11 bcz at index 0 the value is 11;

    vector<int> vec3(5, 0);
    cout << vec3[0] << endl;
    cout << vec3[1] << endl;
    cout << vec3[2] << endl;
    cout << vec3[3] << endl;
    cout << vec3[4] << endl;

    // output will be 5 zeros.

    vector<int> vect(6,1);
    for (int i : vect)
    {
        cout << i << endl;
    }

    vector<char>char_vec={'a','b','c'};
    for(char value:char_vec)
    {
        cout<<value<<" ";
    }
}
