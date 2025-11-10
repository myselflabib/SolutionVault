#include <bits/stdc++.h>
using namespace std;

int bin_search(int arr[], int num, int size){
    int l = 0, r = size-1;
    
    while(l<=r){
        int mid = (l+r)/2;
    if(arr[mid]==num){
        return mid;
    }

    else if(arr[mid] < num) l = mid+1;

    else r = mid -1;
    }


}

int main()
{
    int arr[] = {10, 4, 6, 23, 78, 26, 7};

    int num;
    cin >> num;
    int pos = 0;
    // for (int i = 2; i < 7; i++){
    //     if(arr[i] == num){
    //         pos = i+1;
    //         break;
    //     }
    // }

    int size = sizeof(arr)/sizeof(int);
    sort(arr, arr+size);

    
    

    cout << bin_search(arr, num, size) << endl;
     
    return 0;
}