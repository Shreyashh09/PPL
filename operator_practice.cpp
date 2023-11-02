#include <iostream>
using namespace std;

class logic
{
    bool a;

public:
    logic(bool i)
    {
        a = i;
    }

    logic()
    {
        // Default constructor
    }

    logic operator!()
    {
        return logic(!a);
    }

    void print()
    {
        if (a)
            cout << "\ntrue";
        else
            cout << "\nfalse";
    }
};

int main()
{
    bool x;
    cout << "\nEnter 1 or 0: ";
    cin >> x;
    logic l1(x);
    logic l2 = !l1;
    cout << "\nNegated value: ";
    l2.print();

    return 0;
}
