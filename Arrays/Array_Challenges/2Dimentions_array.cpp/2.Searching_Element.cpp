#include<iostream>
#include<climits>
using namespace std;

int main(){

    int m,n,k;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    cin>>k; 
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == k){
                printf("%d%d", i, j);
                return 0;
            } 
        }
    }

    cout<< "Element not found..";
    return 0;
}