#include <iostream>
using namespace std;
int main(){
    int month;
    cout<<"enter your month";
    cin>>month;
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {
        cout<<"31th";
        cin>>month;
    }
    else if(month==4 || month==6 || month==9 || month==11)
    {
        cout<<"30th";
        cin>>month;
    }
    else(month==2);
    {
        cout<<"28/29";
    }

}