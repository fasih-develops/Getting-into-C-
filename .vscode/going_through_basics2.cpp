#include <iostream>
using namespace std;
int main()
{
    //Nested loops
   
    for(int i=5;i>=1;i--){
        for(int j=1; j<=i; j++){
            cout<< "*";
        }
        cout<<'\n';
    }


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