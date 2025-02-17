#include <iostream>
#include <iomanip>
using namespace std;

double deposit(){
    double amount = 0;
    cout<<"Enter the amount to deposit: ";
    cin>>amount;
    if(amount>0){
        return amount; 
    } else {cout<<"Invalid amount!\n";
            return 0;}
    
}


double withdraw(double balance){
    double amount = 0;
    cout<<"Enter the amount you would like to withdraw: ";
    cin>>amount;
    if(amount>balance){
        cout<<"Insufficient funds.\n";
        return 0;
    }else if (amount<0){
        cout<<"Invalid amount!\n";
        return 0;
    }else return amount;
}
    


void showBalance(double balance){
    cout<<"Your balance is: $ "<<setprecision(2)<<fixed<<balance<<"\n\n";
}



int main(){
    double sum = 0;
    int input = 0;
    cout<<"***********  Welcome to your account!    ***********\n\n";
    
    do{ 
        cout<<"What would you like to do?\n\n";
        cout<<"1 for Deposit.\n";
        cout<<"2 for Withdrawal.\n";
        cout<<"3 for Balance.\n";
        cout<<"4 for Exit.\n";
        cin>>input;
        cin.clear();
        fflush(stdin);
    
        switch(input){
            case 1: sum += deposit();
                    showBalance(sum);
                break;

            case 2: sum -= withdraw(sum);
                    showBalance(sum);
                break;
            case 3: showBalance(sum);
                break;
            case 4: cout<<"Thank you for the transaction!\n";
            break;

            default: cout<<"Invalid choice! Try again.\n\n";
            break;
        }
    }while (input!=4);
    return 0;

}