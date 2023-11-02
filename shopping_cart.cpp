#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
using namespace std;

class cart
{
    int availablecode[5] = {1, 2, 3, 4, 5};
    float availableprice[5] = {20, 30, 35, 25, 15};
    string availablename[5] = {"chips", "biscuits", "apple", "butter", "bread"};
    int code[100];
    int quantity[100];
    float price[100];
    string name[100];
    int total = 0, i = 0, n;

public:
    void displayavailable();
    void add();
    void deleteitem();
    void display();
};

void cart::add()
{
    int c, f = 0, z;
    cout << "enter item code: ";
    cin >> c;
    for (z = 0; z < 5; z++)
    {
        if (c == availablecode[z])
        {
            f++;
            break;
        }
    }
    if (f == 0)
    {
        cout << "\nitem not available";
    }
    else
    {
        code[i] = availablecode[z];
        name[z] = availablename[z];
        cout << "enter item quantity: ";
        cin >> quantity[i];
        price[i] = availableprice[z];
        total += price[i] * quantity[i];
        i++;
    }
}

void cart::deleteitem()
{
    int a, j, flag = 0;
    cout << "enter code of the item to be deleted:";
    cin >> a;
    for (j = 0; j < i; j++)
    {
        if (code[j] == a)
        {
            flag++;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "item not found on cart";
    }
    else
    {
        for (int k = j; k < i - 1; k++)
        {
            code[k] = code[k + 1];
            name[k] = name[k + 1];
            quantity[k] = quantity[k + 1];
            price[k] = price[k + 1];
        }
        i--;
    }
}

void cart::display()
{
    cout << "\nCART ITEMS:\n";
    for (int x = 0; x < i; x++)
    {
        cout << setw(10) << "code:" << code[x] << " "
             << setw(10) << "name:" << setw(10) << name[x] << " "
             << setw(15) << "price:" << price[x] << " "
             << setw(10) << "quantity:" << quantity[x] << " " << endl;
    }
    cout << "total amount to be paid: " << total << endl;
}

void cart::displayavailable()
{
    cout << "AVAILABLE ITEMS:\n";
    for (int z = 0; z < 5; z++)
    {
        cout << setw(10) << "code:" << availablecode[z] << " "
             << setw(10) << "name:" << setw(10) << availablename[z] << " "
             << setw(15) << "price:" << availableprice[z] << " " << endl;
    }
}

int main()
{
    cart l;
    int y;
    l.displayavailable();
    do
    {
        cout << "\nenter 1 to add item\nenter 2 to delete an item\nenter 3 to display the cart: ";
        cin >> y;
        switch (y)
        {
        case 1: 
            l.add();
            break;
        case 2:
            l.deleteitem();
            break;
        case 3:
            l.display();
            break;
        case 4:
            cout<<"Exiting Program";
        default:
            cout<<"Invalid Input";
            break;
        }
    }while(y!=4);
    return 0;
}
