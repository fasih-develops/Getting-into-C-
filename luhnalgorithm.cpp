#include <iostream>
using namespace std;

int getdigit(string cardnumber);
int sumodddigits(string cardnumber);
int sumevendigit(string cardnumber);

int main()
{
    string cardnumber;
    int result = 0;
    cout<<"Enter your card number: ";
    cin>>cardnumber;
    result = sumevendigit(cardnumber) + sumodddigits(cardnumber);


}
int getdigit(int const number){
    retun number 
}
int sumodddigits(string cardnumber){
    
}
int sumevendigit(string cardnumber){
    int sum = 0;
    for(int i = cardnumber.size();i>=0;i-=2){
        sum += getdigit((cardnumber[i]-'0')*2);

    }
}