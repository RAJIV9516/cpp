#include <iostream>
using namespace std;
int main() {
   int no=123456789;
   int ld;
   ld=no%10;
    while(no>10){
        no=no/10;
      
    } 
     cout<<ld+no;
}  