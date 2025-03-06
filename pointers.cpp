#include <iostream>
using namespace std;


#include <iostream>
using namespace std;

int main() {
    int *number = nullptr, n;

    cout << "Enter how many numbers you want to sort: ";
    cin >> n;
    number = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter numbers: ";
        cin >> number[i];
    }

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (number[j] > number[j + 1])
                swap(number[j], number[j + 1]); // No need for temp variable

    for (int i = 0; i < n; i++)
        cout << number[i] << " ";

    delete[] number;
    return 0;
}

//Nullptr
/*
int main(){
    int *ptr = nullptr;
    int x = 123;
    ptr = &x;

    if (ptr == nullptr){
        cout<<"Not assigned"<<'\n';
        cout<<ptr;
    } else{
        cout<<"Yes";
        cout<<ptr<<'\n';
        cout<<*ptr;
    }
    return 0;
}*/



//Basics
/*
int main(){
    string name = "AL";
    string *pName = &name; // Stores the memory address of the variable
    cout<< *pName<<'\n'; //Outputs the value inside the variable
    cout<< pName<<'\n'; // Outputs the memory address of the variable 
    return 0;
}*/
