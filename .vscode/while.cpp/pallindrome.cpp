#include <iostream>
using namespace std;
int main() {
    int rv=0;
    int number=12321;
    int digit=0;
    int newno=number;
    while(number !=0){
       digit=number%10;
       rv=rv*10+digit;
       number= number/10;
    }
      if(newno==rv){
          cout<<"pallindrome";
      }
      else{
          cout<<"not";
      }
}