#include <iostream>
#include <ctime>
using namespace std;

void happy(string boi, int age){
    cout<< "Happy birthday to "<< boi;
    cout<< "\nHappy birthday dear "<< boi;
    cout<< "\nHappy "<< age << "th birthday dear "<< boi;
}
int main()
{
    //Nested loops
   
    for(int i=5;i>=1;i--){
        for(int j=1; j<=i; j++){
            cout<< "*";
        }
        cout<<'\n';
    }
    string boi = "hellory";
    int age = 18;
    happy(boi,age);
    // function = a block of reusable code
    // void means returns nothing
    string boi = "hellory";
    int age = 18;
    happy(boi,age);

    //practicing
    /*
    int x,y;
    do
    {
        cout<< "Enter a positive number: ";
        cin>> x;
    } while (x<0);
    cout<< "enter an even number: ";
    cin>> y;
    while (y % 2 != 0)
    {
        cout<< "enter an even number: ";
        cin>> y;
    }
    
    for(int i=5; i>=1; i--){
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        cout << endl;
    }
    */
    
}
