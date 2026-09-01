#include <iostream>
using namespace std;
int main()
{
    string questions[] = {
        {"Who created the C++ language? "},
        {"When was the C++ language created? "},
        {"What is the predecessor of C++? "},
        {"Is the earth flat? "}
    };

    string options[][4] = {
        {"A. Guido van rossum","B. Bjarne storstrup","C. Haris Ali","D. Mark Zuckerberg"},
        {"A. 1957","B. 1967","C. 1977","D. 1985"},
        {"A. C","B. C++","C. C#","D. C--"},
        {"A. Yes","B. No","C. Maybe","D. none"}
    };

    int size = sizeof(questions)/sizeof(questions[0]);
    int size2 = sizeof(options[0])/sizeof(options[0][0]);
    char answerkey[] = {'B','D','B','B'};
    char guess;
    int score=0;    
    for (int i = 0; i < size; i++)
    {
        cout<<"\n**********************************";
        cout<<'\n'<<questions[i];
        cout<<"\n**********************************";
        for (int j = 0; j < size2; j++)
        {
            cout<<"\n"<<options[i][j];
        }
        cout<<"\n";
        cin>> guess;
        guess =toupper(guess);
        if (guess==answerkey[i])
        {
            cout<<"CORRECT\n";
            score ++;
        }else{
            cout<<"WRONG";
            cout<<"\nAnswer: "<<answerkey[i]<<'\n';
        }
        
    }
    cout<<"Your score is : "<<score;
    
}