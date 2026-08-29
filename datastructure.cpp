#include <iostream>

using namespace std;
double gettotal(double prices[],int size);
int searcharray(int array[],int sizej, int element);
void sortarray(int nums[],int size);
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
    

    // searching for a specific integer in a given array using simple for loop condition sizeof operator and function

    int index,mynum,sizej;
    int nums[] = {1,2,3,4,5,6,7,8,9,10};
    sizej = sizeof(nums)/sizeof(nums[0]);
    cout<<"\nEnter a number to search for in the given array 1-10: ";
    cin>>mynum;
    index = searcharray(nums,sizej,mynum);
    if(index!=-1){
        cout<<"\nYour number "<<mynum<<" was found at the index: "<<index;
    }else{
        cout<<"\nYour number wasn't found in the given array ";
    }

    // sorting an array through using bubble sort algorithm
    
    int nums[] = {7,3,4,6,8,9,10,2,1,5};
    int size = sizeof(nums)/sizeof(nums[0]);
    sortarray(nums,size);

    for(int element: nums){
        cout<<element<<" ";
    }     



}
double gettotal(double prices[], int size){
    double total = 0;
    for(int i = 0; i<size;i++){
        total += prices[i];
    }
    return total;
}
int searcharray(int array[],int sizej, int element){
    for(int i = 0;i<sizej;i++){
        if(array[i]==element){
            return i;
        }
            
    }
    return -1;
}
void sortarray(int nums[],int size){
    int temp;
    for(int i =0;i<size-1;i++){
        for(int j=0;j<size-1;j++){
            if(nums[j]>nums[j+1]){
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
}