#include <iostream>
using namespace std;

class Facto {
public:
    // Static member function to calculate the factorial
    static unsigned long long factorial(int n)
    {
        if (n < 0)
            return 0;
        else if (n == 0)
            return 1;
        else
            {
            unsigned long long result = 1;
            for (int i = 1; i <= n; ++i)
            {
                result *= i;
            }

            return result;
        }
    }
};

int main() {
    int num = 10;
    unsigned long long fact = Facto::factorial(num);

    cout << "The factorial of " << num << " is" << fact << endl;

    return 0;
}
