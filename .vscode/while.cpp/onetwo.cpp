#include <iostream>
using namespace std;
int main() {
    int rv=0;
    int d1;
    int n;
    int newno;
    int digit;
    cout<<"enter a number";
    cin>>n;

    while(n>0){
        d1=n%10;
        rv=rv*10+d1;
        n=n/10;
    } 
    //   cout<<rv;
    newno=rv;
    while(newno !=0){
        digit=newno%10;
        newno=newno/10;
        switch(digit){
            case 1:("one");
            break;
            
            case 2:("two");
            break;
            
            case 3:("three");
            break;
        }
    }
      

}