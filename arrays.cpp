#include <iostream>
using namespace std;


int main(){

    const double pi = 3.142;
    cout<< 45/ pi;


}
//Multidimentional Array
/*
int main(){
    string cars[][3]= {{"Corolla", "Rav4", "Highlander"},
                      {"Altima", "Skyline", "R34"},
                      {"Crv", "Odessey", "Hrv"}};

    int rows = sizeof(cars)/sizeof(cars[0]);
    int colums = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < colums; j++){
            cout<< cars[i][j]<<' ';
        }
        cout<<'\n';
    }return 0;
}*/




// Prints out the even and odd numbers in the array
/*
int main(){
    int array [] = {6, 9, 8, 7, 1, 2, 3, 4, 5, 10};
    int size = sizeof(array)/sizeof(array[0]);

    int evenArray[5];
    int oddArray [5];
    int odd = 0, even = 0;
    
    for (int i = 0; i < size; i++){    
        if(array[i] % 2 == 0){ //Compares for the first value of the array
            evenArray[even++] = array[i];  // Stores the value if the array[0] is even. 
                                           // Used even++ to not miss any index when storing
                                           // So it stores the first value
        }
        else{oddArray[odd++] = array[i]; }
    }
    cout<<"Even numbers: ";
    for (int i = 0; i<even; i++){ //even variable is used as we can get the total size of even numbers
        cout<<evenArray[i]<<' ';
    }
    cout<<"\nOdd numbers: ";
    for (int i = 0; i<odd; i++){ //odd variable is used as we can get the total size of odd numbers
        cout<<oddArray[i]<<' ';
    }
}*/



//Sum of an array integer values
/*
int main(){
    int numbers[] = {1, 3, 36, 5, 8, 78, 9};
    int sum = 0;
    for(int i = 0; i<sizeof(numbers)/ sizeof(numbers[0]); i++){
        sum += numbers[i];
    }
    cout<<"Sum is : "<<sum;
    return 0;

}*/



//Array input from user, doesn't print empty array values with .empty()
/*
int main(){
    string names[5];
    int size = sizeof(names)/sizeof(names[0]);
    string temp;

    for(int i = 0; i<size; i++){
        cout<<"Enter the name of cousin or 'q' to quit # "<<i+1<<": ";
        getline(cin, temp);
        if (temp=="q"){
            break;
        }
        else {names[i]=temp;}
    }
    for (int i =0; !names[i].empty();i++){
        cout<<names[i]<<endl;
    }
    return 0;
}*/



//Fill function
/*
int main(){
    const int size = 12;
    string foods[size];
    fill(foods, foods+(size/2),"pizza");
    fill(foods+(size/2), foods+size, "sushi");

    for(string a: foods){
        cout<<a<<endl;
    }return 0;
}*/


//Sorting an array (bubble sort)

/*
void sortArray(int array[], int size){
    int temp;
    for(int i = 0; i< size - 1 ; i++){
        for( int j = 0; j < size - i - 1; j++){ //this does not check the sorted index 
                                                //imagine i = 1, then j will check from index 0-7 as j<10-1-1
                                                //even if the 7th index is larger than the 8th index, it will swap
                                                
            if (array[j]>array[j+1]){
                temp = array[j];
                array[j]=array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
int main(){

    int array[] = {10 , 8 , 4 , 5 , 7 , 6 , 1 , 9 , 2, 3 };
    int size = sizeof(array)/sizeof(array[0]);

    sortArray(array, size);
    for(int element : array){
        cout<<element<<' ';
    }
    return 0;
}*/



//Search for an index
/*

int searchArray(int values[], int size, int num){
    
    for (int i = 0; i < size; i++){
        if (values[i]==num){
            return i;
        }
    }return -1;
}

int main(){
    int values[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(values)/sizeof(values[0]);
    int index; //to show the index number
    int num; //user input of the element

    cout<<"Enter element to search for the index: ";
    cin>>num;

    index = searchArray( values, size, num);
    if(index!=-1){
        cout<<num<<" is at index "<< index<<".";
    }
    else {cout<<num<<" is not in the array!";}
    return 0;
}*/



//For each loop
/*
int main() {
    string name, reversed;
    cout << "Enter a string: ";
    getline(cin, name);

    for (char ch : name) {
        reversed = ch + reversed;
    }
    cout << "Reversed string: " << reversed << endl;
    return 0;
}*/



//Passing an array to a function
/*
double getTotal(double prices[], int size){
    double total;
    for (int i = 0; i <size; i++){
        total += prices[i];
    }
    return total;

}


int main(){
    double prices[] = {12.20, 336.55, 49.99, 12.99};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);

    cout<<"$ is: "<<total;

    
}*/