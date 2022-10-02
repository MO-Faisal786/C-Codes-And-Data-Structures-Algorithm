#include<bits/stdc++.h>
using namespace std;

int firstOccurence(int arr[], int n, int i, int key){   
    if(i == n){
        return -1;
    }
    if(arr[i] == key){
        return i;
    } else {
        return firstOccurence(arr, n, i+1, key);
    }
}

int lastOccurence(int arr[], int n, int i, int key){
    if(i==n){
        return -1;
    }
    int restArray = lastOccurence(arr, n, i+1, key);
    if(restArray not_eq -1){
        return restArray;
    }

    if(arr[i] == key){
        return i;
    }

    return -1;
}

int main(){

    int n, key;
    cin>>n>> key;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<firstOccurence(arr, n, 0, key)<<" ";
    cout<<lastOccurence(arr, n, 0, key);

    return 0;
}