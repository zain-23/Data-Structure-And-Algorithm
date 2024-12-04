#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Create a vector called cars that will store strings
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Print vector elements
    // cout << cars.at(0);
    cars.at(0) = "Ford";
    // cout << cars.at(0) << "\n";
    /*
    cout << cars.front() << endl;
    cout << cars.back();
    */
    // cout << cars.back();
    // If you want to add an element you can use push_back() this will add element at the end
    cars.push_back("Tesla");
    // cout << cars.size() << endl;

    // want to remove element
    cars.pop_back();
    // cout << cars.empty();

    // Loop throw a vector
    for (string car : cars)
    {
        cout << car << "\n";
    }
    return 0;
}