#include <bits/stdc++.h>
using namespace std;

int lengthSubArr(int arr[], int n)
{

    int maxLen = 1, len = 1;
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] > arr[i - 1])
            len++;
        else
        {
            if (maxLen < len)
                maxLen = len;

            len = 1;
        }
    }
    return max(len, maxLen);
}

int main() { return 0; }