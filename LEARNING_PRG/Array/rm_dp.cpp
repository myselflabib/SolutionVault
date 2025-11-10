#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {5,5,7,7,8,8};

    int size = sizeof(arr)/sizeof(int);
    

    int x = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]!=arr[x]) x++;
        arr[x] = arr[i];
    }
    

    for (int i = 0; i < x+1; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}