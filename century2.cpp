#include <iostream>;
using namespace std;
int main(){
    int century;
    cout<<"enter your year";
    cin>>century;

    if('year%4==0' || "year%100!==0"){
        cout<<"century year";
    }
    else{
        cout<<"not acentury year";
    }
}