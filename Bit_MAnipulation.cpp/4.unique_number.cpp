#include<bits/stdc++.h>
using namespace std;

int setBit(int n, int pos){
    return ((n & (1>>pos))!=0);
}

int unique(int arr[], int n){
    int xorSum = 0;
    for(int i=0; i<n; i++){
        xorSum xor_eq arr[i];
    }
    return xorSum;
}

int unique2(int arr[], int n){
    int xorSum = 0;
    for(int i=0; i<n; i++){
        xorSum xor_eq arr[i];
    }

    int temp = xorSum;

    int setbit = 0;
    int pos = 0;
    while(setbit not_eq 1){
        setbit = xorSum & 1;
        pos++;
        xorSum = xorSum >> 1;
    }
    
    int newxorbit = 0;
    for(int i=0; i<n; i++){
        if(setBit(arr[i], pos-1)){
            newxorbit xor_eq arr[i];
        }
    }

    cout<<newxorbit<<endl;
    return temp xor newxorbit;

}

int main(){
    int n; cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout << unique2(arr, n);

    return 0;

}