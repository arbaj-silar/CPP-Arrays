#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int tar) {
    
    for(int i=0; i<n; i++) {
        if(tar == arr[i]) {
           return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {5, 15, 22, 1, -15, 9, -24};
    int n = sizeof(arr)/sizeof(int);
    int tar = 9;
    
    cout<<"Target Idx: "<<linearSearch(arr, n, tar)<<endl;
    return 0;  
}