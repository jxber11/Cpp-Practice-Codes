#include <iostream>
using namespace std;

int main() {
    string name, reversed;
    cout << "Enter a string: ";
    getline(cin, name);

    for (char ch : name) {
        reversed = ch + reversed;
    }
    cout << "Reversed string: " << reversed << endl;
    return 0;
}
