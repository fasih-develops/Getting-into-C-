#include <iostream>
using namespace std;
int main()
{
    double temp;
    char unit;
    cout<<"*************Temperature converter ************";
    cout<<"\nF = Fahrenheit ";
    cout<<"\nC = Celcius ";
    cout<<"\nWhat you unit would you like to convert to :";
    cin>> unit;
    if(unit == 'f' || unit == 'F'){
        cout<< "\nEnter the temperature in Celcius : ";
        cin>> temp;
        temp = (1.8*temp)+ 32.0;
        cout<< "Here is temperature in F :" << temp << "F";
    }
    else if(unit == 'c' || unit == 'C'){
        cout<< "\nEnter the temperature in Fahrenheit : ";
        cin>> temp;
        temp = (temp-32.0)/1.8;
        cout<< "Here is temperature in C :" << temp << "C";
    }
    else{
        cout<< "invalid input";
    }
}