#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Const member function
    double calculateArea() const
    {

        return 3.1415 * radius * radius;
    }
};

int main() {
    const Circle myCircle(1); // Create a constant Circle object

    double area = myCircle.calculateArea(); // Access the const member function

    cout << "The area of the circle with radius "  << " is: " << area << endl;

    return 0;
}
