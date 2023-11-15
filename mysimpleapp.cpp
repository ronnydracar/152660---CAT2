//Admission Number 152660
//Course DBIT Sep-Dec 2023
//Strathmore University

#include <iostream>
using namespace std;
int main (){
     string ProgramUsername = "EYEYSDW32";
     int ProgramPassword = 273723;
     string Username;
     int Password;
     
     cout<<"Enter your username";
     cin>>Username;

     cout<<"Enter your password";
     cin>>Password;
     
     if (Username == ProgramUsername && Password == ProgramPassword){
        int option;
        cout<<"Login succesfull"<<endl;
        cout<<"Welcome to My Simple App."<<endl;
        cout<<"Select and action to perform:"<<endl;
        cout<<"1. Go to About Us page"<<endl;
        cout<<"2. Go to Serivces Page"<<endl;
        cout<<"3. Go to Full Profile Page"<<endl;
        cout<<"4.Logout";

        cout<<"Select one of the options given: ";
        cout<<option;

        switch (option){
            case 1:
            cout<<"We are a platform that serves as a tool to make programming."<<endl; 
            cout<<"What i enjoy most about programming is being able to help and serve people with the programs created.";
            break;
            case 2:
            cout<<"We could find people in need of a certain program and direct them to you to make it for them.";
            break;
            case 3:
            cout<<"Full Name: Ronny Kariithi Njogu"<<endl;
            cout<<"Year Of Birth: 2000"<<endl;
            cout<<"Country : Kenya"<<endl;
            cout<<"City : Nairobi"<<endl;
            cout<<"University: Strathmore"<<endl;
            break;
            case 4:
            cout<<"Logout successfull"<<endl;
            cout<<"Enter your username";
           cin>>Username;

           cout<<"Enter your password";
           cin>>Password;
           break;
           default:
           cout<<"Invalid Option. Please pick a valid option.";
        }

        return 0;
     }

    
    
    return 0;
}

