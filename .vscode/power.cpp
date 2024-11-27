#include <iostream>
using namespace std;
int main() {
    // power of any number
    int a;
    int b;
    int power=1;
    cout<<"enter a number and its power";
    cin>>a>>b;
    for(int i =1; i<=b; ++i){
        power=power*a;
    }
    cout<<power;
   
}
