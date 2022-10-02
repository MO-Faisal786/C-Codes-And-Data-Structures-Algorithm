#include<bits/stdc++.h>
using namespace std;

void substrAscii(string s, string ans){
    if(s.length() == 0){
        cout<<ans<<endl;
        return;
    } else {
        char ch = s[0];
        int code = ch;
        string ros = s.substr(1);

        substrAscii(ros, ans);
        substrAscii(ros, ans+ch);
        substrAscii(ros, ans+to_string(code));
    }
}

int main(){

    substrAscii("AB", "");

    return 0;
}