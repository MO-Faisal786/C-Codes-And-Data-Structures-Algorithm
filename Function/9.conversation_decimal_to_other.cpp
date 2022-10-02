#include<bits/stdc++.h>
using namespace std;

int decimalToBinary(int n){
    int x = 1;
    int ans = 0;
    while(x <= n){
        x *= 2;
    }
    x /= 2;

    while(x>0){
        int lastdigit = n/x;
        n -= lastdigit * x;
        x /= 2;
        ans = ans*10 + lastdigit;
    }
    return ans;
}

int decimalToOctal(int n){
    int x = 1;
    int ans = 0;
    
    while(x<=n){
        x *= 8;
    }
    x /= 8;

    while (x > 0){
        int lastdigit = n/x;
        n -= lastdigit * x;
        x /= 8;
        ans = ans*10 + lastdigit;
    }
    
    return ans;
    
}

string decimalToHexadecimal(int n){
    int x = 1;
    string ans = "";
    while(x<=n){
        x *= 16;
    }
    x /= 16;

    while(x>0){
        int lastdigit = n/x;
        n -= lastdigit*x;
        x /= 16;

        if(lastdigit <= 9)
            ans = ans + to_string(lastdigit);
        else {
            char c = 'A' + lastdigit - 10;
            ans.push_back(c);
        }
    }
    return ans;
}

int main(){

    int n;
    cin>>n;
    // cout<<decimalToBinary(n)<<endl;
    // cout<<decimalToOctal(n)<<endl;
    cout<<decimalToHexadecimal(n)<<endl;
    

    return 0;
}