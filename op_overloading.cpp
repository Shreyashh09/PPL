#include <iostream>
using namespace std;

class Distance
{
    int feet, inch;

public:
    Distance(int f, int i)
    {
        feet = f;
        inch = i;
    }

    void printDistance()
    {
        cout << "Feet: " << feet << " Inches: " << inch << endl;
    }

    Distance operator++()
    {
        ++inch;
        if(inch>=12)
        {
            inch-=12;
            feet++;
        }
        return Distance(feet, inch);
    }

    Distance operator++(int)
    {
        inch++;
        if(inch>=12)
        {
            inch-=12;
            feet++;
        }
        return Distance(feet, inch);
    }

    Distance operator+(Distance d1)
    {
        Distance temp(0, 0);
        temp.feet = feet + d1.feet;
        temp.inch = inch + d1.inch;
        if (temp.inch >= 12)
        {
            temp.feet++;
            temp.inch -= 12;
        }
        return temp;
    }

    bool operator<(Distance d2)
    {
        int first = feet * 12 + inch;
        int second = d2.feet * 12 + d2.inch;
        return first < second;
    }
};

int main()
{
    int f1, f2, i1, i2, i;
    cout << "\nENTER 1st DISTANCE-> feet:";
    cin >> f1;
    cout << " inches:";
    cin >> i1;
    cout << "\nENTER 2nd DISTANCE-> feet:";
    cin >> f2;
    cout << " inches:";
    cin >> i2;

    Distance d1(f1, i1);
    Distance d2(f2, i2);
    Distance d3(0, 0);

    while (1)
    {
        cout << "\nEnter 1 to increment 1st distance by 1 inch(postfix)";
        cout << "\nEnter 2 to increment 2nd distance by 1 inch(postfix)";
        cout << "\nEnter 3 to increment 1st distance by 1 inch(prefix)";
        cout << "\nEnter 4 to increment 2nd distance by 1 inch(prefix)";
        cout << "\nEnter 5 to add the two distances";
        cout << "\nEnter 6 to compare first and second Distances";
        cout << "\nEnter 7 to show first distance";
        cout << "\nEnter 8 to show second distance";
        cout << "\nEnter 9 to exit\n"; 

        cin >> i;

        switch (i)
        {
        case 1:
            d1++;
            break;
        case 2:
            d2++;
            break;
        case 3:
            ++d1;
            break;
        case 4:
            ++d2;
            break;
        case 5:
            d3 = d1 + d2;
            cout << "\nTotal distance: ";
            d3.printDistance(); 
            break;
        case 6:
            if (d1 < d2)
            {
                cout << "\nSecond distance is larger";
            }
            else
            {
                cout << "\nFirst distance is larger";
            }
            break; 
        case 7:
            d1.printDistance();
            break; 
        case 8:
            d2.printDistance();
            break;
        case 9:
            return 0; 
        }
    }

    return 0;
}