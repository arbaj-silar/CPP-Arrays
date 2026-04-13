#include<iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    int st = 0, end = n-1;

    while(st < end) {
        // int temp = arr[st];
        // arr[st] = arr[end];
        // arr[end] = temp;
        // st++; end--;

        // swap(arr[st++], arr[end--]);

        // arr[st] = arr[st]-arr[end];
        // arr[end] = arr[st]+arr[end];
        // arr[st] = arr[end]-arr[st];
        // st++; end--;

        arr[st] = arr[st]^arr[end];
        arr[end] = arr[st]^arr[end];
        arr[st] = arr[st]^arr[end];
        st++; end--;
    }
}

int main() {
    int arr[] = {5, 15, 22, 1, -15, -24};
    int n = sizeof(arr)/sizeof(int);
     
    reverseArray(arr, n);
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;  
}