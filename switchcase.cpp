//Admission Number 152660
//Course DBIT Sep-Dec 2023
//Strathmore University

#include <iostream>
using namespace std;
int main() {
    int number1;
    int number2;
    int number3;
    int FindSmallest;
    int Smallest;

    cout<<"Enter the first number: ";
    cin>>number1;
    cout <<"Enter the second number: ";
    cin>>number2;
    cout <<"Enter the third number: ";
    cin>>number3;
    
    
    switch(FindSmallest) {
        case 1:
        if(number2>number1 && number2<number1)Smallest=number2;
        break;
        case 2:
        if(number1>number2 && number1<number3)Smallest=number1;
        break;
        default:
        if(number3>number1 && number3<number2)Smallest=number3;
        break;
        
}

      cout<<"The minimum number is : "<<Smallest;
        return 0;
    }
