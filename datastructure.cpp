#include <iostream>

using namespace std;
int main()
{
    // Array is a data structure that can hold multiple values 

    // We declare an array and assign them strings and doubles and different data types
    string bmws[] = {"M3","M4","M5"};
    cout<<bmws[0];
    cout<<bmws[1];
    cout<<bmws[2];
    
    double numbmws[4];
    numbmws[0] = 5;
    numbmws[1] = 6;
    numbmws[2] = 7;
    numbmws[3] = 4;
    cout<<'\n'<<numbmws[0];
    cout<<'\n'<<numbmws[1];
    cout<<'\n'<<numbmws[2];
    cout<<'\n'<<numbmws[3];
     
    // The sizeof() function in C++ determines the size of a varible,datatype,class,object in bytes 
    cout<< sizeof(numbmws[0]) << '\n'<< sizeof(numbmws[2])<< '\n'<<sizeof(numbmws[3]);


}