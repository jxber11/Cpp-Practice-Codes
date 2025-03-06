#include <iostream>
using namespace std;


//Passing structs as an argument, used memory address reference to change the actual value in the memory

/*
struct Car{
    string model;
    int year;
    string color;
};

void paintCar(Car &a,string color){
    a.color = color;
}

void printCar(Car a){
    cout<<a.model<<'\n';
    cout<<a.year<<'\n';
    cout<<a.color<<'\n'; 
}

int main(){
    Car car1, car2;

    car1.model = "Rav4";
    car1.year = 2024;
    car1.color = "Silver";
    
    car2.model = "Civic";
    car2.year = 2024;
    car2.color = "Blue";
    
    paintCar(car1, "Black");

    printCar(car1);
    cout<<'\n';
    printCar(car2);

    return 0;
    
}*/



//Structs (Important)

/*
struct student{ // make a user-defined datatype that can be used to 
    string name;
    int age;
    double gpa;
};// must use semicolon for struct
int main(){
     
    student student1;
    cout<<"Enter student's name: ";
    getline(cin, student1.name);
    student1.age = 23;
    student1.gpa = 3.257;
    
    cout<<"Name is "<<student1.name<<'\n';
    cout<<"Age is "<< student1.age;

    return 0;
}*/



//Function template
/*
template<typename T, typename U> // Declare how many datatypes will be inside a function
                    
                    //Here, T is one kind of datatype and U is another
auto max(T x, U y){ // auto determines the datatype to return automatically and returns that datatype
    return (x>y)? x : y; // Ternary 
}
int main(){
    cout<< max(20, 30.5);
}*/



//Recursion
/*
int factorial(int num){
    if( num > 1){
        return num* factorial(num-1); // as 6 is the num, 6 * factorial(6-1) then the function starts again
                                      // and 5 is greater than 1 so, 5 * factorial (5-1)
                                      // thus 6 * 5 * 4 * 3 * 2. don't need to multiply with 1    
}else return 1;
}
int main(){
    cout<<"factorial is: "<< factorial(6);
    return 0;
}*/



//Input in dynamic memory, sorting, new concept of loop, usage of pointer
/*
int main(){
    
    int *number = nullptr, n; // *number = nullptr denotes that the pointer is not pointing to any memory address


    cout<<"Enter how many numbers you want to sort: ";
    cin>>n;
    number = new int [n];  //'new' allocates memory 
    
    
    for (int i = 0; i < n; i++){
        cout<<"Enter numbers: ";
        cin>>number[i];
    }
    
    for (int i = 0; i < n -1; i++)
        for(int j = 0; j < n -1 -i; j++){
            int temp = 0;
            if(number[j]>number[j+1]){              //bubble sort
                temp = number[j];
                number[j] = number[j+1];
                number[j+1] = temp;
            }
        }
    
    for (int i = 0; i < n; i++) // no need for curly brackets if the loop is of one line of code
        cout<<number[i]<<" "; 
    
    delete[] number; // deletes the allocated memory, prevention from memory leak
    return 0;

}*/



//Taking input from a user, placing in heap memory, and deleting it at the end to prevent memory leak
/*
int main(){
    char *pGrades = NULL;
    int size;

    cout<<"How many grades do you want to enter? : ";
    cin>>size;

    pGrades = new char[size];

    for(int i = 0; i < size; i++){
        cout<<"Enter the grade for # "<< i+1<<" : ";
        cin>>pGrades[i];
    }
    for (int i = 0; i < size; i++){
        cout<<pGrades[i]<<" ";
    }
    delete[] pGrades;
}*/



//Memory leak, dynamic memory
/*
int main(){
    int *pNum = nullptr;

    pNum = new int; // 'new' creates a memory allocation in heap
                    // heap is where memory can be dynamic; created according to needed
                    // 

    *pNum = 21;
    cout<<"Address: "<<pNum<<'\n';
    cout<<"Value: "<<*pNum<<'\n';
    
    delete pNum; // delete is used to free up the memory at pNum address 
                // to prevent memory leaks

    cout<<'\n'<<pNum;
    cout<<'\n'<<*pNum;
}*/




//Sorting and squaring each number
/*
int main(){
    int array[] = {1, -9, 6, 5, -2, 0, 7, 4, 3};
    int size = sizeof(array)/sizeof(array[0]);

    int temp = 0;
    for (int i = 0; i < size -1; i++){
        for(int j = 0; j < size -1 -i; j++){
            if(array[j]> array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        
        }

    }
    
    for(int i = 0; i <size; i++){
        cout<< array[i] * array[i];
        cout<<' ';
    }
    return 0;
        
}*/
    
