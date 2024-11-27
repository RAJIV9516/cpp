#include <iostream>
using namespace std;
int main() {
    int larger=20;
    int smaller=10;
    int hcf;
    for(int i=1; i<=smaller; ++i){
        if(larger%i==0 && smaller%i==0){
            hcf=i;
        }
    }
    cout<<hcf;
    
}

// #include <iostream>
// using namespace std;
// int main() {
//     int larger;
//     int smaller;
//     int hcf;
//     cout<<"enter a number";
//     cin>>larger>>smaller;
//     for(int i=1; i<=smaller; ++i){
//         if(larger%i==0 && smaller%i==0){
//            hcf=i; 
            
//         }
//     }
//     cout<<hcf;

// }