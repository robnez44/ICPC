#include <iostream>
using namespace std;

int main(){

    int n, m, t;

    cin >> t;

    while (t--)
    {
        cin >> n >> m;
        cout << (int)((n / 3) * (m / 3)) << endl;
    }
    


    return 0;
}