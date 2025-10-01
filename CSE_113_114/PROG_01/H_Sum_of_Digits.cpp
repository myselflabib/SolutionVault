#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;

    if (n.size() == 1)
    {
        cout << 0 << endl;
        return 0;
    }

    int count = 1;
    long long sum = 0;

    for (int i = 0; i < n.length(); i++)
    {
        char c = n[i];
        int digit = c - '0';
        sum = sum + digit;
    }

    while (sum >= 10)
    {
        long long temp = sum;
        sum = 0;
        while (temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        count++;
    }

    cout << count << endl;
    return 0;
}
