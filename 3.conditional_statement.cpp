/*************

#include <iostream>
using namespace std ;
int main () {
int x,y ;
cin >> x >> y ;
if ( x == y ) {
cout << "Both the numbers are equal" ;
}
else {
if ( x > y ) {
cout << "X is greater than Y" ;
}
else {
cout << "Y is greater than X" ;
}
}
return 0 ;
}

***********/


#include<iostream>
using namespace std;
/***********************
int main() {

    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<a<<endl;
        } else {
            cout<<c<<endl;
        }
    } else {
        if(b>c){
            cout<<b<<endl;
        } else {
            cout<<c<<endl;
        }
    }

    return 0;
}

***********************/

// Second Example

int main() {
    
    int n;
    cin>>n;
    if(n%2 == 0){
        cout<<"n is a even number\n";
    } else {
        cout<<"n is a odd number\n";
    }
    return 0;
}
