#include <iostream>
using namespace std;

double square(double length);
double cube(double length);
void happy(string boi, int age);

int main()
{
    //a function is a block of reusable code
    //void means returns nothing
    string boi = "Ali";
    int age = 18;
    happy(boi,age);
    // to return a double we use double as a function
    double length = 5;
    double area = square(length);
    cout<< "Area is "<< area << endl;
    double volume = cube(length);
    cout<< "volume is " << volume;
    return 0;

}
void happy(string boi, int age){
    cout<< "Happy birthday to "<< boi;
    cout<< "\nHappy birthday dear "<< boi;
    cout<< "\nHappy "<< age << "th birthday dear "<< boi<< endl;
}
double square(double length){
    return length*length;
}
double cube(double length){
    return length*length*length;
}