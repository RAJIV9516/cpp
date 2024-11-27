#include <iostream>
using namespace std;
class coaching {
    public:
    int b=20;
};
class school {
    public:
    int a=10;
};
class student :public coaching,public school {
    
};
int main(){
    student o;
    cout<<o.a;
    cout<<o.b;
    
}