#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){

    string str = "647821395";
    sort(str.begin(), str.end(), greater<int>());
    cout<<str<<endl;

    return 0;
}