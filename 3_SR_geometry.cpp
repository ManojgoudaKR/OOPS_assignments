#include <iostream>

using namespace std;

class Geometry {
private:
    double length;
    double width;
    double radius;

public:
    Geometry(double l, double w, double r) : length(l), width(w), radius(r) {}

    double CalculateAreaOfRectangle() const {
        return length * width;
    }

    double CalculatePerimeterOfRectangle() const {
        return 2 * (length + width);
    }

    double CalculateAreaOfCircle() const {
        return 3.14159265359 * radius * radius;
    }

    double CalculatePerimeterOfCircle() const {
        return 2 * 3.14159265359 * radius;
    }
};

int main() {
    double length, width, radius;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    Geometry geometry(length, width, radius);

    double amountPaid;
    cout << "Enter the amount paid (Rs. 200 required for formulas): ";
    cin >> amountPaid;

    if (amountPaid >= 200) {
        cout << "Area of Rectangle: " << geometry.CalculateAreaOfRectangle() << " (length x width)" << endl;
        cout << "Perimeter of Rectangle: " << geometry.CalculatePerimeterOfRectangle() << " (2 x (length + width))" << endl;
        cout << "Area of Circle: " << geometry.CalculateAreaOfCircle() << " (pi x radius^2)" << endl;
        cout << "Perimeter of Circle: " << geometry.CalculatePerimeterOfCircle() << " (2 x pi x radius)" << endl;
    } else {
        cout << "Area of Circle: " << geometry.CalculateAreaOfCircle() << endl;
        cout << "Perimeter of Circle: " << geometry.CalculatePerimeterOfCircle() << endl;
    }

    return 0;
}
