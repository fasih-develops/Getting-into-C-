#include <iostream>
#include <ctime>
using namespace std;

void happy(string boi, int age){
    cout<< "Happy birthday to "<< boi;
    cout<< "\nHappy birthday dear "<< boi;
    cout<< "\nHappy "<< age << "th birthday dear "<< boi;

double cube(double length){
    return length*length*length;
}
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
    // function = a block of reusable code
    // void means returns nothing
    string boi = "hellory";
    int age = 18;
    happy(boi,age);

    // to return a double we use double as a function
    double length = 5;
    double volume = cube(length);
    cout<< "here is the volume "<< volume;
    return 0;
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
