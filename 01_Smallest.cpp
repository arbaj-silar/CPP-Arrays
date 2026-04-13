#include<iostream>
using namespace std;

int getSmallValue(int arr[], int n) {
    int smallest = INT32_MAX;
    int idx = -1;
    for(int i=0; i<n; i++) {
        if(smallest > arr[i]) {
            smallest = arr[i];
            idx = i;
        }
        // min(smallest, arr[i]);
    }
    cout<<"Smallest value index: "<<idx<<endl;
    return smallest;
}

int main() {
    int arr[] = {5, 15, 22, 1, -15, -24};
    int n = sizeof(arr)/sizeof(int);
    cout<<getSmallValue(arr, n)<<endl;  
    return 0;  
}