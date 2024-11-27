#include <iostream>
using namespace std;
int main() {
    // factor 
   int number;
    cout<<"enter a number";
    cin>>number;
    for(int i =1; i<=number; ++i){
       if(number%i==0){
           cout<<i<<endl;
       }
    }
}
