#include<iostream>
using namespace std;


/****************************************
int main() {

    int count = 0;
    int pocketMoney = 3000;

    for(int date = 1; date<=30; date++){
        if(date%2 == 0) {
            continue;
        }

        if(pocketMoney == 0) {
            break;
        }

        cout<<"Go out today!"<< endl;
        pocketMoney -= 300;
        count++;
    }

    cout<<count;
    return 0;
}


*****************************************/


/*****************************************

int main() {
    for(int i=1; i<=100; i++) {
        if(i%3==0){
            continue;
        }
        cout<< i<< endl;

    }
    return 0;
}

*****************************************/


// To find prime number
/*********************************************
int main() {
    int n;
    int i;
    cin>>n;

    for(i=2; i<n; i++){

        if(n%i==0){
            cout<<"The given number is not prime number\n";
            break;
        } 
        
    }
    if(i==n){
        cout<<"The given number is a prime number...\n";
    }
    return 0;
}

**********************************************************/

// To print all prime number 1 to n

int main(){
    int n,i,j;
    cin>>n;

    for( i=3; i<n; i++){
        for(j=2; j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            cout<<i<<endl;
        }

    }

    return 0;

}