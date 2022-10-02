#include<bits/stdc++.h>
using namespace std;

// int main(){

//     char arr[100] = "Apple";

//     for(int i=0; arr[i]!='\0'; i++){
//         printf("%c\n", arr[i]);
//     }
//     return 0;
// }


// finding palindrom string in using char array
int main(){

    int n; cin>>n;
    char name[n+1];

    for(int i=0; i<n; i++){
        cin>>name[i];
    }
    
    bool palindrom = false;
    int st = 0; int en = n-1;
    while(st != en){
        if(name[st]!=name[en]){
            palindrom = false;
            break;
        } else {
            st++;
            en--;
            palindrom = true;
        }
    }

    if(palindrom){
        cout<<"The given string is palindrom...";
    } else {
        cout<< "The given string is not palindrome...";
    }
    return 0;
}