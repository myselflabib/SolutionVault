#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    if (n == 1)
    {
        cout << "1" << endl;
    }

    else if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION" << endl;
    }
    else if (n == 4)
    {
        cout << "2 4 1 3" <<endl;
    }
    
    else
    {
        for (int i = n; i >= 1; i--)
        {
            if (i % 2 == 0)
            {
                cout << i << " ";
            }
        }
        for (int i = n; i >= 1; i--)
        {
            if (i%2!=0)
            {
                cout << i << " ";
            }
            
        }
        
    }

    return 0;
}