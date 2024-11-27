#include <iostream>
using namespace std;
int main() {
    int rv=0;
    int d1;
    int n;
    cout<<"enter a number";
    cin>>n;

    while(n>0){
        d1=n%10;
        rv=rv*10+d1;
        n=n/10;
      
    } 
      cout<<rv;

}
