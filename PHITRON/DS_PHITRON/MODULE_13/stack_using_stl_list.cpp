#include <bits/stdc++.h>
using namespace std;

class myStack{
    public:
        list<int> l;

        void push(int val){
            l.push_back(val); //0(1)
        }

        void pop(){
            l.pop_back(); //o(1)
        }

        int top(){
            return l.back(); //o(1)
        }

        int size(){
            return l.size(); //o(1)
        }

        bool empty(){
            return l.empty(); //o(1)
        }
};

int main()
{
    myStack st;
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        st.push(x);
    }

    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }
    
    

    return 0;
}