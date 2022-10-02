#include<iostream>
using namespace std;

class A{
    public:
        void Afunc(){
            cout<<"A Inherited...\n";
        }
};

class B : public A{
    public:
        void Bfunc(){
            cout<<"B Inherited...\n";
        }
};

class C {
    public:
        void Cfunc(){
            cout<<"C Inherited...\n";
        }
};

class D : public B, public C{
    public:
        void Dfunc(){
            cout<<"D Inherited...\n";
        }
};

int main(){

    D d;
    d.Afunc();
    d.Bfunc();
    d.Cfunc();

    return 0;
}