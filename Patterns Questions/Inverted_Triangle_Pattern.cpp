#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        { // space print karwane k liye //
            cout << " ";
        }
        for (int k = 0; k < n - i; k++)
        {
            cout << i + 1;
        }
        cout << "\n";
    }
}