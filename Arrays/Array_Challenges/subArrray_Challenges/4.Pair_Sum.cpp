#include<iostream>
#include<limits>
using namespace std;

bool pairsum(int arr[], int n, int k){
    // for(int i=0; i<n-1; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(arr[i] + arr[j] == k){
    //             cout<<i+1<<" "<<j+1<<endl;
    //             return 1;
    //         }
    //     }
    // }

    int st = 0;
    int en = n-1;
    while(st<en){
        if(arr[st] + arr[en] == k){
            cout<<st+1<<" "<<en+1<<endl;
            return true;
        } else if(arr[st] + arr[en] > k){
            en--;
        } else {
            st++;
        }
    }
    


    return false;
}

int main(){

    int n, k;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cin>>k;

    cout<<pairsum(arr, n, k);


    
    return 0;
}