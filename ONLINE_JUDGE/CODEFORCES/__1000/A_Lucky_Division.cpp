#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> lNum;

    for (int i = 1; i <= 1000; i++)
    {
        while(i!=0){
        int temp = i;
        int num = temp % 10;
        

        if (num != 4 && num != 7)
        {
            break;
        }
        else
        {
            
        }
        temp /= 10;
    }
    }

    int flag = 1;
    int temp = n;
    while (temp != 0)
    {
        int num = temp % 10;
        temp /= 10;

        if (num != 4 && num != 7)
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
    }

    else
    {

        int ok = 1;
        for (int i = 1; i <= lNum.size(); i++)
        {
            if (n % lNum[i] != 0){
                ok = 0;
                break;
            }
        }
        if (ok)
        {
            cout << "YES" << endl;
        }

        else{
        cout << "NO" << endl;
        }
    }
    return 0;
}