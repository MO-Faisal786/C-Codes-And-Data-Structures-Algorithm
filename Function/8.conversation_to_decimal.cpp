#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int num){
    int ans = 0;
    int x = 1;
    while(num>0){
        int y = num%10;
        ans += x * y;
        x *= 2;
        num /= 10;
    }
    return ans;
}

int octalToDecimal(int num){
    int ans = 0;
    int x = 1;
    while(num>0){
        int y = num%10;
        ans += x * y;
        x *= 8;
        num /= 10;
    }
    return ans;
}


int hexadecimalToDecimal(string num){
    int ans = 0;
    int x = 1;
    int s = num.size();
      for(int i=s-1; i>=0; i--){
        if(num[i] >= '0' && num[i] <= '9'){
            ans += x * (num[i] - '0');
        } else if(num[i] >= 'A' && num[i] <= 'F'){
            ans += x*(num[i] - 'A' + 10);
        }
        x *= 16;
      }
    return ans;
}






int main(){

    // int n;
    string n;
    cin>>n;
    // cout<<binaryToDecimal(n)<<endl;
    // cout<<octalToDecimal(n)<<endl;
    cout<<hexadecimalToDecimal(n)<<endl;

    return 0;
}