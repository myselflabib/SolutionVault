#include <iostream>
using namespace std;

int countOrdinary(int n) {
    int len = 0;
    int temp = n;
    while(temp) {
        len++;
        temp /= 10;
    }

    int count = (len - 1) * 9; 

    int first_digit = n;
    for(int i = 1; i < len; i++) first_digit /= 10;

    int ordinary = first_digit; 
    int number = 0;
    for(int i = 0; i < len; i++) number = number*10 + first_digit;

    if(number > n) ordinary--; 

    count += ordinary;

    return count;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << countOrdinary(n) << endl;
    }
    return 0;
}
