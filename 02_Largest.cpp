#include<iostream>
using namespace std;

int getLargValue(int arr[], int n) {
    int largest = INT32_MIN;
    int idx = -1;
    for(int i=0; i<n; i++) {
        if(largest < arr[i]) {
            largest = arr[i];
            idx = i;
        }
        // max(largest, arr[i]);
    }
    cout<<"Largest value index: "<<idx<<endl;
    return largest;
}

int main() {
    int arr[] = {5, 15, 22, 1, -15, -24};
    int n = sizeof(arr)/sizeof(int);
    cout<<getLargValue(arr, n)<<endl;  
    return 0;  
}