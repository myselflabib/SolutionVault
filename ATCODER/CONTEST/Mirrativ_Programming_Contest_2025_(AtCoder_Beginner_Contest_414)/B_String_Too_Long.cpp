// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     long long N, N1;
//     char Char;
//     cin >> N;
//     int count = 0;
//     while (N--)
//     {
//         cin >> Char >> N1;
//         if (N1<=100)
//         {
//             for (int i = 0; i < N1; i++)
//             {
//                 cout << Char;
//                 count++;
//                 if (count > 100)
//                 {
//                     cout << "Too Long" << endl;
//                     break;
//                 }
                
//             }
//         }
//         else{
//             cout << "Too Long" << endl;
//             break;
//         }
//     }
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    char ch[100];
    long long count[100];
    long long total = 0;

    for (int i = 0; i < N; i++) {
        cin >> ch[i] >> count[i];
        total += count[i];
    }

    if (total > 100) {
        cout << "Too Long" << endl;
    } 
    else {
        for (int i = 0; i < N; i++) {
            cout << string(count[i], ch[i]);
        }
        }
        cout << endl;

    return 0;
}
