#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    int result = 0;
    for (char c : S) {
        if (c == '+') result++;
        else if (c == '-') result--;
    }

    cout << result << endl;
    return 0;
}
