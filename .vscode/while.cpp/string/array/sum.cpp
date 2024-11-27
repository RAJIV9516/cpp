// =====================sum=============
#include <iostream>
using namespace std;
int main() {
    int sum=0;
    int arr2;
    int arr[]={1,2,3,4,5};
    for(int i=0; i<5; ++i){
        sum=sum+i;
        arr2=sum+arr[i];
        
    }
    cout<<arr2;
    
}

// ==========================swap=================

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int arr[n]={1,2,3,4,5};
    int temp;
    // int i;
    for(int i=0; i=5/2; ++i){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }

}

// ====================reverse===============

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n=5;
    int temp;
    
    for (int i = 0; i < n / 2; ++i) { 
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    for (int i = 0; i < n; ++i) {
        cout << arr[i];
    }
}


// =================first and second largest number====================

#include <iostream>
using namespace std;
int main() {
    int arr[]={11,12,13,14,15,54};
    int larger=arr[-1];
    int seclarger;
    for(int i=0; i<6; ++i){
        if(arr[i]>larger){
            larger=arr[i];
        }
    }
    cout<<larger<<endl;
    
    for(int i=0; i<6; ++i){
        if(seclarger<arr[i] && arr[i]!=larger){
            seclarger=arr[i];
        }
    }    cout<<seclarger;
}


#include <iostream>
using namespace std;
int main() {
    int arr[]={1,2,3,4,5};
    int larger=arr[-1];
    int seclarger;
    for(int i=0; i<5; i++){
        if(arr[i]>larger){
            larger=arr[i];
        }
    }
     cout<<"larger="<<larger<<endl;
    for(int i=0; i<5; ++i){
        if(arr[i]>seclarger && arr[i]!=larger){
            seclarger=arr[i];
        }
    }
    cout<<"second largest ="<<seclarger<<endl;
}



// ====================duplicate============
#include <iostream>
using namespace std;
int main() {
    int arr[]={1,2,1,2,5};
    for(int i=0; i<5; ++i){
        
        for(int j=i+1; j<5; ++j){
            if(arr[i]==arr[j]){
                cout<<arr[i];
            }
        }
    }
}


// ========================uniqe value===============

#include <iostream>
using namespace std;
int main() {
    int arr[]={1,2,3,2,5};
    for(int i=0; i<5; ++i){
        bool unique=true;
        for(int j=0; j<5; ++j){
            if(i!=j && arr[i]==arr[j]){
                unique=false;
                break;
            }
       }
       if(unique){
           cout<<arr[i];
       }
    }
}

// ======================target==================

#include <iostream>
using namespace std;
int main() {
    int arr[]={1,2,3,4,5};
    int target;
    cout<<"enter a number";
    cin>>target;
    
    for(int i=0; i<5; ++i){
        if(arr[i]==target){
            cout<<target;
        }
        else{
            cout<<"not present";
            break;
        }
    }
    
}

// ============================palindrome================

#include <iostream>
using namespace std;
int main() {
    int arr[]={1,2,3,2,1};
    int n=5;
    // cout<<"enter a number";
    // cin>>n;
    for(int i=0; i<n/2; ++i){
        if(arr[i]!=arr[n-i-1]){
            cout<<"not palindrome";
            break;
        }
        else{
            cout<<"palindrome";
            break;
        }
    }
    
}

// ==========================assending order==========================

#include <iostream>
using namespace std;
int main() {
    int arr[]={1,2,5,4.3};
    
    for(int i=0; i<5; ++i){
        if(arr[i]>arr[i+1]){
            cout<<"not in assending order";
            break;
        }
        else{
            cout<<"assending order";
            break;
        }
    }
}


// ===========================move zero==============

#include <iostream>
using namespace std;
int main(){
    int index=0;
    int arr[]={1,0,2,0,1};
    
    for(int i=0; i<5; ++i)
    {
        if(arr[i]!=0)
        {
            arr[index++]=arr[i];
        }
    }
    while(index<5){
        arr[index++]=0;
    }
    for(int i=0; i<5; ++i){
        cout<<arr[i];
    }

}

// ========================delete value====================

#include <iostream>
using namespace std;
int main(){
    int index=0;
    int target=2;
    int arr[]={1,2,3,2,1};
    
    for(int i=0; i<5; ++i)
    {
        if(arr[i]!=target)
        {
            arr[index++]=arr[i];
            cout<<arr[i];
        }
    }
}

// =============================missing value find================
#include <iostream>
using namespace std;
int main() {
  int missing;
  int n=5;
  int sum;
  int asum;
  int arr[]={1,3,4,5};
  sum=n*(n+1)/2;
  for(int i=0; i<4; ++i){
      asum=asum+arr[i];
      
  }
  missing=sum-asum;
  cout<<missing;
    
}

// multipale value find 1 shorting;
                    //  2 comparision;


// ===========================duplicat value delet=================
#include <iostream>
using namespace std;
int main() {
    int index;
    int arr[]={1,2,3,2};
    for(int i=0; i<4; ++i){
        for(int j=i+1; j<4; ++j){
            if(arr[i]==arr[j]){
                arr[j]=-1;
            }
        }
    }
    for(int j=0; j<4; ++j){
        if(arr[j]!=-1){
            arr[index++]=arr[j];
        }
    }
    for(int i=0; i<3; ++i){
        cout<<arr[i];
    }
}




#include <iostream>

#include <iostream>
using namespace std;
int main() {
    int temp;
    int n=5;
    int i=0;
    int arr[]={1,5,4,6,3};
    for(int i=0; i>5; ++i){
        for(int j=i+1; i>5; ++j){
            if(arr[j]>arr[i]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                
            }
        }
    }
     cout<<temp;
}