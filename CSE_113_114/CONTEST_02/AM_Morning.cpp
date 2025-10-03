#include <iostream>
using namespace std;
string s = "1", a;
int b, t;
int main()
{
    cin >> t;
    while (t--)
    {
        b = 0;
        s = "1";
        cin >> a;
        s += a;
        for (int i = 1; i <= 4; i++)
        {
            if (s[i] == '0')
            {
                s[i] += 10;
            }
            b += abs(s[i] - s[i - 1]) + 1;
        }
        cout << b << endl;
    }
}