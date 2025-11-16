// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--) {
//         int n, m;
//         cin >> n >> m;
//         vector<long long> r(n, 0), c(m, 0);
       
//         for(int i = 0; i < n; ++i){
//             for (int j = 0; j < m; ++j){
//                 long long x;
//                 cin >> x;
//                 r[i] ^= x;
//                 c[j] ^= x;
//             }
//         }

//         long long total = 0;
//         for(long long v : r){
//             total += v;
//         }

//         for(long long v : c){
//             total += v;
//         }

//         long long maxG = 0;

//         for(int i = 0; i < n; ++i){
//             for(int j = 0; j < m; ++j){
//                 long long gain = r[i] + c[j] - (r[i] ^ c[j]);

//                 if(gain>maxG) maxG = gain;
//             }
//         }

//         cout << (total- maxG) << '\n';
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    
    int result = a^b^c;
    cout << result << endl;

    return 0;
}