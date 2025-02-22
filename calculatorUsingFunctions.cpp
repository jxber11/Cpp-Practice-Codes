#include <iostream>
#include <string>
using namespace std;

float sumOfnumbers(float a, float b){
    cout<<"The sum of the numbers are: "<<(a+b)<<". \n";
}
float subtractAfromB(float a, float b){
    cout<<"The difference between the numbers is: "<<(b-a)<<". \n";
}
float multiplyNumbers(float a, float b){
    cout<<"The product of the numbers are: "<<(a*b)<<". \n";
}
float divideAbyB(float a, float b){
    if((a && b) > 0 || (a && b) <0){
        cout<<"The quotient of A divided by B is: "<<(a/b)<<". \n";
    }else cout<<"0 cannot be divisor.\n";
    
}
float divideBbyA(float b, float a){
    if((a && b) > 0 || (a && b) <0){
        cout<<"The quotient of B divided by A is: "<<(b/a)<<". \n";
    }else cout<<"0 cannot be divisor.\n";
    
}
float squareOfnumbers(float a, float b){
    a = a*a;
    b = b*b;
    cout<<"The squares of the numbers are: "<<a<<" and "<<b<<". \n";
}


int main(){
    float a, b;
    int choice = 0;

    do{
        
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    cout<<"\nSelect the operation.\n";
    cout<<"1 for Addition.\n";
    cout<<"2 for Subtraction.\n";
    cout<<"3 for Multiplication.\n";
    cout<<"4 for Division. \n";
    cout<<"5 for square of both numbers. \n";

    cin>>choice;
        switch (choice)
        {
        case 1:
            sumOfnumbers(a, b);
            break;
        case 2: 
            subtractAfromB(a, b);
            break;
        case 3:
            multiplyNumbers(a, b);
            break;
        case 4:
            char user;
            cout<<"To divide 1st number by 2nd, Press A"<<endl;
            cout<<"To divide 2nd number by 1st, Press B"<<endl;
            cin>>user;
            if(user == 'A' || user == 'a'){
                divideAbyB(a, b);
                break;
            }
            else if(user == 'B' || user == 'b'){
                divideBbyA(b,a);
                break;
            }
        case 5:
            squareOfnumbers(a, b);
            break;
        default:
            break;
        }
        cout<<"\nDo you want to perform any other operations?\n";
        cout<<"Press any number to continue or 0 to exit. \n";
        cin>>choice;
    }while (choice !=0);
    cout<<"The program has ended!\n";
    return 0;
}