#include <iostream>
using namespace std;
int main() {
    int t1=0,t2=1;
    int next=0;
    int i=0;
    while(i<=5){
    if(i==0){
        cout<<i;
        i++;
        continue;
    }
    if(i==1){
        cout<<i;
        i++;
        continue;
    }
    
    next=t1+t2;
    t1=t2;
    t2=next;
    cout<<next;
    i++;
}
}