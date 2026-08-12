#include <iostream>
#include <vector>

using namespace std;
/*
// creating an alias for a data type
typedef std::vector<std::pair<std::string, int>> call;
typedef std::string ors;
//typedef is an old C++ keyword used to create an alias(another name) for an existing keyword
using u = int;
// using is a keyword used to create another name for an existing data type
*/
int main()
{
    /*
    ors champ = "jkfdkj";
    cout<< "lests go " << champ << '\n';
    u b = 20;
    // arithmatic operations

    //b=b+1;
    //b-=1;
    //b--;
    //b+=1;
    //b++;
    //b*=2;
    //b/=3;
    float remainder = b%3;
    cout << remainder;

    //Operator precedence in C++
    int sol = (9)*8+5/5+16-9;
    cout<<'\n'<< sol;

    //Implicit and explicit datatype conversion
    char x = 100;
    double bi = (int) 3.14;
    cout<< '\n'<< x;
    cout<< '\n'<< bi;
    */
   
    double x;
    string name;
    cout<< "enter your Marks of Matriculation : ";
    cin>> x;
    cout<< "enter your full name : ";
    getline(cin>>ws ,name);

    cout << "your name is : " << name << " your marks are : "<< x;



}
