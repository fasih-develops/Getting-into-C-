#include <iostream>
using namespace std;

int searcharray(int array[], int size, int element);
int main()
{
    int nums[] = {1,2,3,4,5,6,7,8,9,10};
    int index,mynum,size;
    size = sizeof(nums)/sizeof(nums[0]);
    
    cout<<"Enter your number we are searching for in the array";
    cin>> mynum;
     
    index = searcharray(nums,size,mynum);
    if(index ==-1){
        cout<<"Your number wasn't found in the given array";
    }else{
        cout<<"Your number "<<mynum<<" was present at index: "<< index;
    }
    
}
int searcharray(int array[], int size, int element){
    for(int i=0;i<size;i++){
        if(array[i]==element){
            return i;
        }
    }
    return -1;
}