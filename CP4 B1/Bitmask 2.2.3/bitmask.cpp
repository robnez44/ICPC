#include <bits/stdc++.h>
using namespace std;

int main(){

    // 1
    int S = 34;             // 100010 
    cout << S << endl;


    // 2 - multiply/divide by 2
    S = S<<1;               // multiply by 2
    cout << S << endl;      // 68

    S = S>>2;               // divide by 4
    cout << S << endl;      // 17

    S = S>>1;               // divide by 2
    cout << S << endl;      // 8

    // 3 - turn on the j-th bit of the set using OR operation
    S = 34; int j = 3;      // 100010 (34)
    S = S | (1<<j);         // 001000 bit '1' shifted to left 3 times
    cout << S << endl;      // 101010 S is now 42

    // 4 - check if the j-th bit of the set is on using AND operaiton
    int T = S & (1<<j);     // 42 & 8 = 101010 & 1000, (1<<3) = 8
    cout << T << endl;      //          001000 &
                            //          001000 = 8 if its on then T is (1<<j), j=3

    j=2; T = S & (1<<j);    // 42 & 4 = 101010 & 100, (1<<2) = 4
    cout << T << endl;      //          000100 &
                            //          000000 = 0 its 0 because the 2 bit 0-based index is off

    // 5 - turn off the j-th bit of the set using AND op and not (1<<j) = ~(1<<j)
    S = 42; j = 1;          // 101010
    S = S & ~(1<<j);        // 111101 ~(000010) = 2
    cout << S << endl;      // 101000 S is now 40


    // 6 - To flip the j-th bit of the set use XOR
    S = 40; j = 2;          // 101000
    S = S ^ (1<<j);         // 000100 bit '1' is shifthed 2 times to left
    cout << S << endl;      // 101100 S is 44; XOR true if the bits are different

    S = 40; j = 3;          // 101000
    S = S ^ (1<<j);         // 001000 bit '1' shifted to left 3 times
    cout << S << endl;      // 100000 S is 32 now; XOR false if both bits are equal


    // 7 - LSOne(S) = Least Significant Bit of S that is on (from the right)
    S = 40;                 // 000...000101000 (32 bits, base 2)
                            // 111...111011000 (-S = 40) two's complement
    T = S & ~(S);           // 000...000001000 T = 8, 3rd bit from right is on
    cout << T << endl;

    // 8 - To turn on all bits in a set of size n, use S = (1<<n) - 1
    int n = 3;              // (1<<3) = 8 = 1000
    S = (1<<n) - 1;         // (1<<3) - 1 = 7 = 111
    // generates a new mas with all its bits on

    // 9 - get all proper subsets of a given mask 
    // e.g., mask = 18 = 10010, its subsets are 
    // {18 = 10010, 16 = 1000, 2 = 00010} to get them we use
    int mask = 18;
    cout << "Subset of: " << mask << "\n";
    for (int subset = mask; subset; subset = (mask & (subset-1)))
        cout << subset << "\n";
    // 10 - built in bit manipulation function
    cout << "Built in functions to count 1 and 0 in a number S\n";
    cout << __builtin_popcount(S) << "\n";
    S = 16;
    cout << "0's en 16: " << __builtin_ctzl(S);


    return 0;
}