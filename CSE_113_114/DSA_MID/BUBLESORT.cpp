#include <bits/stdc++.h>
using namespace std;

void removeDuplicate(int arr[], int len){
    int j = 0;
    int temp[len];
    sort(arr, arr + len);
    for (int i = 0; i < len-1; i++)
    {
        if (arr[i] != arr[i+1]){
            temp[j++] = arr[i];
        }
    }

    temp[j++] = arr[len-1];

    for (int i = 0; i < j; i++)
    {
        cout << temp[i] << " ";
    }
    
}

int insertAt(int arr[], int len,int pos, int value){
    for (int i = len; i >=pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos] = value;

    return len+1;
    
}

int main()
{
    int arr[100] = {3, 7, 4, 8, 2, 3, 9, 5, 8, 4, 1, 6};
    int len = 12;


    // removeDuplicate(arr, len);
    len = insertAt(arr, len, 3, 300);
    len = insertAt(arr, len, 3, 300);

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}