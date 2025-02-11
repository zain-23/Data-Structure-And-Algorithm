#include <stack>
#include <iostream>

using namespace std;

int main()
{
    // Create a stack of strings called cars
    stack<string> car;
    // Add elements to the stack
    car.push("Volvo");
    car.push("BMW");
    car.push("Ford");
    car.push("Mazda");

    car.top() = "2 Ford"; // change the top element
    cout << car.top();    // access the top element
    return 0;
}