#include <iostream>
using namespace std;
int main() {
    int sum=0;
    int number=153;
    int digit=0;
    int newno=number;
    while(number !=0){
       digit=number%10;
       sum=sum+(digit*digit*digit);
       number= number/10;
    }
      if(newno==sum){
          cout<<"armstrong";
      }
      else{
          cout<<"not";
      }
}