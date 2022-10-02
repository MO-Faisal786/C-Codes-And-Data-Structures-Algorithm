#include<bits/stdc++.h>
using namespace std;

int Sum(int n){
    if(n == 1){
        return 1;
    } else {
        return n + Sum(n-1);
    }
}

int mul(int n, int p){
    if(p == 0){
        return 1;
    } else {
        return n * mul(n, p-1);
    }
}

int factorial(int n){
    if(n == 1){
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int fib(int n){
    if(n == 0 or n == 1){
        return n;
    } else {
        return fib(n-1) + fib(n-2);
    }
    
}

int main(){

    int n, p;

    cin>>n>>p;
    // cout<<Sum(n)<<endl;
    // cout<<mul(n, p)<<endl;
    // cout<<factorial(n)<<endl;
    cout<<fib(n)<<endl;
    return 0;
}