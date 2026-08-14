#include <iostream>

using namespace std;
int main()
{
    /*
    int x;
    cout<< "Enter your age : ";
    cin>> x;
    if(x >= 18){
        cout<< "You are eligible for this website.";
    }
    else if(x > 10){
        cout<< "Get out kid";
    }
    else{
        cout<< "how did you reached us bro";
    }
    int y;
    cout<< "\nEnter the day of the week :";
    cin>> y;
    switch (y)
    {
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wednesday";
        break;
    case 4:
        cout<<"Thursday";
        break;
    case 5:
        cout<<"Friday";
        break;
    case 6:
        cout<<"Saturday";
        break;
    case 7:
        cout<<"Sunday";
        break;
    case '?':
        cout<<"Its between Monday and Sunday";
        break;
    default:
        cout<< "Invalid input";
        break;
    
    }
    */
    double x,y,z;
    char opr;
    cout<< "****************Calculator****************";
    cout<< "\nEnter your 1st number: ";
    cin>> x;
    cout<< "\nEnter your second number: ";
    cin>> y;
    cout<<"\nEnter your operator + - * / ";
    cin>>opr;

    switch (opr){
    case '+':
        cout<< " Here is the sum" << x+y;
        break;
    case'-':
        cout<< "Here is the difference" << x-y;
        break;
    case '*':
        cout << "Here is the product" << x*y;
        break;
    case '/':
        cout << "Here is the division" << x/y;
        break;
     default:
        cout <<"Invalid input ";
        break;
     }
    cout<< "\n****************Closing Calculator*****************"   ; 
}