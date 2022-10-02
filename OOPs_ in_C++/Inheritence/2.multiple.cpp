#include<iostream>
using namespace std;

class A{
    public:
        void Afunc(){
            cout<<"A Inherited...\n";
        }
};

class B{
    public:
        void Bfunc(){
            cout<<"B Inherited...\n";
        }
};

class C : public A, public B{

};

int main(){

    C a;
    a.Afunc();
    a.Bfunc();

    return 0;
}