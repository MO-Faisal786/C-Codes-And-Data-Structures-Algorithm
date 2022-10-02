#include<bits/stdc++.h>
using namespace std;

void dec(int n){
    if(n==1){
        cout<<1<<endl; 
    } else {
        cout<<n<<endl;
        dec(n-1);
    }
}

void incr(int n){
    if(n==1){
        cout<<1<<endl; 
    } else {
        incr(n-1);
        cout<<n<<endl;        
    }
}

int main(){

    int n;
    cin>>n;
    dec(n);
    incr(n);

    return 0;
}