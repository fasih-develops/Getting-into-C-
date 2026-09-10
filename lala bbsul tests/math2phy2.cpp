#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string questions[] = {

    };
    string options[][4] = {

    };
    char answerkey[] = {

    };
    char guess;
    int score = 0;
    int size = sizeof(questions)/sizeof(questions[0]);
    int size2 = 4;
    for(int i = 0; i<size; i++){
        cout<<"*************************";
        cout<<questions[i];
        cout<<"*************************";

        for(int j = 0; j<size2; j++){
        cout<<'\n'<<options[i][j];
    }
    cout<<"\n";
    cin>>guess;
    if(guess==answerkey[i]){
        cout<<"\nCORRECT";
        score++;
    }else{
        cout<<"WRONG!";
    }
    }
    cout<<"# of questions: "<<size;
    cout<<"Correct answers: "<<score;
}