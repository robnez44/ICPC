#include <bits/stdc++.h>
using namespace std;

void rotate90L(vector<vector<int>> &mat)
{
    int n = mat.size();

    vector<vector<int>> res(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            res[n - j - 1][i] = mat[i][j];
        }
    }

    mat = res;
}

void rotate90R(vector<vector<int>> &mat){
    int n = mat.size();
    vector<vector<int>> res(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            res[j][n - i - 1] = mat[i][j];
        }  
    }

    mat = res;
}
