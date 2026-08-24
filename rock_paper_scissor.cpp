#include <iostream>

char getuserchoice();
char getcomputerchioce();
void showchioce(char choice);
void choosewinner(char player, char computer);

using namespace std;
int main()
{
    char player;
    player = getuserchoice();
    

}
char getuserchoice(){
    do
    {
        char player;
        cout<<"Rock , Paper , Scissor game! \n";
        cout<<"**************************";
        cout<<"\n \'r\' for rock";
        cout<<"\n \'p\' for paper";
        cout<<"\n \'s\' for scissor";
        cout<<"\nEnter your choice: ";
        cin>> player;
    }while(player != 'r' && player != 'p' && player != 's');
    return 0;
}
char getcomputerchioce(){
    return 0;
}
void showchioce(char choice){
    return;
}
void choosewinner(char player, char computer){
    return;
}