#include <iostream>
using namespace std;

double square(double length);

int main()
{
    double length = 5;
    double area = square(length);
    cout<< "Area is "<< area;
    return 0;

}
double square(double length){
    return length*length;
}