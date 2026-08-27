#include <iostream>

using namespace std;
double gettotal(double prices[],int size);

int main()
{
    // Array is a data structure that can hold multiple values 

    // We declare an array and assign them strings and doubles and different data types
    double num = 4;                   // 8 bytes of memory
    char chr1 = 'a';                  // char is gets stroed into 1 byte

    string chr2 = "i";                // string doesn't have a fixed byte size

    int num2 = 1;                     // int 4 bytes
    long long num3 = 2;               // long long 8 bytes
    long double num4 = 3.14;          // long double 8-16 bytes

    char bmws[] = {'a','b','c'};
    
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
    cout<<'\n'<<numbmws[3]<< '\n';
     
    // The sizeof() function in C++ determines the size of a varible,datatype,class,object in bytes 
    cout<< sizeof(bmws)/sizeof(char) << " Elements in the char array";

    // using sizeof operater to print out strings where we don't know the size of a string array

    string ba[] = {"Burka avenger","Kabaddi khan","Asshu","Immo","Muli"};
    for(int i=0; i<sizeof(ba)/sizeof(string); i++){
        cout<<'\n'<<ba[i];

    }
    
    //for each loop is a loop that eases the traversal over an iterable dataset
    for(string b: ba){
        cout<<'\n'<<b;
        
    }

    double prices[] = {78.34,47.03,84.93};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = gettotal(prices,size);
    cout<<'\n'<<"$"<<total;
    return 0;

}
double gettotal(double prices[], int size){
    double total = 0;
    for(int i = 0; i<size;i++){
        total += prices[i];
    }
    return total;
}