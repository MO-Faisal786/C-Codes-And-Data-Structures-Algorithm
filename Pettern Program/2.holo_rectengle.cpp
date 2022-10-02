#include<iostream>
using namespace std;

int main(){
    int rows, cols;
    cout<<"Enter the rows and columns: ";
    cin>>rows>>cols;

    for(int i=1; i<=cols; i++){
        for(int j=1; j<=rows; j++){
            if(i==1 || i==cols || j==1 || j==rows){
                cout<<"*";
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }


    return 0;
}