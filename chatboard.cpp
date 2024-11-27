#include<iostream>
using namespace std;
int main(){
    
    string str;
    cout<<"enter from the given options \n fsd \n cs \n ds \n ai/ml \n";
    cin>>str;
    if(str=="fsd")
    {
        cout<<"choose your frontend technology \n react \n angular \n ";
        cin>>str;
        if(str=="react")
        {
            cout<<"choose your backend technology \n java \n python \n mern \n ";
            cin>>str;
            if(str=="java")
            {
                cout<<"your fees for fsd is 55000 and course is react and java";
            }
            else if(str=="python")
              {
                cout<<"your fees for fsd is 60000 and course is react and python";
              }
              else if(str=="mern")
              {
                cout<<"your fees for fsd is 70000 and course is react and python";
              }
        }
    }
    else if(str=="ds")
    {
        cout<<"choose from the given option \n python \n static \n powerbi \n";
        cin>>str;
        if(str=="python")
        {
            cout<<"select your libraries \n namapaipanda \n django \n ";
            cin>>str;
          if(str=="namapaipanda")
            {
                cout<<"your fess for namapaipanda and python is 30000";
            }
        } 
        else if(str=="static")
        {
           cout<<"select your libraries \n namapaipanda \n django \n ";
            cin>>str;
            if(str=="django")
            {
              cout<<"your fess for django and static is 50000";
            } 
        }

    }
    else if(str=="cs")
    {
      cout<<"choose you profiles from given option \n socprofile \n network administreatror \n network architect\n";
      cin>>str;
      if(str=="socprofile")
      {
        cout<<"your fees is 110000";
      }
      else if(str=="network administreatror")
      {
        cout<<"your fees is 130000";
      }
      else if(str=="network architect")
      {
        cout<<"your feees is 150000";
      }
    }
    
}