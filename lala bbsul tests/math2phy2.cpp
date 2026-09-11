#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string questions[] = {
        // Easy
    "What is 7 + 5?",
    "What is 9 - 4?",
    "What is 3 + 8?",
    "What is 15 - 7?",
    "What is 6 + 6?",

    // Normal
    "What is 12 x 4?",
    "What is 81 / 9?",
    "What is 15 x 3?",
    "What is 144 / 12?",
    "What is 23 x 2?",

    // Mixed (order of operations)
    "What is 2 + 3 x 4?",
    "What is (6 + 2) x 3?",
    "What is 10 - 2 x 3?",
    "What is 20 / 4 + 3?",
    "What is 5 x (4 - 2)?",

    // Easy
    "What is the dimensional formula of velocity?",
    "What is the dimensional formula of area?",
    "What is the dimensional formula of volume?",
    "What is the dimensional formula of mass?",
    "What is the dimensional formula of time?",

    // Normal
    "What is the dimensional formula of force?",
    "What is the dimensional formula of density?",
    "What is the dimensional formula of pressure?",
    "What is the dimensional formula of energy (work)?",
    "What is the dimensional formula of acceleration?",

    // Mixed
    "Which of the following equations is dimensionally consistent: v = u + at?",
    "The principle of dimensional homogeneity states that terms added/subtracted in an equation must have:",
    "If [F] = [M][L][T]^-2, what is the dimensional formula of impulse (F x t)?",
    "Using dimensional analysis, find the unknown power x in: [Energy] = [M]^x[L]^2[T]^-2",
    "Which physical quantity has the dimensional formula [M][L]^2[T]^-3?"
    };
    string options[][4] = {
        // Easy
    {"10", "11", "12", "13"},
    {"4",  "5",  "6",  "7"},
    {"9",  "10", "11", "12"},
    {"6",  "7",  "8",  "9"},
    {"10", "11", "12", "13"},

    // Normal
    {"44", "46", "48", "50"},
    {"7",  "8",  "9",  "10"},
    {"40", "42", "45", "48"},
    {"10", "11", "12", "13"},
    {"44", "45", "46", "48"},

    // Mixed
    {"20", "14", "24", "11"},
    {"20", "22", "24", "26"},
    {"4",  "24", "8",  "6"},
    {"8",  "7",  "5",  "10"},
    {"8",  "10", "12", "20"},

    // Easy
    {"[M][L][T]^-1", "[L][T]^-1", "[L][T]^-2", "[M][L][T]^-2"},
    {"[L]", "[L]^2", "[L]^3", "[L]^-2"},
    {"[L]", "[L]^2", "[L]^3", "[L]^-3"},
    {"[M]", "[M]^2", "[M][L]", "[M][T]"},
    {"[T]", "[T]^-1", "[T]^2", "[M][T]"},

    // Normal
    {"[M][L][T]^-1", "[M][L][T]^-2", "[M][L]^2[T]^-2", "[M][L]^-1[T]^-2"},
    {"[M][L]^-3", "[M][L]^3", "[M][L]^-1[T]^-2", "[M][L]^2"},
    {"[M][L]^-1[T]^-2", "[M][L][T]^-2", "[M][L]^2[T]^-2", "[M][L]^-2[T]^-1"},
    {"[M][L][T]^-2", "[M][L]^2[T]^-2", "[M][L]^-1[T]^-2", "[M][L]^2[T]^-1"},
    {"[L][T]^-1", "[L][T]^-2", "[M][L][T]^-2", "[L]^2[T]^-2"},

    // Mixed
    {"v", "u", "at", "All terms have same dimensions"},
    {"The same dimensions", "Different dimensions", "The same units only", "No fixed relation"},
    {"[M][L][T]^-1", "[M][L][T]^-2", "[M][L]^2[T]^-1", "[M][L]^-1[T]^-1"},
    {"x = 1", "x = 2", "x = 0", "x = -1"},
    {"Power", "Force", "Energy", "Momentum"}

    };
    char answerkey[] = {
        // Easy
    'C', 'B', 'B', 'C', 'C',
    // Normal
    'C', 'C', 'C', 'C', 'C',
    // Mixed
    'B', 'C', 'A', 'A', 'B',

    // Easy
    'B', 'B', 'C', 'A', 'A',
    // Normal
    'B', 'A', 'A', 'B', 'B',
    // Mixed
    'D', 'A', 'A', 'A', 'A'
    };
    char labels[] = {'A','B','C','D'};
    char guess;
    int score = 0;
    int size = sizeof(questions)/sizeof(questions[0]);
    int size2 = 4;
    for(int i = 0; i<size; i++){
        cout<<"*************************";
        cout<<'\n'<<questions[i];
        cout<<"\n*************************";

        for(int j = 0; j<size2; j++){
        cout<<'\n'<<labels[j]<<") "<<options[i][j];
    }
    cout<<"\n";
    cin>>guess;
    guess = toupper(guess);
    if(guess==answerkey[i]){
        cout<<"CORRECT\n";
        score++;
    }else{
        cout<<"WRONG!\n";
    }
    }
    cout<<"# of questions: "<<size;
    cout<<"Correct answers: "<<score;
}