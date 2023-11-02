#include <iostream>
#include <string>

using namespace std;

class details
{
public:
    string name;
    int yearOfJoining;
    double salary;
    string address;

    details(string n, int y, double s, string a)
    {
        name = n;
        yearOfJoining = y;
        salary = s;
        address = a;
    }

    void display()
    {
        cout << name << "\t" << yearOfJoining << "\t\t" << address << endl;
    }
};

int main()
{
    details employee1("Rahul", 2010, 50000.0, "64C- WallsStreat");
    details employee2("Samar", 2000, 60000.0, "68D- WallsStreat");
    details employee3("Ishita", 2018, 45000.0, "26B- WallsStreat");

    cout << "Name\tYear of joining\tAddress" << endl;
    employee1.display();
    employee2.display();
    employee3.display();

    return 0;
}
