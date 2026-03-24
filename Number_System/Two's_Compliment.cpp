/* What is 2's Compliment=>It is used to find the Binary form of any negetive number 
Steps=> 1. Calculate the Binary of any number
2.Prefix the Binary number with Zero(MSB->0 then positive 1 then negetive)
3.1'Compliment of the binary Number->Reverse
4. add 1 in 1's Compliment
*/
// Solution-1=>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string bin;
    cout << "Enter a binary number: ";
    cin >> bin;

    // Step 1: Find 1's complement
    for(int i = 0; i < bin.length(); i++) {
        if(bin[i] == '0')
            bin[i] = '1';
        else
            bin[i] = '0';
    }

    // Step 2: Add 1 to get 2's complement
    int carry = 1;
    for(int i = bin.length() - 1; i >= 0; i--) {
        if(bin[i] == '1' && carry == 1) {
            bin[i] = '0';
        }
        else if(bin[i] == '0' && carry == 1) {
            bin[i] = '1';
            carry = 0;
        }
    }

    cout << "2's Complement: " << bin;

    return 0;
}

// Solution-2=> Using Bitwise Operator
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int twos = (~n) + 1;

    cout << "2's Complement of " << n << " is: " << twos << endl;

    return 0;
}