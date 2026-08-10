#include <iostream>

using namespace std;
namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main()
{
    // Print outs
    std::cout << second::x<<"\n";
    cout<< "Hello world"<< '\n';
    cout<< "lets go\n";

    // int, float and double variables
    int x = 5;
    float y = 6.208;
    double sum = x+y;
    using namespace first;
    using namespace second;
    cout<< x;
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