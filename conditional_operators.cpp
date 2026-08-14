#include <iostream>

using namespace std;
int main()
{
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
    
}