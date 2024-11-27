// function==========
#include <iostream>
using namespace std;
// call by value
void sum(int a){
    a=30;
}
int main() {
    int a=20;
    sum(a);
    cout<<a;

}


// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
// call by refrence
void sum(int &a){
    a=30;
    cout<<a;
}
int main() {
    int a=20;
    sum(a);
    cout<<a;

}

// revervalue

#include <iostream>
using namespace std;
int reverse(int n)
{
    int rv = 0;
    int d1;
    
    while(n>0)
    {
        rv = rv*10+n%10;
        n=n/10;
    }
    return rv;
}
int main(){
    int n = 123;
    cout<<reverse(n);
} 




// pointer

#include <iostream>
using namespace std;
int sum(int *a){
    *a=10;
    return *a;
}
int main() {
    int a;
    cout<<sum(&a);
 
}



// recursion

#include <iostream>
using namespace std;
int sum(int a){
    
    if(a<=1){
        return 1;
    }
    else{
        return a+sum(a-1);
    }
    
}
int main() {
    int a=10;
    cout<<sum(a);

}

// feboniceserise

#include <iostream>
using namespace std;
int fibo(int number){
    if(number<=1){
        return number;
    }
    else{
        return fibo(number-1)+fibo(number-2);
    }
    
}
int main() {
    int number=5;
    cout<<fibo(number);

}



// ===============structure========================
#include <iostream>
using namespace std;
struct info {
  int rollno =2;
  char section = 'A';
  string name = "Rajiv";
  float marks[5]={1,2,3,4,5};
  

void display(){
    cout<<rollno<<section<<name<<marks<<endl;
    
}
}
;
int main(){
    // cout<<p.display();
    // p.display();
    info p;
     p.display();
    
}


// =========================normal structure=========================

#include <iostream>
using namespace std;
struct info {
  int rollno;
  char section;
  string name ;
  float marks[5];
  

void display(struct info a){
    cout<<a.rollno<<endl<<a.section<<endl<<a.name<<endl;
    for(int i=0; i<5; ++i){
        cout<<a.marks[i];
    }
    
}
}
;
int main(){
    // cout<<p.display();
    // p.display();
    info p={1, 'A',"Rajiv",{1,2,3,4,5}};
     p.display(p);
    
}

// =====================pointer to structure=================

#include <iostream>
using namespace std;
struct info {
    int rollno;
    char section;
    string name;
    float marks[5];
    void display(struct info a){
        cout<<a.rollno<<endl<<a.section<<endl<<a.name<<endl<<a.marks;
        for(int i=0; i<5; ++i){
            cout<<a.marks[i];
        }
    }
};
int main(){
    info p ={1,'A',"Rajiv",{1,2,3,4,5}};
    // p.display(p);
    info *d = &p;
    d->display(p);
}


// ========================(srt)self refrefren structure=============================

#include <iostream>
using namespace std;
struct info {
 int a=10;
 int *link;
}p;
int main(){
    info d;
p.link = NULL;
p.a=11;
d.link=NULL;
d.a=12;
p.link= &d;
// p->a;
}




// ========================================================
// Online C++ compiler to run C++ program online
// #include <iostream>
// us ing namespace std;
// struct
// struct info{
//   int number;
//   string name;
  
//   void display(info p)
    
// }
// int main() {
//     info p ={100,RAJIV};
//     p.display(p);
// }
