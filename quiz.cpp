#include <iostream>
using namespace std;

int main(){
    cout<<"             C++ Quiz\n";
    string question [] = {"1. Which of the following is a correct variable name in C++?\n",
                          "2. Which keyword is used to define a function in C++?\n",
                          "3. What is the size of a double in C++?\n",
                          "4. What is the default value of an uninitialized int variable in C++?\n"};
    
    string options[][4] = {{"(A) 1var ", "(B) my_var" , "(C) int", "(D) class "},
                           {"(A) func",  "(B) define",  "(C) void", "(D) function"},
                           {"(A) 8 bytes", "(B) 2 bytes","(C) 4 bytes", "(D) 16 bytes"},
                           {"(A) 0 ", "(B) Garbage value" , "(C) NULL ", "(D) Compiler error" }};


    char answers[] = {'B', 'C', 'A', 'B'};
    int sizequestions = sizeof(question)/ sizeof(question[0]);
    int sizeoptions = sizeof(options[0])/ sizeof(options[0][0]);
    char guess;
    int score = 0;

    for(int i = 0; i < sizequestions; i++){
        cout << question[i] << endl;
        for(int j = 0; j < sizeoptions; j++ ){
            cout << options[i][j] << endl;
        }
    cin >> guess;
    guess = toupper(guess);
    if(guess == answers[i]){
        cout << "Correct\n";
        score++;
    }
    else {cout << "Wrong\n";
         cout << "Answer is: " << answers[i] << endl;}
    }
    int percentage = (score/(double(sizequestions))) * 100;
    cout << "You have correctly answered " << score << " questions.\n";
    cout << "Score is: " << percentage << " %.\n";
    return 0;
}