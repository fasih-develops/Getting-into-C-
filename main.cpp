#include <iostream>
using namespace std;

int main()
{
    // Print outs
    cout<< "Hello world"<< '\n';
    cout<< "lets go";

    // int, float and double variables
    int x = 5;
    float y = 6.208;
    double sum = x+y;
    cout <<"\nthis is the sum "<<sum;
    
    //Chatacter and string
    char chamba = 'c';
    cout << '\n' <<chamba;
    string brooski = "\nfriday hello mate God blesss you";
    cout << "\nhello"<< brooski;

    //boolean function always returns answer in true or false
    bool a = true;
    bool b = false;

    //storing constants
    const int pi = 3.14519;
    const int radius = 3;
    int circum = 2 * pi * radius;
    
    return 0;
}