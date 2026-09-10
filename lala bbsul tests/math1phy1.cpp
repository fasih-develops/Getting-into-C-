#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string questions[] = {
    "Which of the following is a natural number?",

    "Which of the following is an even number?",

    "Which of the following numbers is prime?",

    "Which of the following is a factor of 24?",

    "Which of the following is a multiple of 7?",

    "Which of the following numbers is a composite number?",

    "Which of the following is NOT a whole number?",

    "How many positive factors does 18 have?",

    "Which of the following statements about -7 is correct?",

    "Which of the following numbers is both even and composite?",

    "Which of the following numbers is both a multiple of 6 and a factor of 60?",

    "If n is an odd positive integer, which of the following must be true?",

    "Which of the following pairs contains one prime number and one composite number?",

    "Which of the following numbers has exactly 6 positive factors?",

    "If a number is divisible by both 4 and 6, which of the following must divide the number?",
    // =========================
    // EASY — 5 QUESTIONS
    // =========================

    "Which of the following is a physical quantity?",

    "What is the SI unit of length?",

    "Which of the following is a scalar quantity?",

    "How many significant figures are in 0.00520?",

    "Which of the following is written in scientific notation?",


    // =========================
    // NORMAL — 5 QUESTIONS
    // =========================

    "Which of the following is a derived quantity?",

    "Convert 2.5 km into meters.",

    "What is 0.00045 written in scientific notation?",

    "A measurement is 12.678 m. Rounded to 3 significant figures, what is it?",

    "Which of the following is a vector quantity?",


    // =========================
    // MIXED — 5 QUESTIONS
    // =========================

    "A car travels 72 km in 2 hours. What is its average speed in m/s?",

    "Which of the following pairs contains only fundamental SI quantities?",

    "The value 3.746 x 10^5 is approximated to 3 significant figures. What is the result?",

    "A quantity has a value of 5000 mm. What is its value in meters?",

    "Which statement correctly distinguishes a scalar from a vector?"

};
    string options[][4] ={

    // EASY 1
    {"0", "1", "-1", "1.5"},

    // EASY 2
    {"13", "21", "28", "35"},

    // EASY 3
    {"21", "29", "35", "39"},

    // EASY 4
    {"5", "6", "7", "8"},

    // EASY 5
    {"12", "21", "25", "30"},


    // NORMAL 1
    {"17", "23", "27", "31"},

    // NORMAL 2
    {"0", "-3", "4", "12"},

    // NORMAL 3
    {"4", "5", "6", "8"},

    // NORMAL 4
    {"It is a natural number", "It is a negative integer",
     "It is a whole number", "It is a positive integer"},

    // NORMAL 5
    {"2", "9", "15", "17"},


    // MIXED 1
    {"6", "10", "12", "15"},

    // MIXED 2
    {"n is divisible by 2", "n is divisible by 3",
     "n is not divisible by 2", "n is always prime"},

    // MIXED 3
    {"2 and 9", "3 and 11", "5 and 13", "7 and 21"},

    // MIXED 4
    {"12", "18", "20", "25"},

    // MIXED 5
    {"2", "4", "6", "12"},

    // EASY 1
    {"Mass", "Beauty", "Temperature feeling", "Color preference"},

    // EASY 2
    {"Meter", "Kilogram", "Second", "Newton"},

    // EASY 3
    {"Speed", "Velocity", "Mass", "Force"},

    // EASY 4
    {"2", "3", "4", "5"},

    // EASY 5
    {"45000", "4.5 x 10^4", "0.45 x 10^5", "450 x 10^2"},


    // NORMAL 1
    {"Time", "Length", "Area", "Mass"},

    // NORMAL 2
    {"25 m", "250 m", "2500 m", "25000 m"},

    // NORMAL 3
    {"4.5 x 10^-4", "45 x 10^-5", "0.45 x 10^-3", "4.5 x 10^4"},

    // NORMAL 4
    {"12.6 m", "12.7 m", "12.68 m", "13.0 m"},

    // NORMAL 5
    {"Mass", "Temperature", "Distance", "Acceleration"},


    // MIXED 1
    {"10 m/s", "20 m/s", "36 m/s", "72 m/s"},

    // MIXED 2
    {"Length, mass, time", "Force, area, velocity",
     "Speed, energy, force", "Density, pressure, power"},

    // MIXED 3
    {"3.74 x 10^5", "3.75 x 10^5",
     "3.746 x 10^5", "3.70 x 10^5"},

    // MIXED 4
    {"0.5 m", "5 m", "50 m", "500 m"},

    // MIXED 5
    {"A scalar has magnitude only; a vector has magnitude and direction",
     "A scalar has direction only; a vector has magnitude only",
     "Both scalars and vectors have direction",
     "Both scalars and vectors have magnitude only"}
};

    char answerkey[] = {
    'B', 'C', 'B', 'B', 'B',
    'C', 'B', 'C', 'B', 'C',
    'A', 'C', 'A', 'B', 'C',

    'A', 'A', 'C', 'B', 'B',
    'C', 'C', 'A', 'B', 'D',
    'B', 'A', 'B', 'B', 'A'
};
    char guess;
    int score = 0;
    int size = sizeof(questions)/sizeof(questions[0]);
    int size2 = 4;
    for(int i =0;i<size;i++){
        cout<<"*******************************";
        cout<<'\n'<<questions[i];
        cout<<"\n*******************************";
        for (int j = 0; j < size2; j++)
        {
            cout<<'\n'<<options[i][j];
        }
        cout<<"\n";
        cin>>guess;
        guess = toupper(guess);
        if(guess == answerkey[i]){
            cout<<"CORRECT\n";
            score++;
        }else{
            cout<<"wrong\n";
        }
        
    }
    cout<<"# of questions: "<<size;
    cout<<"\nCorrect answers: "<<score;
}