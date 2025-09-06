// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     cin >> s;

//     int N0 = 0, N1=0, N2 =0, N3=0, N4=0, N5=0, N6=0, N7=0, N8=0, N9=0;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if(s[i] == '0'){
//             N0++;
//         }
//         else if(s[i] == '1'){
//             N1++;
//         }
//         else if(s[i] == '2'){
//             N2++;
//         }
//         else if(s[i] == '3'){
//             N3++;
//         }
//         else if(s[i] == '4'){
//             N4++;
//         }
//         else if(s[i] == '5'){
//             N5++;
//         }
//         else if(s[i] == '6'){
//             N6++;
//         }
//         else if(s[i] == '7'){
//             N7++;
//         }
//         else if(s[i] == '8'){
//             N8++;
//         }
//         else if(s[i] == '9'){
//             N9++;
//         }
        
//     }

//     cout << N0 << " " <<N1 << " " <<N2 << " " <<N3 << " " <<N4 << " " << N5 << " " <<N6 << " " << N7 << " " <<N8 << " " <<N9 << endl;
    
//     return 0;
// }


#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int N0 =0, N1= 0, N2= 0, N3 =0, N4 =0, N5= 0, N6 =0, N7=0, N8 = 0, N9 =0;

    for(int i = 0; i < strlen(s); i++){
        if(s[i] == '0') 
        {
            N0++;
        }
        else if(s[i] == '1'){
            N1++;
        }
        else if(s[i] == '2'){
            N2++;
        }
        else if(s[i] == '3'){
            N3++;
        }
        else if(s[i] == '4'){
            N4++;
        }
        else if (s[i] == '5'){
            N5++;
        }
        else if (s[i] == '6'){
            N6++;
        }
        else if(s[i] == '7'){
            N7++;
        }
        else if(s[i] == '8'){
            N8++;
        }
        else if (s[i] == '9'){
            N9++;
        }
    }

    printf("%d %d %d %d %d %d %d %d %d %d\n", N0, N1, N2, N3, N4, N5, N6, N7, N8, N9);

    return 0;
}
