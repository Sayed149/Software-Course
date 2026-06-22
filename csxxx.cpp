#include <iostream>  // for input and output

using namespace std;

int main() {
    // print a message to the console
    cout << "Hello, World!" << endl;

    // declare some variables
    int a = 10;
    float b = 5.5;
    char c = 'A';

    // perform a simple calculation
    int sum = a + static_cast<int>(b);

    // display results
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "Sum = " << sum << endl;

    return 0;  // end of program
}
