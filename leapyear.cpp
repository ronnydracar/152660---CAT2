//Admission Number 152660
//Course DBIT Sep-Dec 2023
//Strathmore University

#include <iostream>
using namespace std;
int main(){
    string FullName;
    int Year;

    cout<<"Enter your full name: ";
    getline(cin, FullName);
    cout<<"Enter an year: ";
    cin>>Year;

    if(Year%4 == 0){
        cout<<"Dear user, the year you have inputted is a leap year.";
    }
    else{
        cout<<"Dear user, the year you have inputted is not a leap year.";
    }
}
