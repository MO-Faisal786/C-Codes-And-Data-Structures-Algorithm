#include<iostream>
using namespace std;

class Student{
    string name;
    public:
    int age;
    bool gender;


    // Parameterized constructor
    Student(string n, int a, bool g){
        name = n;
        age = a;
        gender = g;
        cout<<"Parameterized constructor...\n";

    }

    // default constructor
    Student(){
        cout<<"Default constructor...\n";
    }

    // Default copy constructor
    Student(Student &a){
        name = a.name;
        age = a.age;
        gender = a.gender;
        cout<<"Default Copy constructor...\n";
    }

    // destructure 
    ~Student(){
        cout<<"Destructure called..."<<"\n";
    }

    bool operator == (Student &a){
        if(name == a.name && age == a.age && gender == a.gender){
            return true;
        } else {
            return false;
        }
    }

    void setName(string s){
        name = s;
    }

    void getName(){
        cout<<name<<" ";
    }

    void printInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"age = ";
        cout<<age<<endl;
        cout<<"gender = ";
        cout<<gender<<endl;
    };
};

int main(){

    // Student arr[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     string s;
    //     cout<<"Name = ";
    //     cin>>s;
    //     arr[i].setName(s);
        
    //     // cin>>arr[i].name;
    //     cout<<"Age = ";
    //     cin>>arr[i].age;
    //     cout<<"gender = ";
    //     cin>>arr[i].gender;
    // }

    // for(int i=0; i<3; i++){
    //     arr[i].printInfo();
    // }
    

    Student a("faisal", 20, false);
    // a.printInfo();

    Student b("malik", 23,  true);
    // b.setName("faisal");
    // b.age = 23;
    // b.gender = true;
    // b.printInfo();

    // Student c(a);// Copy constructor
    Student c = a;// Copy constructor(second way)


    if(c == a){
        cout << "Same Objects...\n";
    } else {
        cout<< "Not Same...\n";
    }
    
    if(b == a){
        cout << "Same Objects...\n";
    } else {
        cout<< "Not Same Objects...\n";
    }
    

    return 0;
}