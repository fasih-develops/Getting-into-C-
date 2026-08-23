#include <iostream>
using namespace std;

void showbalance(double balance);
double withdraw(double balance);
double deposit();

int main()
{
    int choice;
    double balance = 123;
    do{
        cout<<"\n**************Banking app**************";
        cout<<"\n1- Show Balance";
        cout<<"\n2- Withdraw Money";
        cout<<"\n3- Deposit Money";
        cout<<"\n4- Exit";
        cout<<"\n Enter your choice : ";
        cin>>choice;
        switch (choice)
        {
        case 1: showbalance(balance);
            break;
        case 2: withdraw(balance);
            break;
        case 3: deposit();
            break;
        case 4: cout<<"Thanks for Banking Please visit us again! ";
            break;
        default: cout<< "Invalid choice";
            break;
        }
    }while(choice!= 4);
    cout<<"**************************************";
}
void showbalance(double balance){
    cout<<"Your balance is $"<< balance<< '\n';
}
double withdraw(double balance){
    return 0;
}
double deposit(){
    return 0;
}