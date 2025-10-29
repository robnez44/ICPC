#include <bits/stdc++.h>
using namespace std;

vector<int> range(vector<int> v, int a, int b)
{
    vector<int> rangeV;
    sort(v.begin(), v.end());
    
    auto itA = find(v.begin(), v.end(), a);
    auto itB = find(v.begin(), v.end(), b);

    for (itA; itA <= itB; itA++)
        rangeV.push_back(*itA);

    return rangeV;
}

int main() { return 0; }