#include <iostream>
using namespace std;

class Item {
private:
    string name;
    double price;
    double discount;

public:
    Item(string n, double p, double d) : name(n), price(p), discount(d) {}

    // Inline member function to calculate the final price after discount
    inline double calculateFinalPrice() {
        return price - (price * discount / 100);
    }

    void displayItemDetails() {
        cout << "Item: " << name << endl;
        cout << "Original Price: Rs" << price << endl;
        cout << "Discount: " << discount << "%" << endl;
        cout << "Final Price: Rs" << calculateFinalPrice() << endl;
    }
};

int main() {
    Item itm("socket", 80000, 10);

    cout << "Item Details:" << endl;
    itm.displayItemDetails();

    return 0;
}
