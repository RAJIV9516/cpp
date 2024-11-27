// #include <iostream>
// using namespace std;
// int main() {

//     int arr[]={1,2,3,4,5};
//     int largest;
//     int seclargest;
//     for(int i=0; i<5; ++i)
//     {
//         if(arr[i]>largest){
//             largest=arr[i];

//         }
//     }
//     cout<<largest;
//     for(int i=0; i<5; ++i){
//         if(seclargest<arr[i]&&arr[i]!=largest){
//           seclargest=arr[i];
//     }
//     cout<<seclargest;

// }



// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,2,5};
//     for(int i=0; i<5; ++i){
//         for(int j=i+1; j<5; ++j){
//             if(arr[i]==arr[j]){
//                 cout<<arr[i];
//             }
//         }
//     }
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,1,2,5};
//     for(int i=0; i<5; ++i){
//         bool unique =true;
//         for(int j=0; j<5; ++j){
//             if(i!=j && arr[i]==arr[j]){
//                 unique =false;
//                 break;
//             }
//         }
//         if(unique){
//             cout<<arr[i];
//         }
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int index;
//     int arr[]={1,2,3,2};
//     for(int i=0; i<4; ++i){
//         for(int j=i+1; j<4; ++j){
//             if(arr[i]==arr[j]){
//                 arr[j]=-1;
//             }
//         }
//     }
//     for(int j=0; j<4; ++j){
//         if(arr[j]!=-1){
//             arr[index++]=arr[j];
//         }
//     }
//     for(int i=0; i<3; ++i){
//         cout<<arr[i];
//     }
// }

// #include<iostream>
// using namespace std;
// struct info{
//     int rollno=12;
//     char section='A';
//     string name="Rajiv";
//     float marks[5]={1,2,3,4,5};

//     void display(){
//         cout<<rollno<<section<<name;
//         for(int i=0; i<5; i++){
//             cout<<marks[i];
//         }

//     }
// };
// int main(){

//     info a;
//     a.display();

// } 


// #include<iostream>
// using namespace std;
// struct info{
//     int rollno;
//     char section;
//     string name;
//     float marks[5];

//     void display(struct info a){
//         cout<<a.rollno<<endl<<a.section<<endl<<a.name<<endl;
//         for(int i=0; i<5; ++i){
//             cout<<marks[i];
//         }

//     }
// };
// int main(){
//     info p={1,'A',"Rajiv",{1,2,3,4,5}};
//     info *d=&p;
//     d->display(p);

// }

// #include <iostream>
// using namespace std;
// struct info {
//  int a=10;
//  int *link;
// }p;
// int main(){
//     info d;
// p.link = NULL;
// p.a=11;
// d.link=NULL;
// d.a=12;
// p.link= &d;
// // p->a;
// }


#include<iostream>
using namespace std;
class student{
    public:
    int a=50;  

};
class coaching: public student{

};
class school: public student{

};
int main(){
    coaching o;
    school c;
    cout<<o.a;
    cout<<c.a;
}