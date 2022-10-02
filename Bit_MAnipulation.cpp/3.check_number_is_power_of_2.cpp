#include<bits/stdc++.h>
using namespace std;

bool ispowetof2(int n){
    return (n && !(n & n-1));
}

int numberOfOnes(int n){
    int count = 0;
    while(n){
        n = n & n-1;
        count++;
    }

    return count;
}

// all possible subsets
void subsets(int arr[], int n){
    for(int i=0; i< (1<<n); i++){
        for(int j=0; j<n; j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        } cout<<endl;
    }
}

int main(){
    // int n;
    // cin>>n;
    // cout<<ispowetof2(n)<<endl;
    // cout<<numberOfOnes(n)<<endl;

    // for subset of given element
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    subsets(arr, n);

    return 0;
}