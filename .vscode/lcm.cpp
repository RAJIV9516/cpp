#include <iostream>
using namespace std;
int main() {
    int larger=20;
    int smaller=10;
    int hcf,lcm;
    for(int i=1; i<=smaller; ++i){
        if(larger%i==0 && smaller%i==0){
            hcf=i;
        }
    }

}


// static program
// #include <iostream>
// using namespace std;
// int main() {
//     int larger=24;
//     int smaller=16;
//     int lcm;
//     for(int i=larger; ; i=i+larger){
//         if(i%larger==0 && i%smaller==0){
//             lcm=i;
//             break;
//         }
//     }
//     cout<<lcm;
// }



// Dinomic program
// #include <iostream>
// using namespace std;
// int main() {
// int larger;
// int smaller;
// int lcm;
// cout<<"enter a number";
// cin>>larger>>smaller;
// for(int i=larger; ; i=i+smaller){
//     if(i%larger==0 && i%smaller==0){
//         lcm=i;
//         break;
//     }
// }
// cout<<lcm;
// }  