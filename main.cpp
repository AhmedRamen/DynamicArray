#include <iostream>

//Write a function in C++ that dynamically allocates an array of integers, fills it with user input, then prints the sum of that array.

//bad practice to use
using namespace std;

int main()
{
    //Declare variables
    int number = 0;
    int i = 0;

    //Simple hack because theorically it isn't possible without using vectors
    int size = 5;

    int* arr = new int[size];

    //Input user's data
    while (i != size) {
        cout << "Index " << i + 1 << ": ";
        cin >> number;
        arr[i] = number;
        i++;
    }

    cout << "Array: ";

    //Calculate all numbers as were getting the sum (and print array as a bonus)
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
        sum += arr[i];
    }

    cout << endl;
    cout << "Sum: " << sum << endl;

    //Free memory
    delete arr;
    return 0;
}
