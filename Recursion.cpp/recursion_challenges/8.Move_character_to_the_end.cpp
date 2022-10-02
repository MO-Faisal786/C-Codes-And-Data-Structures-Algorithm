#include<iostream>
using namespace std;

string moveCh(string s){
    if(s.length() == 0){
        return "";
    } else {
        char ch = s[0];
        string ans = moveCh(s.substr(1));

        if(ch == 'x'){
            return (ans + ch);
        } else {
            return (ch + ans);
        }
    }


}

int main(){

    cout<<moveCh("xxdfgdxxxkd");

    return 0;
}