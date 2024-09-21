#include <bits/stdc++.h>
using namespace std;

int gcd(int, int);

int main()
{
    int n, sum = 0, in;
    vector<int> nums;
    int total_sum;
    
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> in;
        nums.push_back(in);
    }

 do {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int maxN = *max_element(nums.begin() + i, nums.begin() + j + 1);
                int mcd = gcd(i + 1, j + 1);
                sum += maxN * pow(mcd, 2);
            }
        }
        total_sum = max(total_sum, sum); // update total_sum with the maximum sum
    } while (next_permutation(nums.begin(), nums.end()));

    cout << total_sum;

    return 0;
}

int gcd(int a, int b)
{
    while (b != 0)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}
