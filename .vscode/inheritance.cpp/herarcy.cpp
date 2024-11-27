#include <iostream>
using namespace std;
class student{
     public:
    int b=20;
};
class coaching:public student {
  
};
class school:public student {
   
};
int main(){
     coaching o;
     school c;
    cout<<o.b;
    cout<<c.b;
    
}