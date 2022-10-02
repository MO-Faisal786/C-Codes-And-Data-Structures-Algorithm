#include<iostream>
using namespace std;

/****************************************

int main(){

    char button;
    cout<<"input a character: ";
    cin>>button;

    switch (button)
    {
    case 'a':
        cout<< "Hello a" << endl;
        break;
    case 'b':
        cout<< "Hello b" << endl;
        break;
    case 'c':
        cout<< "Hello c" << endl;
        break;
    
    default:
        cout<<"Hello D";
        break;
    }

    return 0;
}
*******************************************/

// simple calculator

int main(){

    int n1,n2;
    cout<<"input two numbers: ";
    cin>>n1>>n2;

    char op;
    cout<<"Enter the operator: ";
    cin>> op;

    switch (op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<n1-n2<<endl;
        break;
    case '*':
        cout<<n1*n2<<endl;
        break;
    case '/':
        cout<<n1/n2<<endl;
        break;
    
    default:
    cout<<"invalid operator!";
        break;
    }


    return 0;
}