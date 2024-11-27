#include <iostream>
using namespace std;
int main() {
    int a;
    int counter=0;
    cout<<"enter a value";
    cin>>a;
    for(int i =1; i<=a; ++i){
        if(a%i==0){
            ++counter;
        }
    }
    if(counter==2){
        cout<<"prime number";
    }
    else{
        cout<<"not a prime number";
    }
   
}