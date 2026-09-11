#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string questions[] = {
    // ---------- EASY (5) ----------
    "Which of the following is a proper fraction?",                     // 1
    "Identify the improper fraction.",                                   // 2
    "Convert the mixed fraction 2 1/3 to an improper fraction.",         // 3
    "Which fraction is equivalent to 1/2?",                              // 4
    "Simplify the fraction 4/8.",                                        // 5

    // ---------- NORMAL (5) ----------
    "Add and simplify: 1/4 + 1/4",                                       // 6
    "Subtract and simplify: 5/6 - 1/6",                                  // 7
    "Multiply: 2/3 x 3/4",                                               // 8
    "Divide: 3/4 ÷ 1/2",                                                 // 9
    "Convert 3/4 to a decimal.",                                         // 10

    // ---------- MIXED / HARD (5) ----------
    "Which of these fractions is NOT equivalent to 2/3?",                // 11
    "Convert 2.75 into a mixed fraction.",                               // 12
    "Simplify: 18/24",                                                   // 13
    "Add: 1 1/2 + 2 1/3",                                                // 14
    "Multiply and simplify: 3/5 x 5/9",                                   // 15

    // ---------- EASY (5) ----------
    "What is the smallest value that can be measured accurately by a measuring instrument called?",   // 1
    "Which instrument is used to measure very small lengths like the diameter of a wire?",             // 2
    "The main scale of a Vernier caliper is usually graduated in what unit?",                           // 3
    "What does 'accuracy' in a measurement refer to?",                                                  // 4
    "What does 'precision' in a measurement refer to?",                                                 // 5

    // ---------- NORMAL (5) ----------
    "What is the least count of a standard Vernier caliper?",                                           // 6
    "What is the least count of a standard screw gauge?",                                                // 7
    "The difference between the measured value and the true value is called?",                          // 8
    "Which error occurs due to faulty calibration of an instrument?",                                    // 9
    "The formula for least count of a Vernier caliper is:",                                              // 10

    // ---------- MIXED / HARD (5) ----------
    "Percentage error is calculated as:",                                                                 // 11
    "If the true value is 10 cm and measured value is 9.8 cm, what is the percentage error?",             // 12
    "Zero error in a screw gauge arises when:",                                                            // 13
    "Which of these is a random error?",                                                                   // 14
    "The pitch of a screw gauge is 1 mm and it has 100 divisions on the circular scale. Find its least count." // 15
    };
    string options[][4] = {
    // Easy
    {"5/3", "7/7", "2/5", "9/4"},              // 1
    {"3/4", "9/5", "1/2", "4/9"},              // 2
    {"7/3", "6/3", "5/3", "8/3"},              // 3
    {"2/5", "3/6", "4/9", "5/8"},              // 4
    {"1/4", "2/4", "1/2", "3/4"},              // 5

    // Normal
    {"2/4", "1/2", "1/4", "3/4"},              // 6
    {"4/6", "2/3", "1/3", "5/6"},              // 7
    {"6/12", "1/2", "5/7", "3/4"},             // 8
    {"3/8", "3/2", "2/3", "1 1/4"},            // 9
    {"0.25", "0.5", "0.75", "0.8"},            // 10

    // Mixed/Hard
    {"4/6", "6/9", "8/12", "10/12"},           // 11
    {"2 3/4", "2 1/4", "2 7/10", "2 1/2"},     // 12
    {"3/4", "2/3", "4/5", "9/12"},             // 13
    {"3 5/6", "3 1/2", "4 1/6", "3 2/5"},      // 14
    {"15/45", "1/3", "3/9", "2/5"},             // 15
    // Easy
    {"Least count", "Zero error", "Percentage error", "Range"},                                    // 1
    {"Meter scale", "Vernier caliper", "Measuring tape", "Protractor"},                             // 2
    {"Millimeters", "Centimeters", "Meters", "Inches"},                                             // 3
    {"Closeness to the true value", "Repeatability of readings", "Instrument's smallest reading", "Number of decimal places"}, // 4
    {"Closeness to the true value", "Repeatability of readings", "Instrument's smallest reading", "Number of decimal places"}, // 5

    // Normal
    {"0.1 mm", "0.01 mm", "0.001 mm", "1 mm"},                                                      // 6
    {"0.1 mm", "0.01 mm", "0.001 mm", "1 mm"},                                                       // 7
    {"Error", "Deviation", "Uncertainty", "Range"},                                                  // 8
    {"Random error", "Systematic error", "Gross error", "Parallax error"},                           // 9
    {"MSD - VSD", "MSD x VSD", "MSD + VSD", "MSD / VSD"},                                            // 10

    // Mixed/Hard
    {"(True value / Error) x 100", "(Error / True value) x 100", "(Error / Measured value) x 100", "(Measured value / Error) x 100"}, // 11
    {"1%", "2%", "5%", "10%"},                                                                        // 12
    {"The zero of circular scale does not coincide with the reference line", "The pitch is incorrect", "The main scale is bent", "The instrument is too old"}, // 13
    {"Zero error", "Parallax error while reading", "Wrong calibration", "Faulty manufacturing"},       // 14
    {"0.001 mm", "0.01 mm", "0.1 mm", "1 mm"}
    };
    char answerkey[] = {
    // Easy
    'C', 'B', 'A', 'B', 'C',
    // Normal
    'B', 'B', 'B', 'B', 'C',
    // Mixed / Hard
    'D', 'A', 'A', 'A', 'B',   // <-- Q13 and Q14 fixed: B->A, B->A

    // Measurement — unchanged, all correct
    'A', 'B', 'A', 'A', 'B',
    'A', 'B', 'A', 'B', 'A',
    'B', 'B', 'A', 'B', 'B'
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
    cout<<"\nCorrect answers: "<<score;
}