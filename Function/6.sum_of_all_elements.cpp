#include<iostream>
using namespace std;

int sum(int num){
    int sum = 0;
    // for(int i=1;i<=num;i++){
    //     sum += i;
    // }
    sum = (num*(num+1))/2;
    return sum;
}

int main(){

    int n;
    cin>>n;
    cout<<sum(n);
    
    return 0;
}