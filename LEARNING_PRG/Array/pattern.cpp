#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << "* ";
    //     }

    //     cout << endl;
        
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j << " ";
    //     }

    //     cout << endl;
        
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j<= n+1-i; j++)
    //     {
    //         cout << j << " ";
    //     }

    //     cout << endl;
        
    // }


    // int a;
    // for (int i = 1; i <= n; i++)
    // {
    //     a = 1;
    //     for (int j = 1; j<= i; j++)
    //     {
    //         cout << a << " ";
    //         a+=2;
    //     }

    //     cout << endl;
        
    // }


    
    // for (int i = 1; i <= n; i++)
    // {
    //     int a= 1;
    //     for (int j = 1; j<= i; j++)
    //     {
    //         char c = a+64;
    //         cout << c << " ";
    //         a++;
    //     }

    //     cout << endl;
        
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     int a= 1;
    //     for (int j = 1; j<= i; j++)
    //     {
    //         if(i%2!=0){
    //             cout << j << " ";
    //         }
    //         else{
    //         char c = a+64;
    //         cout << c << " ";
    //         a++;
    //         }
    //     }

    //     cout << endl;
        
    // }


    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j<= m; j++)
    //     {
    //         if(j==3 || i == 3) cout << " ";
    //         else cout << "# ";
    //     }

    //     cout << endl;
        
    // }


    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j<= m; j++)
    //     {
    //         if(j==i || i+j==n+1) cout << "*";
    //         else cout << " ";
    //     }

    //     cout << endl;
        
    // }


    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j<= m-i; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        

        cout << endl;
        
    }
    
    return 0;
}