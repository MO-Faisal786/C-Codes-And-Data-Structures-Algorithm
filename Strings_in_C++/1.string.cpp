#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;

int main(){

    // string str;
    // cin>>str;
    // cout<<str;

    // string str1(5, 'f');
    // cout<<str1<<endl;

    // string str = "fasial malik";
    // cout<<str<<endl;

    // for complete sentence
    // string str;
    // getline(cin, str);
    // cout<<str<<endl;

    // string s1 = "fam"; string s2 = "ily";
    // // s1.append(s2);
    // s1 = s1 + s2;
    // cout<<s1<<endl;
    // // cout<<s1+s2<<endl;

    // cout<<s1[2];

    // clear function is here

    // string str = "hksdfjhdklf sdnfjkhsjfh hdkjfhj";
    // str.clear();
    // cout<<str<<endl;

    // compare function is here

    // string s1 = "xyz";
    // string s2 = "abc";
    // cout<<s2.compare(s1)<<endl;

    // empty functions

    // string str = "abc";
    // str.clear();
    // if(str.empty()){
    //     cout<<"this is empty string";
    // } else {
    //     cout<< "this is not empty";
    // }

    // erase function

    // string str = "faisalMalik";
    // str.erase(2, 2);
    // cout<<str<<endl;

    // find function

    // string str = "faisalmalik";
    // int s = str.find("s");
    // cout<<s<<endl;

    // insert method 
    // string str = "fsalmalik";
    // str.insert(1, "ai");
    // cout<<str<<endl;

    // length function 
    // string str = "fsalmalik";
    
    // cout<<str.length()<<endl;
    // cout<<str.size()<<endl; // size() method
    // cout<<str.substr(4, 5)<<endl;//substr() method\

    // string str = "786";
    // int x = stoi(str); // convert to int from string
    // cout<<x+4<<endl;

    // int to string
    // int x = 786;
    // string str = to_string(x);
    // cout<<str+"4"<<endl;

    // string sorting 
    string str = "xbdjlsibncjb";
    sort(str.begin(), str.end());
    cout<<str<<endl;
    return 0;
}