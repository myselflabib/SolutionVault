#include <bits/stdc++.h>
using namespace std;

class myStack{
    public:
        vector<int> v;

        void push(int val){
            v.push_back(val); //0(1)
        }

        void pop(){
            v.pop_back(); //o(1)
        }

        int top(){
            return v.back(); //o(1)
        }

        int size(){
            return v.size(); //o(1)
        }

        bool empty(){
            return v.empty(); //o(1)
        }
};

int main()
{
    myStack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();

    if(st.empty() == false) cout << st.top() << endl;
    if(!st.empty()) st.pop();

    return 0;
}