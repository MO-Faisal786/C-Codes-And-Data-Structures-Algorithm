#include<iostream>
using namespace std;

void fact(int n){
    int fac = 1;
    for(int i=1;i<=n;i++){
        fac *= i;
    }
    cout<<fac<<endl;
}

int main(){

    int n;
    cin>> n;
    
    fact(n);

    return 0;
}