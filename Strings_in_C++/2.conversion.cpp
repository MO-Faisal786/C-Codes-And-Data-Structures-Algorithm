#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){

    // string str = "jdkhfjksdhfjdhf";
    
    // // Convert into uppercase
    // for(int i=0; i<str.size(); i++){
    //     if(str[i]>= 'a' and str[i]<='z'){
    //         str[i] -= 32;
    //     }
    // }

    // cout<<str<<endl;

    // for(int i=0; i<str.size(); i++){
    //     if(str[i]>= 'A' and str[i]<='Z'){
    //         str[i] += 32;
    //     }
    // }

    // cout<<str<<endl;

    string str = "asdkdfjkg";
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<< str<< endl;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<< str<< endl;
    return 0;
}