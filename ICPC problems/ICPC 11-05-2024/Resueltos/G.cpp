#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    vector<int> torres(N);
    bool turnoAlicia = true;
    bool validMove = false;

    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        cin >> torres[i];
    }

    while (validMove == true)
    {
        for (int i = 0; i < N; ++i)
        {
            if (torres[i] > 0)
            {
                validMove = true;
                break;
            }
        }
        if (!validMove)
        {
            break;
        }

        int X = torres[0];

        for (int i = 0; i < N; ++i)
        {
            if (torres[i] >= X)
            {
                torres[i] -= X;
            }
        }

        turnoAlicia = !turnoAlicia;
    }

    if (turnoAlicia)
    {
        cout << "Alicius" << endl;
    }
    else
    {
        cout << "Bobius" << endl;
    }

    return 0;
}
