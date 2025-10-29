#include <bits/stdc++.h>
using namespace std;

bool sum(vector<int> v, int target){
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        int complement = target - v[i];
        if (binary_search(v.begin(), v.end(), complement))
            return true;
    }
    return false;
}

int main(){return 0;}