//overload -- when used as a perfix operator
#include <iostream>
using namespace std;
class Count {
public:
    int value;
    Count() : value(5) {}
    void operator--() {
        --value;
    }
    void display() {
        cout << "Count: " << value << endl;
    }
};
int main() {
    Count count1;
    --count1;
    count1.display();
    return 0;
}