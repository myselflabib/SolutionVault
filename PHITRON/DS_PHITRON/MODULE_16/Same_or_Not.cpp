#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, q;
    cin >> s >> q;

    stack<int> st, newSt;
    queue<int> qu;

    if (s != q)
        cout << "NO" << endl;

    else
    {
        for (int i = 0; i < s; i++)
        {
            int val;
            cin >> val;

            st.push(val);
        }

        for (int i = 0; i < q; i++)
        {
            int val;
            cin >> val;

            qu.push(val);
        }

        bool flag = true;
        while (!st.empty() && !qu.empty())
        {
            if (st.top() != qu.front())
            {
                flag = false;
                break;
            }
            st.pop();
            qu.pop();
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}