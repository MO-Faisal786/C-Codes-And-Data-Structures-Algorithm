#include<iostream>
using namespace std;

int fact(int num){
    int fac = 1;
    for(int i=1;i<=num;i++){
        fac *= i;
    }
    return fac;
}

int main(){

    int n, r;
    cin>>n>>r;
    
    float nCr = fact(n)/(fact(n-r)*fact(r));
    cout<<nCr<<endl;

    return 0;
}