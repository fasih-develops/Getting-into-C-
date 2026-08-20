#include <iostream>
using namespace std;


//global variables
int num = 3;

namespace second{
    int num = 22;
}

// function declarations
void bakingpitza();
void bakingpitza(std::string topping);
void bakingpitza(std::string topping, std::string topping2);
double square(double length);
double cube(double length);
void happy(string boi, int age);
string concatstring(string string1, string string2);

int main()
{
    //local variable
    int num = 4;
    cout<< '\n'<< num;
    cout<< '\n'<<::num;
    cout<< '\n'<<second::num;
    
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
    string firstname = "Bhaiyya";
    string lastname = "vastaganahuiyya";
    string fullname = concatstring(firstname, lastname);
    cout<< "\nHello "<< fullname;

    //overloaded functions are fuctions with the same calling name but different set of parameters
    string topping = "pepperoni";
    string topping2 = "mamamia";
    bakingpitza(topping,topping2);
    return 0;
    

}

//ALL FUNCTIONS
void happy(string boi, int age){
    cout<< "\nHappy birthday to "<< boi;
    cout<< "\nHappy birthday dear "<< boi;
    cout<< "\nHappy "<< age << "th birthday dear "<< boi<< endl;
}
double square(double length){
    return length*length;
}
double cube(double length){
    return length*length*length;
}
string concatstring(string string1, string string2){
    return string1 + " " + string2;
}
void bakingpitza(){
    cout << endl <<"Here is your pizza";
}
void bakingpitza(std::string topping){
    cout << endl << "Here is your "<< topping<< " pizza";
}
void bakingpitza(std::string topping, std::string topping2){
    cout << endl<<"Here is your "<<topping2 << " and "<< topping <<  " pizza";
}