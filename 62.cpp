//overload ++ when used as a perfix operator
#include <iostream>

using namespace std;

class Count {
public:
    int value;

    // Constructor to initialize count to 5
    Count() : value(5) {}

    // Overload ++ when used as prefix
    void operator++() {
        ++value;
    }

    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Count count1;

    // Call the void operator ++ () function
    ++count1;
    count1.display();

    return 0;}