#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, string src, string helper, string dest){

    if(n == 0){
        return;
    } else {
        towerOfHanoi(n-1, src, dest, helper);
        cout<<" Move "<<n<<" "<<src<<" to "<<dest<<endl;
        towerOfHanoi(n-1, helper, src, dest);
    }
}

int main(){

    int n;
    cin>> n;
    towerOfHanoi(n, "A","B","C");

    return 0;
}