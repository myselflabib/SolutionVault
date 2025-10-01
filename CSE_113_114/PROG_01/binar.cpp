#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    string binary;
    unsigned int temp = n;
    while (temp > 0)
    {
        binary = (temp % 2 == 0 ? "0" : "1") + binary;
        temp /= 2;
    }

    cout << binary;
}
