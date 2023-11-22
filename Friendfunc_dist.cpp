#include <iostream>
using namespace std;
class classB
class classA{

public:
    classA():numA(15) {}

private:
    int numA;
    friend int add(classA, classB)};

class classB
{
public:
    classB numB(49) {}
private:
    int numB;

friend int add(classA, classB)};

int add(classA objA, classB objB)
{
    return (objA.numA+objB.numB);
}
};
};

int main()
{
    classA a;
    classB b;

    cout<<"sum: "<<add(a,b);
    return 0;
}
