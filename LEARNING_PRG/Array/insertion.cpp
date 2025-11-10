#include <bits/stdc++.h>
using namespace std;


//code for traveresal
void display(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}


// code for insertion
int idxInsertion(int arr[], int &size, int element, int capacity, int idx){
    if(size>=capacity) return -1;

    for (int i = size-1; i >= idx; i--)
    {
        arr[i+1] = arr[i];
    }

    arr[idx] = element;
    size++;

    return 1;
    
}

void idxDelete(int arr[], int &size, int idx){
    
    for (int i = idx; i < size; i++)
    {
        arr[i] = arr[i+1];
    }
    size--;
    
}

int main()
{
    int arr[100] = {1, 2, 3, 5, 8, 9};
    int arr1[100];

    arr1[100] = arr[100];
    int size = 4, element = 45, idx = 3;
    display(arr, size);

    idxInsertion(arr, size, element, 100, idx);
    display(arr, size);


    idxDelete(arr, size, 2);
    display(arr, size);


    display(arr1, 4);
    return 0;
}