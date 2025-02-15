#include <iostream>
#include <ctime>
using namespace std;


char getPlayerchoice(){
    char player;
    do{
        cout<<"Choose one of the following: \n";
        cout<<"'r' for Rock\n";
        cout<<"'p' for Paper\n";
        cout<<"'s' for Scissors\n";
        cin>>player;
    }while(player != 'r' && player != 'p' && player != 's');

}

void showchoice(char choice){
    switch(choice){
        case 'r': cout<<"Rock\n";
            break;
        case 'p': cout<<"Paper\n";
            break;
        case 's': cout<<"Scissors\n";
            break;
        default: 
        break;
    }
        
}

char getComputerchoice(){
    srand(time(0));
    int num = (rand()% 3)+1; 
    switch (num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }   
}

void compare(char player, char computer, int &countp, int &countcomp, int &tie){
    
    if(player == computer){
        cout<<"It's a tie!\n";
        tie++;
    }
    else if((player == 'r'&& computer =='p') ||
            (player == 'p'&& computer == 's')||
            (player == 's'&& computer == 'r')){
                cout<<"You Lost!\n";
                countcomp++;
            }
    else {cout<<"You Win!\n";
            countp++;}
            
    }
   




int main(){
    char decision;
    int countp=0, countcomp=0, tie=0;
    do{
        char player, computer;
        cout<<"         Rock Paper Scissors Game\n\n\n";
        player = getPlayerchoice();
        cout<<"You chose: ";
        showchoice(player);
        computer = getComputerchoice();
        cout<<"Computer chose: ";
        showchoice(computer);
        compare(player, computer,countp, countcomp, tie);
        cout<<"Do you want to play again? (Y/y): ";
        cin>>decision;

    }while(decision =='Y' || decision =='y');
    cout<<"Won "<< countp<<endl;
    cout<<"Lost "<< countcomp<<endl;
    cout<<"Tied "<< tie<<endl;
    cout<<"Thank you for playing\n";
    return 0;
}