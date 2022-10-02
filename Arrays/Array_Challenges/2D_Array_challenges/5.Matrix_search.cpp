#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n, m; cin>>n>>m;
    int target; cin>>target;

    int matrix[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> matrix[i][j];
        }
    }

    //logic
    bool found = false;
    int r = 0, c = m-1;
    while(r < n and c >= 0){
        if(matrix[r][c] == target){
            found = true;
            break;
        } else if(matrix[r][c]>target){

            c--;

        } else {

           r++; 

        }
    }

    if(found){
        cout<<"Element Found...";
    } else {
        cout<<"Element not found...";
    }


    return 0;
}