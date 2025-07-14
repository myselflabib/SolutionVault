#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, box;
    cin >> n;
    while (n--)
    {
        cin >> box;
        for (int i = 0; i < box; i++)
        {
            for (int j = 0; j < box; j++)
            {
                cout << "*";
            }
            cout << endl;
        } 
        cout << endl;
    }
    return 0;
}