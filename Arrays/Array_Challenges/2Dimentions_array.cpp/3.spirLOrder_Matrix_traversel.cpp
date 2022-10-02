#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    
    int rowStart = 0, rowEnd = n - 1, columnStart = 0, columnEnd = m-1;

    while(rowStart <= rowEnd && columnStart <= columnEnd){
        // for rowstart
        for(int col=columnStart; col<=columnEnd; col++){
            cout<<arr[rowStart][col]<<" ";
        }
        rowStart++;
        
        // for coumnEnd
        for(int row=rowStart; row<=rowEnd; row++){
            cout<<arr[row][columnEnd]<<" ";
        }
        columnEnd--;

        // for rowEnd
        for(int col=columnEnd; col>=columnStart; col--){
            cout<<arr[rowEnd][col]<<" ";
        }
        rowEnd--;

        // for columnStart
        for(int row=rowEnd; row>=rowStart; row--){
            cout<<arr[row][columnStart]<<" ";
        }
        columnStart++;
    }

    return 0;
}