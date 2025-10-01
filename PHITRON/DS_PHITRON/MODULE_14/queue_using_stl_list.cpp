#include <bits/stdc++.h>
using namespace std;



class myQueue{
    public:
    list<int> l;

    int sz = 0;

    void push(int val){
        l.push_back(val);
    }

    void pop(){
        l.pop_front();
    }

    int front(){
        return l.front();
    }

    int back(){
        return l.back();
    }

    int size(){
        return l.size();
    }
    
    bool empty(){
        return l.empty();
    }
};
int main()
{
    //first in first out.
    //5 operation

    myQueue q;
    int n;
    cin >> n;
for (int i = 0; i < n; i++)
{
    int val;
    cin >> val;
    q.push(val);
}

while (!q.empty())
{
    cout << q.front() << " ";
    q.pop();
}



    return 0;
}