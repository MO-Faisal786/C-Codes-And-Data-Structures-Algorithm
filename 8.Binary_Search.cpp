#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int lowerBound = 0;
    int upperBound = n-1;
    

    while(lowerBound <= upperBound){
        int mid = lowerBound + (upperBound - lowerBound) / 2;
        if(arr[mid] == key){
            return mid;
        } else if(arr[mid] > key){
            upperBound = mid - 1;
        } else {
            lowerBound = mid + 1;
        }
    }
    
    return -1;
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<binarySearch(arr, n, key);

    return 0;
}