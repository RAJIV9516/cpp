#include <iostream>
using namespace std;
int main() {
    // perfect number
    // 6
    // 1+2+3=6
    int a;
    int sum=0;
    cout<<"enter a value";
    cin>>a;
    for(int i =1; i<a; ++i){
        if(a%i==0){
          sum=sum+i; 
        }
    }
    if(a==sum){
        cout<<"perfect number";
    }
    else{
        cout<<"not a perfect number";
    }
   
}