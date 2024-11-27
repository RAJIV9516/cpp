#include <iostream>
using namespace std;
int main() {
   
   int pin=1234;
   int pin1;
   int pin2;
   int pin3;
   int pin4;
   cout<<"enter a pin";
   
   (pin==pin1)?cout<<"collect your cash":(cout<<"wrrong password try again",cin>>pin2,(pin==pin2)?cout<<"collect your cash":(cout<<"wrrong password try again",cin>>pin3,(pin==pin3)?cout<<"collect your cash":(cout<<"wrrong password try again",cin>>pin4,(pin==pin4)?cout<<"collect your cash":cout<<"blocked account")));
}