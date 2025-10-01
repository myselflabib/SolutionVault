#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, num;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        cout << "Case " << i << ": " ;
        for (int j = 1; j <= num; j++)
        {
            int divisor = num%j;
            if(divisor==0){
            cout << j;
            if (j!=num)
            {
                cout << " ";
            }
            else{
                cout << endl;
            }
            }
        }
    }
    

    return 0;
}