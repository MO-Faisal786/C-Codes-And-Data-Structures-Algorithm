#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int armstrong = 0;
    int originaln = n;
    while(n>0){
        int lastdigit = n%10;
        armstrong += pow(lastdigit, 3);
        n = n/10;
    }

    cout<<armstrong<<endl;
    cout<<originaln<<endl;

    if(armstrong==originaln){
        cout<<"It is a armstrong number...";
    } else {
        cout<<"It is not a armstrong number...";
    }

    return 0;
}